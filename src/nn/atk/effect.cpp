#include "nn/atk/effect.hpp"
#include "snd/target/atk_types.hpp"

namespace nn::audio {

void SetCompressorAttackTime(CompressorType* compressor, TimeSpan time);
void SetCompressorReleaseTime(CompressorType* compressor, TimeSpan time);
void SetCompressorThreshold(CompressorType* compressor, float threshold);
void SetCompressorRatio(CompressorType* compressor, float ratio);
void SetCompressorOutGain(CompressorType* compressor, float gain);
void SetCompressorMakeupGainEnabled(CompressorType* compressor,
  bool enabled);
void SetCompressorEnabled(CompressorType* compressor, bool enabled);
bool IsCompressorRemovable(const CompressorType* compressor);

void SetLightLimiterAttackTime(LightLimiterType* limiter, TimeSpan time);
void SetLightLimiterReleaseTime(LightLimiterType* limiter, TimeSpan time);
void SetLightLimiterLookAheadTime(LightLimiterType* limiter, TimeSpan time);
void SetLightLimiterThreshold(LightLimiterType* limiter, float threshold);
void SetLightLimiterInputGain(LightLimiterType* limiter, float gain);
void SetLightLimiterOutputGain(LightLimiterType* limiter, float gain);
void SetLightLimiterEnabled(LightLimiterType* limiter, bool enabled);
bool IsLightLimiterRemovable(const LightLimiterType* limiter);

void SetAuxEnabled(AuxType* aux, bool enabled);
bool IsAuxRemovable(const AuxType* aux);

void SetI3dl2ReverbReflectionDelayTime(I3dl2ReverbType* reverb,
  TimeSpan time);
void SetI3dl2ReverbLateReverbDelayTime(I3dl2ReverbType* reverb,
  TimeSpan time);

}

namespace nn::atk {

namespace {

using detail::driver::HardwareManager;

template <typename T>
inline T Clamp(T value, T low, T high) {
  return value > high ? high : (value < low ? low : value);
}

inline nn::TimeSpan Clamp(nn::TimeSpan value, int64_t low, int64_t high) {
  return {Clamp(value.nanoseconds, low, high)};
}

constexpr int64_t kMilliSecond = 1000000;

inline nn::audio::ReverbType::EarlyMode ToEarlyMode(int mode) {
  switch (mode) {
    case 0:
      return nn::audio::ReverbType::EarlyMode_SmallRoom;
    case 1:
      return nn::audio::ReverbType::EarlyMode_LargeRoom;
    case 2:
      return nn::audio::ReverbType::EarlyMode_Hall;
    case 3:
      return nn::audio::ReverbType::EarlyMode_Cathedral;
    case 4:
      return nn::audio::ReverbType::EarlyMode_NoEarlyReflection;
    default:
      nn::detail::UnexpectedDefaultImpl();
  }
}

inline nn::audio::ReverbType::LateMode ToLateMode(int mode) {
  switch (mode) {
    case 0:
      return nn::audio::ReverbType::LateMode_Room;
    case 1:
      return nn::audio::ReverbType::LateMode_Hall;
    case 2:
      return nn::audio::ReverbType::LateMode_MetalCorridor;
    case 3:
      return nn::audio::ReverbType::LateMode_Cathedral;
    case 4:
      return nn::audio::ReverbType::LateMode_MaximumDelay;
    default:
      nn::detail::UnexpectedDefaultImpl();
  }
}

// Parameters only reach the renderer once the effect was added to a mix.
template <typename F>
inline void Apply(bool isActive, F apply) {
  if (isActive) {
    HardwareManager::GetInstance().LockRenderer();
    apply();
    HardwareManager::GetInstance().UnlockRenderer();
  }
}

// The renderer lets go of an effect one audio frame after its removal.
template <typename F>
inline bool CheckRemovable(bool isActive,
  const std::atomic<uint64_t>& removedFrameCount, F check) {
  if (!isActive) {
    return false;
  }
  if (removedFrameCount.load() >=
    HardwareManager::GetInstance().GetAudioFrameCount()) {
    return false;
  }
  HardwareManager::GetInstance().LockRenderer();
  bool result = check() && removedFrameCount.load() <
    HardwareManager::GetInstance().GetAudioFrameCount();
  HardwareManager::GetInstance().UnlockRenderer();
  return result;
}

template <typename F>
inline void Remove(bool& isActive, OutputMixer* mixer, F remove) {
  if (!isActive) {
    return;
  }
  switch (mixer->GetReceiverType()) {
    case OutputReceiver::ReceiverType_SubMix:
      remove(static_cast<SubMix*>(mixer)->GetSubMix());
      break;
    case OutputReceiver::ReceiverType_FinalMix:
      remove(static_cast<FinalMix*>(mixer)->GetFinalMix());
      break;
    default:
      nn::detail::UnexpectedDefaultImpl();
  }
  isActive = false;
}

}

void EffectReverb::RemoveEffect(nn::audio::AudioRendererConfig* config,
  OutputMixer* mixer) {
  Remove(m_IsActive, mixer, [&](auto* mix) {
    nn::audio::RemoveReverb(config, &m_Reverb, mix);
  });
}

bool EffectReverb::IsRemovable() const {
  return CheckRemovable(m_IsActive, m_RemovedFrameCount, [&] {
    return nn::audio::IsReverbRemovable(&m_Reverb);
  });
}

bool EffectReverb::IsEnabled() const {
  return m_IsEnabled;
}

void EffectReverb::SetEnabled(bool isEnabled) {
  m_IsEnabled = isEnabled;
  Apply(m_IsActive, [&] {
    nn::audio::SetReverbEnabled(&m_Reverb, m_IsEnabled);
  });
}

void EffectReverb::SetEarlyMode(int mode) {
  m_EarlyMode = mode;
  Apply(m_IsActive, [&] {
    nn::audio::SetReverbEarlyMode(&m_Reverb, ToEarlyMode(m_EarlyMode));
  });
}

void EffectReverb::SetEarlyGain(float gain) {
  m_EarlyGain = Clamp(gain, 0.0f, 1.0f);
  Apply(m_IsActive, [&] {
    nn::audio::SetReverbEarlyGain(&m_Reverb, m_EarlyGain);
  });
}

void EffectReverb::SetPredelayTime(nn::TimeSpan time) {
  m_PredelayTime = Clamp(time, 0, 300 * kMilliSecond);
  Apply(m_IsActive, [&] {
    nn::audio::SetReverbPredelayTime(&m_Reverb, m_PredelayTime);
  });
}

void EffectReverb::SetLateMode(int mode) {
  m_LateMode = mode;
  Apply(m_IsActive, [&] {
    nn::audio::SetReverbLateMode(&m_Reverb, ToLateMode(m_LateMode));
  });
}

void EffectReverb::SetLateGain(float gain) {
  m_LateGain = Clamp(gain, 0.0f, 1.0f);
  Apply(m_IsActive, [&] {
    nn::audio::SetReverbLateGain(&m_Reverb, m_LateGain);
  });
}

void EffectReverb::SetDecayTime(nn::TimeSpan time) {
  m_DecayTime = Clamp(time, 100 * kMilliSecond, 20000 * kMilliSecond);
  Apply(m_IsActive, [&] {
    nn::audio::SetReverbDecayTime(&m_Reverb, m_DecayTime);
  });
}

void EffectReverb::SetHighFrequencyDecayRatio(float ratio) {
  m_HighFrequencyDecayRatio = Clamp(ratio, 0.1f, 1.0f);
  Apply(m_IsActive, [&] {
    nn::audio::SetReverbHighFrequencyDecayRatio(&m_Reverb,
      m_HighFrequencyDecayRatio);
  });
}

void EffectReverb::SetColoration(float coloration) {
  m_Coloration = Clamp(coloration, 0.0f, 1.0f);
  Apply(m_IsActive, [&] {
    nn::audio::SetReverbColoration(&m_Reverb, m_Coloration);
  });
}

void EffectReverb::SetReverbGain(float gain) {
  m_ReverbGain = Clamp(gain, 0.0f, 1.0f);
  Apply(m_IsActive, [&] {
    nn::audio::SetReverbReverbGain(&m_Reverb, m_ReverbGain);
  });
}

void EffectReverb::SetOutGain(float gain) {
  m_OutGain = Clamp(gain, 0.0f, 1.0f);
  Apply(m_IsActive, [&] {
    nn::audio::SetReverbOutGain(&m_Reverb, m_OutGain);
  });
}

void EffectReverb::SetDryGain(float gain) {
  m_DryGain = Clamp(gain, 0.0f, 1.0f);
  Apply(m_IsActive, [&] {
    nn::audio::SetReverbDryGain(&m_Reverb, m_DryGain);
  });
}

void EffectI3dl2Reverb::RemoveEffect(nn::audio::AudioRendererConfig* config,
  OutputMixer* mixer) {
  Remove(m_IsActive, mixer, [&](auto* mix) {
    nn::audio::RemoveI3dl2Reverb(config, &m_I3dl2Reverb, mix);
  });
}

bool EffectI3dl2Reverb::IsRemovable() const {
  return CheckRemovable(m_IsActive, m_RemovedFrameCount, [&] {
    return nn::audio::IsI3dl2ReverbRemovable(&m_I3dl2Reverb);
  });
}

bool EffectI3dl2Reverb::IsEnabled() const {
  return m_IsEnabled;
}

void EffectI3dl2Reverb::SetEnabled(bool isEnabled) {
  m_IsEnabled = isEnabled;
  Apply(m_IsActive, [&] {
    nn::audio::SetI3dl2ReverbEnabled(&m_I3dl2Reverb, m_IsEnabled);
  });
}

void EffectI3dl2Reverb::SetReflectionDelayTime(nn::TimeSpan time) {
  m_ReflectionDelayTime = Clamp(time, 0, 300 * kMilliSecond);
  Apply(m_IsActive, [&] {
    nn::audio::SetI3dl2ReverbReflectionDelayTime(&m_I3dl2Reverb,
      m_ReflectionDelayTime);
  });
}

void EffectI3dl2Reverb::SetLateReverbDelayTime(nn::TimeSpan time) {
  m_LateReverbDelayTime = Clamp(time, 0, 100 * kMilliSecond);
  Apply(m_IsActive, [&] {
    nn::audio::SetI3dl2ReverbLateReverbDelayTime(&m_I3dl2Reverb,
      m_LateReverbDelayTime);
  });
}

void EffectDelay::RemoveEffect(nn::audio::AudioRendererConfig* config,
  OutputMixer* mixer) {
  Remove(m_IsActive, mixer, [&](auto* mix) {
    nn::audio::RemoveDelay(config, &m_Delay, mix);
  });
}

bool EffectDelay::IsRemovable() const {
  return CheckRemovable(m_IsActive, m_RemovedFrameCount, [&] {
    return nn::audio::IsDelayRemovable(&m_Delay);
  });
}

bool EffectDelay::IsEnabled() const {
  return m_IsEnabled;
}

void EffectDelay::SetEnabled(bool isEnabled) {
  m_IsEnabled = isEnabled;
  Apply(m_IsActive, [&] {
    nn::audio::SetDelayEnabled(&m_Delay, m_IsEnabled);
  });
}

void EffectDelay::SetDelayTime(nn::TimeSpan time) {
  m_DelayTime = Clamp(time, 0, m_DelayTimeMax.nanoseconds);
  Apply(m_IsActive, [&] {
    nn::audio::SetDelayTime(&m_Delay, m_DelayTime);
  });
}

void EffectDelay::SetInGain(float gain) {
  m_InGain = Clamp(gain, 0.0f, 1.0f);
  Apply(m_IsActive, [&] {
    nn::audio::SetDelayInGain(&m_Delay, m_InGain);
  });
}

void EffectDelay::SetFeedbackGain(float gain) {
  m_FeedbackGain = Clamp(gain, 0.0f, 1.0f);
  Apply(m_IsActive, [&] {
    nn::audio::SetDelayFeedbackGain(&m_Delay, m_FeedbackGain);
  });
}

void EffectDelay::SetDryGain(float gain) {
  m_DryGain = Clamp(gain, 0.0f, 1.0f);
  Apply(m_IsActive, [&] {
    nn::audio::SetDelayDryGain(&m_Delay, m_DryGain);
  });
}

void EffectDelay::SetLowPassAmount(float amount) {
  m_LowPassAmount = Clamp(amount, 0.0f, 1.0f);
  Apply(m_IsActive, [&] {
    nn::audio::SetDelayLowPassAmount(&m_Delay, m_LowPassAmount);
  });
}

void EffectDelay::SetChannelSpread(float spread) {
  m_ChannelSpread = Clamp(spread, 0.0f, 1.0f);
  Apply(m_IsActive, [&] {
    nn::audio::SetDelayChannelSpread(&m_Delay, m_ChannelSpread);
  });
}

bool EffectDelay::SetDelayTimeMax(nn::TimeSpan time) {
  if (m_IsActive) {
    return false;
  }
  m_DelayTimeMax = time;
  return true;
}

void EffectLightLimiter::RemoveEffect(nn::audio::AudioRendererConfig* config,
  OutputMixer* mixer) {
  Remove(m_IsActive, mixer, [&](auto* mix) {
    nn::audio::RemoveLightLimiter(config, &m_LightLimiter, mix);
  });
}

bool EffectLightLimiter::IsRemovable() const {
  return CheckRemovable(m_IsActive, m_RemovedFrameCount, [&] {
    return nn::audio::IsLightLimiterRemovable(&m_LightLimiter);
  });
}

bool EffectLightLimiter::IsEnabled() const {
  return m_IsEnabled;
}

void EffectLightLimiter::SetEnabled(bool isEnabled) {
  m_IsEnabled = isEnabled;
  Apply(m_IsActive, [&] {
    nn::audio::SetLightLimiterEnabled(&m_LightLimiter, m_IsEnabled);
  });
}

void EffectLightLimiter::SetAttackTime(nn::TimeSpan time) {
  m_AttackTime = Clamp(time, 0, 10 * kMilliSecond);
  Apply(m_IsActive, [&] {
    nn::audio::SetLightLimiterAttackTime(&m_LightLimiter, m_AttackTime);
  });
}

void EffectLightLimiter::SetReleaseTime(nn::TimeSpan time) {
  m_ReleaseTime = Clamp(time, 0, 5000 * kMilliSecond);
  Apply(m_IsActive, [&] {
    nn::audio::SetLightLimiterReleaseTime(&m_LightLimiter, m_ReleaseTime);
  });
}

void EffectLightLimiter::SetLookAheadTime(nn::TimeSpan time) {
  m_LookAheadTime = Clamp(time, 0, m_LookAheadTimeMax.nanoseconds);
  Apply(m_IsActive, [&] {
    nn::audio::SetLightLimiterLookAheadTime(&m_LightLimiter, m_LookAheadTime);
  });
}

void EffectLightLimiter::SetThreshold(float threshold) {
  m_Threshold = Clamp(threshold, 0.0f, 1.0f);
  Apply(m_IsActive, [&] {
    nn::audio::SetLightLimiterThreshold(&m_LightLimiter, m_Threshold);
  });
}

void EffectLightLimiter::SetInputGain(float gain) {
  m_InputGain = Clamp(gain, 0.0f, 4.0f);
  Apply(m_IsActive, [&] {
    nn::audio::SetLightLimiterInputGain(&m_LightLimiter, m_InputGain);
  });
}

void EffectLightLimiter::SetOutputGain(float gain) {
  m_OutputGain = Clamp(gain, 0.0f, 4.0f);
  Apply(m_IsActive, [&] {
    nn::audio::SetLightLimiterOutputGain(&m_LightLimiter, m_OutputGain);
  });
}

void EffectCompressor::RemoveEffect(nn::audio::AudioRendererConfig* config,
  OutputMixer* mixer) {
  Remove(m_IsActive, mixer, [&](auto* mix) {
    nn::audio::RemoveCompressor(config, &m_Compressor, mix);
  });
}

bool EffectCompressor::IsRemovable() const {
  return CheckRemovable(m_IsActive, m_RemovedFrameCount, [&] {
    return nn::audio::IsCompressorRemovable(&m_Compressor);
  });
}

bool EffectCompressor::IsEnabled() const {
  return m_IsEnabled;
}

void EffectCompressor::SetEnabled(bool isEnabled) {
  m_IsEnabled = isEnabled;
  Apply(m_IsActive, [&] {
    nn::audio::SetCompressorEnabled(&m_Compressor, m_IsEnabled);
  });
}

void EffectCompressor::SetAttackTime(nn::TimeSpan time) {
  m_AttackTime = Clamp(time, 0, 1000 * kMilliSecond);
  Apply(m_IsActive, [&] {
    nn::audio::SetCompressorAttackTime(&m_Compressor, m_AttackTime);
  });
}

void EffectCompressor::SetReleaseTime(nn::TimeSpan time) {
  m_ReleaseTime = Clamp(time, 0, 5000 * kMilliSecond);
  Apply(m_IsActive, [&] {
    nn::audio::SetCompressorReleaseTime(&m_Compressor, m_ReleaseTime);
  });
}

void EffectCompressor::SetThreshold(float threshold) {
  m_Threshold = Clamp(threshold, -50.0f, 0.0f);
  Apply(m_IsActive, [&] {
    nn::audio::SetCompressorThreshold(&m_Compressor, m_Threshold);
  });
}

void EffectCompressor::SetRatio(float ratio) {
  m_Ratio = Clamp(ratio, 1.0f, 30.0f);
  Apply(m_IsActive, [&] {
    nn::audio::SetCompressorRatio(&m_Compressor, m_Ratio);
  });
}

void EffectCompressor::SetOutGain(float gain) {
  m_OutGain = Clamp(gain, -30.0f, 10.0f);
  Apply(m_IsActive, [&] {
    nn::audio::SetCompressorOutGain(&m_Compressor, m_OutGain);
  });
}

// The original never stores the argument, it only reapplies the current flag.
void EffectCompressor::SetMakeupGainEnabled(bool) {
  Apply(m_IsActive, [&] {
    nn::audio::SetCompressorMakeupGainEnabled(&m_Compressor,
      m_IsMakeupGainEnabled);
  });
}

bool EffectAux::IsEnabled() const {
  return m_IsEnabled;
}

void EffectAux::SetEnabled(bool isEnabled) {
  m_IsEnabled = isEnabled;
  Apply(m_IsActive, [&] {
    nn::audio::SetAuxEnabled(&m_AuxType, isEnabled);
  });
}

size_t EffectAux::GetRequiredMemSize() {
  return HardwareManager::GetInstance().GetRequiredEffectAuxBufferSize(this);
}

size_t EffectAux::GetRequiredMemSize(
  const nn::audio::AudioRendererParameter* parameter) const {
  return nn::audio::GetRequiredBufferSizeForAuxSendReturnBuffer(parameter,
    m_FrameCount, m_ChannelCount) * 3;
}

bool EffectAux::IsRemovable() const {
  return CheckRemovable(m_IsActive, m_RemovedFrameCount, [&] {
    return nn::audio::IsAuxRemovable(&m_AuxType);
  });
}

}
