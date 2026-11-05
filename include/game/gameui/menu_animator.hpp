#pragma once

#include <cstdint>

namespace game::gameui {

// Plays the opening and closing animations of menu windows, its kinds pick
// the In and Open animations or one of the directions Up, Down, Left, Right,
// Alpha, Dialog and Scale.
class MenuAnimator {
public:
  static MenuAnimator* instance_;

  static bool IsPlaying(int64_t handle) {
    if (handle == -1 || instance_ == nullptr) {
      return false;
    }
    for (const Slot& slot : instance_->slots_) {
      if (slot.handle == handle) {
        return true;
      }
    }
    return false;
  }

private:
  struct Slot {
    uint8_t unknown_00_[0xe0];
    int64_t handle;
  };

  uint8_t unknown_00_[0x30];
  Slot slots_[10];
};

}
