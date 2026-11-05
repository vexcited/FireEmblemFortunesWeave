#pragma GCC visibility push(hidden)
#include "game/menu/belonging_menu.hpp"
#pragma GCC visibility pop

namespace game::menu {

BelongingMenu::~BelongingMenu() = default;

int BelongingMenu::Unknown24() {
  return GetKeyKind();
}

int BelongingMenu::InputUnknown12(int direction, bool loop) {
  if (!Unknown140() || !tab_.Move(direction, loop)) {
    return 0;
  }
  Unknown16de4d0();
  return 13;
}

}
