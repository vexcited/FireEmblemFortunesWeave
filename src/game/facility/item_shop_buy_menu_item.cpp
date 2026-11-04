#include "game/facility/shop_top_menu_item.hpp"
#include "game/facility/shop_unit_select_menu_item.hpp"
#include "game/menu/basic_menu.hpp"

namespace game::facility {

void OpenItemShopBuy(menu::BasicMenu* menu);

namespace {

class ItemShopBuyMenuItem : public facility::ShopTopMenuItem {
public:
  ItemShopBuyMenuItem();

  const char* GetMid() override { return "MID_Shop_Buy"; }

  int ACall() override {
    if (!IsActive()) {
      return 1;
    }
    OpenItemShopBuy(menu_->GetParent());
    return 9;
  }

  void DrawText() override;
  const char* Unknown75() override { return "MID_Shop_Buy_Help"; }
};

[[gnu::used]] ItemShopBuyMenuItem::ItemShopBuyMenuItem() = default;

class UnitSelectMenuItem : public facility::ShopUnitSelectMenuItem {
public:
  UnitSelectMenuItem();

  int ACall() override;
};

[[gnu::used]] UnitSelectMenuItem::UnitSelectMenuItem() = default;

class CmdBtlUnitSelectMenuItem : public UnitSelectMenuItem {
public:
  CmdBtlUnitSelectMenuItem();

  bool Unknown72() override { return unknown_68_; }
};

[[gnu::used]] CmdBtlUnitSelectMenuItem::CmdBtlUnitSelectMenuItem() = default;

}

}
