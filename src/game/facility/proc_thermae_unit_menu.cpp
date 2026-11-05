#include "game/facility/facility_unit_menu.hpp"

namespace game::facility {

namespace {

class ProcThermaeUnitMenu : public FacilityUnitMenu {
public:
  ProcThermaeUnitMenu();

  int Unknown22() override { return 0; }
  const char* Unknown33() override { return "Hub_UnitSelect_Contents"; }
  const char* Unknown67() override { return "テルマエ"; }
  void Unknown84() override;
  bool Unknown145() override { return true; }
  int Unknown150() override { return 1; }
  int Unknown152() override { return 0; }
  void Unknown158() override;
  const char* ImplUnknown03() override { return "MID_ThermaeMenu_Thermae"; }
  const char16_t* ImplUnknown06() override;
};

[[gnu::used]] ProcThermaeUnitMenu::ProcThermaeUnitMenu() = default;

}

}
