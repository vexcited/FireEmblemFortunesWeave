#pragma once

#include "snd/wave_player.hpp"

namespace snd {

// Only the parts the voices use.
class WaveMultiStreamPlayer : public WavePlayer {
public:
  void startTrack(int track);
  void setVariable(uint32_t index, const Fade& fade, float value);
};

}
