#pragma once

#include "game/menu/system_menu_item.hpp"

namespace game::menu {

class SystemMenuItem_Retired : public SystemMenuItem {
public:
  const char* GetMid() override { return "MID_SysMenu_Retired"; }
  bool IsDecidable() override;
  int ACall() override;
  bool IsActive() override { return active_; }
  void Unknown70() override;
  virtual void Unknown71() = 0;
};

}
