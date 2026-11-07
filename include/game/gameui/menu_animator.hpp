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
  // The direction names of the kinds 0 to 6.
  static const char* const directions_[7];

  // Plays the animation named after a direction and `In` or `Out` on a pane,
  // returns its handle.
  int64_t Play(int kind, int mode, ui::LayoutAccessor& accessor,
    const char* pane, const char* animation);

  // Play the opening or closing animation of a window, kind 7 the In or Open
  // animation and kind 8 none. Return the handle or -1.
  static int64_t PlayIn(int kind, ui::LayoutAccessor& accessor,
    const char* pane);
  static int64_t PlayOut(int kind, ui::LayoutAccessor& accessor,
    const char* pane);

  static int64_t PlayDirection(int kind, int mode,
    ui::LayoutAccessor& accessor, const char* pane, const char* direction,
    const char* suffix) {
    if (instance_ == nullptr) {
      return -1;
    }
    char animation[32];
    std::sprintf(animation, "%s%s", direction, suffix);
    return instance_->Play(kind, mode, accessor, pane, animation);
  }

  static bool IsPlaying(int64_t handle) {
    if (handle == -1 || instance_ == nullptr) {
      return false;
    }
    // Every slot is compared, the original reads them all.
    int matches = 0;
    for (const Slot& slot : instance_->slots_) {
      matches += slot.handle == handle;
    }
    return matches != 0;
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
