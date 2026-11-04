#include "game/menu/game_menu_item.hpp"

namespace game::facility {

namespace {

class ObeliskDestinyMenuItem : public menu::GameMenuItem {
public:
  ObeliskDestinyMenuItem();

  void OnSelect() override;
  void OnDeselect() override;
  int ACall() override;
  void DrawText() override;
  bool IsActive() override;
};

[[gnu::used]] ObeliskDestinyMenuItem::ObeliskDestinyMenuItem() = default;

}

}
