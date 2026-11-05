#include "game/facility/facility_unit_menu.hpp"
#include "game/facility/mind.hpp"

namespace game::facility {

// Starts the meal with the participants of `Mind`.
void OpenDiningScene(menu::BasicMenu* menu);

namespace {

class ProcDiningUnitMenu : public FacilityUnitMenu {
public:
  ProcDiningUnitMenu();

  int Unknown22() override { return 0; }
  const char* Unknown33() override { return "Hub_UnitSelect_Contents"; }
  const char* Unknown65() override { return "食事"; }
  const char* Unknown67() override { return "食事"; }
  void Unknown84() override;
  bool Unknown145() override { return true; }
  bool Unknown150() override { return true; }
  int Unknown158() override;
  const char* ImplUnknown03() override { return "MID_HotelMenu_Dining"; }
  const char16_t* ImplUnknown06() override;
};

[[gnu::used]] ProcDiningUnitMenu::ProcDiningUnitMenu() = default;

// The chosen units become the participants.
int ProcDiningUnitMenu::Unknown158() {
  Mind::GetInstance()->units_.clear();
  for (Unit* unit : units_) {
    Mind::GetInstance()->AddUnit(unit);
  }
  OpenDiningScene(this);
  return 9;
}

}

}
