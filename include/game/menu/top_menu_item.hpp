#pragma once

#include <cstdint>

#include "game/menu/game_menu_item.hpp"

namespace game::menu {

class TopMenuItem : public GameMenuItem {
public:
  void OnSelect() override;
  void DrawText() override;
  virtual bool Unknown70() { return false; }
  virtual int Unknown71() { return 1; }
  virtual bool Unknown72() { return true; }
  virtual void Unknown73() = 0;

protected:
  bool unknown_53_;
  uint32_t unknown_54_;
};

}
