#include "game/facility/facility_unit_menu.hpp"

namespace game::facility {

namespace {

class ProcVolunteerUnitMenu : public FacilityUnitMenu {
public:
  ProcVolunteerUnitMenu();

  const char* Unknown33() override { return "Hub_UnitSelect_Volunteer"; }
  const char* Unknown65() override { return "奉仕活動"; }
  const char* Unknown67() override { return "奉仕活動"; }
  void Unknown84() override;
  bool Unknown145() override { return true; }
  int Unknown150() override { return 1; }
  uint8_t ImplUnknown08() override { return 0; }
  void Unknown158() override;
  const char* ImplUnknown03() override { return "MID_TempleMenu_Volunteer"; }
  const char16_t* ImplUnknown06() override;
};

[[gnu::used]] ProcVolunteerUnitMenu::ProcVolunteerUnitMenu() = default;

}

}
