#pragma once

namespace game::menu {

#pragma GCC visibility push(hidden)

// Scrolled text page of the tutorial menus, its class name is unknown.
class TutorialScroll {
public:
  void ScrollUp(bool loop);
  void ScrollDown(bool loop, bool unknown);
};

#pragma GCC visibility pop

}
