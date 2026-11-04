#pragma once

#include "game/menu/game_menu_item.hpp"

namespace game::menu {

class TransportMenuItem : public GameMenuItem {
public:
  TransportMenuItem();

  virtual const char* Unknown70();
  void DrawText() override;
};

}
