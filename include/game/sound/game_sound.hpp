#pragma once

#include <cstdint>

#include "gfx/render/math.hpp"

namespace game::sound {

#pragma GCC visibility push(hidden)

// The game sound object, which follows the camera as its listener.
class GameSound {
public:
  void SetGameFadeVolume(bool isEnable) {
    game_fade_volume_ = isEnable;
  }

  void SetCameraListener(const gfx::render::Vector4& position) {
    listener_x_ = position.v[0];
    listener_y_ = position.v[1];
    camera_listener_ = true;
    listener_z_ = position.v[2];
  }

private:
  uint8_t unknown_00_[0x258];
  bool game_fade_volume_;
  uint8_t unknown_259_[0x77b];
  bool camera_listener_;
  uint8_t unknown_9d5_[0xb];
  float listener_x_;
  float listener_y_;
  float listener_z_;
};

#pragma GCC visibility pop

// The instance, read directly by the natives.
[[gnu::visibility("hidden")]] extern GameSound* g_game_sound;

}
