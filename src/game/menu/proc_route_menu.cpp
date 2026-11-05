#include "game/menu/equip_unit_select_menu.hpp"
#include "game/menu/unit_list.hpp"

namespace game::menu {

namespace {

class ProcRouteMenu : public EquipUnitSelectMenu {
public:
  ProcRouteMenu();

  ~ProcRouteMenu() override {
    ResetMenuUnits();
  }

  const char* Unknown32() override { return "Layout/Obelisk.arc"; }
  const char* Unknown33() override { return "Obelisk_InheritUnit"; }
  void Unknown84() override;
  void Unknown88() override;
  int InputUnknown02() override { return 8; }
  bool Unknown149() override { return true; }
  const char* ImplUnknown03() override { return "MID_HubMenu_RouteSelect"; }
  const char* ImplUnknown05() override { return "MID_RouteSelectMenu_Help"; }
};

[[gnu::used]] ProcRouteMenu::ProcRouteMenu() = default;

}

}
