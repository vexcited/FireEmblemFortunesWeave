#pragma once

#include "game/menu/game_menu_item.hpp"

namespace game::menu {

class MaterialMenuItem_Base : public GameMenuItem {
public:
  void DrawText() override;
  virtual const char* Unknown70() = 0;
};

}
