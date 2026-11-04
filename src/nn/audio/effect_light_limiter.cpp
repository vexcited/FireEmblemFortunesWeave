#include <string.h>

#include "nn/audio/audio_math.hpp"
#include "nn/audio/effect_api.hpp"
#include "nn/audio/effect_common.hpp"

namespace nn::audio {
namespace {

using Parameter = EffectInfoVersion2::LightLimiterParameter;

Parameter& GetParameter(const LightLimiterType* limiter) {
  return limiter->_pEffectInfo->parameter.lightLimiter;
}

float CalculateCoefficient(int microSeconds, int sampleRate) {
  if (microSeconds < 1) {
    return 1.0f;
  }
  const float seconds = static_cast<float>(microSeconds) / 1000.0f / 1000.0f;
  return 1.0f - detail::Exp(-1.0f / static_cast<float>(sampleRate) / seconds);
}

int CalculateLookAheadSampleCount(TimeSpan time, int sampleRate) {
  const float seconds =
    static_cast<float>(detail::GetMicroSeconds(time)) / 1000.0f / 1000.0f;
  const int sampleCount = static_cast<int>(seconds * sampleRate);
  return sampleCount > 1 ? sampleCount : 1;
}

template<class Mix>
Result AddLightLimiterImpl(AudioRendererConfig* config,
  LightLimiterType* limiter, void* buffer, size_t size, Mix* mix,
  TimeSpan lookAheadTimeMax, int channelCountMax) {
  const Result result = detail::AddEffect(config, limiter,
    EffectType_LightLimiter, buffer, size, mix);
  if (result.value != 0) {
    return result;
  }

  detail::CheckResourceExclusion(limiter->_pEffectInfo);
  memset(&limiter->_pEffectInfo->parameter.lightLimiter, 0,
    sizeof(Parameter));
  Parameter& parameter = GetParameter(limiter);
  parameter.sampleRate = mix->_pMixInfo->sampleRate;
  limiter->_pEffectInfo->isEnabled = true;
  parameter.channelCount = channelCountMax;
  parameter.channelCountMax = channelCountMax;
  parameter.processingMode = LightLimiterType::ProcessingMode_Mode0;
  parameter.isStatisticsEnabled = false;
  parameter.isStatisticsResetRequired = true;
  parameter.lookAheadTimeMax = detail::GetMicroSeconds(lookAheadTimeMax);
  parameter.lookAheadSampleCount = 1;
  parameter.lookAheadSampleCountMax =
    CalculateLookAheadSampleCount(lookAheadTimeMax, parameter.sampleRate);
  parameter.attackCoefficient = 1.0f;
  parameter.releaseCoefficient = 1.0f;

  auto& statistics = limiter->_pEffectInfo->resultState.lightLimiter;
  for (int i = 0; i < 6; ++i) {
    statistics.channelMaxSample[i] = 0.0f;
  }
  for (int i = 0; i < 6; ++i) {
    statistics.channelCompressionGainMin[i] = 1.0f;
  }
  mix->_pMixInfo->isDirty = true;
  return result;
}

}

size_t GetRequiredBufferSizeForLightLimiter(TimeSpan lookAheadTimeMax,
  int sampleRate, int channelCountMax) {
  const int sampleCount =
    CalculateLookAheadSampleCount(lookAheadTimeMax, sampleRate);
  const size_t size =
    (sizeof(float) * static_cast<unsigned>(sampleCount) + 20)
    * channelCountMax;
  return (size + 63) & ~size_t{63};
}

Result AddLightLimiter(AudioRendererConfig* config, LightLimiterType* limiter,
  void* buffer, size_t size, FinalMixType* mix, TimeSpan lookAheadTimeMax,
  int channelCountMax) {
  return AddLightLimiterImpl(config, limiter, buffer, size, mix,
    lookAheadTimeMax, channelCountMax);
}

Result AddLightLimiter(AudioRendererConfig* config, LightLimiterType* limiter,
  void* buffer, size_t size, SubMixType* mix, TimeSpan lookAheadTimeMax,
  int channelCountMax) {
  return AddLightLimiterImpl(config, limiter, buffer, size, mix,
    lookAheadTimeMax, channelCountMax);
}

void* RemoveLightLimiter(AudioRendererConfig* config,
  LightLimiterType* limiter, FinalMixType* mix) {
  return detail::RemoveEffect(config, limiter, mix);
}

void* RemoveLightLimiter(AudioRendererConfig* config,
  LightLimiterType* limiter, SubMixType* mix) {
  return detail::RemoveEffect(config, limiter, mix);
}

bool IsLightLimiterRemovable(const LightLimiterType* limiter) {
  return detail::IsEffectRemovable(limiter->_pEffectInfo,
    EffectType_LightLimiter);
}

bool IsLightLimiterEnabled(const LightLimiterType* limiter) {
  return limiter->_pEffectInfo->isEnabled;
}

void SetLightLimiterEnabled(LightLimiterType* limiter, bool enabled) {
  detail::CheckResourceExclusion(limiter->_pEffectInfo);
  limiter->_pEffectInfo->isEnabled = enabled;
  GetParameter(limiter).parameterStatus = enabled
    ? detail::ParameterStatus_Initialized
    : detail::ParameterStatus_UpdateRequired;
}

TimeSpan GetLightLimiterLookAheadTimeMax(const LightLimiterType* limiter) {
  return detail::FromMicroSeconds(GetParameter(limiter).lookAheadTimeMax);
}

int GetLightLimiterChannelCountMax(const LightLimiterType* limiter) {
  return GetParameter(limiter).channelCountMax;
}

void GetLightLimiterInputOutput(const LightLimiterType* limiter,
  int8_t* input, int8_t* output, int* count, int countMax) {
  detail::CheckResourceExclusion(limiter->_pEffectInfo);
  detail::GetEffectInputOutput(GetParameter(limiter), input, output, count,
    countMax);
}

void SetLightLimiterInputOutput(LightLimiterType* limiter,
  const int8_t* input, const int8_t* output, int count) {
  detail::CheckResourceExclusion(limiter->_pEffectInfo);
  Parameter& parameter = GetParameter(limiter);
  parameter.parameterStatus = detail::ParameterStatus_Initialized;
  detail::SetEffectInputOutput(parameter, input, output, count);
}

TimeSpan GetLightLimiterAttackTime(const LightLimiterType* limiter) {
  return detail::FromMicroSeconds(GetParameter(limiter).attackTime);
}

void SetLightLimiterAttackTime(LightLimiterType* limiter, TimeSpan time) {
  detail::CheckResourceExclusion(limiter->_pEffectInfo);
  Parameter& parameter = GetParameter(limiter);
  parameter.attackTime = detail::GetMicroSeconds(time);
  parameter.attackCoefficient =
    CalculateCoefficient(parameter.attackTime, parameter.sampleRate);
}

TimeSpan GetLightLimiterReleaseTime(const LightLimiterType* limiter) {
  return detail::FromMicroSeconds(GetParameter(limiter).releaseTime);
}

void SetLightLimiterReleaseTime(LightLimiterType* limiter, TimeSpan time) {
  detail::CheckResourceExclusion(limiter->_pEffectInfo);
  Parameter& parameter = GetParameter(limiter);
  parameter.releaseTime = detail::GetMicroSeconds(time);
  parameter.releaseCoefficient =
    CalculateCoefficient(parameter.releaseTime, parameter.sampleRate);
}

TimeSpan GetLightLimiterLookAheadTime(const LightLimiterType* limiter) {
  return detail::FromMicroSeconds(GetParameter(limiter).lookAheadTime);
}

void SetLightLimiterLookAheadTime(LightLimiterType* limiter, TimeSpan time) {
  detail::CheckResourceExclusion(limiter->_pEffectInfo);
  Parameter& parameter = GetParameter(limiter);
  const int sampleRate = parameter.sampleRate;
  parameter.parameterStatus = detail::ParameterStatus_Initialized;
  parameter.lookAheadTime = detail::GetMicroSeconds(time);
  parameter.lookAheadSampleCount =
    CalculateLookAheadSampleCount(time, sampleRate);
}

#define LIGHT_LIMITER_ACCESSORS(NAME, FIELD) \
  float GetLightLimiter##NAME(const LightLimiterType* limiter) { \
    return GetParameter(limiter).FIELD; \
  } \
  \
  void SetLightLimiter##NAME(LightLimiterType* limiter, float value) { \
    detail::CheckResourceExclusion(limiter->_pEffectInfo); \
    GetParameter(limiter).FIELD = value; \
  }

LIGHT_LIMITER_ACCESSORS(Threshold, threshold)
LIGHT_LIMITER_ACCESSORS(InputGain, inputGain)
LIGHT_LIMITER_ACCESSORS(OutputGain, outputGain)

#undef LIGHT_LIMITER_ACCESSORS

LightLimiterType::ProcessingMode GetLightLimiterProcessingMode(
  const LightLimiterType* limiter) {
  return static_cast<LightLimiterType::ProcessingMode>(
    GetParameter(limiter).processingMode);
}

void SetLightLimiterProcessingMode(LightLimiterType* limiter,
  LightLimiterType::ProcessingMode mode) {
  detail::CheckResourceExclusion(limiter->_pEffectInfo);
  GetParameter(limiter).processingMode = mode;
}

LightLimiterParameterSet GetLightLimiterParameters(
  const LightLimiterType* limiter) {
  const Parameter& parameter = GetParameter(limiter);
  LightLimiterParameterSet parameterSet;
  parameterSet.attackTime = detail::FromMicroSeconds(parameter.attackTime);
  parameterSet.releaseTime = detail::FromMicroSeconds(parameter.releaseTime);
  parameterSet.lookAheadTime =
    detail::FromMicroSeconds(parameter.lookAheadTime);
  parameterSet.threshold = parameter.threshold;
  parameterSet.inputGain = parameter.inputGain;
  parameterSet.outputGain = parameter.outputGain;
  parameterSet.processingMode =
    static_cast<LightLimiterType::ProcessingMode>(parameter.processingMode);
  return parameterSet;
}

void SetLightLimiterParameters(LightLimiterType* limiter,
  const LightLimiterParameterSet* parameterSet) {
  Parameter& parameter = GetParameter(limiter);
  parameter.attackTime = detail::GetMicroSeconds(parameterSet->attackTime);
  parameter.attackCoefficient = CalculateCoefficient(
    detail::GetMicroSeconds(parameterSet->attackTime), parameter.sampleRate);
  parameter.releaseTime = detail::GetMicroSeconds(parameterSet->releaseTime);
  parameter.releaseCoefficient = CalculateCoefficient(
    detail::GetMicroSeconds(parameterSet->releaseTime), parameter.sampleRate);

  const int lookAheadTime =
    detail::GetMicroSeconds(parameterSet->lookAheadTime);
  if (parameter.lookAheadTime != lookAheadTime) {
    parameter.lookAheadTime = lookAheadTime;
    parameter.parameterStatus = detail::ParameterStatus_Initialized;
    parameter.lookAheadSampleCount = CalculateLookAheadSampleCount(
      parameterSet->lookAheadTime, parameter.sampleRate);
  }
  parameter.threshold = parameterSet->threshold;
  parameter.inputGain = parameterSet->inputGain;
  parameter.outputGain = parameterSet->outputGain;
  parameter.processingMode = parameterSet->processingMode;
}

bool IsLightLimiterStatisticsEnabled(const LightLimiterType* limiter) {
  return GetParameter(limiter).isStatisticsEnabled;
}

void SetLightLimiterStatisticsEnabled(LightLimiterType* limiter,
  bool enabled) {
  GetParameter(limiter).isStatisticsEnabled = enabled;
}

void GetLightLimiterChannelStatistics(
  LightLimiterChannelStatistics* channelStatistics,
  const LightLimiterType* limiter, int channel) {
  const auto& statistics = limiter->_pEffectInfo->resultState.lightLimiter;
  channelStatistics->compressionGainMin =
    statistics.channelCompressionGainMin[channel];
  channelStatistics->maxSample = statistics.channelMaxSample[channel];
}

void ResetLightLimiterStatistics(LightLimiterType* limiter) {
  GetParameter(limiter).isStatisticsResetRequired = true;
  for (int i = 0; i < GetParameter(limiter).channelCountMax; ++i) {
    auto& statistics = limiter->_pEffectInfo->resultState.lightLimiter;
    statistics.channelMaxSample[i] = 0.0f;
    statistics.channelCompressionGainMin[i] = 1.0f;
  }
}

}
