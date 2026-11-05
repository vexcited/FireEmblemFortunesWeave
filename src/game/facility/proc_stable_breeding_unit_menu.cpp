#include "game/facility/facility_equip_unit_select_menu.hpp"

namespace game::facility {

namespace {

class ProcStableBreedingUnitMenu : public FacilityEquipUnitSelectMenu {
public:
  ProcStableBreedingUnitMenu();

  const char* Unknown67() override { return "厩舎"; }
  int Unknown100() override;
  bool Unknown145() override { return true; }
  int Unknown151() override { return 7; }
  const char* ImplUnknown03() override { return "MID_StableMenu_Breeding"; }

  const char* ImplUnknown05() override {
    return "MID_Menu_Food_UnitSelect_Help";
  }
};

[[gnu::used]]
ProcStableBreedingUnitMenu::ProcStableBreedingUnitMenu() = default;

}

}
