#pragma once

#include <cstdint>

#include "nn/os/mutex.hpp"

namespace snd::coef {

struct Coef {
  float a1;
  float a2;
  float b0;
  float b1;
  float b2;
};

class BiQuadFilter {
public:
  explicit BiQuadFilter(Coef* coef) : coef_(coef) {
    nn::os::InitializeMutex(&mutex_, true, 0);
  }

  virtual ~BiQuadFilter() {
    nn::os::FinalizeMutex(&mutex_);
  }

  virtual void calc() = 0;

  uint16_t getSampleRate() const {
    return sampleRate_;
  }

protected:
  void setCoef(float a0, float a1, float a2, float b0, float b1, float b2);

  uint16_t sampleRate_ = 48000;
  Coef* coef_;
  nn::os::MutexType mutex_ = {};
};

class None : public BiQuadFilter {
public:
  using BiQuadFilter::BiQuadFilter;

  void calc() override;
};

class Lpf : public BiQuadFilter {
public:
  using BiQuadFilter::BiQuadFilter;

  void calc() override;
  void setFrequency(uint16_t frequency);
  void setQ(float q);
  void setBandwidth(float bandwidth);

private:
  uint16_t frequency_ = 500;
  float q_ = 0.001f;
  float bandwidth_ = 1.5f;
  bool useBandwidth_ = false;
};

class Hpf : public BiQuadFilter {
public:
  using BiQuadFilter::BiQuadFilter;

  void calc() override;

private:
  uint16_t frequency_ = 500;
  float q_ = 0.001f;
  float bandwidth_ = 1.5f;
  bool useBandwidth_ = false;
};

class Bpf : public BiQuadFilter {
public:
  enum GainMode : uint8_t {
    kGainPeak,
    kGainSkirt,
  };

  using BiQuadFilter::BiQuadFilter;

  void calc() override;
  void setFrequency(uint16_t frequency);
  void setQ(float q);
  void setBandwidth(float bandwidth);

private:
  uint16_t frequency_ = 500;
  float q_ = 0.001f;
  float bandwidth_ = 1.5f;
  bool useBandwidth_ = false;
  GainMode gainMode_ = kGainPeak;
};

class Notch : public BiQuadFilter {
public:
  explicit Notch(Coef* coef) : BiQuadFilter(coef) {}

  void calc() override;

private:
  uint16_t frequency_ = 500;
  float q_ = 0.001f;
  float bandwidth_ = 1.5f;
  bool useBandwidth_ = true;
};

class Apf : public BiQuadFilter {
public:
  using BiQuadFilter::BiQuadFilter;

  void calc() override;

private:
  uint16_t frequency_ = 500;
  float q_ = 0.001f;
  float bandwidth_ = 1.5f;
  bool useBandwidth_ = false;
};

class PeakingEQ : public BiQuadFilter {
public:
  using BiQuadFilter::BiQuadFilter;

  void calc() override;
  void setFrequency(uint16_t frequency);
  void setQ(float q);
  void setGain(float gain);

private:
  uint16_t frequency_ = 500;
  float q_ = 0.001f;
  float bandwidth_ = 1.5f;
  float gain_ = -6.0f;
  bool useBandwidth_ = false;
};

class LowShelf : public BiQuadFilter {
public:
  using BiQuadFilter::BiQuadFilter;

  void calc() override;

private:
  uint16_t frequency_ = 500;
  float q_ = 0.001f;
  float slope_ = 1.0f;
  float gain_ = -6.0f;
  bool useSlope_ = true;
};

class HighShelf : public BiQuadFilter {
public:
  using BiQuadFilter::BiQuadFilter;

  void calc() override;

private:
  uint16_t frequency_ = 500;
  float q_ = 0.001f;
  float slope_ = 0.6f;
  float gain_ = -6.0f;
  bool useSlope_ = true;
};

class BiQuadCoef {
public:
  enum Type {
    kTypeNone,
    kTypeLpf,
    kTypeHpf,
    kTypeBpf,
    kTypeNotch,
    kTypeApf,
    kTypePeakingEQ,
    kTypeLowShelf,
    kTypeHighShelf,
    kTypeCount,
  };

  static constexpr int kChannelCount = 6;

  BiQuadCoef();
  virtual ~BiQuadCoef();

  void setType(uint32_t type);
  int process(int sample, int channel);
  void setBypass(bool bypass);

  BiQuadFilter* getFilter() const {
    return filters_[type_];
  }

private:
  struct History {
    float x1;
    float x2;
    float y1;
    float y2;
  };

  void apply() {
    filters_[type_]->calc();
    for (History& history : histories_) {
      history = {};
    }
  }

  Coef coef_ = {0.0f, 0.0f, 1.0f, 0.0f, 0.0f};
  History histories_[kChannelCount] = {};
  uint32_t type_ = kTypeNone;
  BiQuadFilter* filters_[kTypeCount] = {};
  bool bypass_ = false;
  float reserved_[10] = {};
};

}
