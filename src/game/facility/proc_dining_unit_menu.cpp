#include "game/facility/facility_unit_menu.hpp"

namespace game::facility {

namespace {

class ProcDiningUnitMenu : public FacilityUnitMenu {
public:
  ProcDiningUnitMenu();

  int Unknown22() override { return 0; }
  const char* Unknown33() override { return "Hub_UnitSelect_Contents"; }
  const char* Unknown65() override { return "食事"; }
  const char* Unknown67() override { return "食事"; }
  void Unknown84() override;
  int Unknown145() override { return 1; }
  int Unknown150() override { return 1; }
  void Unknown158() override;
  const char* ImplUnknown03() override { return "MID_HotelMenu_Dining"; }
  const char16_t* ImplUnknown06() override;
};

[[gnu::used]] ProcDiningUnitMenu::ProcDiningUnitMenu() = default;

}

}
