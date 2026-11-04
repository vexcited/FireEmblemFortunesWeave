#include "game/facility/facility_menu.hpp"

namespace game::facility {

namespace {

class ProcTrainingKindMenu : public FacilityMenu {
public:
  ProcTrainingKindMenu();

  const char* Unknown33() override { return "Hub_Arena_Training_Training"; }
  const char* Unknown67() override { return "訓練"; }
  void Unknown84() override;
  void Unknown88() override;
  int Unknown100() override;

  int InputUnknown01() override { return 5; }
  const char* ImplUnknown03() override { return "MID_ArenaMenu_Training"; }
  const char* ImplUnknown05() override { return "MID_TrainingMenu_Help"; }
};

[[gnu::used]] ProcTrainingKindMenu::ProcTrainingKindMenu() = default;

}

}
