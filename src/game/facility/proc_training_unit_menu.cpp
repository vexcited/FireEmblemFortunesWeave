#include "game/facility/facility_unit_menu.hpp"

namespace game::facility {

namespace {

class ProcTrainingUnitMenu : public FacilityUnitMenu {
public:
  ProcTrainingUnitMenu();

  int Unknown22() override { return 0; }
  const char* Unknown33() override { return "Hub_UnitSelect_Training"; }
  int Unknown40() override { return 270; }
  const char* Unknown65() override { return "訓練"; }
  const char* Unknown67() override { return "訓練"; }
  void Unknown84() override;
  void Unknown88() override;
  int Unknown101() override;
  int Unknown145() override { return 1; }
  void Unknown158() override;
  const char* ImplUnknown03() override { return "MID_ArenaMenu_Training"; }
  const char16_t* ImplUnknown06() override;
};

[[gnu::used]] ProcTrainingUnitMenu::ProcTrainingUnitMenu() = default;

}

}
