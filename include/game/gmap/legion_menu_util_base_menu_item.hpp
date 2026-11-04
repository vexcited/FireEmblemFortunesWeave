#pragma once

#include "game/menu/game_menu_item.hpp"

namespace game::gmap::LegionMenuUtil {

class BaseMenuItem : public menu::GameMenuItem {
public:
  virtual bool Unknown70() { return false; }
  virtual bool Unknown71() { return false; }
  virtual bool Unknown72() { return false; }
  virtual const char* Unknown73() { return ""; }
};

}
