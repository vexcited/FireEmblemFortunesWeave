#include "game/menu/game_menu_item.hpp"

namespace game::menu {

namespace {

class GuideMenuItemBase : public menu::GameMenuItem {
public:
  int ACall() override { return 0; }
};

class GuideMenuItem : public GuideMenuItemBase {
public:
  GuideMenuItem();

  void DrawText() override;
};

[[gnu::used]] GuideMenuItem::GuideMenuItem() = default;

class MarginMenuItem : public GuideMenuItemBase {
public:
  MarginMenuItem();

  bool IsEnable() override { return false; }
  void Unknown16() override;
  bool IsActive() override { return false; }
};

[[gnu::used]] MarginMenuItem::MarginMenuItem() = default;

}

}
