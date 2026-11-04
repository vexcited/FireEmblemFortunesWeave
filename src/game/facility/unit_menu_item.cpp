#include "game/menu/game_menu_item.hpp"

namespace game::facility {

namespace {

class UnitMenuItem : public menu::GameMenuItem {
public:
  UnitMenuItem();

  bool IsEnable() override { return IsActive(); }
  bool Unknown14() override { return true; }
  void DrawText() override;
  void PlayCursorAnimation() override;
};

[[gnu::used]] UnitMenuItem::UnitMenuItem() = default;

}

}
