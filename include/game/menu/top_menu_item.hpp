#pragma once

#include <cstdint>

#include "game/menu/game_menu_item.hpp"

namespace game::menu {

class TopMenuItem : public GameMenuItem {
public:
  void OnSelect() override;
  void DrawText() override;
  virtual bool Unknown70() { return false; }
  virtual bool Unknown71() { return true; }
  virtual bool Unknown72() { return true; }
  virtual void Unknown73() = 0;

protected:
  uint32_t unknown_54_;
};

}
