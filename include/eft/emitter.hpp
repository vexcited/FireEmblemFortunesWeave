#pragma once

#include <arm_neon.h>
#include <stdint.h>

#include <optional>

#include "nn/util/intrusive_list.hpp"

namespace eft {

#pragma GCC visibility push(hidden)

class Srt {
public:
  virtual ~Srt();

private:
  uint8_t unknown08_[0x80];
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
  uint8_t unknown98_[0x1c];
  bool unknownB4_;
  uint8_t unknownB5_;
  bool unknownB6_;
  uint8_t unknownB7_[0x29];
  EmitterColor* color_;
  uint8_t unknownE8_[0xd8];
};

class EffectEmitter : public Emitter {};

class NormalEmitter : public EffectEmitter {
public:
  ~NormalEmitter() override;

  void Unknown10(bool value) override;
  void SetOffset(float x, float y, float z) override;
  bool Unknown12() override;
  std::optional<float32x4_t> Unknown17() override;

private:
  float32x4_t offset_;
  bool hasOffset_;
  uint8_t unknown1d1_[0x7];
  uint8_t unknown1d8_[0x10];
  bool unknown1e8_;
  uint8_t unknown1e9_;
  uint8_t unknown1ea_;
};

struct EmitterModel {
  EmitterModel* root;
  uint8_t unknown08_[0x18];
  bool hidden;
};

class ModelEmitter : public Emitter {
public:
  ~ModelEmitter() override;

  bool Unknown04() override;
  void Hide() override;
  void Show() override;
  void Unknown07() override;
  bool Unknown12() override;

private:
  uint8_t unknown1c0_[0x12];
  bool keepVisible_;
  bool stopped_;
  uint8_t unknown1d4_[0x4];
  EmitterModel* model_;
};

class VATModelEmitter : public Emitter {
public:
  ~VATModelEmitter() override;

  bool Unknown04() override;
  void Hide() override;
  void Show() override;
  void Unknown07() override;
  bool Unknown12() override;

private:
  uint8_t unknown1c0_[0x12];
  bool keepVisible_;
  bool stopped_;
  uint8_t unknown1d4_[0x4];
  EmitterModel* model_;
};

#pragma GCC visibility pop

}
