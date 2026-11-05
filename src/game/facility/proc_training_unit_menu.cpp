#include "game/facility/facility_unit_menu.hpp"
#include "game/facility/mind.hpp"
#include "game/game_mode_data.hpp"

namespace game {

#pragma GCC visibility push(hidden)

extern const HashedString kVariableHubFacilityForced;

#pragma GCC visibility pop

}

namespace game::facility {

// Starts the training with the participants of `Mind`.
void OpenTrainingScene(menu::BasicMenu* menu);

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
  bool Unknown145() override { return true; }
  int Unknown158() override;
  const char* ImplUnknown03() override { return "MID_ArenaMenu_Training"; }
  const char16_t* ImplUnknown06() override;
};

[[gnu::used]] ProcTrainingUnitMenu::ProcTrainingUnitMenu() = default;

// The only participant of a forced training cannot be given back.
int ProcTrainingUnitMenu::Unknown101() {
  if (GameModeData::IsVariableSet(kVariableHubFacilityForced) &&
      count_ == 1) {
    return 1;
  }
  return FacilityUnitMenu::Unknown101();
}

// The chosen units become the participants.
int ProcTrainingUnitMenu::Unknown158() {
  Mind::GetInstance()->units_.clear();
  for (Unit* unit : units_) {
    Mind::GetInstance()->AddUnit(unit);
  }
  OpenTrainingScene(this);
  return 9;
}

}

}
