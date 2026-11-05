#pragma once

#include "snd/fnd/weak_handle.hpp"
#include "snd/voice.hpp"

namespace snd {

class WaveMultiStreamPlayer;

class WaveMultiVoice : public Voice {
public:
  bool isLoading() const override;
  bool checkLoaded() override;
  void prepare() override;
  void start() override;
  bool isPrepared() const override;
  bool isPlaying() override;
  void updateHandle() override;
  void release() override;
  void pause(const Fade& fade, bool force) override;
  void resumePause(const Fade& fade) override;
  void mute(const Fade& fade, bool force) override;
  void resumeMute(const Fade& fade) override;
  void silent(const Fade& fade, bool force) override;
  void resumeSilent(const Fade& fade) override;
  bool isActiveFor(Actor* actor) override;
  bool isActive() const override;
  void setVariable(int index, const Fade& fade, float value) override;
  float getPlayPosition(uint32_t kind) override;
  void addToSlot() override;
  void stopHandle(const Fade& fade) override;
  void updatePlaying() override;

  static void** registry();

  void startTrackVolume(int track, const Fade& fade, float target);
  float getTrackVolume(int track);

private:
  WaveMultiStreamPlayer* getPlayer() const;

  fnd::WeakHandle player_;
  int track_;
};

}
