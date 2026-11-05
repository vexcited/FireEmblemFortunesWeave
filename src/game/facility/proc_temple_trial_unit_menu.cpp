#pragma GCC visibility push(hidden)
#include "game/cmdbtl/cmdbtl_unit_select_menu.hpp"
#pragma GCC visibility pop

namespace game::facility {

// Flags of the class trial, their meaning is unknown.
extern bool g_unknown_2174af0;
extern bool g_unknown_2259368;

namespace {

class ProcTempleTrialUnitMenu : public cmdbtl::CmdBtlUnitSelectMenu {
public:
  ProcTempleTrialUnitMenu();

  ~ProcTempleTrialUnitMenu() override {
    g_unknown_2174af0 = true;
    g_unknown_2259368 = false;
  }

  int Unknown101() override {
    Unknown1638380();
    return BasicMenu::Unknown101();
  }

  int Unknown112() override;
  int ImplUnknown10() override;
  const char* ImplUnknown03() override { return "MID_TempleMenu_Trial"; }
};

[[gnu::used]] ProcTempleTrialUnitMenu::ProcTempleTrialUnitMenu() = default;

}

}
