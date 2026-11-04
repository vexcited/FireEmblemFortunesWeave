#pragma once

#include "game/menu/system_menu_item.hpp"

namespace game::menu {

class SystemMenuItem_Assist : public SystemMenuItem {
public:
  const char* GetMid() override { return "MID_SysMenu_Assist"; }
  bool IsDecidable() override;
  bool IsActive() override { return active_; }
};

}
