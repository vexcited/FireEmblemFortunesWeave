#include "game/menu/equip_menu_item_base.hpp"

namespace game::menu {

namespace {

class UnitItemMenu : public menu::EquipMenuItemBase {
public:
  UnitItemMenu();

  void DrawText() override;
  bool IsActive() override;
};

[[gnu::used]] UnitItemMenu::UnitItemMenu() = default;

}

}
