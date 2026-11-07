#pragma once

#include <cstdint>

namespace as {

// Counts the frames the game ran, at 60 frames per second.
class FrameCounter {
public:
  float GetFrameCount() const {
    return frame_count_;
  }

  float GetMsecCount() const {
    return frame_count_ * (1000.0f / 60.0f);
  }

  // The frames of the last update, scaled by the game speed.
  float GetDeltaFrames() const {
    return delta_frames_;
  }

private:
  uint8_t unknown_00_[0x68];
  float frame_count_;
  uint8_t unknown_6c_[0x34];
  float delta_frames_;
};

// The counter of the scripts, which the game speed scales.
extern FrameCounter* g_frame_counter;

#pragma GCC visibility push(hidden)

// The counter of the frames at the base speed.
extern FrameCounter* g_base_frame_counter;
extern uint32_t g_tick_count;

#pragma GCC visibility pop

}
