#include <string.h>

#include <algorithm>

#include "nn/audio/audio_math.hpp"
#include "nn/audio/effect_api.hpp"
#include "nn/audio/effect_common.hpp"

namespace nn::audio {
namespace {

using Parameter = EffectInfoVersion2::CompressorParameter;

Parameter& GetParameter(const CompressorType* compressor) {
  return compressor->_pEffectInfo->parameter.compressor;
}

float CalculateCoefficient(int microSeconds, int sampleRate) {
  return 1.0f - detail::Exp(-2200000.0f
    / (static_cast<float>(microSeconds) * static_cast<float>(sampleRate)));
}

void ResetStatistics(EffectInfoVersion2* info) {
  auto& statistics = info->resultState.compressor;
  statistics.reserved = 0.0f;
  statistics.compressionGainMin = 1.0f;
  for (int i = 0; i < 6; ++i) {
    statistics.channelMaxMean[i] = 0.0f;
  }
}

template<class Mix>
Result AddCompressorImpl(AudioRendererConfig* config,
  CompressorType* compressor, Mix* mix, int channelCountMax) {
  const Result result = detail::AddEffect(config, compressor,
    EffectType_Compressor, nullptr, 0, mix);
  if (result.value != 0) {
    return result;
  }

  detail::CheckResourceExclusion(compressor->_pEffectInfo);
  const int sampleRate = mix->_pMixInfo->sampleRate;
  memset(&compressor->_pEffectInfo->parameter.compressor, 0,
    sizeof(Parameter));
  GetParameter(compressor).sampleRate = sampleRate;
  GetParameter(compressor).channelCountMax = channelCountMax;
  GetParameter(compressor).channelCount = channelCountMax;
  GetParameter(compressor).threshold = 0.0f;
  GetParameter(compressor).ratio = 1.0f;
  GetParameter(compressor).attackTime = 1;
  GetParameter(compressor).releaseTime = 1;
  GetParameter(compressor).gainSmoothingCoefficient =
    1.0f - detail::Exp(-2.2f / (static_cast<float>(sampleRate) * 0.05f));
  const float exponent = -2200.0f / static_cast<float>(sampleRate);
  GetParameter(compressor).attackCoefficient = 1.0f - detail::Exp(exponent);
  GetParameter(compressor).releaseCoefficient = 1.0f - detail::Exp(exponent);
  GetParameter(compressor).outGain = 1.0f;
  GetParameter(compressor).isMakeupGainEnabled = false;
  GetParameter(compressor).isStatisticsEnabled = false;
  GetParameter(compressor).isStatisticsResetRequired = true;
  compressor->_pEffectInfo->isEnabled = true;
  ResetStatistics(compressor->_pEffectInfo);
  mix->_pMixInfo->isDirty = true;
  return Result{0};
}

}

Result AddCompressor(AudioRendererConfig* config, CompressorType* compressor,
  FinalMixType* mix, int channelCountMax) {
  return AddCompressorImpl(config, compressor, mix, channelCountMax);
}

Result AddCompressor(AudioRendererConfig* config, CompressorType* compressor,
  SubMixType* mix, int channelCountMax) {
  return AddCompressorImpl(config, compressor, mix, channelCountMax);
}

void* RemoveCompressor(AudioRendererConfig* config,
  CompressorType* compressor, FinalMixType* mix) {
  return detail::RemoveEffect(config, compressor, mix);
}

void* RemoveCompressor(AudioRendererConfig* config,
  CompressorType* compressor, SubMixType* mix) {
  return detail::RemoveEffect(config, compressor, mix);
}

void GetCompressorInputOutput(const CompressorType* compressor,
  int8_t* input, int8_t* output, int* count, int countMax) {
  detail::CheckResourceExclusion(compressor->_pEffectInfo);
  detail::GetEffectInputOutput(GetParameter(compressor), input, output,
    count, countMax);
}

void SetCompressorInputOutput(CompressorType* compressor,
  const int8_t* input, const int8_t* output, int count) {
  detail::CheckResourceExclusion(compressor->_pEffectInfo);
  Parameter& parameter = GetParameter(compressor);
  // The count is clamped to the mix buffer limit, not to the six slots.
  const uint16_t channelCount = std::min(count, 24);
  int8_t* inputs = parameter.input;
  int8_t* outputs = parameter.output;
  for (int i = 0; i < channelCount; ++i) {
    inputs[i] = input[i];
    outputs[i] = output[i];
  }
  parameter.channelCount = channelCount;
}

int GetCompressorChannelCountMax(const CompressorType* compressor) {
  return GetParameter(compressor).channelCountMax;
}

#define COMPRESSOR_ACCESSORS(NAME, FIELD) \
  float GetCompressor##NAME(const CompressorType* compressor) { \
    return GetParameter(compressor).FIELD; \
  } \
  \
  void SetCompressor##NAME(CompressorType* compressor, float value) { \
    detail::CheckResourceExclusion(compressor->_pEffectInfo); \
    Parameter& parameter = GetParameter(compressor); \
    detail::RequestParameterUpdate(parameter); \
    parameter.FIELD = value; \
  }

COMPRESSOR_ACCESSORS(Threshold, threshold)
COMPRESSOR_ACCESSORS(Ratio, ratio)
COMPRESSOR_ACCESSORS(OutGain, outGain)

#undef COMPRESSOR_ACCESSORS

TimeSpan GetCompressorAttackTime(const CompressorType* compressor) {
  return detail::FromMicroSeconds(GetParameter(compressor).attackTime);
}

void SetCompressorAttackTime(CompressorType* compressor, TimeSpan time) {
  const int microSeconds = detail::GetMicroSeconds(time);
  GetParameter(compressor).attackCoefficient = 1.0f - detail::Exp(-2200000.0f
    / (static_cast<float>(microSeconds)
      * static_cast<float>(GetParameter(compressor).sampleRate)));
  detail::CheckResourceExclusion(compressor->_pEffectInfo);
  Parameter& parameter = GetParameter(compressor);
  detail::RequestParameterUpdate(parameter);
  parameter.attackTime = microSeconds;
}

TimeSpan GetCompressorReleaseTime(const CompressorType* compressor) {
  return detail::FromMicroSeconds(GetParameter(compressor).releaseTime);
}

void SetCompressorReleaseTime(CompressorType* compressor, TimeSpan time) {
  const int microSeconds = detail::GetMicroSeconds(time);
  GetParameter(compressor).releaseCoefficient = 1.0f - detail::Exp(-2200000.0f
    / (static_cast<float>(microSeconds)
      * static_cast<float>(GetParameter(compressor).sampleRate)));
  detail::CheckResourceExclusion(compressor->_pEffectInfo);
  Parameter& parameter = GetParameter(compressor);
  detail::RequestParameterUpdate(parameter);
  parameter.releaseTime = microSeconds;
}

bool IsCompressorMakeupGainEnabled(const CompressorType* compressor) {
  return GetParameter(compressor).isMakeupGainEnabled;
}

void SetCompressorMakeupGainEnabled(CompressorType* compressor,
  bool enabled) {
  detail::CheckResourceExclusion(compressor->_pEffectInfo);
  Parameter& parameter = GetParameter(compressor);
  detail::RequestParameterUpdate(parameter);
  parameter.isMakeupGainEnabled = enabled;
}

bool IsCompressorEnabled(const CompressorType* compressor) {
  return compressor->_pEffectInfo->isEnabled;
}

void SetCompressorEnabled(CompressorType* compressor, bool enabled) {
  detail::CheckResourceExclusion(compressor->_pEffectInfo);
  compressor->_pEffectInfo->isEnabled = enabled;
  GetParameter(compressor).parameterStatus = enabled
    ? detail::ParameterStatus_Initialized
    : detail::ParameterStatus_UpdateRequired;
}

bool IsCompressorRemovable(const CompressorType* compressor) {
  detail::CheckResourceExclusion(compressor->_pEffectInfo);
  return detail::IsEffectRemovable(compressor->_pEffectInfo,
    EffectType_Compressor);
}

CompressorParameterSet GetCompressorParameters(
  const CompressorType* compressor) {
  const Parameter& parameter = GetParameter(compressor);
  CompressorParameterSet parameterSet = {};
  parameterSet.threshold = parameter.threshold;
  parameterSet.ratio = parameter.ratio;
  parameterSet.attackTime = detail::FromMicroSeconds(parameter.attackTime);
  parameterSet.releaseTime = detail::FromMicroSeconds(parameter.releaseTime);
  parameterSet.outGain = parameter.outGain;
  parameterSet.isMakeupGainEnabled = parameter.isMakeupGainEnabled;
  return parameterSet;
}

void SetCompressorParameters(CompressorType* compressor,
  const CompressorParameterSet* parameterSet) {
  SetCompressorThreshold(compressor, parameterSet->threshold);
  SetCompressorRatio(compressor, parameterSet->ratio);

  const int attackTime = detail::GetMicroSeconds(parameterSet->attackTime);
  detail::CheckResourceExclusion(compressor->_pEffectInfo);
  detail::RequestParameterUpdate(GetParameter(compressor));
  GetParameter(compressor).attackTime = attackTime;
  GetParameter(compressor).attackCoefficient = CalculateCoefficient(
    attackTime, GetParameter(compressor).sampleRate);

  const int releaseTime =
    detail::GetMicroSeconds(parameterSet->releaseTime);
  detail::CheckResourceExclusion(compressor->_pEffectInfo);
  detail::RequestParameterUpdate(GetParameter(compressor));
  GetParameter(compressor).releaseTime = releaseTime;
  GetParameter(compressor).releaseCoefficient = CalculateCoefficient(
    releaseTime, GetParameter(compressor).sampleRate);

  SetCompressorOutGain(compressor, parameterSet->outGain);
  SetCompressorMakeupGainEnabled(compressor,
    parameterSet->isMakeupGainEnabled);
  GetParameter(compressor).parameterStatus =
    detail::ParameterStatus_Initialized;
}

bool IsCompressorStatisticsEnabled(const CompressorType* compressor) {
  return GetParameter(compressor).isStatisticsEnabled;
}

void SetCompressorStatisticsEnabled(CompressorType* compressor,
  bool enabled) {
  GetParameter(compressor).isStatisticsEnabled = enabled;
}

void GetCompressorChannelStatistics(
  CompressorChannelStatistics* channelStatistics,
  const CompressorType* compressor, int channel) {
  const auto& statistics = compressor->_pEffectInfo->resultState.compressor;
  float maxMean = detail::Log10(statistics.channelMaxMean[channel]) * 20.0f;
  if (maxMean < -96.0f) {
    maxMean = -96.0f;
  }
  channelStatistics->maxMean = maxMean;
  channelStatistics->compressionGainMin =
    detail::Log10(statistics.compressionGainMin) * 20.0f;
}

void ResetCompressorStatistics(CompressorType* compressor) {
  GetParameter(compressor).isStatisticsResetRequired = true;
  ResetStatistics(compressor->_pEffectInfo);
}

}
