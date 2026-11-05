#pragma once

#include <cstdint>

namespace game {

#pragma GCC visibility push(hidden)

// The user settings at 0x2265ed8, `battle_info_window.cpp` declares the
// battle animation options of the same object.
class GameSpeedSetting {
public:
  // The bits 0, 1 and 3 speed the captions up.
  bool IsFastForward() const {
    return (speed_flags_ & 0xb) != 0;
  }

private:
  uint8_t unknown_00_[0x3b0];
  uint32_t speed_flags_;
};

extern GameSpeedSetting* g_game_speed_setting;

#pragma GCC visibility pop

// The frame timing of the application, its type is not recovered.
struct FrameClock {
  uint8_t unknown_00_[0x1dc];
  int32_t frame_rate;
};

extern FrameClock* g_frame_clock;

// The frames to advance by in one update, eight times more when fast.
inline float GetFrameStep() {
  float step = 60.0f / static_cast<float>(g_frame_clock->frame_rate);
  if (step <= 0.0f) {
    step = 1.0f;
  }
  if (g_game_speed_setting->IsFastForward()) {
    step *= 8.0f;
  }
  return step;
}

}
