#pragma GCC visibility push(hidden)
#include "game/menu/game_menu.hpp"
#pragma GCC visibility pop

namespace game::menu {

void GameMenu::ImplUnknown11(std::vector<KeyHelpEntry>& entries) {
  if (Unknown67() == nullptr) {
    return;
  }
  entries.emplace_back("Tutorial", "MID_KeyHelp_Tutorial", true, 10,
    Unknown24(), false, nullptr);
}

}
