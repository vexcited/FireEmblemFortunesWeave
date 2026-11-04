#include "nn/audio/effect_api.hpp"
#include "nn/audio/effect_common.hpp"

namespace nn::audio {
namespace {

using Parameter = EffectInfoVersion2::BiquadFilterParameter;

Parameter& GetParameter(const BiquadFilterType* filter) {
  return filter->_pEffectInfo->parameter.biquadFilter;
}

int16_t ToQ14(float value) {
  return static_cast<int16_t>(detail::ConvertToQ14(value));
}

float ToFloat(int16_t value) {
  return static_cast<float>(value) / 16384.0f;
}

float ToFloat(float value) {
  return value;
}

template<class Mix>
Result AddBiquadFilterImpl(AudioRendererConfig* config,
  BiquadFilterType* filter, Mix* mix) {
  const Result result = detail::AddEffect(config, filter,
    EffectType_BiquadFilter, nullptr, 0, mix);
  if (result.value != 0) {
    return result;
  }

  detail::CheckResourceExclusion(filter->_pEffectInfo);
  EffectInfoVersion2* info = filter->_pEffectInfo;
  info->isEnabled = true;
  info->parameter.biquadFilter.parameterStatus =
    detail::ParameterStatus_Initialized;
  mix->_pMixInfo->isDirty = true;
  return result;
}

template<class T>
void SetParameter(BiquadFilterType* filter,
  const TBiquadFilterParameter<T>& parameter) {
  Parameter& internal = GetParameter(filter);
  uint8_t status = internal.parameterStatus;
  if (status != detail::ParameterStatus_Initialized) {
    status = filter->_pEffectInfo->isEnabled || !parameter.enable;
  }
  for (int i = 0; i < 3; ++i) {
    internal.numerator[i] = ToFloat(parameter.numerator[i]);
  }
  for (int i = 0; i < 2; ++i) {
    internal.denominator[i] = ToFloat(parameter.denominator[i]);
  }
  SetBiquadFilterEnabled(filter, parameter.enable);
  internal.parameterStatus = status;
}

}

Result AddBiquadFilter(AudioRendererConfig* config, BiquadFilterType* filter,
  FinalMixType* mix) {
  return AddBiquadFilterImpl(config, filter, mix);
}

Result AddBiquadFilter(AudioRendererConfig* config, BiquadFilterType* filter,
  SubMixType* mix) {
  return AddBiquadFilterImpl(config, filter, mix);
}

void* RemoveBiquadFilter(AudioRendererConfig* config,
  BiquadFilterType* filter, FinalMixType* mix) {
  return detail::RemoveEffect(config, filter, mix);
}

void* RemoveBiquadFilter(AudioRendererConfig* config,
  BiquadFilterType* filter, SubMixType* mix) {
  return detail::RemoveEffect(config, filter, mix);
}

void GetBiquadFilterInputOutput(const BiquadFilterType* filter,
  int8_t* input, int8_t* output, int* count, int countMax) {
  detail::CheckResourceExclusion(filter->_pEffectInfo);
  const Parameter& parameter = GetParameter(filter);
  const int channelCount = std::min<int>(parameter.channelCount, countMax);
  for (int i = 0; i < channelCount; ++i) {
    input[i] = parameter.input[i];
    output[i] = parameter.output[i];
  }
  *count = channelCount;
}

void SetBiquadFilterInputOutput(BiquadFilterType* filter, const int8_t* input,
  const int8_t* output, int count) {
  detail::CheckResourceExclusion(filter->_pEffectInfo);
  Parameter& parameter = GetParameter(filter);
  const int channelCount = std::min(count, 6);
  for (int i = 0; i < channelCount; ++i) {
    parameter.input[i] = input[i];
    parameter.output[i] = output[i];
  }
  parameter.channelCount = channelCount;
  parameter.parameterStatus = detail::ParameterStatus_Initialized;
}

BiquadFilterParameter GetBiquadFilterParameter(
  const BiquadFilterType* filter) {
  const Parameter& internal = GetParameter(filter);
  BiquadFilterParameter parameter = {};
  parameter.enable = filter->_pEffectInfo->isEnabled;
  for (int i = 0; i < 3; ++i) {
    parameter.numerator[i] = ToQ14(internal.numerator[i]);
  }
  for (int i = 0; i < 2; ++i) {
    parameter.denominator[i] = ToQ14(internal.denominator[i]);
  }
  return parameter;
}

void GetBiquadFilterParameter(TBiquadFilterParameter<int16_t>* parameter,
  const BiquadFilterType* filter) {
  *parameter = GetBiquadFilterParameter(filter);
}

void GetBiquadFilterParameter(TBiquadFilterParameter<float>* parameter,
  const BiquadFilterType* filter) {
  const Parameter& internal = GetParameter(filter);
  TBiquadFilterParameter<float> result = {};
  result.enable = filter->_pEffectInfo->isEnabled;
  for (int i = 0; i < 3; ++i) {
    result.numerator[i] = internal.numerator[i];
  }
  for (int i = 0; i < 2; ++i) {
    result.denominator[i] = internal.denominator[i];
  }
  *parameter = result;
}

bool IsBiquadFilterEnabled(const BiquadFilterType* filter) {
  return filter->_pEffectInfo->isEnabled;
}

void SetBiquadFilterEnabled(BiquadFilterType* filter, bool enabled) {
  EffectInfoVersion2* info = filter->_pEffectInfo;
  info->isEnabled = enabled;
  info->parameter.biquadFilter.parameterStatus = !enabled;
}

void SetBiquadFilterParameter(BiquadFilterType* filter,
  const TBiquadFilterParameter<int16_t>& parameter) {
  SetParameter(filter, parameter);
}

void SetBiquadFilterParameter(BiquadFilterType* filter,
  const TBiquadFilterParameter<float>& parameter) {
  SetParameter(filter, parameter);
}

bool IsBiquadFilterRemovable(const BiquadFilterType* filter) {
  return detail::IsEffectRemovable(filter->_pEffectInfo,
    EffectType_BiquadFilter);
}

}
