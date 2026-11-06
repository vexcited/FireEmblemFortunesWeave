#include "snd/slot.hpp"

namespace snd {

// Pitch ratios for -7 to +7 octaves in semitone steps.
extern float g_semitoneRatios[169];

namespace {

template <typename F>
float addLinks(const fnd::WeakHandle (&links)[4], float value, F function) {
  for (const fnd::WeakHandle& link : links) {
    if (Slot* slot = link.get<Slot>()) {
      value += function(slot);
    }
  }
  return value;
}

float clamp(float value, float low, float high) {
  float result = low;
  if (value >= low) {
    result = value;
    if (value > high) {
      result = high;
    }
  }
  return result;
}

}

float Slot::calcVolume() const {
  std::bitset<64> mask;
  mask.set();
  return calcVolume(mask);
}

// The linked slots scale the volume instead of adding to it.
float Slot::calcVolume(const std::bitset<64>& mask) const {
  float value = Param::calcVolume(mask) * volumeScale_;
  for (const fnd::WeakHandle& link : links_) {
    if (Slot* slot = link.get<Slot>()) {
      value *= slot->calcVolume(mask);
    }
  }
  results_[0] = clamp(value, 0.0f, 128.0f);
  return value;
}

float Slot::calcPitch() const {
  float value = addLinks(links_, pitch_.getValue(),
    [](Slot* slot) { return slot->calcPitch(); });
  results_[1] = clamp(value, -2.0f, 2.0f);
  return value;
}

float Slot::calcPan() const {
  float value = addLinks(links_,
    pan_.getValue() + panFluctuation_.getValue(),
    [](Slot* slot) { return slot->calcPan(); });
  results_[2] = clamp(value, -2.0f, 2.0f);
  return value;
}

float Slot::calcSurroundPan() const {
  float value = addLinks(links_,
    surroundPan_.getValue() + surroundPanFluctuation_.getValue(),
    [](Slot* slot) { return slot->calcSurroundPan(); });

  // Interpolates the semitone ratio table, clamped to seven octaves.
  int semitone = static_cast<int>(value * 12.0f);
  int low = semitone <= -84 ? -84 : semitone;
  int index = low >= 84 ? 84 : low;
  float fraction =
    value * 12.0f - static_cast<float>(static_cast<int>(value * 12.0f));
  float ratio = g_semitoneRatios[index + 84];
  float delta;
  if (fraction <= 0.0f) {
    int previous = index <= -83 ? -83 : index;
    delta = ratio - g_semitoneRatios[previous + 83];
  }
  else {
    int next = low >= 83 ? 83 : low;
    delta = g_semitoneRatios[next + 85] - ratio;
  }
  results_[3] = ratio + delta * fraction;
  return value;
}

float Slot::calcLpf() const {
  float value = addLinks(links_,
    lpfFrequency_.getValue() + lpfFrequencyOffset_.getValue() + lpfOffset_ +
      lpfBias_,
    [](Slot* slot) { return slot->calcLpf(); });
  results_[4] = clamp(value, 0.0f, 1.0f);
  return value;
}

float Slot::calcMainSend() const {
  float value = addLinks(links_, mainSend_.getValue(),
    [](Slot* slot) { return slot->calcMainSend(); });
  results_[5] = clamp(value, 0.0f, 1.0f);
  return value;
}

float Slot::calcBiquadValue() const {
  float value = addLinks(links_, biquadValue_.getValue(),
    [](Slot* slot) { return slot->calcBiquadValue(); });
  results_[6] = clamp(value, 0.0f, 1.0f);
  return value;
}

float Slot::calcFxSend() const {
  float value = addLinks(links_,
    fxSend_.getValue() + fxSendOffset_.getValue(),
    [](Slot* slot) { return slot->calcFxSend(); });
  results_[7] = clamp(value, 0.0f, 1.0f);
  return value;
}

float Slot::calcOutputVolume() const {
  float value = addLinks(links_, outputVolume_.getValue(),
    [](Slot* slot) { return slot->calcOutputVolume(); });
  results_[8] = clamp(value, 0.0f, 1.0f);
  return value;
}

}
