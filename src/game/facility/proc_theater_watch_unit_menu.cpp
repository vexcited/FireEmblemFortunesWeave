#include "game/facility/facility_unit_menu.hpp"

namespace game::facility {

namespace {

class ProcTheaterWatchUnitMenu : public FacilityUnitMenu {
public:
  ProcTheaterWatchUnitMenu();

  const char* Unknown33() override { return "Hub_UnitSelect_Watch"; }
  const char* Unknown67() override { return "観劇"; }
  void Unknown84() override;
  int Unknown145() override { return 1; }
  int Unknown150() override { return 1; }
  int Unknown153() override { return 1; }
  void Unknown158() override;
  const char* ImplUnknown03() override { return "MID_TheaterMenu_Watch"; }
  const char16_t* ImplUnknown06() override;
};

[[gnu::used]] ProcTheaterWatchUnitMenu::ProcTheaterWatchUnitMenu() = default;

}

}
