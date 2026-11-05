#include "game/facility/shop_unit_select_menu.hpp"

namespace game::facility {

namespace {

class ProcBlacksmithUnitSelectMenu : public ShopUnitSelectMenu {
public:
  ProcBlacksmithUnitSelectMenu();

  Unit* Unknown147() override;
  Unit* Unknown148() override;
  void Unknown153() override;
  menu::BasicMenuItem* Unknown154() override { return nullptr; }

  // Kinds 0 and 2 refine, the others repair.
  const char* ImplUnknown05() override {
    return kind_ == 0 || kind_ == 2 ? "MID_RefineMenu_UnitSelect_Help"
      : "MID_RepairMenu_UnitSelect_Help";
  }

  const char* ImplUnknown03() override {
    return kind_ == 0 || kind_ == 2 ? "MID_BlacksmithShop_Refine"
      : "MID_BlacksmithShop_Repair";
  }

private:
  uint8_t kind_;
};

[[gnu::used]]
ProcBlacksmithUnitSelectMenu::ProcBlacksmithUnitSelectMenu() = default;

}

}
