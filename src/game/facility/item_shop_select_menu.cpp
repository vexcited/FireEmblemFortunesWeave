#include "game/sound/se.hpp"

#pragma GCC visibility push(hidden)
#include "game/facility/item_shop_select_menu.hpp"
#pragma GCC visibility pop

namespace game::gameui {

// Shows the item detail, with the equip state of the unit when given.
void SetItemDetail(ui::LayoutAccessor& part, const UnitItem& item,
  Unit* unit);

}

namespace game::facility {

int ShopSelectMenu::InputUnknown12(int direction, bool loop) {
  if (!Unknown150() || !tab_.Move(direction, loop)) {
    return 0;
  }

  Unknown16de4d0();
  return 13;
}

bool ShopSelectMenu::Unknown144() {
  return false;
}

bool ShopSelectMenu::Unknown145() {
  return false;
}

bool ShopSelectMenu::Unknown146() {
  return true;
}

void ShopSelectMenu::Unknown147(Unit* unit, bool unknown) {}

void ShopSelectMenu::Unknown148() {}

bool ShopSelectMenu::Unknown149() {
  return true;
}

void ItemShopSelectMenu::Unknown57(std::vector<int64_t>& handles) {
  ImplUnknown12();
  Unknown135(handles);
  Unknown88();
}

void ItemShopSelectMenu::Unknown76(int result) {
  if (result != 13) {
    IShopSelectMenu::Unknown76(result);
    return;
  }

  sound::PlaySe("SE_SYS_UnitChange_Left");
}

void ItemShopSelectMenu::Unknown77(int result) {
  if (result != 13) {
    IShopSelectMenu::Unknown77(result);
    return;
  }

  sound::PlaySe("SE_SYS_UnitChange_Right");
}

int ItemShopSelectMenu::Unknown102() {
  if (!detail_enabled_) {
    return 0;
  }

  if (unit_ == nullptr || !IsEnableSwitchItemInfoDetail() ||
      !IsItemDetailSwitchable()) {
    return 14;
  }

  detail_ = !detail_;
  Unknown157(item_);
  return 13;
}

void ItemShopSelectMenu::Unknown147(Unit* unit, bool unknown) {
  Unknown154(unit);
  Unknown88();
}

const char* ItemShopSelectMenu::Unknown156() {
  return "L_InfoDetail";
}

void ItemShopSelectMenu::Unknown157(const UnitItem& item) {
  item_ = item;
  gameui::SetItemDetail(accessor_.FindPart(Unknown156()), item,
    detail_ ? unit_ : nullptr);
}

}
