#include "game/facility/facility_unit_menu.hpp"

namespace game::facility {

namespace {

class ProcTheaterCastingUnitMenu : public FacilityUnitMenu {
public:
  ProcTheaterCastingUnitMenu();

  const char* Unknown33() override { return "Hub_UnitSelect_Casting"; }
  const char* Unknown67() override { return "演劇"; }
  void Unknown84() override;
  int Unknown112() override;
  int ImplUnknown10() override;
  bool Unknown145() override { return true; }
  int Unknown151() override { return 1; }
  void Unknown156() override;
  void Unknown157() override;
  int Unknown158() override;
  const char* ImplUnknown03() override { return "MID_TheaterMenu_Act"; }
  const char16_t* ImplUnknown06() override;
};

[[gnu::used]]
ProcTheaterCastingUnitMenu::ProcTheaterCastingUnitMenu() = default;

}

}
