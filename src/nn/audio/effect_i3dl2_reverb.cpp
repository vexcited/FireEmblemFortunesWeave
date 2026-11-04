#include <math.h>
#include <string.h>

#include "nn/audio/effect_api.hpp"
#include "nn/audio/effect_common.hpp"

namespace nn::audio {
namespace {

using Parameter = EffectInfoVersion2::I3dl2ReverbParameter;

Parameter& GetParameter(const I3dl2ReverbType* reverb) {
  return reverb->_pEffectInfo->parameter.i3dl2Reverb;
}

float ToSeconds(TimeSpan time) {
  return static_cast<float>(detail::GetMicroSeconds(time)) / 1000000.0f;
}

TimeSpan FromSeconds(float seconds) {
  return detail::FromMicroSeconds(llroundf(seconds * 1000000.0f));
}

template<class Mix>
Result AddI3dl2ReverbImpl(AudioRendererConfig* config,
  I3dl2ReverbType* reverb, void* buffer, size_t size, Mix* mix,
  int channelCountMax) {
  const Result result = detail::AddEffect(config, reverb,
    EffectType_I3dl2Reverb, buffer, size, mix);
  if (result.value != 0) {
    return result;
  }

  detail::CheckResourceExclusion(reverb->_pEffectInfo);
  memset(&reverb->_pEffectInfo->parameter.i3dl2Reverb, 0, sizeof(Parameter));
  GetParameter(reverb).sampleRate = mix->_pMixInfo->sampleRate;
  I3dl2ReverbParameterSet parameterSet;
  LoadI3dl2ReverbPreset(&parameterSet, I3dl2ReverbType::Preset_SmallRoom);
  SetI3dl2ReverbParameters(reverb, &parameterSet);
  reverb->_pEffectInfo->isEnabled = true;
  GetParameter(reverb).channelCount = channelCountMax;
  GetParameter(reverb).channelCountMax = channelCountMax;
  mix->_pMixInfo->isDirty = true;
  return result;
}

}

size_t GetRequiredBufferSizeForI3dl2Reverb(int sampleRate,
  int channelCountMax) {
  const size_t size = GetRequiredI3dl2ReverbEffectWorkBufferSize(sampleRate,
    channelCountMax);
  return (size + 63) & ~size_t{63};
}

Result AddI3dl2Reverb(AudioRendererConfig* config, I3dl2ReverbType* reverb,
  void* buffer, size_t size, FinalMixType* mix, int channelCountMax) {
  return AddI3dl2ReverbImpl(config, reverb, buffer, size, mix,
    channelCountMax);
}

Result AddI3dl2Reverb(AudioRendererConfig* config, I3dl2ReverbType* reverb,
  void* buffer, size_t size, SubMixType* mix, int channelCountMax) {
  return AddI3dl2ReverbImpl(config, reverb, buffer, size, mix,
    channelCountMax);
}

void* RemoveI3dl2Reverb(AudioRendererConfig* config,
  I3dl2ReverbType* reverb, FinalMixType* mix) {
  return detail::RemoveEffect(config, reverb, mix);
}

void* RemoveI3dl2Reverb(AudioRendererConfig* config,
  I3dl2ReverbType* reverb, SubMixType* mix) {
  return detail::RemoveEffect(config, reverb, mix);
}

int GetI3dl2ReverbChannelCountMax(const I3dl2ReverbType* reverb) {
  return GetParameter(reverb).channelCountMax;
}

bool IsI3dl2ReverbRemovable(const I3dl2ReverbType* reverb) {
  return detail::IsEffectRemovable(reverb->_pEffectInfo,
    EffectType_I3dl2Reverb);
}

bool IsI3dl2ReverbEnabled(const I3dl2ReverbType* reverb) {
  return reverb->_pEffectInfo->isEnabled;
}

void SetI3dl2ReverbEnabled(I3dl2ReverbType* reverb, bool enabled) {
  detail::CheckResourceExclusion(reverb->_pEffectInfo);
  reverb->_pEffectInfo->isEnabled = enabled;
  GetParameter(reverb).parameterStatus = enabled
    ? detail::ParameterStatus_Initialized
    : detail::ParameterStatus_UpdateRequired;
}

void GetI3dl2ReverbInputOutput(const I3dl2ReverbType* reverb, int8_t* input,
  int8_t* output, int* count, int countMax) {
  detail::GetEffectInputOutput(GetParameter(reverb), input, output, count,
    countMax);
}

void SetI3dl2ReverbInputOutput(I3dl2ReverbType* reverb, const int8_t* input,
  const int8_t* output, int count) {
  detail::CheckResourceExclusion(reverb->_pEffectInfo);
  Parameter& parameter = GetParameter(reverb);
  parameter.parameterStatus = detail::ParameterStatus_Initialized;
  detail::SetEffectInputOutput(parameter, input, output, count);
}

#define I3DL2_REVERB_ACCESSORS(NAME, FIELD) \
  void SetI3dl2Reverb##NAME(I3dl2ReverbType* reverb, float value) { \
    detail::CheckResourceExclusion(reverb->_pEffectInfo); \
    Parameter& parameter = GetParameter(reverb); \
    detail::RequestParameterUpdate(parameter); \
    parameter.FIELD = value; \
  } \
  \
  float GetI3dl2Reverb##NAME(const I3dl2ReverbType* reverb) { \
    return GetParameter(reverb).FIELD; \
  }

#define I3DL2_REVERB_TIME_ACCESSORS(NAME, FIELD) \
  void SetI3dl2Reverb##NAME(I3dl2ReverbType* reverb, TimeSpan time) { \
    detail::CheckResourceExclusion(reverb->_pEffectInfo); \
    Parameter& parameter = GetParameter(reverb); \
    detail::RequestParameterUpdate(parameter); \
    parameter.FIELD = ToSeconds(time); \
  } \
  \
  TimeSpan GetI3dl2Reverb##NAME(const I3dl2ReverbType* reverb) { \
    return FromSeconds(GetParameter(reverb).FIELD); \
  }

I3DL2_REVERB_ACCESSORS(ReverbGain, reverbGain)
I3DL2_REVERB_ACCESSORS(ReflectionsGain, reflectionsGain)
I3DL2_REVERB_ACCESSORS(RoomGain, roomGain)
I3DL2_REVERB_TIME_ACCESSORS(ReflectionDelayTime, reflectionDelayTime)
I3DL2_REVERB_TIME_ACCESSORS(LateReverbDelayTime, lateReverbDelayTime)
I3DL2_REVERB_ACCESSORS(RoomHfGain, roomHfGain)
I3DL2_REVERB_ACCESSORS(HfReference, hfReference)
I3DL2_REVERB_TIME_ACCESSORS(LateReverbDecayTime, lateReverbDecayTime)
I3DL2_REVERB_ACCESSORS(LateReverbHfDecayRatio, lateReverbHfDecayRatio)
I3DL2_REVERB_ACCESSORS(LateReverbDiffusion, lateReverbDiffusion)
I3DL2_REVERB_ACCESSORS(LateReverbDensity, lateReverbDensity)
I3DL2_REVERB_ACCESSORS(DryGain, dryGain)

#undef I3DL2_REVERB_TIME_ACCESSORS
#undef I3DL2_REVERB_ACCESSORS

void SetI3dl2ReverbParameters(I3dl2ReverbType* reverb,
  const I3dl2ReverbParameterSet* parameterSet) {
  Parameter& parameter = GetParameter(reverb);
  detail::RequestParameterUpdate(parameter);
  detail::CheckResourceExclusion(reverb->_pEffectInfo);
  parameter.roomHfGain = parameterSet->roomHfGain;
  parameter.hfReference = parameterSet->hfReference;
  parameter.lateReverbDecayTime = parameterSet->lateReverbDecayTime;
  parameter.lateReverbHfDecayRatio = parameterSet->lateReverbHfDecayRatio;
  parameter.roomGain = parameterSet->roomGain;
  parameter.reflectionsGain = parameterSet->reflectionsGain;
  parameter.reverbGain = parameterSet->reverbGain;
  parameter.lateReverbDiffusion = parameterSet->lateReverbDiffusion;
  parameter.reflectionDelayTime = parameterSet->reflectionDelayTime;
  parameter.lateReverbDelayTime = parameterSet->lateReverbDelayTime;
  parameter.lateReverbDensity = parameterSet->lateReverbDensity;
  parameter.dryGain = parameterSet->dryGain;
}

I3dl2ReverbParameterSet GetI3dl2ReverbParameters(
  const I3dl2ReverbType* reverb) {
  const Parameter& parameter = GetParameter(reverb);
  I3dl2ReverbParameterSet parameterSet;
  parameterSet.roomGain = parameter.roomGain;
  parameterSet.roomHfGain = parameter.roomHfGain;
  parameterSet.lateReverbDecayTime = parameter.lateReverbDecayTime;
  parameterSet.lateReverbHfDecayRatio = parameter.lateReverbHfDecayRatio;
  parameterSet.reflectionsGain = parameter.reflectionsGain;
  parameterSet.reflectionDelayTime = parameter.reflectionDelayTime;
  parameterSet.reverbGain = parameter.reverbGain;
  parameterSet.lateReverbDelayTime = parameter.lateReverbDelayTime;
  parameterSet.lateReverbDiffusion = parameter.lateReverbDiffusion;
  parameterSet.lateReverbDensity = parameter.lateReverbDensity;
  parameterSet.hfReference = parameter.hfReference;
  parameterSet.dryGain = parameter.dryGain;
  return parameterSet;
}

void LoadI3dl2ReverbPreset(I3dl2ReverbParameterSet* parameter,
  I3dl2ReverbType::Preset preset) {
  switch (preset) {
    case I3dl2ReverbType::Preset_SmallRoom:
      parameter->roomGain = -1045.0f;
      parameter->roomHfGain = -1000.0f;
      parameter->reflectionsGain = -310.0f;
      parameter->reverbGain = -602.0f;
      parameter->lateReverbDiffusion = 100.0f;
      parameter->reflectionDelayTime = 0.0046f;
      parameter->lateReverbDelayTime = 0.012f;
      parameter->lateReverbDensity = 61.0f;
      parameter->lateReverbDecayTime = 1.0f;
      parameter->lateReverbHfDecayRatio = 0.2f;
      parameter->hfReference = 5000.0f;
      parameter->dryGain = 0.24f;
      break;
    case I3dl2ReverbType::Preset_LargeRoom:
      parameter->roomGain = -1045.0f;
      parameter->roomHfGain = -1000.0f;
      parameter->reflectionsGain = -310.0f;
      parameter->reverbGain = -310.0f;
      parameter->lateReverbDiffusion = 100.0f;
      parameter->reflectionDelayTime = 0.0092f;
      parameter->lateReverbDelayTime = 0.04f;
      parameter->lateReverbDensity = 61.0f;
      parameter->lateReverbDecayTime = 1.7f;
      parameter->lateReverbHfDecayRatio = 0.3f;
      parameter->hfReference = 5000.0f;
      parameter->dryGain = 0.24f;
      break;
    case I3dl2ReverbType::Preset_Hall:
      parameter->roomGain = -1045.0f;
      parameter->roomHfGain = -1000.0f;
      parameter->reflectionsGain = -796.0f;
      parameter->reverbGain = -310.0f;
      parameter->lateReverbDiffusion = 80.0f;
      parameter->reflectionDelayTime = 0.0058f;
      parameter->lateReverbDelayTime = 0.05f;
      parameter->lateReverbDensity = 69.0f;
      parameter->lateReverbDecayTime = 2.2f;
      parameter->lateReverbHfDecayRatio = 0.8f;
      parameter->hfReference = 5000.0f;
      parameter->dryGain = 0.24f;
      break;
    case I3dl2ReverbType::Preset_CavernousCathedral:
      parameter->roomGain = -1398.0f;
      parameter->roomHfGain = -1000.0f;
      parameter->reflectionsGain = -1398.0f;
      parameter->reverbGain = -602.0f;
      parameter->lateReverbDiffusion = 50.0f;
      parameter->reflectionDelayTime = 0.09f;
      parameter->lateReverbDelayTime = 0.05f;
      parameter->lateReverbDensity = 61.0f;
      parameter->lateReverbDecayTime = 6.0f;
      parameter->lateReverbHfDecayRatio = 0.65f;
      parameter->hfReference = 5000.0f;
      parameter->dryGain = 0.4f;
      break;
    case I3dl2ReverbType::Preset_MetalCorridor:
      parameter->roomGain = -1045.0f;
      parameter->roomHfGain = -1000.0f;
      parameter->reflectionsGain = -10000.0f;
      parameter->reverbGain = -444.0f;
      parameter->lateReverbDiffusion = 100.0f;
      parameter->reflectionDelayTime = 0.006f;
      parameter->lateReverbDelayTime = 0.0f;
      parameter->lateReverbDensity = 0.0f;
      parameter->lateReverbDecayTime = 1.1f;
      parameter->lateReverbHfDecayRatio = 0.3f;
      parameter->hfReference = 5000.0f;
      parameter->dryGain = 0.4f;
      break;
    default:
      break;
  }
}

}
