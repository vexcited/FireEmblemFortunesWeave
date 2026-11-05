#include "game/facility/shop_unit_select_menu.hpp"

namespace game::facility {

namespace {

class ProcItemSellUnitSelectMenu : public ShopUnitSelectMenu {
public:
  ProcItemSellUnitSelectMenu();

  void Unknown153() override;
  menu::BasicMenuItem* Unknown154() override;

  const char* ImplUnknown05() override {
    return "MID_ShopMenu_Sell_UnitSelect_Help";
  }

  const char* ImplUnknown03() override { return "MID_Shop_Sell"; }
};

[[gnu::used]]
ProcItemSellUnitSelectMenu::ProcItemSellUnitSelectMenu() = default;

}

}
