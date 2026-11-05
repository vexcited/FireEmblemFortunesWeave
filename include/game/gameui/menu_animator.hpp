#pragma once

#include <cstdint>
#include <cstdio>

namespace ui {

class LayoutAccessor;

}

namespace game::gameui {

// Plays the opening and closing animations of menu windows, its kinds pick
// the In and Open animations or one of the directions Up, Down, Left, Right,
// Alpha, Dialog and Scale.
class MenuAnimator {
public:
  static MenuAnimator* instance_;

  // Plays the animation named after a direction and `In` or `Out` on a pane,
  // returns its handle.
  int64_t Play(int kind, int mode, ui::LayoutAccessor& accessor,
    const char* pane, const char* animation);

  static void PlayDirection(int kind, int mode, ui::LayoutAccessor& accessor,
    const char* pane, const char* direction, const char* suffix) {
    if (instance_ == nullptr) {
      return;
    }
    char animation[32];
    std::sprintf(animation, "%s%s", direction, suffix);
    instance_->Play(kind, mode, accessor, pane, animation);
  }

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
