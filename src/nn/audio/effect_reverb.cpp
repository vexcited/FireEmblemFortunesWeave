#include <string.h>

#include "nn/audio/effect_api.hpp"
#include "nn/audio/effect_common.hpp"

namespace nn::audio {
namespace {

using Parameter = EffectInfoVersion2::ReverbParameter;

Parameter& GetParameter(const ReverbType* reverb) {
  return reverb->_pEffectInfo->parameter.reverb;
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

template<class Mix>
Result AddReverbImpl(AudioRendererConfig* config, ReverbType* reverb,
  void* buffer, size_t size, Mix* mix, int channelCountMax) {
  const Result result = detail::AddEffect(config, reverb, EffectType_Reverb,
    buffer, size, mix);
  if (result.value != 0) {
    return result;
  }

  detail::CheckResourceExclusion(reverb->_pEffectInfo);
  memset(&reverb->_pEffectInfo->parameter.reverb, 0, sizeof(Parameter));
  GetParameter(reverb).coloration = 0;
  GetParameter(reverb).decayTime = detail::ConvertToQ14(0.1f);
  GetParameter(reverb).earlyGain = 0;
  GetParameter(reverb).dryGain = detail::ConvertToQ14(1.0f);
  GetParameter(reverb).earlyMode = ReverbType::EarlyMode_NoEarlyReflection;
  GetParameter(reverb).lateMode = ReverbType::LateMode_Room;
  GetParameter(reverb).highFrequencyDecayRatio = detail::ConvertToQ14(0.1f);
  GetParameter(reverb).channelCountMax = channelCountMax;
  GetParameter(reverb).channelCount = channelCountMax;
  GetParameter(reverb).sampleRate = (mix->_pMixInfo->sampleRate / 1000) << 14;
  reverb->_pEffectInfo->isEnabled = true;
  mix->_pMixInfo->isDirty = true;
  return result;
}

}

size_t GetRequiredBufferSizeForReverb(int sampleRate, int channelCountMax) {
  const size_t size = ReverbGetRequiredDelayLineBufferSize(
    (sampleRate / 1000) << 14, channelCountMax);
  return (size + 63) & ~size_t{63};
}

Result AddReverb(AudioRendererConfig* config, ReverbType* reverb,
  void* buffer, size_t size, FinalMixType* mix, int channelCountMax) {
  return AddReverbImpl(config, reverb, buffer, size, mix, channelCountMax);
}

Result AddReverb(AudioRendererConfig* config, ReverbType* reverb,
  void* buffer, size_t size, SubMixType* mix, int channelCountMax) {
  return AddReverbImpl(config, reverb, buffer, size, mix, channelCountMax);
}

void* RemoveReverb(AudioRendererConfig* config, ReverbType* reverb,
  FinalMixType* mix) {
  return detail::RemoveEffect(config, reverb, mix);
}

void* RemoveReverb(AudioRendererConfig* config, ReverbType* reverb,
  SubMixType* mix) {
  return detail::RemoveEffect(config, reverb, mix);
}

int GetReverbChannelCountMax(const ReverbType* reverb) {
  return GetParameter(reverb).channelCountMax;
}

bool IsReverbRemovable(const ReverbType* reverb) {
  return detail::IsEffectRemovable(reverb->_pEffectInfo, EffectType_Reverb);
}

bool IsReverbEnabled(const ReverbType* reverb) {
  return reverb->_pEffectInfo->isEnabled;
}

void SetReverbEnabled(ReverbType* reverb, bool enabled) {
  detail::CheckResourceExclusion(reverb->_pEffectInfo);
  reverb->_pEffectInfo->isEnabled = enabled;
  GetParameter(reverb).parameterStatus = enabled
    ? detail::ParameterStatus_Initialized
    : detail::ParameterStatus_UpdateRequired;
}

void GetReverbInputOutput(const ReverbType* reverb, int8_t* input,
  int8_t* output, int* count, int countMax) {
  detail::GetEffectInputOutput(GetParameter(reverb), input, output, count,
    countMax);
}

void SetReverbInputOutput(ReverbType* reverb, const int8_t* input,
  const int8_t* output, int count) {
  detail::CheckResourceExclusion(reverb->_pEffectInfo);
  Parameter& parameter = GetParameter(reverb);
  parameter.parameterStatus = detail::ParameterStatus_Initialized;
  detail::SetEffectInputOutput(parameter, input, output, count);
}

#define REVERB_Q14_ACCESSORS(NAME, FIELD) \
  void SetReverb##NAME(ReverbType* reverb, float value) { \
    detail::CheckResourceExclusion(reverb->_pEffectInfo); \
    Parameter& parameter = GetParameter(reverb); \
    detail::RequestParameterUpdate(parameter); \
    parameter.FIELD = detail::ConvertToQ14(value); \
  } \
  \
  float GetReverb##NAME(const ReverbType* reverb) { \
    return detail::ConvertFromQ14(GetParameter(reverb).FIELD); \
  }

REVERB_Q14_ACCESSORS(ReverbGain, reverbGain)
REVERB_Q14_ACCESSORS(Coloration, coloration)
REVERB_Q14_ACCESSORS(EarlyGain, earlyGain)
REVERB_Q14_ACCESSORS(LateGain, lateGain)
REVERB_Q14_ACCESSORS(OutGain, outGain)
REVERB_Q14_ACCESSORS(DryGain, dryGain)
REVERB_Q14_ACCESSORS(HighFrequencyDecayRatio, highFrequencyDecayRatio)

#undef REVERB_Q14_ACCESSORS

void SetReverbPredelayTime(ReverbType* reverb, TimeSpan time) {
  detail::CheckResourceExclusion(reverb->_pEffectInfo);
  Parameter& parameter = GetParameter(reverb);
  detail::RequestParameterUpdate(parameter);
  parameter.predelayTime = detail::ConvertToQ14(
    static_cast<float>(detail::GetMicroSeconds(time)) / 1000.0f);
}

TimeSpan GetReverbPredelayTime(const ReverbType* reverb) {
  const float milliSeconds =
    detail::ConvertFromQ14(GetParameter(reverb).predelayTime);
  return detail::FromMicroSeconds(
    static_cast<int64_t>(milliSeconds * 1000.0f));
}

void SetReverbDecayTime(ReverbType* reverb, TimeSpan time) {
  detail::CheckResourceExclusion(reverb->_pEffectInfo);
  Parameter& parameter = GetParameter(reverb);
  detail::RequestParameterUpdate(parameter);
  parameter.decayTime = detail::ConvertToQ14(
    static_cast<float>(detail::GetMilliSeconds(time)) / 1000.0f);
}

TimeSpan GetReverbDecayTime(const ReverbType* reverb) {
  const float seconds = detail::ConvertFromQ14(GetParameter(reverb).decayTime);
  return detail::FromMilliSeconds(static_cast<int64_t>(seconds * 1000.0f));
}

void SetReverbEarlyMode(ReverbType* reverb, ReverbType::EarlyMode mode) {
  const uint32_t value = ConvertEarlyMode(mode);
  detail::CheckResourceExclusion(reverb->_pEffectInfo);
  Parameter& parameter = GetParameter(reverb);
  detail::RequestParameterUpdate(parameter);
  parameter.earlyMode = value;
}

ReverbType::EarlyMode GetReverbEarlyMode(const ReverbType* reverb) {
  return ConvertEarlyMode(GetParameter(reverb).earlyMode);
}

void SetReverbLateMode(ReverbType* reverb, ReverbType::LateMode mode) {
  const uint32_t value = ConvertLateMode(mode);
  detail::CheckResourceExclusion(reverb->_pEffectInfo);
  Parameter& parameter = GetParameter(reverb);
  detail::RequestParameterUpdate(parameter);
  parameter.lateMode = value;
}

ReverbType::LateMode GetReverbLateMode(const ReverbType* reverb) {
  return ConvertLateMode(GetParameter(reverb).lateMode);
}

void SetReverbParameters(ReverbType* reverb,
  const ReverbParameterSet* parameterSet) {
  Parameter& parameter = GetParameter(reverb);
  detail::RequestParameterUpdate(parameter);
  detail::CheckResourceExclusion(reverb->_pEffectInfo);
  parameter.earlyMode = ConvertEarlyMode(parameterSet->earlyMode);
  parameter.earlyGain = detail::ConvertToQ14(parameterSet->earlyGain);
  parameter.predelayTime =
    detail::ConvertToQ14(parameterSet->predelayTimeMilliSeconds);
  parameter.lateMode = ConvertLateMode(parameterSet->lateMode);
  parameter.lateGain = detail::ConvertToQ14(parameterSet->lateGain);
  parameter.decayTime = detail::ConvertToQ14(parameterSet->decayTimeSeconds);
  parameter.highFrequencyDecayRatio =
    detail::ConvertToQ14(parameterSet->highFreqDecayRatio);
  parameter.coloration = detail::ConvertToQ14(parameterSet->coloration);
  parameter.reverbGain = detail::ConvertToQ14(parameterSet->reverbGain);
  parameter.outGain = detail::ConvertToQ14(parameterSet->outGain);
  parameter.dryGain = detail::ConvertToQ14(parameterSet->dryGain);
}

ReverbParameterSet GetReverbParameters(const ReverbType* reverb) {
  const Parameter& parameter = GetParameter(reverb);
  ReverbParameterSet parameterSet;
  parameterSet.earlyMode = ConvertEarlyMode(parameter.earlyMode);
  parameterSet.earlyGain = detail::ConvertFromQ14(parameter.earlyGain);
  parameterSet.predelayTimeMilliSeconds =
    detail::ConvertFromQ14(parameter.predelayTime);
  parameterSet.lateMode = ConvertLateMode(parameter.lateMode);
  parameterSet.lateGain = detail::ConvertFromQ14(parameter.lateGain);
  parameterSet.decayTimeSeconds = detail::ConvertFromQ14(parameter.decayTime);
  parameterSet.highFreqDecayRatio =
    detail::ConvertFromQ14(parameter.highFrequencyDecayRatio);
  parameterSet.coloration = detail::ConvertFromQ14(parameter.coloration);
  parameterSet.reverbGain = detail::ConvertFromQ14(parameter.reverbGain);
  parameterSet.outGain = detail::ConvertFromQ14(parameter.outGain);
  parameterSet.dryGain = detail::ConvertFromQ14(parameter.dryGain);
  return parameterSet;
}

}
