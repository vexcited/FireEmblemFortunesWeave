#pragma once

#include "game/facility/shop_top_menu_item.hpp"
#include "game/menu/basic_menu.hpp"

namespace game::facility {

void OpenItemSell(menu::BasicMenu* menu);

class ItemSellMenuItem : public ShopTopMenuItem {
public:
  const char* GetMid() override;
  const char* Unknown75() override;

  int ACall() override {
    if (!IsActive()) {
      return 1;
    }
    OpenItemSell(menu_->GetParent());
    return 9;
  }

};

}
