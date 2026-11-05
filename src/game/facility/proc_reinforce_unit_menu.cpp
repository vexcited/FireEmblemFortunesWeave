#include "game/facility/facility_equip_unit_select_menu.hpp"

namespace game::facility {

namespace {

class ProcReinforceUnitMenu : public FacilityEquipUnitSelectMenu {
public:
  ProcReinforceUnitMenu();

  const char* Unknown67() override { return "戦技強化"; }
  int Unknown100() override;
  bool Unknown145() override { return true; }
  int Unknown151() override { return 5; }
  const char* ImplUnknown03() override { return "MID_TempleMenu_Reinforce"; }

  const char* ImplUnknown05() override {
    return "MID_ReinforceMenu_UnitSelect_Help";
  }

  uint8_t ImplUnknown08() override { return 32; }
};

[[gnu::used]] ProcReinforceUnitMenu::ProcReinforceUnitMenu() = default;

}

}
