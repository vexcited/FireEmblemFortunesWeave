#include "game/facility/facility_unit_menu.hpp"
#include "game/facility/mind.hpp"

namespace game::facility {

// Starts the bath with the participants of `Mind`.
void OpenThermaeScene(menu::BasicMenu* menu);

namespace {

class ProcThermaeUnitMenu : public FacilityUnitMenu {
public:
  ProcThermaeUnitMenu();

  int Unknown22() override { return 0; }
  const char* Unknown33() override { return "Hub_UnitSelect_Contents"; }
  const char* Unknown67() override { return "テルマエ"; }
  void Unknown84() override;
  bool Unknown145() override { return true; }
  bool Unknown150() override { return true; }
  int Unknown152() override { return 0; }
  int Unknown158() override;
  const char* ImplUnknown03() override { return "MID_ThermaeMenu_Thermae"; }
  const char16_t* ImplUnknown06() override;
};

[[gnu::used]] ProcThermaeUnitMenu::ProcThermaeUnitMenu() = default;

// The chosen units become the participants.
int ProcThermaeUnitMenu::Unknown158() {
  Mind::GetInstance()->units_.clear();
  for (Unit* unit : units_) {
    Mind::GetInstance()->AddUnit(unit);
  }
  OpenThermaeScene(this);
  return 9;
}

}

}
