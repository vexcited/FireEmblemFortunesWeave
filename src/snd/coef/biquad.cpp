#include "snd/coef/biquad.hpp"

#include <cmath>

#include "nn/util/math_types.hpp"
#include "snd/memory.hpp"

namespace snd::coef {

namespace {

constexpr float kHalfLn2 = 0.34657359f;

float calcOmega(uint16_t frequency, uint16_t sampleRate) {
  return frequency * nn::util::Float2Pi / sampleRate;
}

float calcAlpha(float omega, float sin, float q, float bandwidth,
  bool useBandwidth) {
  if (useBandwidth) {
    return sin * std::sinh(omega / sin * (bandwidth * kHalfLn2));
  }
  return sin / (q + q);
}

uint16_t clampFrequency(uint16_t frequency, uint16_t sampleRate) {
  uint32_t value = frequency <= 20 ? 20 : frequency;
  if (value >= sampleRate) {
    value = sampleRate - 1;
  }
  return value;
}

float clamp(float value, float min, float max) {
  if (value >= min) {
    return value > max ? max : value;
  }
  return min;
}

}

void None::calc() {
  setCoef(1.0f, 0.0f, 0.0f, 1.0f, 0.0f, 0.0f);
}

void Lpf::setFrequency(uint16_t frequency) {
  frequency_ = clampFrequency(frequency, sampleRate_);
}

void Lpf::setQ(float q) {
  q_ = clamp(q, 0.001f, 1.0f);
}

void Lpf::setBandwidth(float bandwidth) {
  bandwidth_ = clamp(bandwidth, 0.1f, 1.5f);
}

void Lpf::calc() {
  float omega = calcOmega(frequency_, sampleRate_);
  float sin = nn::util::SinEst(omega);
  float cos = nn::util::CosEst(omega);
  float alpha = calcAlpha(omega, sin, q_, bandwidth_, useBandwidth_);
  setCoef(1.0f + alpha, -2.0f * cos, 1.0f - alpha, (1.0f - cos) * 0.5f,
    1.0f - cos, (1.0f - cos) * 0.5f);
}

void Hpf::calc() {
  float omega = calcOmega(frequency_, sampleRate_);
  float sin = nn::util::SinEst(omega);
  float cos = nn::util::CosEst(omega);
  float alpha = calcAlpha(omega, sin, q_, bandwidth_, useBandwidth_);
  setCoef(1.0f + alpha, -2.0f * cos, 1.0f - alpha, (1.0f + cos) * 0.5f,
    -(1.0f + cos), (1.0f + cos) * 0.5f);
}

void Bpf::setFrequency(uint16_t frequency) {
  frequency_ = clampFrequency(frequency, sampleRate_);
}

void Bpf::setQ(float q) {
  q_ = clamp(q, 0.001f, 1.0f);
}

void Bpf::setBandwidth(float bandwidth) {
  bandwidth_ = clamp(bandwidth, 0.1f, 1.5f);
}

void Bpf::calc() {
  float omega = calcOmega(frequency_, sampleRate_);
  float sin = nn::util::SinEst(omega);
  float cos = nn::util::CosEst(omega);
  float alpha = calcAlpha(omega, sin, q_, bandwidth_, useBandwidth_);
  if (gainMode_ == kGainSkirt) {
    setCoef(1.0f + alpha, -2.0f * cos, 1.0f - alpha, alpha * q_, 0.0f,
      -(q_ * alpha));
  }
  else {
    setCoef(1.0f + alpha, -2.0f * cos, 1.0f - alpha, alpha, 0.0f, -alpha);
  }
}

void Notch::calc() {
  float omega = calcOmega(frequency_, sampleRate_);
  float sin = nn::util::SinEst(omega);
  float cos = nn::util::CosEst(omega);
  float alpha = calcAlpha(omega, sin, q_, bandwidth_, useBandwidth_);
  setCoef(1.0f + alpha, -2.0f * cos, 1.0f - alpha, 1.0f, -2.0f * cos, 1.0f);
}

void Apf::calc() {
  float omega = calcOmega(frequency_, sampleRate_);
  float sin = nn::util::SinEst(omega);
  float cos = nn::util::CosEst(omega);
  float alpha = calcAlpha(omega, sin, q_, bandwidth_, useBandwidth_);
  setCoef(1.0f + alpha, -2.0f * cos, 1.0f - alpha, 1.0f - alpha, -2.0f * cos,
    1.0f + alpha);
}

void PeakingEQ::setFrequency(uint16_t frequency) {
  frequency_ = clampFrequency(frequency, sampleRate_);
}

void PeakingEQ::setQ(float q) {
  q_ = clamp(q, 0.001f, 1.0f);
}

void PeakingEQ::setGain(float gain) {
  gain_ = clamp(gain, -100.0f, 24.0f);
}

void PeakingEQ::calc() {
  float omega = calcOmega(frequency_, sampleRate_);
  float sin = nn::util::SinEst(omega);
  float cos = nn::util::CosEst(omega);
  float alpha = calcAlpha(omega, sin, q_, bandwidth_, useBandwidth_);
  float a = std::pow(10.0f, gain_ / 40.0f);
  setCoef(1.0f + alpha / a, -2.0f * cos, 1.0f - alpha / a, 1.0f + alpha * a,
    -2.0f * cos, 1.0f - alpha * a);
}

void LowShelf::calc() {
  float omega = calcOmega(frequency_, sampleRate_);
  float sin = nn::util::SinEst(omega);
  float cos = nn::util::CosEst(omega);
  float a = std::pow(10.0f, gain_ / 40.0f);
  float alpha;
  if (useSlope_) {
    alpha = sin * 0.5f * std::sqrt((a + 1.0f / a) * (1.0f / slope_ - 1.0f)
      + 2.0f);
  }
  else {
    alpha = sin / (q_ + q_);
  }
  float root = 2.0f * std::sqrt(a) * alpha;
  setCoef(a + 1.0f + (a - 1.0f) * cos + root,
    -2.0f * (a - 1.0f + (a + 1.0f) * cos),
    a + 1.0f + (a - 1.0f) * cos - root,
    a * (a + 1.0f - (a - 1.0f) * cos + root),
    2.0f * a * (a - 1.0f - (a + 1.0f) * cos),
    a * (a + 1.0f - (a - 1.0f) * cos - root));
}

void HighShelf::calc() {
  float omega = calcOmega(frequency_, sampleRate_);
  float sin = nn::util::SinEst(omega);
  float cos = nn::util::CosEst(omega);
  float a = std::pow(10.0f, gain_ / 40.0f);
  float alpha;
  if (useSlope_) {
    alpha = sin * 0.5f * std::sqrt((a + 1.0f / a) * (1.0f / slope_ - 1.0f)
      + 2.0f);
  }
  else {
    alpha = sin / (q_ + q_);
  }
  float root = 2.0f * std::sqrt(a) * alpha;
  setCoef(a + 1.0f - (a - 1.0f) * cos + root,
    2.0f * (a - 1.0f - (a + 1.0f) * cos),
    a + 1.0f - (a - 1.0f) * cos - root,
    a * (a + 1.0f + (a - 1.0f) * cos + root),
    -2.0f * a * (a - 1.0f + (a + 1.0f) * cos),
    a * (a + 1.0f + (a - 1.0f) * cos - root));
}

BiQuadCoef::BiQuadCoef() {
  filters_[kTypeNone] = create<None>(&coef_);
  filters_[kTypeLpf] = create<Lpf>(&coef_);
  filters_[kTypeHpf] = create<Hpf>(&coef_);
  filters_[kTypeBpf] = create<Bpf>(&coef_);
  filters_[kTypeNotch] = create<Notch>(&coef_);
  filters_[kTypeApf] = create<Apf>(&coef_);
  filters_[kTypePeakingEQ] = create<PeakingEQ>(&coef_);
  filters_[kTypeLowShelf] = create<LowShelf>(&coef_);
  filters_[kTypeHighShelf] = create<HighShelf>(&coef_);
  apply();
}

BiQuadCoef::~BiQuadCoef() {
  for (BiQuadFilter* filter : filters_) {
    destroy(filter);
  }
}

void BiQuadCoef::setType(uint32_t type) {
  if (type_ != type) {
    type_ = type;
    apply();
  }
}

int BiQuadCoef::process(int sample, int channel) {
  if (bypass_) {
    return sample;
  }

  History& history = histories_[channel];
  float x = sample / 32768.0f;
  float y = coef_.b0 * x + coef_.b1 * history.x1 + coef_.b2 * history.x2
    - coef_.a1 * history.y1 - coef_.a2 * history.y2;
  history.x2 = history.x1;
  history.x1 = x;
  history.y2 = history.y1;
  history.y1 = y;
  return static_cast<int>(y * 32768.0f);
}

void BiQuadCoef::setBypass(bool bypass) {
  bypass_ = bypass;
}

}
