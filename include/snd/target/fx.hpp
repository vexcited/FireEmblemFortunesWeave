#pragma once

#include <cstdint>

#include "nn/atk/effect.hpp"
#include "snd/fnd/weak_handle.hpp"
#include "snd/fx/fx.hpp"
#include "snd/memory.hpp"

namespace snd {

class Manager;

}

namespace snd::target {

// The platform object an effect owns at 0x15f8, the toolkit effect of the
// built in kinds and the auxiliary effect of the others.
class Base;

// The platform the effect buffers come from, reached directly.
[[gnu::visibility("hidden")]] extern Base* s_platform;

class FxBase {
public:
  FxBase() = default;

  virtual void** getRegistry();
  virtual ~FxBase();

  void setEffect(nn::atk::EffectBase* newEffect) {
    nn::atk::EffectBase* old = effect;
    effect = newEffect;
    if (old != nullptr) {
      snd::destroy(old);
    }
  }

  void setAux(nn::atk::EffectAux* effect) {
    nn::atk::EffectAux* old = aux;
    aux = effect;
    if (old != nullptr) {
      snd::destroy(old);
    }
  }

  nn::atk::EffectBase* effect = nullptr;
  nn::atk::EffectAux* aux = nullptr;
};

// A software effect, which renders into a work buffer of its own.
class CpuReverbEffect : public nn::atk::EffectAux {
public:
  CpuReverbEffect();

  size_t getWorkBufferSize();
  void setWorkBuffer(void* buffer, size_t size);

  uint8_t unknown_60_[0x60];
  int bus;
  int sampleRate;
};

// A software effect, which renders into a work buffer of its own.
class CpuI3dl2ReverbEffect : public nn::atk::EffectAux {
public:
  CpuI3dl2ReverbEffect();

  size_t getWorkBufferSize();
  void setWorkBuffer(void* buffer, size_t size);

  uint8_t unknown_60_[0x60];
  int bus;
  int sampleRate;
};

// A software effect, which renders into a work buffer of its own.
class CpuDelayEffect : public nn::atk::EffectAux {
public:
  CpuDelayEffect();

  size_t getWorkBufferSize();
  void setWorkBuffer(void* buffer, size_t size);

  uint8_t unknown_60_[0x50];
  int bus;
  int sampleRate;
  uint8_t unknown_b8_[0x8];
};

// A software effect, which renders into a work buffer of its own.
class CpuLightLimiterEffect : public nn::atk::EffectAux {
public:
  CpuLightLimiterEffect();

  size_t getWorkBufferSize();
  void setWorkBuffer(void* buffer, size_t size);

  uint8_t unknown_60_[0x58];
  int bus;
  int sampleRate;
  uint8_t unknown_c0_[0x8];
};

// The auxiliary effects the game implements on top of the toolkit, only
// their sizes and constructors are known here.
class MultiBridgeEffect : public nn::atk::EffectAux {
public:
  explicit MultiBridgeEffect(int bridges);

private:
  uint8_t body_[0x40];
};

class EQEffect : public nn::atk::EffectAux {
public:
  EQEffect();

private:
  uint8_t body_[0x38];
};

class WaveformEffect : public nn::atk::EffectAux {
public:
  WaveformEffect();

private:
  uint8_t body_[0x30];
};

class MSEffect : public nn::atk::EffectAux {
public:
  MSEffect();

private:
  uint8_t body_[0x40];
};

class MSEQEffect : public nn::atk::EffectAux {
public:
  MSEQEffect();

private:
  uint8_t body_[0x40];
};

class VibEffect : public nn::atk::EffectAux {
public:
  VibEffect();

private:
  uint8_t body_[0x70];
};

class FinalMixEffect : public nn::atk::EffectAux {
public:
  FinalMixEffect();

private:
  uint8_t body_[0x38];
};

class MuteEffect : public nn::atk::EffectAux {
public:
  MuteEffect();

private:
  uint8_t body_[0x8];
};

class NoneEffect : public nn::atk::EffectAux {
public:
  NoneEffect();

private:
  uint8_t body_[0x8];
};

class SurroundEffect : public nn::atk::EffectAux {
public:
  SurroundEffect();

private:
  uint8_t body_[0x6098];
};

class LFEEffect : public nn::atk::EffectAux {
public:
  LFEEffect();

private:
  uint8_t body_[0x48];
};

class SimpleLimiterEffect : public nn::atk::EffectAux {
public:
  SimpleLimiterEffect();

private:
  uint8_t body_[0x1018];
};

class SpeakerEffect : public nn::atk::EffectAux {
public:
  SpeakerEffect();

private:
  uint8_t body_[0x1860];
};

class PCMPlayerEffect : public nn::atk::EffectAux {
public:
  PCMPlayerEffect();

private:
  uint8_t body_[0x88];
};


class FxReverbNX : public fx::FxReverb {
public:
  FxReverbNX(Manager* manager, void* bus, uint32_t index,
    const void* param);
  ~FxReverbNX() override;

  void enable() override;
  void disable() override;
  bool isRemovable() const override;
  void setParam(const void* param, float scale) override;
};

class FxCpuReverbNX : public fx::FxCpuReverb {
public:
  FxCpuReverbNX(Manager* manager, void* bus, uint32_t index,
    const void* param, uint32_t channels);
  ~FxCpuReverbNX() override;

  void enable() override;
  void disable() override;
  bool isRemovable() const override;
  void setParam(const void* param, float scale) override;

private:
  size_t workBufferSize_;
  void* buffer2_;
};

class FxI3dl2ReverbNX : public fx::FxI3dl2Reverb {
public:
  FxI3dl2ReverbNX(Manager* manager, void* bus, uint32_t index,
    const void* param);
  ~FxI3dl2ReverbNX() override;

  void enable() override;
  void disable() override;
  bool isRemovable() const override;
  void setParam(const void* param, float scale) override;
};

class FxCpuI3dl2ReverbNX : public fx::FxCpuI3dl2Reverb {
public:
  FxCpuI3dl2ReverbNX(Manager* manager, void* bus, uint32_t index,
    const void* param, uint32_t channels);
  ~FxCpuI3dl2ReverbNX() override;

  void enable() override;
  void disable() override;
  bool isRemovable() const override;
  void setParam(const void* param, float scale) override;

private:
  size_t workBufferSize_;
  void* buffer2_;
};

class FxDelayNX : public fx::FxDelay {
public:
  FxDelayNX(Manager* manager, void* bus, uint32_t index,
    const void* param);
  ~FxDelayNX() override;

  void enable() override;
  void disable() override;
  bool isRemovable() const override;
  void setParam(const void* param, float scale) override;
};

class FxCpuDelayNX : public fx::FxCpuDelay {
public:
  FxCpuDelayNX(Manager* manager, void* bus, uint32_t index,
    const void* param, uint32_t channels);
  ~FxCpuDelayNX() override;

  void enable() override;
  void disable() override;
  bool isRemovable() const override;
  void setParam(const void* param, float scale) override;

private:
  size_t workBufferSize_;
  void* buffer2_;
};

class FxLightLimiterNX : public fx::FxLightLimiter {
public:
  FxLightLimiterNX(Manager* manager, void* bus, uint32_t index,
    const void* param);
  ~FxLightLimiterNX() override;

  void enable() override;
  void disable() override;
  bool isRemovable() const override;
  void setParam(const void* param, float scale) override;
};

class FxCpuLightLimiterNX : public fx::FxCpuLightLimiter {
public:
  FxCpuLightLimiterNX(Manager* manager, void* bus, uint32_t index,
    const void* param, uint32_t channels);
  ~FxCpuLightLimiterNX() override;

  void enable() override;
  void disable() override;
  bool isRemovable() const override;
  void setParam(const void* param, float scale) override;

private:
  size_t workBufferSize_;
  void* buffer2_;
};

class FxCompressorNX : public fx::FxCompressor {
public:
  FxCompressorNX(Manager* manager, void* bus, uint32_t index,
    const void* param);
  ~FxCompressorNX() override;

  void enable() override;
  void disable() override;
  bool isRemovable() const override;
  void setParam(const void* param, float scale) override;
};

class FxFFTNX : public fx::FxFFT {
public:
  FxFFTNX(Manager* manager, void* bus, fnd::WeakHandle target, uint32_t index,
    uint32_t channels);
  FxFFTNX(Manager* manager, void* bus, fnd::WeakHandle target,
    fnd::WeakHandle source, uint32_t index, uint32_t channels);
  ~FxFFTNX() override;

  void enable() override;
  void disable() override;
  bool isRemovable() const override;

private:
  uint8_t unknown_1630_[0x118];
};

class FxMSCtrlNX : public fx::FxMSCtrl {
public:
  FxMSCtrlNX(Manager* manager, void* bus, fnd::WeakHandle target,
    uint32_t index, uint32_t channels);
  ~FxMSCtrlNX() override;

  void enable() override;
  void disable() override;
  bool isRemovable() const override;

private:
  uint8_t unknown_1630_[0x18];
};

class FxEQNX : public fx::FxEQ {
public:
  FxEQNX(Manager* manager, void* bus, uint32_t index,
    uint32_t channels);
  ~FxEQNX() override;

  void enable() override;
  void disable() override;
  bool isRemovable() const override;

private:
  uint8_t unknown_1630_[0x48];
};

class FxMSNX : public fx::FxMS {
public:
  FxMSNX(Manager* manager, void* bus, uint32_t index,
    uint32_t channels);
  ~FxMSNX() override;

  void enable() override;
  void disable() override;
  bool isRemovable() const override;
};

class FxMSEQNX : public fx::FxMSEQ {
public:
  FxMSEQNX(Manager* manager, void* bus, uint32_t index,
    uint32_t channels);
  ~FxMSEQNX() override;

  void enable() override;
  void disable() override;
  bool isRemovable() const override;
};

class FxSpectrumNX : public fx::FxSpectrum {
public:
  FxSpectrumNX(Manager* manager, void* bus, uint32_t index,
    uint32_t channels);
  ~FxSpectrumNX() override;

  void enable() override;
  void disable() override;
  bool isRemovable() const override;

private:
  uint8_t unknown_1630_[0x410];
};

class FxVibNX : public fx::FxVib {
public:
  FxVibNX(Manager* manager, void* bus, uint32_t index,
    uint32_t channels);
  ~FxVibNX() override;

  void enable() override;
  void disable() override;
  bool isRemovable() const override;
};

class FxFinalMixNX : public fx::FxFinalMix {
public:
  FxFinalMixNX(Manager* manager, void* bus, uint32_t index,
    uint32_t channels);
  ~FxFinalMixNX() override;

  void enable() override;
  void disable() override;
  bool isRemovable() const override;
};

class FxMuteNX : public fx::FxMute {
public:
  FxMuteNX(Manager* manager, void* bus, uint32_t index,
    uint32_t channels);
  ~FxMuteNX() override;

  void enable() override;
  void disable() override;
  bool isRemovable() const override;
};

class FxNoneNX : public fx::FxNone {
public:
  FxNoneNX(Manager* manager, void* bus, uint32_t index,
    uint32_t channels);
  ~FxNoneNX() override;

  void enable() override;
  void disable() override;
  bool isRemovable() const override;
};

class FxSurroundNX : public fx::FxSurround {
public:
  FxSurroundNX(Manager* manager, void* bus, uint32_t index,
    uint32_t channels);
  ~FxSurroundNX() override;

  void enable() override;
  void disable() override;
  bool isRemovable() const override;
};

class FxLFENX : public fx::FxLFE {
public:
  FxLFENX(Manager* manager, void* bus, uint32_t index,
    uint32_t channels);
  ~FxLFENX() override;

  void enable() override;
  void disable() override;
  bool isRemovable() const override;
};

class FxSimpleLimiterNX : public fx::FxSimpleLimiter {
public:
  FxSimpleLimiterNX(Manager* manager, void* bus, uint32_t index,
    uint32_t channels);
  ~FxSimpleLimiterNX() override;

  void enable() override;
  void disable() override;
  bool isRemovable() const override;
};

class FxWaveformNX : public fx::FxWaveform {
public:
  FxWaveformNX(Manager* manager, void* bus, uint32_t index,
    uint32_t channels);
  ~FxWaveformNX() override;

  void enable() override;
  void disable() override;
  bool isRemovable() const override;
};

class FxSpeakerNX : public fx::FxSpeaker {
public:
  FxSpeakerNX(Manager* manager, void* bus, uint32_t index,
    uint32_t channels);
  ~FxSpeakerNX() override;

  void enable() override;
  void disable() override;
  bool isRemovable() const override;
};

class FxPCMPlayerNX : public fx::FxPCMPlayer {
public:
  FxPCMPlayerNX(Manager* manager, void* bus, uint32_t index,
    uint32_t channels);
  ~FxPCMPlayerNX() override;

  void enable() override;
  void disable() override;
  bool isRemovable() const override;
};

class FxMultiBridgeNX : public fx::FxMultiBridge {
public:
  FxMultiBridgeNX(Manager* manager, void* bus, uint32_t index,
    uint32_t channels, uint32_t count);
  ~FxMultiBridgeNX() override;

  void enable() override;
  void disable() override;
  bool isRemovable() const override;

private:
  uint8_t unknown_1630_[0x38];
};

static_assert(sizeof(FxReverbNX) == 0x1630);
static_assert(sizeof(FxCpuReverbNX) == 0x1640);
static_assert(sizeof(FxI3dl2ReverbNX) == 0x1630);
static_assert(sizeof(FxCpuI3dl2ReverbNX) == 0x1640);
static_assert(sizeof(FxDelayNX) == 0x1630);
static_assert(sizeof(FxCpuDelayNX) == 0x1640);
static_assert(sizeof(FxLightLimiterNX) == 0x1630);
static_assert(sizeof(FxCpuLightLimiterNX) == 0x1640);
static_assert(sizeof(FxCompressorNX) == 0x1630);
static_assert(sizeof(FxFFTNX) == 0x1748);
static_assert(sizeof(FxMSCtrlNX) == 0x1648);
static_assert(sizeof(FxEQNX) == 0x1678);
static_assert(sizeof(FxMSNX) == 0x1638);
static_assert(sizeof(FxMSEQNX) == 0x1638);
static_assert(sizeof(FxSpectrumNX) == 0x1a40);
static_assert(sizeof(FxVibNX) == 0x1630);
static_assert(sizeof(FxFinalMixNX) == 0x1630);
static_assert(sizeof(FxMuteNX) == 0x1630);
static_assert(sizeof(FxNoneNX) == 0x1630);
static_assert(sizeof(FxSurroundNX) == 0x1630);
static_assert(sizeof(FxLFENX) == 0x1630);
static_assert(sizeof(FxSimpleLimiterNX) == 0x1630);
static_assert(sizeof(FxWaveformNX) == 0x1630);
static_assert(sizeof(FxSpeakerNX) == 0x1630);
static_assert(sizeof(FxPCMPlayerNX) == 0x1630);
static_assert(sizeof(FxMultiBridgeNX) == 0x1668);

}
