#include "game/menu/game_menu_item.hpp"

namespace game::gmap {

namespace {

class EmptyPoolMenuItem : public menu::GameMenuItem {
public:
  EmptyPoolMenuItem();

  const char* GetMid() override { return "MID_Sys_Empty"; }
  int ACall() override { return 1; }
  bool IsEmpty() override { return true; }
};

[[gnu::used]] EmptyPoolMenuItem::EmptyPoolMenuItem() = default;

}

}
