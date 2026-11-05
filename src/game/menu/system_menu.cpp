#include <algorithm>

#include "game/sound/se.hpp"
#include "game/util/format.hpp"

#pragma GCC visibility push(hidden)
#include "game/menu/system_menu.hpp"
#pragma GCC visibility pop

namespace game::menu {

void SystemMenu::Unknown84() {
  int count = 0;
  for (BasicMenuItem* item : items_) {
    count += item->IsDecidable();
  }
  accessor_3b8_.StartAnimation(
    util::Format("MenuItem%02d", std::min(count, 10) - 1));
}

int SystemMenu::Unknown101() {
  if (unknown_428_) {
    return 0;
  }
  return GameMenu::Unknown101();
}

void SystemMenu::InputUnknown19() {
  sound::PlayCursorSe();
}

void SystemMenu::InputUnknown20() {
  InputUnknown19();
}

}
