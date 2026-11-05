#pragma once

#include <cstdint>

#include "snd/fnd/weak_handle.hpp"

namespace snd {

class Manager;

}

namespace snd::target {

class FxBase {
public:
  virtual ~FxBase();
};

class FxReverbNX : public FxBase {
public:
  FxReverbNX(Manager* manager, void* bus, uint32_t index,
    const void* param);
  ~FxReverbNX() override;

private:
  uint8_t body_[5672];
};

class FxCpuReverbNX : public FxBase {
public:
  FxCpuReverbNX(Manager* manager, void* bus, uint32_t index,
    const void* param, uint32_t channels);
  ~FxCpuReverbNX() override;

private:
  uint8_t body_[5688];
};

class FxI3dl2ReverbNX : public FxBase {
public:
  FxI3dl2ReverbNX(Manager* manager, void* bus, uint32_t index,
    const void* param);
  ~FxI3dl2ReverbNX() override;

private:
  uint8_t body_[5672];
};

class FxCpuI3dl2ReverbNX : public FxBase {
public:
  FxCpuI3dl2ReverbNX(Manager* manager, void* bus, uint32_t index,
    const void* param, uint32_t channels);
  ~FxCpuI3dl2ReverbNX() override;

private:
  uint8_t body_[5688];
};

class FxDelayNX : public FxBase {
public:
  FxDelayNX(Manager* manager, void* bus, uint32_t index,
    const void* param);
  ~FxDelayNX() override;

private:
  uint8_t body_[5672];
};

class FxCpuDelayNX : public FxBase {
public:
  FxCpuDelayNX(Manager* manager, void* bus, uint32_t index,
    const void* param, uint32_t channels);
  ~FxCpuDelayNX() override;

private:
  uint8_t body_[5688];
};

class FxLightLimiterNX : public FxBase {
public:
  FxLightLimiterNX(Manager* manager, void* bus, uint32_t index,
    const void* param);
  ~FxLightLimiterNX() override;

private:
  uint8_t body_[5672];
};

class FxCpuLightLimiterNX : public FxBase {
public:
  FxCpuLightLimiterNX(Manager* manager, void* bus, uint32_t index,
    const void* param, uint32_t channels);
  ~FxCpuLightLimiterNX() override;

private:
  uint8_t body_[5688];
};

class FxCompressorNX : public FxBase {
public:
  FxCompressorNX(Manager* manager, void* bus, uint32_t index,
    const void* param);
  ~FxCompressorNX() override;

private:
  uint8_t body_[5672];
};

class FxFFTNX : public FxBase {
public:
  FxFFTNX(Manager* manager, void* bus, fnd::WeakHandle target, uint32_t index,
    uint32_t channels);
  FxFFTNX(Manager* manager, void* bus, fnd::WeakHandle target,
    fnd::WeakHandle source, uint32_t index, uint32_t channels);
  ~FxFFTNX() override;

private:
  uint8_t body_[5952];
};

class FxMSCtrlNX : public FxBase {
public:
  FxMSCtrlNX(Manager* manager, void* bus, fnd::WeakHandle target,
    uint32_t index, uint32_t channels);
  ~FxMSCtrlNX() override;

private:
  uint8_t body_[5696];
};

class FxEQNX : public FxBase {
public:
  FxEQNX(Manager* manager, void* bus, uint32_t index,
    uint32_t channels);
  ~FxEQNX() override;

private:
  uint8_t body_[5744];
};

class FxMSNX : public FxBase {
public:
  FxMSNX(Manager* manager, void* bus, uint32_t index,
    uint32_t channels);
  ~FxMSNX() override;

private:
  uint8_t body_[5680];
};

class FxMSEQNX : public FxBase {
public:
  FxMSEQNX(Manager* manager, void* bus, uint32_t index,
    uint32_t channels);
  ~FxMSEQNX() override;

private:
  uint8_t body_[5680];
};

class FxSpectrumNX : public FxBase {
public:
  FxSpectrumNX(Manager* manager, void* bus, uint32_t index,
    uint32_t channels);
  ~FxSpectrumNX() override;

private:
  uint8_t body_[6712];
};

class FxVibNX : public FxBase {
public:
  FxVibNX(Manager* manager, void* bus, uint32_t index,
    uint32_t channels);
  ~FxVibNX() override;

private:
  uint8_t body_[5672];
};

class FxFinalMixNX : public FxBase {
public:
  FxFinalMixNX(Manager* manager, void* bus, uint32_t index,
    uint32_t channels);
  ~FxFinalMixNX() override;

private:
  uint8_t body_[5672];
};

class FxMuteNX : public FxBase {
public:
  FxMuteNX(Manager* manager, void* bus, uint32_t index,
    uint32_t channels);
  ~FxMuteNX() override;

private:
  uint8_t body_[5672];
};

class FxNoneNX : public FxBase {
public:
  FxNoneNX(Manager* manager, void* bus, uint32_t index,
    uint32_t channels);
  ~FxNoneNX() override;

private:
  uint8_t body_[5672];
};

class FxSurroundNX : public FxBase {
public:
  FxSurroundNX(Manager* manager, void* bus, uint32_t index,
    uint32_t channels);
  ~FxSurroundNX() override;

private:
  uint8_t body_[5672];
};

class FxLFENX : public FxBase {
public:
  FxLFENX(Manager* manager, void* bus, uint32_t index,
    uint32_t channels);
  ~FxLFENX() override;

private:
  uint8_t body_[5672];
};

class FxSimpleLimiterNX : public FxBase {
public:
  FxSimpleLimiterNX(Manager* manager, void* bus, uint32_t index,
    uint32_t channels);
  ~FxSimpleLimiterNX() override;

private:
  uint8_t body_[5672];
};

class FxWaveformNX : public FxBase {
public:
  FxWaveformNX(Manager* manager, void* bus, uint32_t index,
    uint32_t channels);
  ~FxWaveformNX() override;

private:
  uint8_t body_[5672];
};

class FxSpeakerNX : public FxBase {
public:
  FxSpeakerNX(Manager* manager, void* bus, uint32_t index,
    uint32_t channels);
  ~FxSpeakerNX() override;

private:
  uint8_t body_[5672];
};

class FxPCMPlayerNX : public FxBase {
public:
  FxPCMPlayerNX(Manager* manager, void* bus, uint32_t index,
    uint32_t channels);
  ~FxPCMPlayerNX() override;

private:
  uint8_t body_[5672];
};

class FxMultiBridgeNX : public FxBase {
public:
  FxMultiBridgeNX(Manager* manager, void* bus, uint32_t index,
    uint32_t channels, uint32_t count);
  ~FxMultiBridgeNX() override;

private:
  uint8_t body_[5728];
};

}
