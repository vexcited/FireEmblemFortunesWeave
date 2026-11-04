#pragma once

#include <stdint.h>

#include <algorithm>

#include "nn/audio/renderer_config.hpp"

namespace nn::audio::detail {

enum ParameterStatus : uint8_t {
  ParameterStatus_Initialized,
  ParameterStatus_UpdateRequired,
  ParameterStatus_Updated,
};

enum UsageState : uint8_t {
  UsageState_Invalid,
  UsageState_New,
  UsageState_Enabled,
  UsageState_Disabled,
  UsageState_Removable,
};

template<class Parameter>
void RequestParameterUpdate(Parameter& parameter) {
  if (parameter.parameterStatus != ParameterStatus_Initialized) {
    parameter.parameterStatus = ParameterStatus_UpdateRequired;
  }
}

template<class Effect, class Mix>
Result AddEffect(AudioRendererConfig* config, Effect* effect, EffectType type,
  void* buffer, size_t size, Mix* mix) {
  // The release build keeps this precondition query and ignores it.
  config->_pEffectManager->IsInitialized(effect->_pEffectInfo);
  return config->_pEffectManager->Add(&effect->_pEffectInfo, type, buffer,
    size, mix->_pMixInfo);
}

template<class Effect, class Mix>
void* RemoveEffect(AudioRendererConfig* config, Effect* effect, Mix* mix) {
  CheckResourceExclusion(effect->_pEffectInfo);
  void* buffer = config->_pEffectManager->Remove(effect->_pEffectInfo,
    mix->_pMixInfo);
  effect->_pEffectInfo = nullptr;
  mix->_pMixInfo->isDirty = true;
  return buffer;
}

inline bool IsEffectRemovable(const EffectInfoVersion2* info,
  EffectType type) {
  if (info == nullptr || info->type != type) {
    return false;
  }
  if (info->usageState != UsageState_Removable
    && info->usageState != UsageState_New) {
    return false;
  }
  return !info->isEnabled;
}

template<class Parameter>
void GetEffectInputOutput(const Parameter& parameter, int8_t* input,
  int8_t* output, int* count, int countMax) {
  const int channelCount = std::min(parameter.channelCount,
    static_cast<uint16_t>(countMax));
  for (int i = 0; i < channelCount; ++i) {
    input[i] = parameter.input[i];
    output[i] = parameter.output[i];
  }
  *count = channelCount;
}

template<class Parameter>
void SetEffectInputOutput(Parameter& parameter, const int8_t* input,
  const int8_t* output, int count) {
  const int channelCount = std::min(count,
    static_cast<int>(std::min<uint16_t>(parameter.channelCountMax, 6)));
  for (int i = 0; i < channelCount; ++i) {
    parameter.input[i] = input[i];
    parameter.output[i] = output[i];
  }
  parameter.channelCount = channelCount;
}

}
