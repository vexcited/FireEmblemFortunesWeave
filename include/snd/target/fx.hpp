#pragma once

#include <cstdint>

#include "nn/atk/effect.hpp"
#include "nn/audio/effect_api.hpp"
#include "nn/audio/renderer_config.hpp"
#include "snd/fnd/weak_handle.hpp"
#include "snd/fx/fx.hpp"
#include "snd/memory.hpp"

namespace snd {

class Manager;

}

namespace snd::target {

// The parameter blocks of the sound data, converted to the toolkit units
// when an effect applies them.
struct ReverbParam {
  int earlyMode;
  float earlyGain;
  int predelayTime;
  int lateMode;
  float lateGain;
  float coloration;
  float highFreqDecayRatio;
  int decayTime;
  float reverbGain;
  float dryGain;
  float outGain;
};

struct DelayParam {
  int delayTimeMax;
  int delayTime;
  float feedbackGain;
  float lowPassAmount;
  float channelSpread;
  float inGain;
  float dryGain;
  float inScale;
};

struct CompressorParam {
  int attackTime;
  int releaseTime;
  float threshold;
  float ratio;
  float outGain;
  bool makeupGain;
};

struct LightLimiterParam {
  int attackTime;
  int releaseTime;
  int lookAheadTime;
  float threshold;
  float inputGain;
  float outputGain;
};

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
  void updateParameters();

  uint8_t unknown_60_[0x8];
  nn::audio::AuxReverbType reverb;
  nn::audio::ReverbParameterSet parameters;
  uint8_t unknown_a4_[0xc];
  void* workBuffer;
  uint8_t unknown_b8_[0x8];
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
  void updateParameters();

  uint8_t unknown_60_[0x8];
  nn::audio::AuxDelayType delay;
  nn::audio::DelayParameterSet parameters;
  uint8_t unknown_98_[0x8];
  void* workBuffer;
  uint8_t unknown_a8_[0x8];
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
  void updateParameters();

  uint8_t unknown_60_[0x8];
  nn::audio::AuxLightLimiterType limiter;
  nn::audio::LightLimiterParameterSet parameters;
  uint8_t unknown_a0_[0x8];
  void* workBuffer;
  uint8_t unknown_b0_[0x8];
  int bus;
  int sampleRate;
  uint8_t unknown_c0_[0x8];
};

// The auxiliary effects the game implements on top of the toolkit, only
// their sizes and constructors are known here.
class SpectrumEffect : public nn::atk::EffectAux {
public:
  uint8_t unknown_60_[0x8010];
  bool unknown_8070_;
};

class FFTEffect : public nn::atk::EffectAux {
public:
  FFTEffect();

private:
  uint8_t body_[0x90];
};

class MSCtrlEffect : public nn::atk::EffectAux {
public:
  MSCtrlEffect();

  uint8_t unknown_60_[0x8];
  int unknown_68_;
  uint8_t unknown_6c_[0x4];
};

class MultiBridgeEffect : public nn::atk::EffectAux {
public:
  explicit MultiBridgeEffect(int bridges);

private:
  uint8_t body_[0x40];
};

class EQEffect : public nn::atk::EffectAux {
public:
  EQEffect();

  int getLatency() const;

private:
  uint8_t body_[0x30];
  uint8_t latency_;
  uint8_t unknown_91_[0x7];
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

  void unknown16d9b0(int);
  void unknown16d9d0(int, float, int);

  uint8_t unknown_60_[0x10];
  float unknown_70_;
  float unknown_74_;
  uint8_t unknown_78_[0x28];
};

class MSEQEffect : public nn::atk::EffectAux {
public:
  MSEQEffect();

  void unknown16ed70(int);
  void unknown16ed90(int, float, int);

  uint8_t unknown_60_[0x10];
  float unknown_70_;
  float unknown_74_;
  uint8_t unknown_78_[0x28];
};

class VibEffect : public nn::atk::EffectAux {
public:
  void unknown173230(fx::FxBase* owner, int value);
  struct Channel {
    float gain;
    float pan;
    float surroundPan;
  };

  VibEffect();

  void unknown173100(int, float, int);
  void unknown173180(int, float, int);
  int unknown173210(int);

  uint8_t unknown_60_[0x10];
  float unknown_70_;
  float unknown_74_;
  float unknown_78_;
  float unknown_7c_;
  float unknown_80_;
  float unknown_84_;
  uint8_t unknown_88_[0x20];
  Channel channels[3];
  uint8_t unknown_cc_[0x4];
};

class FinalMixEffect : public nn::atk::EffectAux {
public:
  FinalMixEffect();

  void setUnknown70(bool value);

private:
  uint8_t unknown_60_[0x10];
  bool unknown_70_;
  uint8_t unknown_71_[0x27];
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

  void setUnknown175410(bool);
  void unknown175420(int);
  void unknown175480(int);
  void unknown1754e0(int);
  void unknown175540(int);
  void unknown1755a0(int);
  void unknown175600(int);
  void unknown175660(int, float);
  void unknown175740(int, int);
  void unknown175800(int, float);
  void unknown175c20(int);

  uint8_t unknown_60_[0x8];
  bool unknown_68_;
  uint8_t unknown_69_[0x3];
  int unknown_6c_;
  int unknown_70_;
  int unknown_74_;
  int unknown_78_;
  int unknown_7c_;
  int unknown_80_;
  int unknown_84_;
  uint8_t unknown_88_[0x6058];
  uint16_t unknown_60e0_[2];
  float unknown_60e4_[2];
  float unknown_60ec_[2];
  uint8_t unknown_60f4_[0x4];
};

class LFEEffect : public nn::atk::EffectAux {
public:
  LFEEffect();

  void unknown176550(int);
  void unknown176570(int, float, int);

  uint8_t unknown_60_[0x14];
  float unknown_74_;
  uint8_t unknown_78_[0x4];
  float unknown_7c_;
  bool unknown_80_;
  uint8_t unknown_81_[0x27];
};

class SimpleLimiterEffect : public nn::atk::EffectAux {
public:
  SimpleLimiterEffect();

  void enableUnknown68();
  void disableUnknown68();
  int getUnknown1074() const;

  uint8_t unknown_60_[0x8];
  bool unknown_68_;
  uint8_t unknown_69_[0x1007];
  float unknown_1070_;
  int unknown_1074_;
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

  void unknown191740(int);
  void unknown191900(const void*, int);
  int unknown191c60();
  void unknown190d00();
  void setLatency(int latency);
  int getLatency() const;

  uint8_t unknown_60_[0x38];
  int unknown_98_;
  uint8_t unknown_9c_[0x8];
  uint8_t unknown_a4_;
  uint8_t latency_;
  uint8_t unknown_a6_[0x1a];
  uint64_t unknown_c0_;
  uint8_t unknown_c8_[0x20];
};


class FxReverbNX : public fx::FxReverb {
public:
  FxReverbNX(Manager* manager, void* bus, uint32_t index,
    const void* param);
  ~FxReverbNX() override;

  void enable() override;
  void disable() override;
  bool isRemovable() const override;
  void** getRegistry() override;
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
  void** getRegistry() override;
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
  void** getRegistry() override;
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
  void** getRegistry() override;
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
  void** getRegistry() override;
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
  void** getRegistry() override;
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
  void** getRegistry() override;
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
  void** getRegistry() override;
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
  void** getRegistry() override;
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
  void** getRegistry() override;

private:
  uint64_t unknown_1650_[6] = {};
  uint16_t unknown_1680_ = 0;
  uint64_t unknown_1688_[24] = {};
};

class FxMSCtrlNX : public fx::FxMSCtrl {
public:
  FxMSCtrlNX(Manager* manager, void* bus, fnd::WeakHandle target,
    uint32_t index, uint32_t channels);
  ~FxMSCtrlNX() override;

  void enable() override;
  void disable() override;
  bool isRemovable() const override;
  void** getRegistry() override;
  float unknown27() override;
  int unknown26() override;
  int unknown25() override;
  void unknown24(int) override;

private:
  uint8_t unknown_1630_[0x10];
  int unknown_1640_ = -100;
  float unknown_1644_ = 0.0f;
};

class FxEQNX : public fx::FxEQ {
public:
  FxEQNX(Manager* manager, void* bus, uint32_t index,
    uint32_t channels);
  ~FxEQNX() override;

  void enable() override;
  void disable() override;
  int getLatency() const override;
  bool isRemovable() const override;
  void** getRegistry() override;

private:
  uint64_t unknown_1630_[9] = {};
};

class FxMSNX : public fx::FxMS {
public:
  FxMSNX(Manager* manager, void* bus, uint32_t index,
    uint32_t channels);
  ~FxMSNX() override;

  void enable() override;
  void disable() override;
  bool isRemovable() const override;
  void** getRegistry() override;
  void unknown27(int, float, int) override;
  void unknown26(int) override;
  float unknown25() override;
  void unknown24(float) override;
};

class FxMSEQNX : public fx::FxMSEQ {
public:
  FxMSEQNX(Manager* manager, void* bus, uint32_t index,
    uint32_t channels);
  ~FxMSEQNX() override;

  void enable() override;
  void disable() override;
  bool isRemovable() const override;
  void** getRegistry() override;
  void unknown27(int, float, int) override;
  void unknown26(int) override;
  float unknown25() override;
  void unknown24(float) override;
};

class FxSpectrumNX : public fx::FxSpectrum {
public:
  // The spectrum the effect analyzed last.
  struct Spectrum {
    uint8_t data[0x1c8];
  };

  FxSpectrumNX(Manager* manager, void* bus, uint32_t index,
    uint32_t channels);
  ~FxSpectrumNX() override;

  void enable() override;
  void disable() override;
  bool isRemovable() const override;
  void** getRegistry() override;
  void unknown24(void* data) override;
  virtual void unknown25(int value);
  virtual void unknown26();
  virtual void setUnknown8070(bool value);
  virtual bool getUnknown8070() const;

private:
  uint8_t unknown_1630_[0x1d0];
  Spectrum spectrum_;
  uint8_t unknown_19c8_[0x78];
};

class FxVibNX : public fx::FxVib {
public:
  FxVibNX(Manager* manager, void* bus, uint32_t index,
    uint32_t channels);
  ~FxVibNX() override;

  void enable() override;
  void disable() override;
  bool isRemovable() const override;
  void** getRegistry() override;
  void unknown36(int value) override;
  float unknown35(int) override;
  float unknown34(int) override;
  float unknown33(int) override;
  int unknown32(int) override;
  void unknown31(int, float, int) override;
  void unknown30(int, float, int) override;
  float unknown29() override;
  float unknown28() override;
  float unknown27() override;
  void unknown26(float) override;
  void unknown25(float) override;
  void unknown24(float) override;
};

class FxFinalMixNX : public fx::FxFinalMix {
public:
  FxFinalMixNX(Manager* manager, void* bus, uint32_t index,
    uint32_t channels);
  ~FxFinalMixNX() override;

  void enable() override;
  void disable() override;
  bool isRemovable() const override;
  void** getRegistry() override;
  void unknown25() override;
  void unknown26() override;
};

class FxMuteNX : public fx::FxMute {
public:
  FxMuteNX(Manager* manager, void* bus, uint32_t index,
    uint32_t channels);
  ~FxMuteNX() override;

  void enable() override;
  void disable() override;
  bool isRemovable() const override;
  void** getRegistry() override;
};

class FxNoneNX : public fx::FxNone {
public:
  FxNoneNX(Manager* manager, void* bus, uint32_t index,
    uint32_t channels);
  ~FxNoneNX() override;

  void enable() override;
  void disable() override;
  bool isRemovable() const override;
  void** getRegistry() override;
};

class FxSurroundNX : public fx::FxSurround {
public:
  FxSurroundNX(Manager* manager, void* bus, uint32_t index,
    uint32_t channels);
  ~FxSurroundNX() override;

  void enable() override;
  void disable() override;
  bool isRemovable() const override;
  void** getRegistry() override;
  int unknown45() override;
  void unknown44(int) override;
  float unknown43(int) override;
  int unknown42(int) override;
  float unknown41(int) override;
  void unknown40(int, float) override;
  void unknown39(int, int) override;
  void unknown38(int, float) override;
  int unknown37() override;
  int unknown36() override;
  int unknown35() override;
  int unknown34() override;
  int unknown33() override;
  int unknown32() override;
  void unknown31(int) override;
  void unknown30(int) override;
  void unknown29(int) override;
  void unknown28(int) override;
  void unknown27(int) override;
  void unknown26(int) override;
  void unknown25() override;
  void unknown24() override;
};

class FxLFENX : public fx::FxLFE {
public:
  FxLFENX(Manager* manager, void* bus, uint32_t index,
    uint32_t channels);
  ~FxLFENX() override;

  void enable() override;
  void disable() override;
  bool isRemovable() const override;
  void** getRegistry() override;
  void unknown30(bool) override;
  void unknown29(int, float, int) override;
  void unknown28(int) override;
  float unknown27() override;
  void unknown26(float) override;
  float unknown25() override;
  void unknown24(float) override;
};

class FxSimpleLimiterNX : public fx::FxSimpleLimiter {
public:
  FxSimpleLimiterNX(Manager* manager, void* bus, uint32_t index,
    uint32_t channels);
  ~FxSimpleLimiterNX() override;

  void enable() override;
  void disable() override;
  bool isRemovable() const override;
  void** getRegistry() override;
  void unknown24() override;
  void unknown25() override;
  float unknown26() override;
  int unknown27() override;
};

class FxWaveformNX : public fx::FxWaveform {
public:
  FxWaveformNX(Manager* manager, void* bus, uint32_t index,
    uint32_t channels);
  ~FxWaveformNX() override;

  void enable() override;
  void disable() override;
  bool isRemovable() const override;
  void** getRegistry() override;
};

class FxSpeakerNX : public fx::FxSpeaker {
public:
  FxSpeakerNX(Manager* manager, void* bus, uint32_t index,
    uint32_t channels);
  ~FxSpeakerNX() override;

  void enable() override;
  void disable() override;
  bool isRemovable() const override;
  void** getRegistry() override;
};

class FxPCMPlayerNX : public fx::FxPCMPlayer {
public:
  FxPCMPlayerNX(Manager* manager, void* bus, uint32_t index,
    uint32_t channels);
  ~FxPCMPlayerNX() override;

  void enable() override;
  void disable() override;
  void setLatency(int latency) override;
  int getLatency() const override;
  bool isRemovable() const override;
  void** getRegistry() override;
  void unknown31() override;
  int unknown30() override;
  uint64_t unknown29() override;
  int unknown28() override;
  int unknown27() override;
  int unknown26() override;
  void unknown25(const void*, int) override;
  void unknown24(int) override;
};

class FxMultiBridgeNX : public fx::FxMultiBridge {
public:
  FxMultiBridgeNX(Manager* manager, void* bus, uint32_t index,
    uint32_t channels, uint32_t count);
  ~FxMultiBridgeNX() override;

  void enable() override;
  void disable() override;
  bool isRemovable() const override;
  void** getRegistry() override;

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
