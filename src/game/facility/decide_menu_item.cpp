#include "game/menu/game_menu_item.hpp"

namespace game::facility {

namespace {

class DecideMenuItem : public menu::GameMenuItem {
public:
  DecideMenuItem();

  const char* GetMid() override { return nullptr; }
};

[[gnu::used]] DecideMenuItem::DecideMenuItem() = default;

}

}
