#include "game/menu/equip_unit_select_menu.hpp"

namespace game::gameui {

// Shows a count in the number part of a menu.
void SetMenuNumber(ui::LayoutAccessor& accessor, int count);

}

namespace game::map {

namespace {

class SortieUnitSelectMenu : public menu::EquipUnitSelectMenu {
public:
  SortieUnitSelectMenu();

  const char* Unknown65() override { return "ユニット選択"; }
  const char* Unknown67() override { return "ユニット選択"; }

  void Unknown84() override {
    EquipUnitSelectMenu::Unknown84();
    gameui::SetMenuNumber(accessor_3b8_, Unknown24());
  }

  int Unknown109() override;
  int Unknown112() override;
  void Unknown128() override;
  int ImplUnknown10() override;
  bool Unknown145() override { return true; }
  bool Unknown149() override { return true; }
  const char* ImplUnknown03() override { return "MID_SysMenu_UnitSelect"; }

  const char* ImplUnknown05() override {
    return "MID_SortieMenu_UnitSelect_Help";
  }
};

[[gnu::used]] SortieUnitSelectMenu::SortieUnitSelectMenu() = default;

}

}
