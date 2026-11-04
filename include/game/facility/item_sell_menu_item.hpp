#pragma once

#include "game/facility/shop_top_menu_item.hpp"

namespace game::facility {

class ItemSellMenuItem : public ShopTopMenuItem {
public:
  const char* GetMid() override;
  const char* Unknown75() override;
  int ACall() override;
};

}
