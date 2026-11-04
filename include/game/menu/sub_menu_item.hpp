#pragma once

#include <functional>

#include "game/menu/game_menu_item.hpp"

namespace game::menu {

class SubMenuItem : public GameMenuItem {
public:
  using Bind = std::function<int(SubMenuItem*)>;

  using GameMenuItem::GameMenuItem;

  bool Unknown14() override { return true; }
  int ACall() override;
  void DrawText() override;

  virtual bool Unknown70(void* pane) { return false; }

protected:
  Bind bind_;
};

}
