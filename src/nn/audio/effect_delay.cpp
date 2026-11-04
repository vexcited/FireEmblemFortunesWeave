#include <string.h>

#include "nn/audio/effect_api.hpp"
#include "nn/audio/effect_common.hpp"

namespace nn::audio {
namespace {

using Parameter = EffectInfoVersion2::DelayParameter;

Parameter& GetParameter(const DelayType* delay) {
  return delay->_pEffectInfo->parameter.delay;
}

template<class Mix>
Result AddDelayImpl(AudioRendererConfig* config, DelayType* delay,
  void* buffer, size_t size, Mix* mix, TimeSpan delayTimeMax,
  int channelCountMax) {
  const Result result = detail::AddEffect(config, delay, EffectType_Delay,
    buffer, size, mix);
  if (result.value != 0) {
    return result;
  }

  detail::CheckResourceExclusion(delay->_pEffectInfo);
  memset(&delay->_pEffectInfo->parameter.delay, 0, sizeof(Parameter));
  GetParameter(delay).delayTimeMax = detail::GetMilliSeconds(delayTimeMax);
  GetParameter(delay).channelCountMax = channelCountMax;
  GetParameter(delay).channelCount = channelCountMax;
  GetParameter(delay).delayTime = 0;
  GetParameter(delay).inGain = 0;
  GetParameter(delay).feedbackGain = 0;
  GetParameter(delay).outGain = detail::ConvertToQ14(1.0f);
  GetParameter(delay).dryGain = detail::ConvertToQ14(1.0f);
  GetParameter(delay).channelSpread = 0;
  GetParameter(delay).lowPassAmount = 0;
  GetParameter(delay).sampleRate = mix->_pMixInfo->sampleRate << 14;
  delay->_pEffectInfo->isEnabled = true;
  mix->_pMixInfo->isDirty = true;
  return result;
}

}

size_t GetRequiredBufferSizeForDelay(TimeSpan delayTimeMax, int sampleRate,
  int channelCountMax) {
  const int64_t sampleCount = detail::GetMilliSeconds(delayTimeMax)
    * (channelCountMax * sampleRate) / 1000;
  return (sizeof(int32_t) * sampleCount + 63) & ~size_t{63};
}

Result AddDelay(AudioRendererConfig* config, DelayType* delay, void* buffer,
  size_t size, FinalMixType* mix, TimeSpan delayTimeMax,
  int channelCountMax) {
  return AddDelayImpl(config, delay, buffer, size, mix, delayTimeMax,
    channelCountMax);
}

Result AddDelay(AudioRendererConfig* config, DelayType* delay, void* buffer,
  size_t size, SubMixType* mix, TimeSpan delayTimeMax, int channelCountMax) {
  return AddDelayImpl(config, delay, buffer, size, mix, delayTimeMax,
    channelCountMax);
}

void* RemoveDelay(AudioRendererConfig* config, DelayType* delay,
  FinalMixType* mix) {
  return detail::RemoveEffect(config, delay, mix);
}

void* RemoveDelay(AudioRendererConfig* config, DelayType* delay,
  SubMixType* mix) {
  return detail::RemoveEffect(config, delay, mix);
}

bool IsDelayRemovable(const DelayType* delay) {
  detail::CheckResourceExclusion(delay->_pEffectInfo);
  return detail::IsEffectRemovable(delay->_pEffectInfo, EffectType_Delay);
}

bool IsDelayEnabled(const DelayType* delay) {
  return delay->_pEffectInfo->isEnabled;
}

void SetDelayEnabled(DelayType* delay, bool enabled) {
  detail::CheckResourceExclusion(delay->_pEffectInfo);
  EffectInfoVersion2* info = delay->_pEffectInfo;
  info->isEnabled = enabled;
  info->parameter.delay.parameterStatus = enabled
    ? detail::ParameterStatus_Initialized
    : detail::ParameterStatus_UpdateRequired;
}

void GetDelayInputOutput(const DelayType* delay, int8_t* input,
  int8_t* output, int* count, int countMax) {
  detail::CheckResourceExclusion(delay->_pEffectInfo);
  detail::GetEffectInputOutput(GetParameter(delay), input, output, count,
    countMax);
}

void SetDelayInputOutput(DelayType* delay, const int8_t* input,
  const int8_t* output, int count) {
  detail::CheckResourceExclusion(delay->_pEffectInfo);
  Parameter& parameter = GetParameter(delay);
  parameter.parameterStatus = detail::ParameterStatus_Initialized;
  detail::SetEffectInputOutput(parameter, input, output, count);
}

TimeSpan GetDelayTimeMax(const DelayType* delay) {
  return detail::FromMilliSeconds(GetParameter(delay).delayTimeMax);
}

int GetDelayChannelCountMax(const DelayType* delay) {
  return GetParameter(delay).channelCountMax;
}

TimeSpan GetDelayTime(const DelayType* delay) {
  return detail::FromMilliSeconds(GetParameter(delay).delayTime);
}

void SetDelayTime(DelayType* delay, TimeSpan time) {
  detail::CheckResourceExclusion(delay->_pEffectInfo);
  GetParameter(delay).parameterStatus = detail::ParameterStatus_Initialized;
  GetParameter(delay).delayTime = detail::GetMilliSeconds(time);
}

#define DELAY_Q14_ACCESSORS(NAME, FIELD) \
  float GetDelay##NAME(const DelayType* delay) { \
    return detail::ConvertFromQ14(GetParameter(delay).FIELD); \
  } \
  \
  void SetDelay##NAME(DelayType* delay, float value) { \
    detail::CheckResourceExclusion(delay->_pEffectInfo); \
    Parameter& parameter = GetParameter(delay); \
    detail::RequestParameterUpdate(parameter); \
    parameter.FIELD = detail::ConvertToQ14(value); \
  }

DELAY_Q14_ACCESSORS(FeedbackGain, feedbackGain)
DELAY_Q14_ACCESSORS(DryGain, dryGain)
DELAY_Q14_ACCESSORS(InGain, inGain)
DELAY_Q14_ACCESSORS(ChannelSpread, channelSpread)
DELAY_Q14_ACCESSORS(LowPassAmount, lowPassAmount)

#undef DELAY_Q14_ACCESSORS

DelayParameterSet GetDelayParameters(const DelayType* delay) {
  const Parameter& parameter = GetParameter(delay);
  DelayParameterSet parameterSet = {};
  parameterSet.delayTime = detail::FromMilliSeconds(parameter.delayTime);
  parameterSet.inGain = detail::ConvertFromQ14(parameter.inGain);
  parameterSet.feedbackGain = detail::ConvertFromQ14(parameter.feedbackGain);
  parameterSet.dryGain = detail::ConvertFromQ14(parameter.dryGain);
  parameterSet.channelSpread = detail::ConvertFromQ14(parameter.channelSpread);
  parameterSet.lowPassAmount = detail::ConvertFromQ14(parameter.lowPassAmount);
  return parameterSet;
}

void SetDelayParameters(DelayType* delay,
  const DelayParameterSet* parameterSet) {
  SetDelayDryGain(delay, parameterSet->dryGain);
  SetDelayInGain(delay, parameterSet->inGain);
  SetDelayFeedbackGain(delay, parameterSet->feedbackGain);
  SetDelayChannelSpread(delay, parameterSet->channelSpread);
  SetDelayLowPassAmount(delay, parameterSet->lowPassAmount);
  const int delayTime = detail::GetMilliSeconds(parameterSet->delayTime);
  GetParameter(delay).parameterStatus = detail::ParameterStatus_Initialized;
  GetParameter(delay).delayTime = delayTime;
}

}
