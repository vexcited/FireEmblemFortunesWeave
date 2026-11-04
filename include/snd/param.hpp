#pragma once

#include <bitset>
#include <cstdint>

#include "snd/fade.hpp"
#include "snd/fnd/math.hpp"

namespace snd {

// Every value is a fade so each parameter can glide to its target. The
// names are reconstructed from how the values are combined.
class Param {
public:
  virtual ~Param();

  virtual void updateDelay(float ms);
  virtual void updateFrame(float frame);
  virtual void update(float ms);
  virtual void updateVolume(float ms);

  virtual void setVolumeScale(float scale);
  virtual void setVolumeRate(float rate);

  virtual float getVolume() const;
  virtual void startVolume(const Fade& fade, float target);
  virtual float getFadeVolume() const;
  virtual float getFadeVolumeTarget() const;
  virtual void startFadeVolume(const Fade& fade, float target);
  virtual float getPlayerVolume() const;
  virtual void startPlayerVolume(const Fade& fade, float target);
  virtual float getActorVolume() const;
  virtual void startActorVolume(const Fade& fade, float target);
  virtual float getGroupVolume() const;
  virtual void startGroupVolume(const Fade& fade, float target);
  virtual float getDuckVolume() const;
  virtual void startDuckVolume(const Fade& fade, float target);
  virtual float getVolumeGain() const;
  virtual void setVolumeGain(float gain);
  virtual float getLpf() const;
  virtual void startLpf(const Fade& fade, float target);
  virtual float getBiquad() const;
  virtual void startBiquad(const Fade& fade, float target);
  virtual float getPitch() const;
  virtual void startPitch(const Fade& fade, float target);
  virtual float getPan() const;
  virtual void startPan(const Fade& fade, float target);
  virtual float getSurroundPan() const;
  virtual void startSurroundPan(const Fade& fade, float target);
  virtual float getDistanceVolume() const;
  virtual void startDistanceVolume(const Fade& fade, float target);
  virtual float getOcclusionVolume() const;
  virtual void startOcclusionVolume(const Fade& fade, float target);
  virtual float getEnvVolume() const;
  virtual void startEnvVolume(const Fade& fade, float target);
  virtual float getPitchScale() const;
  virtual void setPitchScale(float scale);
  virtual float getDelay() const;
  virtual void setDelay(float ms);
  virtual int getPriority() const;
  virtual void setPriority(int priority);

  virtual void setRandomVolume(float min, float max);
  virtual void setRandomPitch(float min, float max);
  virtual void setRandomPan(float min, float max);
  virtual void setRandomSurroundPan(float min, float max);
  virtual void setRandomLpf(float min, float max);

  virtual void setEnvelope(float attack, float hold, float decay,
    float sustain, float release);
  virtual void setEnvelope(fnd::CurveType curve, float attack, float hold,
    float decay, float sustain, float release);
  virtual float getEnvelope() const;
  virtual float getEnvelopeScale() const;
  virtual void setEnvelopeScale(float scale);
  virtual float getLpfOffset() const;
  virtual void setLpfOffset(float offset);

  virtual float getMainSend() const;
  virtual void startMainSend(const Fade& fade, float target);
  virtual float getLpfFrequency() const;
  virtual void startLpfFrequency(const Fade& fade, float target);
  virtual float getLpfFrequencyOffset() const;
  virtual void startLpfFrequencyOffset(const Fade& fade, float target);
  virtual float getBiquadType() const;
  virtual void startBiquadType(const Fade& fade, float target);
  virtual float getBiquadValue() const;
  virtual void startBiquadValue(const Fade& fade, float target);
  virtual float getFxSend() const;
  virtual void startFxSend(const Fade& fade, float target);
  virtual float getFxSendOffset() const;
  virtual void startFxSendOffset(const Fade& fade, float target);
  virtual float getOutputVolume() const;
  virtual void startOutputVolume(const Fade& fade, float target);

  virtual float getMixVolume0() const;
  virtual void setMixVolume0(float volume);
  virtual float getMixVolume1() const;
  virtual void setMixVolume1(float volume);
  virtual float getMixVolume2() const;
  virtual void setMixVolume2(float volume);
  virtual float getMixVolume3() const;
  virtual void setMixVolume3(float volume);
  virtual float getMixVolume4() const;
  virtual void setMixVolume4(float volume);
  virtual float getMixVolume5() const;
  virtual void setMixVolume5(float volume);
  virtual float getMixVolume6() const;
  virtual void setMixVolume6(float volume);
  virtual float getMixVolume7() const;
  virtual void setMixVolume7(float volume);

  virtual void setChannelEnabled(bool enabled);
  virtual bool isChannelEnabled() const;
  virtual void setChannelVolume(uint32_t index, float volume);
  virtual float getChannelVolume(uint32_t index) const;

  virtual float calcVolume() const;
  virtual float calcVolume(const std::bitset<64>& mask) const;
  virtual float calcPitch() const;
  virtual float calcPan() const;
  virtual float calcSurroundPan() const;
  virtual float calcLpf() const;
  virtual float calcMainSend() const;
  virtual float calcBiquadValue() const;
  virtual float calcFxSend() const;
  virtual float calcOutputVolume() const;

  virtual float calcMixVolume0() const;
  virtual float calcMixVolume1() const;
  virtual float calcMixVolume2() const;
  virtual float calcMixVolume3() const;
  virtual float calcMixVolume4() const;
  virtual float calcMixVolume5() const;
  virtual float calcMixVolume6() const;
  virtual float calcMixVolume7() const;

  virtual float getResult0() const;
  virtual float getResult1() const;
  virtual float getResult2() const;
  virtual float getResult3() const;
  virtual float getResult4() const;
  virtual float getResult5() const;
  virtual float getResult6() const;
  virtual float getResult7() const;
  virtual float getResult8() const;
  virtual float getResult9() const;
  virtual float getResult10() const;
  virtual float getResult11() const;
  virtual float getResult12() const;
  virtual float getResult13() const;
  virtual float getResult14() const;
  virtual float getResult15() const;
  virtual float getResult16() const;

  virtual void setPosition(float x, float y, float z);
  virtual void getPosition(float* x, float* y, float* z) const;
  virtual void setPosition(const fnd::Vec3& position);
  virtual fnd::Vec3 getPosition() const;
  virtual void setVelocity(float x, float y, float z);
  virtual void getVelocity(float* x, float* y, float* z) const;
  virtual void setVelocity(const fnd::Vec3& velocity);
  virtual fnd::Vec3 getVelocity() const;

  virtual float getFrame() const;
  virtual void setFrame(float frame);
  virtual float getElapsedFrame() const;

private:
  float volumeScale_;
  float volumeRate_;
  Fade volume_;
  Fade fadeVolume_;
  Fade playerVolume_;
  Fade actorVolume_;
  Fade groupVolume_;
  Fade duckVolume_;
  float volumeGain_;
  Fade lpf_;
  Fade biquad_;
  Fade pitch_;
  Fade pan_;
  Fade surroundPan_;
  Fade distanceVolume_;
  Fade occlusionVolume_;
  Fade envVolume_;
  fnd::Vec3 position_;
  fnd::Vec3 velocity_;
  float pitchScale_;
  float delay_;
  int priority_;
  float randomVolume_;
  float randomPitch_;
  float randomPan_;
  float randomSurroundPan_;
  float randomLpf_;
  FadeRandom volumeFluctuation_;
  FadeRandom surroundPanFluctuation_;
  FadeRandom panFluctuation_;
  float frame_;
  float elapsedFrame_;
  Fade::CtrlTypeAHDSR envelope_;
  float envelopeScale_;
  float lpfOffset_;
  Fade mainSend_;
  Fade lpfFrequency_;
  Fade lpfFrequencyOffset_;
  Fade biquadType_;
  Fade biquadValue_;
  Fade fxSend_;
  Fade fxSendOffset_;
  Fade outputVolume_;
  float mixVolumes_[8];
  uint8_t unknown_14c8_[0x80];
  bool channelEnabled_;
  float channelVolumes_[6];
  float time_;
  float results_[17];
};

}
