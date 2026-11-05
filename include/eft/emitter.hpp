#pragma once

#include <arm_neon.h>
#include <stdint.h>

#include <memory>
#include <optional>
#include <vector>

#include "nn/util/intrusive_list.hpp"

namespace eft {

#pragma GCC visibility push(hidden)

class Srt {
public:
  virtual ~Srt();

private:
  uint8_t unknown08_[0x80];
};

// The handled emitter set, the method names are guesses.
class EmitterSet {
public:
  void Stop();
  bool IsDone() const;
  void Release(bool immediate);
  void Start(int frames);

  bool HasLife() const {
    return life_ >= 1 && alive_ != 0;
  }

  uint8_t unknown00_[0x8];
  uint8_t done_;
  uint8_t paused_;
  uint8_t unknown0a_;
  uint8_t visible_;
  uint8_t alive_;
  uint8_t unknown0d_[0x1f];
  int32_t id_;
  uint8_t unknown30_[0x14c];
  int32_t life_;
  uint8_t unknown180_[0x40];
  void* owner_;
};

// A weak handle, the set it points to stays valid while the ids match.
class EmitterSetHandle {
public:
  EmitterSet* Get();
  const EmitterSet* Get() const;

  bool IsValid() const {
    return set_ != nullptr && id_ == set_->id_;
  }

private:
  EmitterSet* set_;
  int32_t id_;
};

struct EmitterColor {
  float r;
  float g;
  float b;
  float a;
};

// Emitter slots without a known caller keep their index as name. The
// first ones hide and show the emitter through the alpha of its color.
class Emitter : public Srt, public nn::util::IntrusiveListBaseNode<Emitter> {
public:
  ~Emitter() override;

  virtual void Unknown02();
  virtual void Unknown03();
  virtual bool Unknown04();
  virtual void Hide();
  virtual void Show();
  virtual void Unknown07();
  virtual void Unknown08();
  virtual bool Unknown09();
  virtual void Unknown10(bool value);
  virtual void SetOffset(float x, float y, float z);
  virtual bool Unknown12();
  virtual void Unknown13();
  virtual bool Unknown14();
  virtual void Unknown15(int value);
  virtual void Unknown16();
  virtual std::optional<float32x4_t> Unknown17();

protected:
  // Unlinks the emitter from its group, frees it and deletes it.
  void Destroy();

  uint8_t unknown98_[0x18];
  uint32_t groupIndex_;
  bool unknownB4_;
  uint8_t unknownB5_;
  bool unknownB6_;
  uint8_t unknownB7_[0x29];
  EmitterColor* color_;
  uint8_t unknownE8_[0xc];
  int32_t startFrames_;
  uint8_t unknownF8_[0x60];
  bool stoppedSet_;
  uint8_t unknown159_[0x43];
  int32_t pendingFrames_;
  uint8_t unknown1a0_[0x20];
};

// Effect emitters drive an emitter set through a weak handle.
class EffectEmitter : public Emitter {
public:
  void Unknown02() override;
  ~EffectEmitter() override;

  bool Unknown04() override;
  void Unknown07() override;
  void Unknown08() override;
  bool Unknown09() override;
  bool Unknown14() override;
  void Unknown15(int value) override;
  void Unknown16() override;

protected:
  float32x4_t offset_;
  bool hasOffset_;
  uint8_t unknown1d1_[0x7];
  EmitterSetHandle set_;
  bool unknown1e8_;
  uint8_t unknown1e9_;
  uint8_t unknown1ea_;
};

class NormalEmitter : public EffectEmitter {
public:
  void Unknown03() override;
  ~NormalEmitter() override;

  void Hide() override;
  void Show() override;
  bool Unknown09() override;
  void Unknown10(bool value) override;
  void SetOffset(float x, float y, float z) override;
  bool Unknown12() override;
  std::optional<float32x4_t> Unknown17() override;
};

struct JointMatrix {
  float32x4_t rows[4];
};

struct Skeleton {
  uint8_t unknown00_[0x20];
  const JointMatrix* matrices;
};

// Clamps a value between two bounds, the curve of a still animation.
[[gnu::visibility("default")]] float ClampCurve(float value, float low,
  float high);

struct AnimationCurve {
  uint8_t unknown00_[0x10];
  float (*evaluate)(float value, float low, float high);
};

struct ModelAnimation {
  uint8_t unknown00_[0x10];
  const AnimationCurve* curve;
};

struct EmitterModel {
  ~EmitterModel();

  EmitterModel* root;
  uint8_t unknown08_[0x18];
  bool hidden;
  uint8_t unknown21_[0x3];
  int32_t animation;
  std::vector<ModelAnimation*> animations;
  uint8_t unknown40_[0x150];
  const Skeleton* skeleton;
  int32_t joint;
};

struct VATEmitterModel {
  ~VATEmitterModel();

  VATEmitterModel* root;
  uint8_t unknown08_[0x18];
  bool hidden;
  uint8_t unknown21_[0x15];
  bool keepsVisible;
  bool alwaysVisible;
  const Skeleton* skeleton;
  int32_t joint;
};

class EffectRegistry {
public:
  void Remove(void* entry);
};

using EmitterList = nn::util::IntrusiveList<Emitter,
  nn::util::IntrusiveListBaseNodeTraits<Emitter>>;

struct EmitterGroup {
  uint8_t unknown00_[0x40];
  EmitterList emitters;
};

class EmitterPool {
public:
  void Free(Emitter* emitter);
};

// The effect system the emitters register with, its name is a guess.
struct EffectSystem {
  uint8_t unknown00_[0x68];
  EffectRegistry* registry;
  uint8_t unknown70_[0xb0];
  std::vector<std::vector<EmitterGroup*>> layers;
  uint8_t unknown138_[0x80];
  EmitterPool* pool;
};

extern EffectSystem* g_effectSystem;

inline void Emitter::Destroy() {
  EffectSystem* system = g_effectSystem;
  EmitterList& list = system->layers.back()[groupIndex_]->emitters;
  const EmitterList::iterator it = list.iterator_to(*this);
  if (it != list.end()) {
    list.erase(it);
  }
  system->pool->Free(this);
  delete this;
}

class ModelEmitter : public Emitter {
public:
  ~ModelEmitter() override;

  bool Unknown04() override;
  void Hide() override;
  void Show() override;
  void Unknown07() override;
  void Unknown08() override;
  bool Unknown09() override;
  bool Unknown12() override;
  std::optional<float32x4_t> Unknown17() override;

private:
  uint8_t unknown1c0_[0x12];
  bool keepVisible_;
  bool stopped_;
  uint8_t unknown1d4_[0x4];
  std::unique_ptr<EmitterModel> model_;
  void* entry_;
};

class VATModelEmitter : public Emitter {
public:
  ~VATModelEmitter() override;

  bool Unknown04() override;
  void Hide() override;
  void Show() override;
  void Unknown07() override;
  void Unknown08() override;
  bool Unknown09() override;
  bool Unknown12() override;
  std::optional<float32x4_t> Unknown17() override;

private:
  uint8_t unknown1c0_[0x12];
  bool keepVisible_;
  bool stopped_;
  uint8_t unknown1d4_[0x4];
  std::unique_ptr<VATEmitterModel> model_;
  void* entry_;
};

#pragma GCC visibility pop

}
