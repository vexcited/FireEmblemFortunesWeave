#pragma once

#include "game/menu/basic_menu.hpp"
#include "game/menu/system_menu_item.hpp"

namespace game::menu {

void OpenClassChange(menu::BasicMenu* menu);

class SystemMenuItem_ClassChange : public SystemMenuItem {
public:
  const char* GetMid() override { return "MID_SysMenu_ClassChange"; }
  bool IsDecidable() override;

  int ACall() override {
    if (!active_) {
      return 1;
    }
    OpenClassChange(menu_->GetParent());
    return 9;
  }

  bool IsActive() override { return active_; }
};

}
