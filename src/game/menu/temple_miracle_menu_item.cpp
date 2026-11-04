#include "game/menu/game_menu_item.hpp"

namespace game::menu {

namespace {

class TempleMiracleMenuItem : public menu::GameMenuItem {
public:
  TempleMiracleMenuItem();

  void OnSelect() override;
  void OnDeselect() override;
  void DrawText() override;
  bool IsActive() override;
};

[[gnu::used]] TempleMiracleMenuItem::TempleMiracleMenuItem() = default;

}

}
