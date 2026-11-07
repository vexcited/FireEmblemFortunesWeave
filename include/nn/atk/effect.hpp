#pragma once

#include <atomic>
#include <cstddef>
#include <cstdint>

#include "nn/audio/effect_api.hpp"
#include "nn/audio/renderer_config.hpp"

namespace nn::audio {

size_t GetRequiredBufferSizeForAuxSendReturnBuffer(
  const AudioRendererParameter* parameter, int frameCount, int channelCount);

}

namespace nn::atk {

class OutputReceiver {
public:
  enum ReceiverType {
    ReceiverType_SubMix,
    ReceiverType_FinalMix,
  };

  virtual ReceiverType GetReceiverType() const;
};

class EffectBase;
class EffectAux;

class OutputMixer : public OutputReceiver {
public:
  bool AppendEffect(EffectBase* effect, int bus, void* buffer, size_t size);
  bool AppendEffect(EffectAux* effect, int bus, void* buffer, size_t size);
  void RemoveEffect(EffectBase* effect, int bus);
  void RemoveEffect(EffectAux* effect, int bus);
  void ClearEffect(int bus);
  bool HasEffect(int bus) const;
};

class SubMix : public OutputMixer {
public:
  bool AppendEffect(EffectBase* effect, int bus, void* buffer, size_t size);
  bool AppendEffect(EffectAux* effect, int bus, void* buffer, size_t size);
  void RemoveEffect(EffectBase* effect, int bus);
  void RemoveEffect(EffectAux* effect, int bus);
  void ClearEffect(int bus);

  nn::audio::SubMixType* GetSubMix() {
    return &m_SubMix;
  }

private:
  uint8_t m_Body[0x50];
  nn::audio::SubMixType m_SubMix;
};

class FinalMix : public OutputMixer {
public:
  void SetVolume(float volume);

  // The final mix has a single bus.
  bool AppendEffect(EffectAux* effect, void* buffer, size_t size);
  void RemoveEffect(EffectAux* effect);
  void ClearEffect();

  nn::audio::FinalMixType* GetFinalMix() {
    return &m_FinalMix;
  }

private:
  uint8_t m_Body[0x40];
  nn::audio::FinalMixType m_FinalMix;
};

// Only the parts the sound engine effects call.
class EffectBase {
public:
  virtual ~EffectBase();

  virtual size_t GetRequiredMemSize();
  virtual void reserved18();
  virtual void reserved20();
  virtual void RemoveEffect(nn::audio::AudioRendererConfig* config,
    OutputMixer* mixer);
  virtual bool IsRemovable() const;

  void SetActive(bool isActive);

protected:
  uint8_t m_Reserved8[0x10];
  bool m_IsActive;
  uint8_t m_Reserved19[0x17];
};

static_assert(sizeof(EffectBase) == 0x30);

class EffectReverb : public EffectBase {
public:
  EffectReverb();

  void RemoveEffect(nn::audio::AudioRendererConfig* config,
    OutputMixer* mixer) override;
  bool IsRemovable() const override;

  bool IsEnabled() const;
  void SetEnabled(bool isEnabled);
  void SetChannelMode(int mode);
  void SetEarlyMode(int mode);
  void SetEarlyGain(float gain);
  void SetPredelayTime(nn::TimeSpan time);
  void SetLateMode(int mode);
  void SetLateGain(float gain);
  void SetDecayTime(nn::TimeSpan time);
  void SetHighFrequencyDecayRatio(float ratio);
  void SetColoration(float coloration);
  void SetReverbGain(float gain);
  void SetOutGain(float gain);
  void SetDryGain(float gain);

private:
  int m_EarlyMode;
  float m_EarlyGain;
  nn::TimeSpan m_PredelayTime;
  int m_LateMode;
  float m_LateGain;
  nn::TimeSpan m_DecayTime;
  float m_HighFrequencyDecayRatio;
  float m_Coloration;
  float m_ReverbGain;
  float m_OutGain;
  float m_DryGain;
  bool m_IsEnabled;
  std::atomic<uint64_t> m_RemovedFrameCount;
  nn::audio::ReverbType m_Reverb;
  uint8_t m_Tail[0x20];
};

static_assert(sizeof(EffectReverb) == 0x98);

class EffectI3dl2Reverb : public EffectBase {
public:
  EffectI3dl2Reverb();

  void RemoveEffect(nn::audio::AudioRendererConfig* config,
    OutputMixer* mixer) override;
  bool IsRemovable() const override;

  bool IsEnabled() const;
  void SetEnabled(bool isEnabled);
  void SetChannelMode(int mode);
  void SetReflectionDelayTime(nn::TimeSpan time);
  void SetLateReverbDelayTime(nn::TimeSpan time);

private:
  uint8_t m_Body30[0x18];
  nn::TimeSpan m_ReflectionDelayTime;
  uint8_t m_Body50[0x8];
  nn::TimeSpan m_LateReverbDelayTime;
  uint8_t m_Body60[0x10];
  bool m_IsEnabled;
  std::atomic<uint64_t> m_RemovedFrameCount;
  nn::audio::I3dl2ReverbType m_I3dl2Reverb;
  uint8_t m_Tail[0x20];
};

static_assert(sizeof(EffectI3dl2Reverb) == 0xa8);

class EffectDelay : public EffectBase {
public:
  EffectDelay();

  void RemoveEffect(nn::audio::AudioRendererConfig* config,
    OutputMixer* mixer) override;
  bool IsRemovable() const override;

  bool IsEnabled() const;
  void SetEnabled(bool isEnabled);
  void SetChannelMode(int mode);
  bool SetDelayTimeMax(nn::TimeSpan time);
  void SetDelayTime(nn::TimeSpan time);
  void SetInGain(float gain);
  void SetFeedbackGain(float gain);
  void SetDryGain(float gain);
  void SetLowPassAmount(float amount);
  void SetChannelSpread(float spread);

private:
  nn::TimeSpan m_DelayTimeMax;
  nn::TimeSpan m_DelayTime;
  float m_InGain;
  float m_FeedbackGain;
  float m_DryGain;
  float m_LowPassAmount;
  float m_ChannelSpread;
  bool m_IsEnabled;
  std::atomic<uint64_t> m_RemovedFrameCount;
  nn::audio::DelayType m_Delay;
  uint8_t m_Tail[0x20];
};

static_assert(sizeof(EffectDelay) == 0x88);

class EffectLightLimiter : public EffectBase {
public:
  EffectLightLimiter();

  void RemoveEffect(nn::audio::AudioRendererConfig* config,
    OutputMixer* mixer) override;
  bool IsRemovable() const override;

  bool IsEnabled() const;
  void SetEnabled(bool isEnabled);
  void SetChannelMode(int mode);
  void SetAttackTime(nn::TimeSpan time);
  void SetReleaseTime(nn::TimeSpan time);
  void SetLookAheadTime(nn::TimeSpan time);
  void SetThreshold(float threshold);
  void SetInputGain(float gain);
  void SetOutputGain(float gain);

private:
  nn::TimeSpan m_AttackTime;
  nn::TimeSpan m_ReleaseTime;
  nn::TimeSpan m_LookAheadTimeMax;
  nn::TimeSpan m_LookAheadTime;
  float m_Threshold;
  float m_InputGain;
  float m_OutputGain;
  bool m_IsEnabled;
  std::atomic<uint64_t> m_RemovedFrameCount;
  nn::audio::LightLimiterType m_LightLimiter;
  uint8_t m_Tail[0x20];
};

static_assert(sizeof(EffectLightLimiter) == 0x90);

class EffectCompressor : public EffectBase {
public:
  EffectCompressor();

  void RemoveEffect(nn::audio::AudioRendererConfig* config,
    OutputMixer* mixer) override;
  bool IsRemovable() const override;

  bool IsEnabled() const;
  void SetEnabled(bool isEnabled);
  void SetChannelMode(int mode);
  void SetAttackTime(nn::TimeSpan time);
  void SetReleaseTime(nn::TimeSpan time);
  void SetThreshold(float threshold);
  void SetRatio(float ratio);
  void SetOutGain(float gain);
  void SetMakeupGainEnabled(bool isEnabled);

private:
  nn::TimeSpan m_AttackTime;
  nn::TimeSpan m_ReleaseTime;
  float m_Threshold;
  float m_Ratio;
  float m_OutGain;
  bool m_IsMakeupGainEnabled;
  bool m_IsEnabled;
  std::atomic<uint64_t> m_RemovedFrameCount;
  nn::audio::CompressorType m_Compressor;
  uint8_t m_Tail[0x20];
};

static_assert(sizeof(EffectCompressor) == 0x80);

class EffectAux {
public:
  virtual ~EffectAux();

  bool IsEnabled() const;
  void SetEnabled(bool isEnabled);
  bool IsRemovable() const;
  void SetChannelCount(int count);
  void SetBus(int bus);
  size_t GetRequiredMemSize();
  size_t GetRequiredMemSize(
    const nn::audio::AudioRendererParameter* parameter) const;

private:
  uint8_t reserved8_[0x10];
  nn::audio::AuxType m_AuxType;
  std::atomic<uint64_t> m_RemovedFrameCount;
  int m_FrameCount;
  int m_ChannelCount;
  bool m_IsActive;
  bool m_IsEnabled;
  uint8_t reserved32_[0x2e];
};

static_assert(sizeof(EffectAux) == 0x60);

}
