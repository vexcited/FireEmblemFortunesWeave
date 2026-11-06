#pragma once

#include <cstddef>
#include <cstdint>

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

private:
  uint8_t body_[0x80];
};

class EffectLightLimiter : public EffectBase {
public:
  EffectLightLimiter();

  bool IsEnabled() const;
  void SetEnabled(bool isEnabled);
  void SetChannelMode(int mode);

private:
  uint8_t body_[0x88];
};

class EffectCompressor : public EffectBase {
public:
  EffectCompressor();

  bool IsEnabled() const;
  void SetEnabled(bool isEnabled);
  void SetChannelMode(int mode);

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
