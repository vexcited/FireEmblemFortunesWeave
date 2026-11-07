#include <math.h>
#include <string.h>

#include "nn/audio/audio_math.hpp"
#include "nn/audio/compressor.hpp"
#include "nn/audio/delay.hpp"
#include "nn/audio/effect_api.hpp"
#include "nn/audio/effect_common.hpp"
#include "nn/audio/i3dl2_reverb.hpp"
#include "nn/audio/light_limiter.hpp"
#include "nn/audio/limiter.hpp"
#include "nn/audio/reverb.hpp"

namespace nn::audio {

struct AuxI3dl2ReverbType {
  void* _pWorkBuffer;
  size_t _size;
};

struct AuxCompressorType {
  void* _pWorkBuffer;
  size_t _size;
};

struct AuxLimiterType {
  void* _pWorkBuffer;
  size_t _size;
};

struct LimiterParameterSet {
  TimeSpan attackTime;
  TimeSpan releaseTime;
  int threshold;
};

namespace {

using ReverbInfo = EffectInfoVersion2::ReverbParameter;
using DelayInfo = EffectInfoVersion2::DelayParameter;
using I3dl2ReverbInfo = EffectInfoVersion2::I3dl2ReverbParameter;
using CompressorInfo = EffectInfoVersion2::CompressorParameter;
using LightLimiterInfo = EffectInfoVersion2::LightLimiterParameter;

struct LimiterInfo {
  int8_t input[6];
  int8_t output[6];
  uint32_t sampleRate;
  int threshold;
  int delayLength;
  TimeSpan releaseTimeMax;
  TimeSpan attackTimeMax;
  TimeSpan releaseTime;
  TimeSpan attackTime;
  float attackExponential;
  float attackComplement;
  float releaseExponential;
  float releaseComplement;
  float attackPrediction;
  float releasePrediction;
  uint16_t channelCountMax;
  uint16_t channelCount;
  uint8_t parameterStatus;
};

static_assert(sizeof(LimiterInfo) == sizeof(LimiterParameter));

// Each work buffer starts with the shared parameter block.
constexpr size_t ReverbStateOffset = 68;
constexpr size_t ReverbBufferOffset = ReverbStateOffset + sizeof(ReverbState);
constexpr size_t DelayStateOffset = sizeof(DelayInfo);
constexpr size_t DelayBufferOffset = DelayStateOffset + sizeof(DelayState);
constexpr size_t I3dl2ReverbStateOffset = 76;
constexpr size_t I3dl2ReverbBufferOffset =
  I3dl2ReverbStateOffset + sizeof(I3dl2ReverbState);

template<class Info, class Aux>
Info& GetInfo(const Aux* aux) {
  return *static_cast<Info*>(aux->_pWorkBuffer);
}

template<class Info>
uint8_t* GetBuffer(Info& info, size_t offset) {
  return reinterpret_cast<uint8_t*>(&info) + offset;
}

template<class Info>
uint8_t* GetAlignedState(Info& info) {
  const uintptr_t address = reinterpret_cast<uintptr_t>(&info) + sizeof(Info);
  return reinterpret_cast<uint8_t*>((address + 63) & ~uintptr_t{63});
}

template<class Info>
void SetUpChannels(const Info& info, const int32_t** inputs,
  int32_t** outputs, int32_t* output, const int32_t* input,
  uint32_t sampleCount) {
  const int channelCount = static_cast<int16_t>(info.channelCount);
  for (int i = 0; i < channelCount; ++i) {
    inputs[i] = input + static_cast<size_t>(sampleCount) * info.input[i];
    outputs[i] = output + static_cast<size_t>(sampleCount) * info.output[i];
  }
}

template<class Info>
void SetAuxInputOutput(Info& info, const int8_t* input, const int8_t* output,
  int count) {
  info.parameterStatus = detail::ParameterStatus_Initialized;
  detail::SetEffectInputOutput(info, input, output, count);
}

float CalculateLimiterCoefficient(int microSeconds, int sampleRate) {
  if (microSeconds < 1) {
    return 1.0f;
  }
  const float seconds = static_cast<float>(microSeconds) / 1000.0f / 1000.0f;
  return 1.0f - detail::Exp(-1.0f / static_cast<float>(sampleRate) / seconds);
}

int CalculateLookAheadSampleCount(int64_t microSeconds, int sampleRate) {
  const float seconds = static_cast<float>(microSeconds) / 1000.0f / 1000.0f;
  const int sampleCount = static_cast<int>(seconds * sampleRate);
  return sampleCount > 1 ? sampleCount : 1;
}

float CalculateCompressorCoefficient(int microSeconds, int sampleRate) {
  return 1.0f - detail::Exp(-2200000.0f
    / (static_cast<float>(microSeconds) * static_cast<float>(sampleRate)));
}

ReverbType::EarlyMode ConvertEarlyMode(uint32_t mode) {
  switch (mode) {
    case ReverbType::EarlyMode_SmallRoom:
      return ReverbType::EarlyMode_SmallRoom;
    case ReverbType::EarlyMode_LargeRoom:
      return ReverbType::EarlyMode_LargeRoom;
    case ReverbType::EarlyMode_Hall:
      return ReverbType::EarlyMode_Hall;
    case ReverbType::EarlyMode_Cathedral:
      return ReverbType::EarlyMode_Cathedral;
    case ReverbType::EarlyMode_NoEarlyReflection:
      return ReverbType::EarlyMode_NoEarlyReflection;
    default:
      nn::detail::UnexpectedDefaultImpl();
  }
}

ReverbType::LateMode ConvertLateMode(uint32_t mode) {
  switch (mode) {
    case ReverbType::LateMode_Room:
      return ReverbType::LateMode_Room;
    case ReverbType::LateMode_Hall:
      return ReverbType::LateMode_Hall;
    case ReverbType::LateMode_MetalCorridor:
      return ReverbType::LateMode_MetalCorridor;
    case ReverbType::LateMode_Cathedral:
      return ReverbType::LateMode_Cathedral;
    case ReverbType::LateMode_MaximumDelay:
      return ReverbType::LateMode_MaximumDelay;
    default:
      nn::detail::UnexpectedDefaultImpl();
  }
}

}

size_t GetRequiredBufferSizeForAuxReverb(int sampleRate, int channelCount) {
  const size_t size = ReverbGetRequiredDelayLineBufferSize(
    (sampleRate / 1000) << 14, channelCount);
  return ((size + 63) & ~size_t{63}) + ReverbBufferOffset;
}

void InitializeAuxReverb(AuxReverbType* aux, void* buffer, size_t size,
  int sampleRate, int channelCount) {
  // The release build keeps this precondition query and ignores it.
  GetRequiredBufferSizeForReverb(sampleRate, channelCount);
  aux->_pWorkBuffer = buffer;
  aux->_size = size;
  ReverbInfo& info = GetInfo<ReverbInfo>(aux);
  memset(&info, 0, sizeof(info));
  info.channelCountMax = channelCount;
  info.channelCount = channelCount;
  info.parameterStatus = detail::ParameterStatus_Initialized;
  info.sampleRate = (sampleRate / 1000) << 14;
}

int GetAuxReverbChannelCountMax(const AuxReverbType* aux) {
  return GetInfo<ReverbInfo>(aux).channelCountMax;
}

void GetAuxReverbInputOutput(int8_t* input, int8_t* output, int* count,
  const AuxReverbType* aux, int countMax) {
  detail::GetEffectInputOutput(GetInfo<ReverbInfo>(aux), input, output,
    count, countMax);
}

void SetAuxReverbInputOutput(AuxReverbType* aux, const int8_t* input,
  const int8_t* output, int count) {
  SetAuxInputOutput(GetInfo<ReverbInfo>(aux), input, output, count);
}

void SetAuxReverbParameters(AuxReverbType* aux,
  const ReverbParameterSet* parameterSet) {
  ReverbInfo& info = GetInfo<ReverbInfo>(aux);
  detail::RequestParameterUpdate(info);
  info.earlyMode = ConvertEarlyMode(parameterSet->earlyMode);
  info.earlyGain = detail::ConvertToQ14(parameterSet->earlyGain);
  info.predelayTime =
    detail::ConvertToQ14(parameterSet->predelayTimeMilliSeconds);
  info.lateMode = ConvertLateMode(parameterSet->lateMode);
  info.lateGain = detail::ConvertToQ14(parameterSet->lateGain);
  info.decayTime = detail::ConvertToQ14(parameterSet->decayTimeSeconds);
  info.highFrequencyDecayRatio =
    detail::ConvertToQ14(parameterSet->highFreqDecayRatio);
  info.coloration = detail::ConvertToQ14(parameterSet->coloration);
  info.reverbGain = detail::ConvertToQ14(parameterSet->reverbGain);
  info.outGain = detail::ConvertToQ14(parameterSet->outGain);
  info.dryGain = detail::ConvertToQ14(parameterSet->dryGain);
}

ReverbParameterSet GetAuxReverbParameters(const AuxReverbType* aux) {
  const ReverbInfo& info = GetInfo<ReverbInfo>(aux);
  ReverbParameterSet parameterSet;
  parameterSet.earlyMode = ConvertEarlyMode(info.earlyMode);
  parameterSet.earlyGain = detail::ConvertFromQ14(info.earlyGain);
  parameterSet.predelayTimeMilliSeconds =
    detail::ConvertFromQ14(info.predelayTime);
  parameterSet.lateMode = ConvertLateMode(info.lateMode);
  parameterSet.lateGain = detail::ConvertFromQ14(info.lateGain);
  parameterSet.decayTimeSeconds = detail::ConvertFromQ14(info.decayTime);
  parameterSet.highFreqDecayRatio =
    detail::ConvertFromQ14(info.highFrequencyDecayRatio);
  parameterSet.coloration = detail::ConvertFromQ14(info.coloration);
  parameterSet.reverbGain = detail::ConvertFromQ14(info.reverbGain);
  parameterSet.outGain = detail::ConvertFromQ14(info.outGain);
  parameterSet.dryGain = detail::ConvertFromQ14(info.dryGain);
  return parameterSet;
}

void ResetAuxReverb(AuxReverbType* aux) {
  GetInfo<ReverbInfo>(aux).parameterStatus =
    detail::ParameterStatus_Initialized;
}

void ProcessAuxReverb(AuxReverbType* aux, int32_t* output,
  const int32_t* input, uint32_t sampleCount) {
  ReverbInfo& info = GetInfo<ReverbInfo>(aux);
  const int32_t* inputs[6] = {};
  int32_t* outputs[6] = {};
  SetUpChannels(info, inputs, outputs, output, input, sampleCount);

  const auto* parameter = reinterpret_cast<const ReverbParameter*>(&info);
  auto* state =
    reinterpret_cast<ReverbState*>(GetBuffer(info, ReverbStateOffset));
  if (info.parameterStatus == detail::ParameterStatus_Initialized) {
    InitializeReverbEffect(parameter, state,
      GetBuffer(info, ReverbBufferOffset), true);
    info.parameterStatus = detail::ParameterStatus_Updated;
  }
  else if (info.parameterStatus == detail::ParameterStatus_UpdateRequired) {
    UpdateReverbEffectParameter(parameter, state);
    info.parameterStatus = detail::ParameterStatus_Updated;
  }
  ApplyReverbEffect(parameter, state, true, inputs, outputs, sampleCount);
}

size_t GetRequiredBufferSizeForAuxDelay(TimeSpan delayTimeMax,
  int sampleRate, int channelCount) {
  const int64_t sampleCount = detail::GetMilliSeconds(delayTimeMax)
    * (channelCount * sampleRate) / 1000;
  return ((sizeof(int32_t) * sampleCount + 63) & ~size_t{63})
    + DelayBufferOffset;
}

void InitializeAuxDelay(AuxDelayType* aux, void* buffer, size_t size,
  TimeSpan delayTimeMax, int sampleRate, int channelCount) {
  aux->_pWorkBuffer = buffer;
  aux->_size = size;
  memset(buffer, 0, size);
  DelayInfo& info = *static_cast<DelayInfo*>(buffer);
  info.channelCount = channelCount;
  info.channelCountMax = channelCount;
  info.sampleRate = sampleRate << 14;
  info.delayTimeMax = detail::GetMilliSeconds(delayTimeMax);
}

int GetAuxDelayChannelCountMax(const AuxDelayType* aux) {
  return GetInfo<DelayInfo>(aux).channelCountMax;
}

void GetAuxDelayInputOutput(int8_t* input, int8_t* output, int* count,
  const AuxDelayType* aux, int countMax) {
  detail::GetEffectInputOutput(GetInfo<DelayInfo>(aux), input, output,
    count, countMax);
}

void SetAuxDelayInputOutput(AuxDelayType* aux, const int8_t* input,
  const int8_t* output, int count) {
  SetAuxInputOutput(GetInfo<DelayInfo>(aux), input, output, count);
}

DelayParameterSet GetAuxDelayParameters(const AuxDelayType* aux) {
  const DelayInfo& info = GetInfo<DelayInfo>(aux);
  DelayParameterSet parameterSet = {};
  parameterSet.delayTime = detail::FromMilliSeconds(info.delayTime);
  parameterSet.inGain = detail::ConvertFromQ14(info.inGain);
  parameterSet.feedbackGain = detail::ConvertFromQ14(info.feedbackGain);
  parameterSet.dryGain = detail::ConvertFromQ14(info.dryGain);
  parameterSet.channelSpread = detail::ConvertFromQ14(info.channelSpread);
  parameterSet.lowPassAmount = detail::ConvertFromQ14(info.lowPassAmount);
  return parameterSet;
}

void SetAuxDelayParameters(AuxDelayType* aux,
  const DelayParameterSet* parameterSet) {
  DelayInfo& info = GetInfo<DelayInfo>(aux);
  const auto* parameter = reinterpret_cast<const DelayParameter*>(&info);
  const int delayTime = detail::GetMilliSeconds(parameterSet->delayTime);
  if (info.delayTime != delayTime) {
    info.delayTime = delayTime;
    info.parameterStatus = detail::ParameterStatus_Initialized;
    InitializeDelayEffect(parameter,
      reinterpret_cast<DelayState*>(GetBuffer(info, DelayStateOffset)),
      GetBuffer(info, DelayBufferOffset));
  }
  info.inGain = detail::ConvertToQ14(parameterSet->inGain);
  info.feedbackGain = detail::ConvertToQ14(parameterSet->feedbackGain);
  info.outGain = detail::ConvertToQ14(1.0f);
  info.dryGain = detail::ConvertToQ14(parameterSet->dryGain);
  info.channelSpread = detail::ConvertToQ14(parameterSet->channelSpread);
  info.lowPassAmount = detail::ConvertToQ14(parameterSet->lowPassAmount);
  detail::RequestParameterUpdate(info);
  SetDelayEffectParameter(parameter,
    reinterpret_cast<DelayState*>(GetBuffer(info, DelayStateOffset)));
}

void ProcessAuxDelay(AuxDelayType* aux, int32_t* output, const int32_t* input,
  uint32_t sampleCount) {
  DelayInfo& info = GetInfo<DelayInfo>(aux);
  const int32_t* inputs[6] = {};
  int32_t* outputs[6] = {};
  SetUpChannels(info, inputs, outputs, output, input, sampleCount);
  ApplyDelayEffect(reinterpret_cast<const DelayParameter*>(&info),
    reinterpret_cast<DelayState*>(GetBuffer(info, DelayStateOffset)), true,
    inputs, outputs, sampleCount);
  if (info.parameterStatus < detail::ParameterStatus_Updated) {
    info.parameterStatus = detail::ParameterStatus_Updated;
  }
}

TimeSpan GetAuxDelayTimeMax(const AuxDelayType* aux) {
  return detail::FromMilliSeconds(GetInfo<DelayInfo>(aux).delayTimeMax);
}

void ResetAuxDelay(AuxDelayType* aux) {
  GetInfo<DelayInfo>(aux).parameterStatus =
    detail::ParameterStatus_Initialized;
}

size_t GetRequiredBufferSizeForAuxI3dl2Reverb(int sampleRate,
  int channelCount) {
  const size_t size =
    GetRequiredI3dl2ReverbEffectWorkBufferSize(sampleRate, channelCount);
  return ((size + 63) & ~size_t{63}) + I3dl2ReverbBufferOffset;
}

void InitializeAuxI3dl2Reverb(AuxI3dl2ReverbType* aux, void* buffer,
  size_t size, int sampleRate, int channelCount) {
  // The release build keeps this precondition query and ignores it.
  GetRequiredBufferSizeForI3dl2Reverb(sampleRate, channelCount);
  aux->_pWorkBuffer = buffer;
  aux->_size = size;
  I3dl2ReverbInfo& info = GetInfo<I3dl2ReverbInfo>(aux);
  memset(&info, 0, sizeof(info));
  info.channelCountMax = channelCount;
  info.channelCount = channelCount;
  info.sampleRate = sampleRate;
}

int GetAuxI3dl2ReverbChannelCountMax(const AuxI3dl2ReverbType* aux) {
  return GetInfo<I3dl2ReverbInfo>(aux).channelCountMax;
}

void SetAuxI3dl2ReverbInputOutput(AuxI3dl2ReverbType* aux,
  const int8_t* input, const int8_t* output, int count) {
  SetAuxInputOutput(GetInfo<I3dl2ReverbInfo>(aux), input, output, count);
}

void GetAuxI3dl2ReverbInputOutput(int8_t* input, int8_t* output, int* count,
  const AuxI3dl2ReverbType* aux, int countMax) {
  detail::GetEffectInputOutput(GetInfo<I3dl2ReverbInfo>(aux), input, output,
    count, countMax);
}

void SetAuxI3dl2ReverbParameters(AuxI3dl2ReverbType* aux,
  const I3dl2ReverbParameterSet* parameterSet) {
  I3dl2ReverbInfo& info = GetInfo<I3dl2ReverbInfo>(aux);
  detail::RequestParameterUpdate(info);
  info.roomHfGain = parameterSet->roomHfGain;
  info.hfReference = parameterSet->hfReference;
  info.lateReverbDecayTime = parameterSet->lateReverbDecayTime;
  info.lateReverbHfDecayRatio = parameterSet->lateReverbHfDecayRatio;
  info.roomGain = parameterSet->roomGain;
  info.reflectionsGain = parameterSet->reflectionsGain;
  info.reverbGain = parameterSet->reverbGain;
  info.lateReverbDiffusion = parameterSet->lateReverbDiffusion;
  info.reflectionDelayTime = parameterSet->reflectionDelayTime;
  info.lateReverbDelayTime = parameterSet->lateReverbDelayTime;
  info.lateReverbDensity = parameterSet->lateReverbDensity;
  info.dryGain = parameterSet->dryGain;
}

I3dl2ReverbParameterSet GetAuxI3dl2ReverbParameters(
  const AuxI3dl2ReverbType* aux) {
  const I3dl2ReverbInfo& info = GetInfo<I3dl2ReverbInfo>(aux);
  I3dl2ReverbParameterSet parameterSet;
  parameterSet.roomGain = info.roomGain;
  parameterSet.roomHfGain = info.roomHfGain;
  parameterSet.lateReverbDecayTime = info.lateReverbDecayTime;
  parameterSet.lateReverbHfDecayRatio = info.lateReverbHfDecayRatio;
  parameterSet.reflectionsGain = info.reflectionsGain;
  parameterSet.reflectionDelayTime = info.reflectionDelayTime;
  parameterSet.reverbGain = info.reverbGain;
  parameterSet.lateReverbDelayTime = info.lateReverbDelayTime;
  parameterSet.lateReverbDiffusion = info.lateReverbDiffusion;
  parameterSet.lateReverbDensity = info.lateReverbDensity;
  parameterSet.hfReference = info.hfReference;
  parameterSet.dryGain = info.dryGain;
  return parameterSet;
}

void ProcessAuxI3dl2Reverb(AuxI3dl2ReverbType* aux, int32_t* output,
  const int32_t* input, uint32_t sampleCount) {
  I3dl2ReverbInfo& info = GetInfo<I3dl2ReverbInfo>(aux);
  const int32_t* inputs[6] = {};
  int32_t* outputs[6] = {};
  SetUpChannels(info, inputs, outputs, output, input, sampleCount);

  const auto& parameter = reinterpret_cast<const I3dl2ReverbParameter&>(info);
  auto* state = reinterpret_cast<I3dl2ReverbState*>(
    GetBuffer(info, I3dl2ReverbStateOffset));
  if (info.parameterStatus == detail::ParameterStatus_Initialized) {
    InitializeI3dl2ReverbEffect(parameter, state,
      GetBuffer(info, I3dl2ReverbBufferOffset));
    info.parameterStatus = detail::ParameterStatus_Updated;
  }
  else if (info.parameterStatus == detail::ParameterStatus_UpdateRequired) {
    UpdateI3dl2ReverbEffectParameter(parameter, state, false);
    info.parameterStatus = detail::ParameterStatus_Updated;
  }
  ApplyI3dl2ReverbEffect(parameter, state, true, inputs, outputs,
    sampleCount);
}

void ResetAuxI3dl2Reverb(AuxI3dl2ReverbType* aux) {
  GetInfo<I3dl2ReverbInfo>(aux).parameterStatus =
    detail::ParameterStatus_Initialized;
}

size_t GetRequiredBufferSizeForAuxCompressor() {
  return sizeof(CompressorInfo) + sizeof(CompressorState) + 63;
}

void InitializeAuxCompressor(AuxCompressorType* aux, void* buffer,
  size_t size, int sampleRate, int channelCount) {
  aux->_pWorkBuffer = buffer;
  aux->_size = size;
  CompressorInfo& info = *static_cast<CompressorInfo*>(buffer);
  memset(&info, 0, sizeof(info));
  info.channelCountMax = channelCount;
  info.channelCount = channelCount;
  info.sampleRate = sampleRate;
  info.ratio = 1.0f;
  info.attackTime = 1;
  info.releaseTime = 1;
  info.gainSmoothingCoefficient = 1.0f
    - detail::Exp(-2.2f / (static_cast<float>(sampleRate) * 0.05f));
  const float exponent = -2200.0f / static_cast<float>(sampleRate);
  info.attackCoefficient = 1.0f - detail::Exp(exponent);
  info.releaseCoefficient = 1.0f - detail::Exp(exponent);
  info.isMakeupGainEnabled = false;
  info.outGain = 1.0f;
}

void SetAuxCompressorInputOutput(AuxCompressorType* aux, const int8_t* input,
  const int8_t* output, int count) {
  SetAuxInputOutput(GetInfo<CompressorInfo>(aux), input, output, count);
}

void GetAuxCompressorInputOutput(int8_t* input, int8_t* output, int* count,
  const AuxCompressorType* aux, int countMax) {
  detail::GetEffectInputOutput(GetInfo<CompressorInfo>(aux), input, output,
    count, countMax);
}

void SetAuxCompressorParameters(AuxCompressorType* aux,
  const CompressorParameterSet* parameterSet) {
  CompressorInfo& info = GetInfo<CompressorInfo>(aux);
  detail::RequestParameterUpdate(info);
  const int sampleRate = info.sampleRate;
  info.threshold = parameterSet->threshold;
  info.ratio = parameterSet->ratio;
  info.attackTime = detail::GetMicroSeconds(parameterSet->attackTime);
  info.attackCoefficient =
    CalculateCompressorCoefficient(info.attackTime, sampleRate);
  info.releaseTime = detail::GetMicroSeconds(parameterSet->releaseTime);
  info.releaseCoefficient =
    CalculateCompressorCoefficient(info.releaseTime, info.sampleRate);
  info.outGain = parameterSet->outGain;
  info.isMakeupGainEnabled = parameterSet->isMakeupGainEnabled;
}

CompressorParameterSet GetAuxCompressorParameters(
  const AuxCompressorType* aux) {
  const CompressorInfo& info = GetInfo<CompressorInfo>(aux);
  CompressorParameterSet parameterSet = {};
  parameterSet.threshold = info.threshold;
  parameterSet.ratio = info.ratio;
  parameterSet.attackTime = detail::FromMicroSeconds(info.attackTime);
  parameterSet.releaseTime = detail::FromMicroSeconds(info.releaseTime);
  parameterSet.outGain = info.outGain;
  parameterSet.isMakeupGainEnabled = info.isMakeupGainEnabled;
  return parameterSet;
}

int GetAuxCompressorChannelCountMax(const AuxCompressorType* aux) {
  return GetInfo<CompressorInfo>(aux).channelCountMax;
}

void ResetAuxCompressor(AuxCompressorType* aux) {
  GetInfo<CompressorInfo>(aux).parameterStatus =
    detail::ParameterStatus_Initialized;
}

void ProcessAuxCompressor(AuxCompressorType* aux, int32_t* output,
  const int32_t* input, uint32_t sampleCount) {
  CompressorInfo& info = GetInfo<CompressorInfo>(aux);
  const int32_t* inputs[6] = {};
  int32_t* outputs[6] = {};
  SetUpChannels(info, inputs, outputs, output, input, sampleCount);

  const auto* parameter = reinterpret_cast<const CompressorParameter*>(&info);
  auto* state = reinterpret_cast<CompressorState*>(GetAlignedState(info));
  if (info.parameterStatus == detail::ParameterStatus_UpdateRequired) {
    SetCompressorEffectParameter(parameter, state);
    info.parameterStatus = detail::ParameterStatus_Updated;
  }
  else if (info.parameterStatus == detail::ParameterStatus_Initialized) {
    InitializeCompressorEffect(parameter, state);
    info.parameterStatus = detail::ParameterStatus_Updated;
  }
  ApplyCompressorEffect(parameter, state, true, inputs, outputs, sampleCount,
    nullptr);
}

void InitializeAuxLightLimiter(AuxLightLimiterType* aux, void* buffer,
  size_t size, TimeSpan lookAheadTimeMax, int sampleRate, int channelCount) {
  aux->_pWorkBuffer = buffer;
  aux->_size = size;
  memset(buffer, 0, size);
  LightLimiterInfo& info = GetInfo<LightLimiterInfo>(aux);
  info.channelCountMax = channelCount;
  info.channelCount = channelCount;
  info.processingMode = LightLimiterType::ProcessingMode_Mode0;
  info.attackCoefficient = 1.0f;
  info.releaseCoefficient = 1.0f;
  info.sampleRate = sampleRate;
  info.lookAheadTimeMax = detail::GetMicroSeconds(lookAheadTimeMax);
  info.lookAheadSampleCount = 1;
  info.lookAheadSampleCountMax = CalculateLookAheadSampleCount(
    detail::GetMicroSeconds(lookAheadTimeMax), sampleRate);
  memset(GetAlignedState(GetInfo<LightLimiterInfo>(aux)), 0,
    sizeof(LightLimiterState));
}

size_t GetRequiredBufferSizeForAuxLightLimiter(TimeSpan lookAheadTimeMax,
  int sampleRate, int channelCount) {
  const int sampleCount = CalculateLookAheadSampleCount(
    detail::GetMicroSeconds(lookAheadTimeMax), sampleRate);
  const size_t size =
    (sizeof(float) * static_cast<unsigned>(sampleCount) + 20) * channelCount;
  return ((size + 63) & ~size_t{63}) + sizeof(LightLimiterInfo)
    + sizeof(LightLimiterState) + 63;
}

void ProcessAuxLightLimiter(AuxLightLimiterType* aux, int32_t* output,
  const int32_t* input, uint32_t sampleCount) {
  LightLimiterInfo& info = GetInfo<LightLimiterInfo>(aux);
  const int32_t* inputs[6] = {};
  int32_t* outputs[6] = {};
  SetUpChannels(info, inputs, outputs, output, input, sampleCount);

  const auto* parameter =
    reinterpret_cast<const LightLimiterParameter*>(&info);
  auto* state = reinterpret_cast<LightLimiterState*>(GetAlignedState(info));
  if (info.parameterStatus == detail::ParameterStatus_UpdateRequired) {
    UpdateLightLimiterEffectParameter(parameter, state);
    info.parameterStatus = detail::ParameterStatus_Updated;
  }
  else if (info.parameterStatus == detail::ParameterStatus_Initialized) {
    InitializeLightLimiterEffect(parameter, state,
      reinterpret_cast<uint8_t*>(state) + sizeof(LightLimiterState));
    info.parameterStatus = detail::ParameterStatus_Updated;
  }
  ApplyLightLimiterEffect(parameter, state, true, inputs, outputs,
    sampleCount, nullptr);
}

void SetAuxLightLimiterInputOutput(AuxLightLimiterType* aux,
  const int8_t* input, const int8_t* output, int count) {
  SetAuxInputOutput(GetInfo<LightLimiterInfo>(aux), input, output, count);
}

void GetAuxLightLimiterInputOutput(int8_t* input, int8_t* output,
  int* count, const AuxLightLimiterType* aux, int countMax) {
  detail::GetEffectInputOutput(GetInfo<LightLimiterInfo>(aux), input, output,
    count, countMax);
}

void SetAuxLightLimiterParameters(AuxLightLimiterType* aux,
  const LightLimiterParameterSet* parameterSet) {
  LightLimiterInfo& info = GetInfo<LightLimiterInfo>(aux);
  info.attackTime = detail::GetMicroSeconds(parameterSet->attackTime);
  info.attackCoefficient = CalculateLimiterCoefficient(
    detail::GetMicroSeconds(parameterSet->attackTime), info.sampleRate);
  info.releaseTime = detail::GetMicroSeconds(parameterSet->releaseTime);
  info.releaseCoefficient = CalculateLimiterCoefficient(
    detail::GetMicroSeconds(parameterSet->releaseTime), info.sampleRate);

  const int lookAheadTime =
    detail::GetMicroSeconds(parameterSet->lookAheadTime);
  if (info.lookAheadTime != lookAheadTime) {
    info.lookAheadTime = lookAheadTime;
    info.parameterStatus = detail::ParameterStatus_Initialized;
    info.lookAheadSampleCount =
      CalculateLookAheadSampleCount(lookAheadTime, info.sampleRate);
  }
  info.threshold = parameterSet->threshold;
  info.inputGain = parameterSet->inputGain;
  info.outputGain = parameterSet->outputGain;
  info.processingMode = parameterSet->processingMode;
}

LightLimiterParameterSet GetAuxLightLimiterParameters(
  const AuxLightLimiterType* aux) {
  const LightLimiterInfo& info = GetInfo<LightLimiterInfo>(aux);
  LightLimiterParameterSet parameterSet;
  parameterSet.attackTime = detail::FromMicroSeconds(info.attackTime);
  parameterSet.releaseTime = detail::FromMicroSeconds(info.releaseTime);
  parameterSet.lookAheadTime = detail::FromMicroSeconds(info.lookAheadTime);
  parameterSet.threshold = info.threshold;
  parameterSet.inputGain = info.inputGain;
  parameterSet.outputGain = info.outputGain;
  parameterSet.processingMode =
    static_cast<LightLimiterType::ProcessingMode>(info.processingMode);
  return parameterSet;
}

TimeSpan GetAuxLightLimiterLookAheadTimeMax(const AuxLightLimiterType* aux) {
  return detail::FromMicroSeconds(
    GetInfo<LightLimiterInfo>(aux).lookAheadTimeMax);
}

int GetAuxLightLimiterChannelCountMax(const AuxLightLimiterType* aux) {
  return GetInfo<LightLimiterInfo>(aux).channelCountMax;
}

void ResetAuxLightLimiter(AuxLightLimiterType* aux) {
  GetInfo<LightLimiterInfo>(aux).parameterStatus =
    detail::ParameterStatus_Initialized;
}

void SetAuxLimiterInputOutput(AuxLimiterType* aux, const int8_t* input,
  const int8_t* output, int count) {
  SetAuxInputOutput(GetInfo<LimiterInfo>(aux), input, output, count);
}

void GetAuxLimiterInputOutput(int8_t* input, int8_t* output, int* count,
  const AuxLimiterType* aux, int countMax) {
  detail::GetEffectInputOutput(GetInfo<LimiterInfo>(aux), input, output,
    count, countMax);
}

size_t GetRequiredBufferSizeForAuxLimiter(TimeSpan attackTimeMax,
  int sampleRate, int channelCount) {
  const float milliSeconds =
    static_cast<float>(detail::GetMicroSeconds(attackTimeMax)) / 1000.0f;
  int delayLength = static_cast<int>(
    ceilf(milliSeconds * static_cast<float>(sampleRate / 1000)));
  if (delayLength <= 1) {
    delayLength = 1;
  }
  return (sizeof(int32_t) * 3 * static_cast<unsigned>(delayLength)
    + sizeof(LimiterDelay) + sizeof(LimiterAverage) + 12) * channelCount
    + 16 * channelCount + sizeof(LimiterInfo) + sizeof(LimiterState);
}

void SetAuxLimiterParameters(AuxLimiterType* aux,
  const LimiterParameterSet* parameterSet) {
  LimiterInfo& info = GetInfo<LimiterInfo>(aux);
  const float sampleRate = static_cast<float>(info.sampleRate);
  detail::RequestParameterUpdate(info);
  info.threshold = parameterSet->threshold;
  const TimeSpan attackTime = parameterSet->attackTime;
  info.attackTime = attackTime;
  info.releaseTime = parameterSet->releaseTime;

  info.attackExponential = detail::Exp(-1.0f
    / (static_cast<float>(detail::GetMicroSeconds(attackTime)) / 1000000.0f
      * sampleRate));
  info.attackComplement = 1.0f - info.attackExponential;
  info.releaseExponential = detail::Exp(-1.0f
    / (static_cast<float>(detail::GetMicroSeconds(info.releaseTime))
      / 1000000.0f * static_cast<float>(info.sampleRate)));
  info.releaseComplement = 1.0f - info.releaseExponential;

  const TimeSpan releaseTime = parameterSet->releaseTime;
  info.attackPrediction = 0.0f;
  info.releasePrediction = 0.0f;
  const float sampleRateKhz = static_cast<float>(info.sampleRate / 1000);
  const int attackSampleCount = static_cast<int>(ceilf(
    static_cast<float>(detail::GetMicroSeconds(attackTime)) / 1000.0f
    * sampleRateKhz));
  const int delayLength = attackSampleCount <= 1 ? 1 : attackSampleCount;
  info.delayLength = delayLength;
  const int releaseSampleCount = static_cast<int>(ceilf(
    static_cast<float>(detail::GetMicroSeconds(releaseTime)) / 1000.0f
    * sampleRateKhz));

  const float attackRatio =
    (detail::Pow(10.0f, -2.0043218f / (delayLength + 1)) - 1.0f) + 1.0f;
  const float releaseBase =
    detail::Pow(10.0f, -2.0043218f / (releaseSampleCount + 1));
  for (int i = delayLength; i > 0; --i) {
    info.attackPrediction +=
      detail::Pow(attackRatio, static_cast<float>(i + 1));
  }
  if (releaseSampleCount > 0) {
    const float releaseRatio = (releaseBase - 1.0f) + 1.0f;
    for (int i = releaseSampleCount; i > 0; --i) {
      info.releasePrediction +=
        detail::Pow(releaseRatio, static_cast<float>(i + 1));
    }
  }
  detail::RequestParameterUpdate(info);
  info.attackPrediction =
    (1.0f / static_cast<float>(delayLength)) * info.attackPrediction;
  info.releasePrediction =
    (1.0f / static_cast<float>(releaseSampleCount)) * info.releasePrediction;
}

LimiterParameterSet GetAuxLimiterParameters(const AuxLimiterType* aux) {
  const LimiterInfo& info = GetInfo<LimiterInfo>(aux);
  LimiterParameterSet parameterSet = {};
  parameterSet.threshold = info.threshold;
  parameterSet.attackTime = info.attackTime;
  parameterSet.releaseTime = info.releaseTime;
  return parameterSet;
}

TimeSpan GetAuxLimiterAttackTimeMax(const AuxLimiterType* aux) {
  return GetInfo<LimiterInfo>(aux).attackTimeMax;
}

TimeSpan GetAuxLimiterReleaseTimeMax(const AuxLimiterType* aux) {
  return GetInfo<LimiterInfo>(aux).releaseTimeMax;
}

int GetAuxLimiterChannelCountMax(const AuxLimiterType* aux) {
  return GetInfo<LimiterInfo>(aux).channelCountMax;
}

void ResetAuxLimiter(AuxLimiterType* aux) {
  GetInfo<LimiterInfo>(aux).parameterStatus =
    detail::ParameterStatus_Initialized;
}

void InitializeAuxLimiter(AuxLimiterType* aux, void* buffer, size_t size,
  TimeSpan attackTimeMax, TimeSpan releaseTimeMax, int sampleRate,
  int channelCount) {
  aux->_pWorkBuffer = buffer;
  aux->_size = size;
  memset(buffer, 0, size);
  LimiterInfo& info = GetInfo<LimiterInfo>(aux);
  info.channelCount = channelCount;
  info.channelCountMax = channelCount;
  info.releaseTimeMax = releaseTimeMax;
  info.attackTimeMax = attackTimeMax;
  info.releaseTime = releaseTimeMax;
  info.attackTime = attackTimeMax;
  info.sampleRate = sampleRate;
  info.threshold = 0;
  memset(reinterpret_cast<uint8_t*>(aux->_pWorkBuffer) + sizeof(LimiterInfo),
    0, sizeof(LimiterState));
  const float milliSeconds =
    static_cast<float>(detail::GetMicroSeconds(attackTimeMax)) / 1000.0f;
  const int delayLength = static_cast<int>(
    ceilf(milliSeconds * static_cast<float>(sampleRate) / 1000.0f));
  info.delayLength = delayLength <= 1 ? 1 : delayLength;
}

void ProcessAuxLimiter(AuxLimiterType* aux, int32_t* output,
  const int32_t* input, uint32_t sampleCount) {
  LimiterInfo& info = GetInfo<LimiterInfo>(aux);
  const int32_t* inputs[6] = {};
  int32_t* outputs[6] = {};
  for (int i = 0; i < info.channelCount; ++i) {
    inputs[i] = input + sampleCount * info.input[i];
    outputs[i] = output + sampleCount * info.output[i];
  }

  auto* parameter = reinterpret_cast<LimiterParameter*>(&info);
  auto* state = reinterpret_cast<LimiterState*>(
    reinterpret_cast<uint8_t*>(&info) + sizeof(LimiterInfo));
  if (info.parameterStatus == detail::ParameterStatus_Initialized) {
    InitializeLimiterEffect(parameter, state, &info, aux->_size,
      info.threshold);
    info.parameterStatus = detail::ParameterStatus_Updated;
  }
  ApplyLimiterEffectSequential(parameter, state, inputs, outputs,
    sampleCount);
  if (info.parameterStatus <= detail::ParameterStatus_UpdateRequired) {
    info.parameterStatus = detail::ParameterStatus_Updated;
  }
}

}
