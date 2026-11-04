#pragma GCC visibility push(hidden)
#include "game/facility/shop_select_menu.hpp"
#pragma GCC visibility pop

namespace game::facility {

const char* IShopSelectMenu::Unknown32() {
  return "Layout/Hub.arc";
}

uint8_t IShopSelectMenu::ImplUnknown08() {
  return 2;
}

void IShopSelectMenu::Unknown140() {}

void IShopSelectMenu::Unknown141() {}

int MaterialShopSelectMenu::Unknown143() {
  return 0;
}

}
