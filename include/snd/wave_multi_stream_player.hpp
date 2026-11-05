#pragma once

#include <cstdint>
#include <vector>

#include "nn/os/mutex.hpp"
#include "snd/fnd/string.hpp"
#include "snd/fnd/weak_handle.hpp"
#include "snd/wave_stream_player.hpp"

namespace snd {

// Plays several stream players as tracks of one sound.
class WaveMultiStreamPlayer : public WaveStreamPlayer {
public:
  static constexpr int kTrackCount = 8;

  static void** registry() {
    static void* base = WaveStreamPlayer::registry();
    return &base;
  }

  void** getRegistry() const override;
  void initialize() override;
  void finalize() override;
  void setSource(int id, int kind, const void* data) override;
  bool isLoaded() const override;
  bool isReady() const override;
  void start() override;
  void stop(const Fade& fade) override;
  void pause(const Fade& fade) override;
  void resumePause(const Fade& fade) override;
  void mute(const Fade& fade) override;
  void resumeMute(const Fade& fade) override;
  bool seekSample(int sample) override;
  float getRemainingMs(int sample) const override;
  int getRemainingSamples(int sample) const override;

  void startTrack(int track);
  void setVariable(int index, const Fade& fade, float value);

private:
  struct Track {
    int mode;
    uint8_t reserved4[0x18];
  };

  int findPlayingTrack() const;
  const WaveStreamPlayer* getTrack(int index) const;

  std::vector<fnd::WeakHandle, fnd::Allocator<fnd::WeakHandle>> tracks_;
  uint8_t reserved2bb0_[0x60];
  Track trackModes_[kTrackCount];
  uint8_t reserved2cf0_[0x8];
  nn::os::MutexType mutex_;
  int currentTrack_;
};

}
