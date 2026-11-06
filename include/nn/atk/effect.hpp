#pragma once

namespace nn::atk {

// Only the parts the sound engine effects call.
class EffectBase {
public:
  virtual ~EffectBase();

  virtual void reserved10();
  virtual void reserved18();
  virtual void reserved20();
  virtual void reserved28();
  virtual bool IsRemovable() const;
};

class EffectReverb : public EffectBase {
public:
  bool IsEnabled() const;
  void SetEnabled(bool isEnabled);
};

class EffectI3dl2Reverb : public EffectBase {
public:
  bool IsEnabled() const;
  void SetEnabled(bool isEnabled);
};

class EffectDelay : public EffectBase {
public:
  bool IsEnabled() const;
  void SetEnabled(bool isEnabled);
};

class EffectLightLimiter : public EffectBase {
public:
  bool IsEnabled() const;
  void SetEnabled(bool isEnabled);
};

class EffectCompressor : public EffectBase {
public:
  bool IsEnabled() const;
  void SetEnabled(bool isEnabled);
};

class EffectAux {
public:
  bool IsEnabled() const;
  void SetEnabled(bool isEnabled);
  bool IsRemovable() const;
};

}
