#include "game/facility/shop_unit_select_menu.hpp"

namespace game::facility {

namespace {

class ProcItemShopUnitSelectMenu : public ShopUnitSelectMenu {
public:
  ProcItemShopUnitSelectMenu();

  void Unknown153() override;
  menu::BasicMenuItem* Unknown154() override { return nullptr; }

  const char* ImplUnknown05() override {
    return "MID_ShopMenu_Buy_UnitSelect_Help";
  }

  const char* ImplUnknown03() override { return "MID_Shop_Buy"; }
};

[[gnu::used]]
ProcItemShopUnitSelectMenu::ProcItemShopUnitSelectMenu() = default;

}

}
