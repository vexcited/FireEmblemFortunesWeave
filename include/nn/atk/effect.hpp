#pragma once

#include <cstddef>
#include <cstdint>

#include "nn/audio/renderer_config.hpp"

namespace nn::atk {

// Only the parts the sound engine effects call.
class EffectBase {
public:
  virtual ~EffectBase();

  virtual size_t GetRequiredMemSize();
  virtual void reserved18();
  virtual void reserved20();
  virtual void reserved28();
  virtual bool IsRemovable() const;

  void SetActive(bool isActive);
};

class EffectReverb : public EffectBase {
public:
  EffectReverb();

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
  uint8_t body_[0x90];
};

class EffectI3dl2Reverb : public EffectBase {
public:
  EffectI3dl2Reverb();

  bool IsEnabled() const;
  void SetEnabled(bool isEnabled);
  void SetChannelMode(int mode);

private:
  uint8_t body_[0xa0];
};

class EffectDelay : public EffectBase {
public:
  EffectDelay();

  bool IsEnabled() const;
  void SetEnabled(bool isEnabled);
  void SetChannelMode(int mode);
  void SetDelayTimeMax(nn::TimeSpan time);
  void SetDelayTime(nn::TimeSpan time);
  void SetInGain(float gain);
  void SetFeedbackGain(float gain);
  void SetDryGain(float gain);
  void SetLowPassAmount(float amount);
  void SetChannelSpread(float spread);

private:
  uint8_t body_[0x80];
};

class EffectLightLimiter : public EffectBase {
public:
  EffectLightLimiter();

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
  uint8_t body_[0x88];
};

class EffectCompressor : public EffectBase {
public:
  EffectCompressor();

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
  uint8_t body_[0x78];
};

class EffectAux {
public:
  virtual ~EffectAux();

  bool IsEnabled() const;
  void SetEnabled(bool isEnabled);
  bool IsRemovable() const;
  void SetChannelCount(int count);
  void SetBus(int bus);
  size_t GetRequiredMemSize();

private:
  uint8_t reserved8_[0x58];
};

}
