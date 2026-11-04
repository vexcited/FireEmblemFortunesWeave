#include "game/menu/game_menu_item.hpp"

namespace game::facility {

namespace {

class ObeliskDepositoryLegionMenuItem_Base : public menu::GameMenuItem {
public:
  virtual const char* Unknown70() = 0;
};

class ObeliskDepositoryLegionMenuItem_Empty
  : public ObeliskDepositoryLegionMenuItem_Base {
public:
  ObeliskDepositoryLegionMenuItem_Empty();

  const char* GetMid() override { return "MID_Sys_Empty"; }
  int ACall() override { return 1; }
  bool IsActive() override { return false; }
  bool IsEmpty() override { return true; }
  const char* Unknown70() override { return ""; }
};

[[gnu::used]]
ObeliskDepositoryLegionMenuItem_Empty::
  ObeliskDepositoryLegionMenuItem_Empty() = default;

}

}
