#include "snd/param.hpp"

#include <cmath>
#include <cstdlib>

namespace snd {

namespace {
float calcRandom(float a, float b) {
  if (a == b) {
    return a;
  }
  float high = a > b ? a : b;
  float low = a > b ? b : a;
  float offset = std::fabs(high - low) * (std::rand() / 2147483648.0f);
  return low + offset;
}

}

static_assert(sizeof(Param) == 0x15b0);

Param::~Param() = default;

void Param::updateDelay(float ms) {
  float frame = ms / fnd::kFrameMs;
  if (delay_ > 0.0f) {
    float delay = delay_ - frame;
    delay_ = delay < 0.0f ? 0.0f : delay;
  }
}

void Param::updateFrame(float frame) {
  volume_.update(frame);
  fadeVolume_.update(frame);
  playerVolume_.update(frame);
  actorVolume_.update(frame);
  groupVolume_.update(frame);
  duckVolume_.update(frame);
  lpf_.update(frame);
  pitch_.update(frame);
  pan_.update(frame);
  surroundPan_.update(frame);
  distanceVolume_.update(frame);
  occlusionVolume_.update(frame);
  envVolume_.update(frame);
  mainSend_.update(frame);
  lpfFrequency_.update(frame);
  lpfFrequencyOffset_.update(frame);
  biquadValue_.update(frame);
  fxSend_.update(frame);
  fxSendOffset_.update(frame);
  outputVolume_.update(frame);
  volumeFluctuation_.update(frame);
  surroundPanFluctuation_.update(frame);
  panFluctuation_.update(frame);
  biquad_.update(frame);
  biquadType_.update(frame);
  if (delay_ == 0.0f) {
    frame_ += frame;
  }
  elapsedFrame_ += frame;
  envelope_.update(frame);
}

// The fades stand still while the start is delayed.
void Param::update(float ms) {
  float frame = ms / fnd::kFrameMs;
  time_ += frame;
  if (delay_ > 0.0f) {
    float delay = delay_ - frame;
    delay_ = delay < 0.0f ? 0.0f : delay;
    frame = 0.0f;
  }
  updateFrame(frame);
}

void Param::updateVolume(float ms) {
  volume_.update(ms / fnd::kFrameMs);
}

void Param::setVolumeScale(float scale) {
  volumeScale_ = scale;
}

void Param::setVolumeRate(float rate) {
  volumeRate_ = rate;
}

float Param::getVolume() const {
  return volume_.getValue();
}

void Param::startVolume(const Fade& fade, float target) {
  volume_.start(fade, target);
}

float Param::getFadeVolume() const {
  return fadeVolume_.getValue();
}

void Param::startFadeVolume(const Fade& fade, float target) {
  fadeVolume_.start(fade, target);
}

float Param::getFadeVolumeTarget() const {
  return fadeVolume_.getTarget();
}

float Param::getPlayerVolume() const {
  return playerVolume_.getValue();
}

void Param::startPlayerVolume(const Fade& fade, float target) {
  playerVolume_.start(fade, target);
}

float Param::getActorVolume() const {
  return actorVolume_.getValue();
}

void Param::startActorVolume(const Fade& fade, float target) {
  actorVolume_.start(fade, target);
}

float Param::getGroupVolume() const {
  return groupVolume_.getValue();
}

void Param::startGroupVolume(const Fade& fade, float target) {
  groupVolume_.start(fade, target);
}

float Param::getDuckVolume() const {
  return duckVolume_.getValue();
}

void Param::startDuckVolume(const Fade& fade, float target) {
  duckVolume_.start(fade, target);
}

float Param::getVolumeGain() const {
  return volumeGain_;
}

void Param::setVolumeGain(float gain) {
  volumeGain_ = gain;
}

float Param::getLpf() const {
  return lpf_.getValue();
}

void Param::startLpf(const Fade& fade, float target) {
  lpf_.start(fade, target);
}

float Param::getBiquad() const {
  return biquad_.getValue();
}

void Param::startBiquad(const Fade& fade, float target) {
  biquad_.start(fade, target);
}

float Param::getPitch() const {
  return pitch_.getValue();
}

void Param::startPitch(const Fade& fade, float target) {
  pitch_.start(fade, target);
}

float Param::getPan() const {
  return pan_.getValue();
}

void Param::startPan(const Fade& fade, float target) {
  pan_.start(fade, target);
}

float Param::getSurroundPan() const {
  return surroundPan_.getValue();
}

void Param::startSurroundPan(const Fade& fade, float target) {
  surroundPan_.start(fade, target);
}

float Param::getDistanceVolume() const {
  return distanceVolume_.getValue();
}

void Param::startDistanceVolume(const Fade& fade, float target) {
  distanceVolume_.start(fade, target);
}

float Param::getOcclusionVolume() const {
  return occlusionVolume_.getValue();
}

void Param::startOcclusionVolume(const Fade& fade, float target) {
  occlusionVolume_.start(fade, target);
}

float Param::getEnvVolume() const {
  return envVolume_.getValue();
}

void Param::startEnvVolume(const Fade& fade, float target) {
  envVolume_.start(fade, target);
}

float Param::getMainSend() const {
  return mainSend_.getValue();
}

void Param::startMainSend(const Fade& fade, float target) {
  mainSend_.start(fade, target);
}

float Param::getLpfFrequency() const {
  return lpfFrequency_.getValue();
}

void Param::startLpfFrequency(const Fade& fade, float target) {
  lpfFrequency_.start(fade, target);
}

float Param::getLpfFrequencyOffset() const {
  return lpfFrequencyOffset_.getValue();
}

void Param::startLpfFrequencyOffset(const Fade& fade, float target) {
  lpfFrequencyOffset_.start(fade, target);
}

float Param::getBiquadType() const {
  return biquadType_.getValue();
}

void Param::startBiquadType(const Fade& fade, float target) {
  biquadType_.start(fade, target);
}

float Param::getBiquadValue() const {
  return biquadValue_.getValue();
}

void Param::startBiquadValue(const Fade& fade, float target) {
  biquadValue_.start(fade, target);
}

float Param::getFxSend() const {
  return fxSend_.getValue();
}

void Param::startFxSend(const Fade& fade, float target) {
  fxSend_.start(fade, target);
}

float Param::getFxSendOffset() const {
  return fxSendOffset_.getValue();
}

void Param::startFxSendOffset(const Fade& fade, float target) {
  fxSendOffset_.start(fade, target);
}

float Param::getOutputVolume() const {
  return outputVolume_.getValue();
}

void Param::startOutputVolume(const Fade& fade, float target) {
  outputVolume_.start(fade, target);
}

float Param::getPitchScale() const {
  return pitchScale_;
}

void Param::setPitchScale(float scale) {
  pitchScale_ = scale;
}

float Param::getDelay() const {
  return delay_;
}

void Param::setDelay(float ms) {
  delay_ = ms / fnd::kFrameMs;
}

int Param::getPriority() const {
  return priority_;
}

void Param::setPriority(int priority) {
  priority_ = priority;
}

void Param::setRandomVolume(float min, float max) {
  randomVolume_ = calcRandom(min, max);
}

void Param::setRandomPitch(float min, float max) {
  randomPitch_ = calcRandom(min, max);
}

void Param::setRandomPan(float min, float max) {
  randomPan_ = calcRandom(min, max);
}

void Param::setRandomSurroundPan(float min, float max) {
  randomSurroundPan_ = calcRandom(min, max);
}

void Param::setRandomLpf(float min, float max) {
  randomLpf_ = calcRandom(min, max);
}

void Param::setEnvelope(float attack, float hold, float decay, float sustain,
  float release) {
  envelope_.set(attack, hold, decay, sustain, release);
}

void Param::setEnvelope(fnd::CurveType curve, float attack, float hold,
  float decay, float sustain, float release) {
  envelope_.set(curve, attack, hold, decay, sustain, release);
}

float Param::getEnvelope() const {
  return envelope_.getValue();
}

float Param::getEnvelopeScale() const {
  return envelopeScale_;
}

void Param::setEnvelopeScale(float scale) {
  envelopeScale_ = scale;
}

float Param::getLpfOffset() const {
  return lpfOffset_;
}

void Param::setLpfOffset(float offset) {
  lpfOffset_ = offset;
}

float Param::getMixVolume0() const {
  return mixVolumes_[0];
}

void Param::setMixVolume0(float volume) {
  mixVolumes_[0] = volume;
}

float Param::getMixVolume1() const {
  return mixVolumes_[1];
}

void Param::setMixVolume1(float volume) {
  mixVolumes_[1] = volume;
}

float Param::getMixVolume2() const {
  return mixVolumes_[2];
}

void Param::setMixVolume2(float volume) {
  mixVolumes_[2] = volume;
}

float Param::getMixVolume3() const {
  return mixVolumes_[3];
}

void Param::setMixVolume3(float volume) {
  mixVolumes_[3] = volume;
}

float Param::getMixVolume4() const {
  return mixVolumes_[4];
}

void Param::setMixVolume4(float volume) {
  mixVolumes_[4] = volume;
}

float Param::getMixVolume5() const {
  return mixVolumes_[5];
}

void Param::setMixVolume5(float volume) {
  mixVolumes_[5] = volume;
}

float Param::getMixVolume6() const {
  return mixVolumes_[6];
}

void Param::setMixVolume6(float volume) {
  mixVolumes_[6] = volume;
}

float Param::getMixVolume7() const {
  return mixVolumes_[7];
}

void Param::setMixVolume7(float volume) {
  mixVolumes_[7] = volume;
}

void Param::setChannelEnabled(bool enabled) {
  channelEnabled_ = enabled;
}

bool Param::isChannelEnabled() const {
  return channelEnabled_;
}

void Param::setChannelVolume(uint32_t index, float volume) {
  channelVolumes_[index] = volume;
}

float Param::getChannelVolume(uint32_t index) const {
  return channelVolumes_[index];
}

float Param::calcVolume() const {
  return volumeScale_ * volumeRate_ * volume_.getValue()
    * fadeVolume_.getValue() * playerVolume_.getValue()
    * actorVolume_.getValue() * groupVolume_.getValue()
    * duckVolume_.getValue() * volumeGain_ * envelope_.getValue()
    * envelopeScale_ * distanceVolume_.getValue()
    * occlusionVolume_.getValue() * envVolume_.getValue()
    + volumeFluctuation_.getValue();
}

// Each mask bit selects one of the six volume fades, all bits set means the
// unmasked volume.
float Param::calcVolume(const std::bitset<64>& mask) const {
  float volume = volumeScale_ * volumeRate_;
  if (mask.all()) {
    return volume * volume_.getValue() * fadeVolume_.getValue()
      * playerVolume_.getValue() * actorVolume_.getValue()
      * groupVolume_.getValue() * duckVolume_.getValue() * volumeGain_
      * envelope_.getValue() * envelopeScale_
      * distanceVolume_.getValue() * occlusionVolume_.getValue()
      * envVolume_.getValue() + volumeFluctuation_.getValue();
  }

  if (mask[0]) {
    volume *= volume_.getValue();
  }
  if (mask[1]) {
    volume *= fadeVolume_.getValue();
  }
  if (mask[2]) {
    volume *= playerVolume_.getValue();
  }
  if (mask[3]) {
    volume *= actorVolume_.getValue();
  }
  if (mask[4]) {
    volume *= groupVolume_.getValue();
  }
  if (mask[5]) {
    volume *= duckVolume_.getValue();
  }
  volume *= volumeGain_ * envelope_.getValue() * envelopeScale_
    * distanceVolume_.getValue() * occlusionVolume_.getValue()
    * envVolume_.getValue();
  return volume + volumeFluctuation_.getValue();
}

float Param::calcPitch() const {
  return pitch_.getValue();
}

float Param::calcPan() const {
  return pan_.getValue() + panFluctuation_.getValue();
}

float Param::calcSurroundPan() const {
  return surroundPan_.getValue() + surroundPanFluctuation_.getValue();
}

float Param::calcLpf() const {
  return lpfFrequency_.getValue() + lpfFrequencyOffset_.getValue()
    + lpfOffset_;
}

float Param::calcMainSend() const {
  return mainSend_.getValue();
}

float Param::calcBiquadValue() const {
  return biquadValue_.getValue();
}

float Param::calcFxSend() const {
  return fxSend_.getValue() + fxSendOffset_.getValue();
}

float Param::calcOutputVolume() const {
  return outputVolume_.getValue();
}

float Param::calcMixVolume0() const {
  return mixVolumes_[0];
}

float Param::calcMixVolume1() const {
  return mixVolumes_[1];
}

float Param::calcMixVolume2() const {
  return mixVolumes_[2];
}

float Param::calcMixVolume3() const {
  return mixVolumes_[3];
}

float Param::calcMixVolume4() const {
  return mixVolumes_[4];
}

float Param::calcMixVolume5() const {
  return mixVolumes_[5];
}

float Param::calcMixVolume6() const {
  return mixVolumes_[6];
}

float Param::calcMixVolume7() const {
  return mixVolumes_[7];
}

float Param::getResult0() const {
  return results_[0];
}

float Param::getResult1() const {
  return results_[1];
}

float Param::getResult2() const {
  return results_[2];
}

float Param::getResult3() const {
  return results_[3];
}

float Param::getResult4() const {
  return results_[4];
}

float Param::getResult5() const {
  return results_[5];
}

float Param::getResult6() const {
  return results_[6];
}

float Param::getResult7() const {
  return results_[7];
}

float Param::getResult8() const {
  return results_[8];
}

float Param::getResult9() const {
  return results_[9];
}

float Param::getResult10() const {
  return results_[10];
}

float Param::getResult11() const {
  return results_[11];
}

float Param::getResult12() const {
  return results_[12];
}

float Param::getResult13() const {
  return results_[13];
}

float Param::getResult14() const {
  return results_[14];
}

float Param::getResult15() const {
  return results_[15];
}

float Param::getResult16() const {
  return results_[16];
}

void Param::setPosition(float x, float y, float z) {
  position_.x = x;
  position_.y = y;
  position_.z = z;
}

void Param::getPosition(float* x, float* y, float* z) const {
  *x = position_.x;
  *y = position_.y;
  *z = position_.z;
}

void Param::setPosition(const fnd::Vec3& position) {
  position_.x = position.x;
  position_.y = position.y;
  position_.z = position.z;
}

fnd::Vec3 Param::getPosition() const {
  fnd::Vec3 position;
  position.x = position_.x;
  position.y = position_.y;
  position.z = position_.z;
  return position;
}

void Param::setVelocity(float x, float y, float z) {
  velocity_.x = x;
  velocity_.y = y;
  velocity_.z = z;
}

void Param::getVelocity(float* x, float* y, float* z) const {
  *x = velocity_.x;
  *y = velocity_.y;
  *z = velocity_.z;
}

void Param::setVelocity(const fnd::Vec3& velocity) {
  velocity_.x = velocity.x;
  velocity_.y = velocity.y;
  velocity_.z = velocity.z;
}

fnd::Vec3 Param::getVelocity() const {
  fnd::Vec3 velocity;
  velocity.x = velocity_.x;
  velocity.y = velocity_.y;
  velocity.z = velocity_.z;
  return velocity;
}

float Param::getFrame() const {
  return frame_;
}

void Param::setFrame(float frame) {
  frame_ = frame;
}

float Param::getElapsedFrame() const {
  return elapsedFrame_;
}

}
