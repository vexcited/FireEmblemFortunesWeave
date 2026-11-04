#pragma once

#include "game/menu/game_menu_item.hpp"

namespace game::facility {

class FacilityMenuItem : public menu::GameMenuItem {
public:
  bool IsActive() override;
  virtual void Unknown70() = 0;
};

}
