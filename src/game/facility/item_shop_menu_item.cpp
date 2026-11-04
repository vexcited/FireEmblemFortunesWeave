#pragma GCC visibility push(hidden)
#include "game/facility/item_shop_menu_item.hpp"
#include "game/facility/shop_select_menu.hpp"
#pragma GCC visibility pop

namespace game::facility {

int GetItemShopUnknown(const void* item);

const void* ItemShopMenuItem_Account::ShopUnknown00() {
  return unknown_68_;
}

const void* ItemShopMenuItem_Account::ShopUnknown01() {
  return unknown_68_;
}

IShopSelectMenu* ItemShopMenuItem_Account::ShopUnknown10() {
  return dynamic_cast<IShopSelectMenu*>(menu_);
}

const char* ItemShopMenuItem::Unknown70() {
  return unknown_80_;
}

bool ItemShopMenuItem::Unknown71() {
  return unknown_88_;
}

int ItemShopMenuItem::Unknown76() {
  return GetItemShopUnknown(unknown_78_);
}

const char* ItemShopMenuItem::ShopUnknown08() {
  return "MID_Shop_Buy_Confirm";
}

const char* ItemShopMenuItem::ShopUnknown09() {
  return "MID_Shop_Consumption";
}

}
