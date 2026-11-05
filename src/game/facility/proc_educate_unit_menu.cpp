#include "game/facility/facility_equip_unit_select_menu.hpp"
#include "game/game_mode_data.hpp"

namespace game {

#pragma GCC visibility push(hidden)

extern const HashedString kVariableHubFacilityForced;

#pragma GCC visibility pop

}

namespace game::facility {

namespace {

class ProcEducateUnitMenu : public FacilityEquipUnitSelectMenu {
public:
  ProcEducateUnitMenu();

  const char* Unknown67() override { return "伝授"; }
  int Unknown100() override;

  // The menu stays open while the facility is forced.
  int Unknown101() override {
    if (GameModeData::IsVariableSet(kVariableHubFacilityForced)) {
      return 1;
    }
    return BasicMenu::Unknown101();
  }

  bool Unknown145() override { return true; }
  int Unknown151() override { return 5; }
  const char* ImplUnknown03() override { return "MID_TempleMenu_Educate"; }

  const char* ImplUnknown05() override {
    return "MID_EducateMenu_UnitSelect_Help";
  }

  uint8_t ImplUnknown08() override { return 32; }
};

[[gnu::used]] ProcEducateUnitMenu::ProcEducateUnitMenu() = default;

}

}
