#pragma GCC visibility push(hidden)
#include "game/gameui/menu_animator.hpp"
#pragma GCC visibility pop

#include "ui/layout_accessor.hpp"

namespace game::gameui {

const char* const MenuAnimator::directions_[7] = {
  "Up", "Down", "Left", "Right", "Alpha", "Dialog", "Scale",
};

int64_t MenuAnimator::PlayIn(int kind, ui::LayoutAccessor& accessor,
  const char* pane) {
  MenuAnimator* animator = instance_;
  if (animator == nullptr || kind == 8) {
    return -1;
  }

  if (kind == 7) {
    const char* name = "In";
    if (!accessor.HasAnimation("In")) {
      name = "Open";
    }
    if (accessor.HasAnimation(name)) {
      return animator->Play(7, 2, accessor, pane, name);
    }
    return -1;
  }

  char animation[32];
  std::sprintf(animation, "%s%s", directions_[kind], "In");
  return animator->Play(kind, 0, accessor, pane, animation);
}

int64_t MenuAnimator::PlayOut(int kind, ui::LayoutAccessor& accessor,
  const char* pane) {
  MenuAnimator* animator = instance_;
  if (animator == nullptr || kind == 8) {
    return -1;
  }

  if (kind == 7) {
    const char* name = "Out";
    if (!accessor.HasAnimation("Out")) {
      name = "Close";
    }
    if (accessor.HasAnimation(name)) {
      return animator->Play(7, 2, accessor, pane, name);
    }
    return -1;
  }

  char animation[32];
  std::sprintf(animation, "%s%s", directions_[kind], "Out");
  return animator->Play(kind, 1, accessor, pane, animation);
}

}
