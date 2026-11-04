#pragma once

#include "game/menu/game_menu_item.hpp"

namespace game::facility {

class ObeliskHeroMenuItem : public menu::GameMenuItem {
public:
  int ACall() override;
  bool IsActive() override;
  virtual bool Unknown70();
  virtual const char* Unknown71() = 0;
  virtual const char* Unknown72();
};

}
