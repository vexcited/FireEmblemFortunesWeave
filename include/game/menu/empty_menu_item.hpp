#pragma once

#include "game/menu/game_menu_item.hpp"

namespace game::menu {

class EmptyMenuItem : public GameMenuItem {
public:
  const char* GetMid() override;
  int ACall() override { return 0; }
  bool IsActive() override { return true; }
  bool IsEmpty() override { return true; }
};

}
