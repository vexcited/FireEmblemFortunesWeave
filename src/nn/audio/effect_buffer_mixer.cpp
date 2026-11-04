#include <string.h>

#include "nn/audio/effect_api.hpp"
#include "nn/audio/effect_common.hpp"

namespace nn::audio {
namespace {

using Parameter = EffectInfoVersion2::BufferMixerParameter;

Parameter& GetParameter(const BufferMixerType* mixer) {
  return mixer->_pEffectInfo->parameter.bufferMixer;
}

template<class Mix>
Result AddBufferMixerImpl(AudioRendererConfig* config, BufferMixerType* mixer,
  Mix* mix) {
  const Result result = detail::AddEffect(config, mixer,
    EffectType_BufferMixer, nullptr, 0, mix);
  if (result.value != 0) {
    return result;
  }

  detail::CheckResourceExclusion(mixer->_pEffectInfo);
  memset(&mixer->_pEffectInfo->parameter.bufferMixer, 0, sizeof(Parameter));
  mixer->_pEffectInfo->isEnabled = true;
  mix->_pMixInfo->isDirty = true;
  return result;
}

}

Result AddBufferMixer(AudioRendererConfig* config, BufferMixerType* mixer,
  FinalMixType* mix) {
  return AddBufferMixerImpl(config, mixer, mix);
}

Result AddBufferMixer(AudioRendererConfig* config, BufferMixerType* mixer,
  SubMixType* mix) {
  return AddBufferMixerImpl(config, mixer, mix);
}

void* RemoveBufferMixer(AudioRendererConfig* config, BufferMixerType* mixer,
  FinalMixType* mix) {
  return detail::RemoveEffect(config, mixer, mix);
}

void* RemoveBufferMixer(AudioRendererConfig* config, BufferMixerType* mixer,
  SubMixType* mix) {
  return detail::RemoveEffect(config, mixer, mix);
}

void GetBufferMixerInputOutput(const BufferMixerType* mixer, int8_t* input,
  int8_t* output, int* count, int countMax) {
  detail::CheckResourceExclusion(mixer->_pEffectInfo);
  const int mixCount = std::min(GetParameter(mixer).mixCount, countMax);
  for (int i = 0; i < mixCount; ++i) {
    input[i] = GetParameter(mixer).input[i];
    output[i] = GetParameter(mixer).output[i];
  }
  *count = mixCount;
}

void SetBufferMixerInputOutput(BufferMixerType* mixer, const int8_t* input,
  const int8_t* output, int count) {
  detail::CheckResourceExclusion(mixer->_pEffectInfo);
  Parameter& parameter = GetParameter(mixer);
  const int mixCount = std::min(count, 24);
  for (int i = 0; i < mixCount; ++i) {
    parameter.input[i] = input[i];
    parameter.output[i] = output[i];
  }
  parameter.mixCount = mixCount;
}

float GetBufferMixerVolume(const BufferMixerType* mixer, int index) {
  return GetParameter(mixer).volume[index];
}

void SetBufferMixerVolume(BufferMixerType* mixer, int index, float volume) {
  detail::CheckResourceExclusion(mixer->_pEffectInfo);
  GetParameter(mixer).volume[index] = volume;
}

bool IsBufferMixerEnabled(const BufferMixerType* mixer) {
  return mixer->_pEffectInfo->isEnabled;
}

void SetBufferMixerEnabled(BufferMixerType* mixer, bool enabled) {
  detail::CheckResourceExclusion(mixer->_pEffectInfo);
  mixer->_pEffectInfo->isEnabled = enabled;
}

bool IsBufferMixerRemovable(const BufferMixerType* mixer) {
  detail::CheckResourceExclusion(mixer->_pEffectInfo);
  return detail::IsEffectRemovable(mixer->_pEffectInfo,
    EffectType_BufferMixer);
}

}
