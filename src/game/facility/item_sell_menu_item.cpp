#include "game/facility/item_sell_menu_item.hpp"
#include "game/facility/shop_top_menu_item.hpp"

namespace game::facility {

const char* ItemSellMenuItem::GetMid() {
  return "MID_Shop_Sell";
}

const char* ItemSellMenuItem::Unknown75() {
  return "MID_Shop_Sell_Help";
}

}
