#pragma once

#include "game/menu/system_menu_item.hpp"

namespace game::menu {

class SystemMenuItem_ClassChange : public SystemMenuItem {
public:
  const char* GetMid() override { return "MID_SysMenu_ClassChange"; }
  bool IsDecidable() override;
  int ACall() override;
  bool IsActive() override { return active_; }
};

}
