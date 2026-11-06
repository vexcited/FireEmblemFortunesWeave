#pragma once

#include <cstdint>

#include "nn/atk/effect.hpp"
#include "snd/fnd/weak_handle.hpp"
#include "snd/fx/fx.hpp"

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
  virtual void** getRegistry();
  virtual ~FxBase();

  nn::atk::EffectBase* effect;
  nn::atk::EffectAux* aux;
};

class FxReverbNX : public fx::FxReverb {
public:
  FxReverbNX(Manager* manager, void* bus, uint32_t index,
    const void* param);
  ~FxReverbNX() override;

  void enable() override;
  void disable() override;
  bool isRemovable() const override;

private:
  uint8_t unknown_1610_[0x10];
  void* buffer_;
  uint8_t unknown_1628_[0x8];
};

class FxCpuReverbNX : public fx::FxCpuReverb {
public:
  FxCpuReverbNX(Manager* manager, void* bus, uint32_t index,
    const void* param, uint32_t channels);
  ~FxCpuReverbNX() override;

  void enable() override;
  void disable() override;
  bool isRemovable() const override;

private:
  uint8_t unknown_1610_[0x10];
  void* buffer_;
  uint8_t unknown_1628_[0x10];
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

private:
  uint8_t unknown_1610_[0x10];
  void* buffer_;
  uint8_t unknown_1628_[0x8];
};

class FxCpuI3dl2ReverbNX : public fx::FxCpuI3dl2Reverb {
public:
  FxCpuI3dl2ReverbNX(Manager* manager, void* bus, uint32_t index,
    const void* param, uint32_t channels);
  ~FxCpuI3dl2ReverbNX() override;

  void enable() override;
  void disable() override;
  bool isRemovable() const override;

private:
  uint8_t unknown_1610_[0x10];
  void* buffer_;
  uint8_t unknown_1628_[0x10];
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

private:
  uint8_t unknown_1610_[0x10];
  void* buffer_;
  uint8_t unknown_1628_[0x8];
};

class FxCpuDelayNX : public fx::FxCpuDelay {
public:
  FxCpuDelayNX(Manager* manager, void* bus, uint32_t index,
    const void* param, uint32_t channels);
  ~FxCpuDelayNX() override;

  void enable() override;
  void disable() override;
  bool isRemovable() const override;

private:
  uint8_t unknown_1610_[0x10];
  void* buffer_;
  uint8_t unknown_1628_[0x10];
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

private:
  uint8_t unknown_1610_[0x10];
  void* buffer_;
  uint8_t unknown_1628_[0x8];
};

class FxCpuLightLimiterNX : public fx::FxCpuLightLimiter {
public:
  FxCpuLightLimiterNX(Manager* manager, void* bus, uint32_t index,
    const void* param, uint32_t channels);
  ~FxCpuLightLimiterNX() override;

  void enable() override;
  void disable() override;
  bool isRemovable() const override;

private:
  uint8_t unknown_1610_[0x10];
  void* buffer_;
  uint8_t unknown_1628_[0x10];
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

private:
  uint8_t unknown_1610_[0x10];
  void* buffer_;
  uint8_t unknown_1628_[0x8];
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
  uint8_t unknown_1610_[0x10];
  void* buffer_;
  uint8_t unknown_1628_[0x120];
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
  uint8_t unknown_1610_[0x10];
  void* buffer_;
  uint8_t unknown_1628_[0x20];
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
  uint8_t unknown_1610_[0x10];
  void* buffer_;
  uint8_t unknown_1628_[0x50];
};

class FxMSNX : public fx::FxMS {
public:
  FxMSNX(Manager* manager, void* bus, uint32_t index,
    uint32_t channels);
  ~FxMSNX() override;

  void enable() override;
  void disable() override;
  bool isRemovable() const override;

private:
  uint8_t unknown_1610_[0x10];
  void* buffer_;
  uint8_t unknown_1628_[0x10];
};

class FxMSEQNX : public fx::FxMSEQ {
public:
  FxMSEQNX(Manager* manager, void* bus, uint32_t index,
    uint32_t channels);
  ~FxMSEQNX() override;

  void enable() override;
  void disable() override;
  bool isRemovable() const override;

private:
  uint8_t unknown_1610_[0x10];
  void* buffer_;
  uint8_t unknown_1628_[0x10];
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
  uint8_t unknown_1610_[0x10];
  void* buffer_;
  uint8_t unknown_1628_[0x418];
};

class FxVibNX : public fx::FxVib {
public:
  FxVibNX(Manager* manager, void* bus, uint32_t index,
    uint32_t channels);
  ~FxVibNX() override;

  void enable() override;
  void disable() override;
  bool isRemovable() const override;

private:
  uint8_t unknown_1610_[0x10];
  void* buffer_;
  uint8_t unknown_1628_[0x8];
};

class FxFinalMixNX : public fx::FxFinalMix {
public:
  FxFinalMixNX(Manager* manager, void* bus, uint32_t index,
    uint32_t channels);
  ~FxFinalMixNX() override;

  void enable() override;
  void disable() override;
  bool isRemovable() const override;

private:
  uint8_t unknown_1610_[0x10];
  void* buffer_;
  uint8_t unknown_1628_[0x8];
};

class FxMuteNX : public fx::FxMute {
public:
  FxMuteNX(Manager* manager, void* bus, uint32_t index,
    uint32_t channels);
  ~FxMuteNX() override;

  void enable() override;
  void disable() override;
  bool isRemovable() const override;

private:
  uint8_t unknown_1610_[0x10];
  void* buffer_;
  uint8_t unknown_1628_[0x8];
};

class FxNoneNX : public fx::FxNone {
public:
  FxNoneNX(Manager* manager, void* bus, uint32_t index,
    uint32_t channels);
  ~FxNoneNX() override;

  void enable() override;
  void disable() override;
  bool isRemovable() const override;

private:
  uint8_t unknown_1610_[0x10];
  void* buffer_;
  uint8_t unknown_1628_[0x8];
};

class FxSurroundNX : public fx::FxSurround {
public:
  FxSurroundNX(Manager* manager, void* bus, uint32_t index,
    uint32_t channels);
  ~FxSurroundNX() override;

  void enable() override;
  void disable() override;
  bool isRemovable() const override;

private:
  uint8_t unknown_1610_[0x10];
  void* buffer_;
  uint8_t unknown_1628_[0x8];
};

class FxLFENX : public fx::FxLFE {
public:
  FxLFENX(Manager* manager, void* bus, uint32_t index,
    uint32_t channels);
  ~FxLFENX() override;

  void enable() override;
  void disable() override;
  bool isRemovable() const override;

private:
  uint8_t unknown_1610_[0x10];
  void* buffer_;
  uint8_t unknown_1628_[0x8];
};

class FxSimpleLimiterNX : public fx::FxSimpleLimiter {
public:
  FxSimpleLimiterNX(Manager* manager, void* bus, uint32_t index,
    uint32_t channels);
  ~FxSimpleLimiterNX() override;

  void enable() override;
  void disable() override;
  bool isRemovable() const override;

private:
  uint8_t unknown_1610_[0x10];
  void* buffer_;
  uint8_t unknown_1628_[0x8];
};

class FxWaveformNX : public fx::FxWaveform {
public:
  FxWaveformNX(Manager* manager, void* bus, uint32_t index,
    uint32_t channels);
  ~FxWaveformNX() override;

  void enable() override;
  void disable() override;
  bool isRemovable() const override;

private:
  uint8_t unknown_1610_[0x10];
  void* buffer_;
  uint8_t unknown_1628_[0x8];
};

class FxSpeakerNX : public fx::FxSpeaker {
public:
  FxSpeakerNX(Manager* manager, void* bus, uint32_t index,
    uint32_t channels);
  ~FxSpeakerNX() override;

  void enable() override;
  void disable() override;
  bool isRemovable() const override;

private:
  uint8_t unknown_1610_[0x10];
  void* buffer_;
  uint8_t unknown_1628_[0x8];
};

class FxPCMPlayerNX : public fx::FxPCMPlayer {
public:
  FxPCMPlayerNX(Manager* manager, void* bus, uint32_t index,
    uint32_t channels);
  ~FxPCMPlayerNX() override;

  void enable() override;
  void disable() override;
  bool isRemovable() const override;

private:
  uint8_t unknown_1610_[0x10];
  void* buffer_;
  uint8_t unknown_1628_[0x8];
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
  uint8_t unknown_1610_[0x10];
  void* buffer_;
  uint8_t unknown_1628_[0x40];
};

}
