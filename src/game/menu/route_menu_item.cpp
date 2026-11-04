#include "game/menu/equip_unit_select_menu_item.hpp"

namespace game::menu {

namespace {

class RouteMenuItem : public menu::EquipUnitSelectMenuItem {
public:
  RouteMenuItem();

  int ACall() override;
  void DrawText() override;
};

[[gnu::used]] RouteMenuItem::RouteMenuItem() = default;

}

}
