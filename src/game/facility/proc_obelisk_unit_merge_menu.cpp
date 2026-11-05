#include "game/menu/equip_unit_select_menu.hpp"

namespace game::facility {

namespace {

class ProcObeliskUnitMergeMenu : public menu::EquipUnitSelectMenu {
public:
  ProcObeliskUnitMergeMenu();

  const char* Unknown67() override { return "ユニットマージ"; }
  void Unknown96() override;
  void Unknown128() override;

  ui::LayoutAccessor& Unknown144() override {
    return accessor_.FindPart("L_UnitInfoDetail/L_UnitInfo");
  }

  bool Unknown145() override { return true; }
  bool Unknown149() override { return true; }
  const char* ImplUnknown03() override { return "MID_ObeliskMenu_UnitMarge"; }

  const char* ImplUnknown05() override {
    return "MID_UnitMergeMenu_UnitSelect_Help";
  }

  uint8_t ImplUnknown08() override { return 8; }
  uint8_t ImplUnknown07() override { return 1; }
};

[[gnu::used]] ProcObeliskUnitMergeMenu::ProcObeliskUnitMergeMenu() = default;

}

}
