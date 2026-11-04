#include "game/facility/facility_menu.hpp"

namespace game::facility {

namespace {

class ProcThermaeThermaeMenu : public FacilityMenu {
public:
  ProcThermaeThermaeMenu();

  const char* Unknown33() override { return "Hub_Thermae_Thermae"; }
  const char* Unknown67() override { return "テルマエ"; }
  void Unknown84() override;
  void Unknown88() override;
  int Unknown100() override;

  int InputUnknown01() override { return 6; }
  const char* ImplUnknown03() override { return "MID_ThermaeMenu_Thermae"; }

  const char* ImplUnknown05() override {
    return "MID_ThermaeMenu_ThermaeSelect_Help";
  }
};

[[gnu::used]] ProcThermaeThermaeMenu::ProcThermaeThermaeMenu() = default;

}

}
