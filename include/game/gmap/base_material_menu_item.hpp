#pragma once

#include "game/menu/game_menu_item.hpp"

namespace game::gmap {

class BaseMaterialMenuItem : public menu::GameMenuItem {
public:
  void DrawText() override;
};

}
