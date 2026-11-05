#pragma once

#include "snd/fnd/weak_handle.hpp"
#include "snd/voice.hpp"

namespace snd {

class WavePlayer;

class WaveVoice : public Voice {
public:
  void updateTarget() override;
  bool isLoading() const override;
  bool checkLoaded() override;
  void prepare() override;
  void start() override;
  bool isPrepared() const override;
  bool isPlaying() override;
  void updateHandle() override;
  void pause(const Fade& fade, bool force) override;
  void resumePause(const Fade& fade) override;
  void mute(const Fade& fade, bool force) override;
  void resumeMute(const Fade& fade) override;
  void silent(const Fade& fade, bool force) override;
  void resumeSilent(const Fade& fade) override;
  bool isActiveFor(Actor* actor) override;
  bool isActive() const override;
  void setVariable(int index, const Fade& fade, float value) override;
  float getPlayTime(uint32_t kind) override;
  float getPlayPosition(uint32_t kind) override;
  int getPlaySample(uint32_t kind) override;
  float getLength() const override;
  bool isStream() const override;
  void addToSlot() override;
  void stopHandle(const Fade& fade) override;
  void updatePlaying() override;
  virtual void scrub(bool fade, float time);

private:
  WavePlayer* getPlayer() const;
  bool isPositionKnown() const;

  fnd::WeakHandle player_;
  bool scrubbable_;
};

}
