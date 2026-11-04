#pragma once

#include "game/menu/game_menu_item.hpp"

namespace game::menu {

class SystemMenuItem : public GameMenuItem {
public:
  bool Unknown14() override { return true; }
  void OnSelect() override;
  void OnDeselect() override;
  void DrawText() override;
  virtual void Unknown70();
};

}
