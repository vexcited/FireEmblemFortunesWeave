#pragma once

#include "snd/wave_player.hpp"

namespace snd {

// Only used as a base, the original drops its unused vtable.
class WaveStreamPlayer : public WavePlayer {
public:
  static void** registry() {
    static void* base = WavePlayer::registry();
    return &base;
  }

  void reset() override;
  bool seekBlock(int block) override;
  void scrub(bool fade, float time) override;

protected:
  void restoreChannel(ChannelState* channel, const LoopState* loop);
};

}
