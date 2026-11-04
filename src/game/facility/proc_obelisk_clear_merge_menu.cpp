#include "game/menu/unit_grid_select_menu.hpp"

namespace game::facility {

namespace {

class ProcObeliskClearMergeMenu : public menu::UnitGridSelectMenu {
public:
  ProcObeliskClearMergeMenu();

  int Unknown26() override { return 20; }
  const char* Unknown32() override { return "Layout/Obelisk.arc"; }
  const char* Unknown33() override { return "Obelisk_UnitList_ClearMerge"; }
  int Unknown61() override { return 3; }
  void Unknown85() override;
  void Unknown88() override;
  int Unknown100() override;
  int Unknown101() override;
  int ImplUnknown10() override;
  const char* ImplUnknown03() override { return "MID_ClearStatus_Title"; }
  const char* ImplUnknown05() override { return "MID_ClearStatus_Help"; }
  uint8_t ImplUnknown07() override { return 1; }
};

[[gnu::used]] ProcObeliskClearMergeMenu::ProcObeliskClearMergeMenu() = default;

}

}
