#include "game/facility/empty_shop_item_menu_item.hpp"
#include "game/facility/item_sell_menu_item.hpp"
#include "game/facility/shop_top_menu_item.hpp"

namespace game::facility {

namespace {

class MaterialShopTopMenuItem : public facility::ShopTopMenuItem {
public:
  MaterialShopTopMenuItem();

  const char* GetMid() override { return "MID_Shop_Buy"; }
  int ACall() override;
  void DrawText() override;
  const char* Unknown75() override { return "MID_Shop_Buy_Help"; }
};

[[gnu::used]] MaterialShopTopMenuItem::MaterialShopTopMenuItem() = default;

class MaterialShopItemSellMenuItem : public facility::ItemSellMenuItem {
public:
  MaterialShopItemSellMenuItem();
};

[[gnu::used]]
MaterialShopItemSellMenuItem::MaterialShopItemSellMenuItem() = default;

}

}

namespace game::facility {

class EmptyShopMenuItem_Sell : public EmptyShopItemMenuItem {
public:
  EmptyShopMenuItem_Sell();

  int BCall() override;
};

EmptyShopMenuItem_Sell::EmptyShopMenuItem_Sell() = default;

}
