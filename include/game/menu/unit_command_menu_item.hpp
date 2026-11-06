#pragma once

#include "game/menu/game_menu_item.hpp"

namespace game::menu {

class UnitCommandMenuItem : public GameMenuItem {
public:
  void ChangeSelect(bool selected) override;
  void OnSelect() override;
  virtual void Unknown70() {}

protected:
  void Unknown16ef450();
};

}
