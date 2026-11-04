#pragma once

#include "game/menu/basic_menu.hpp"
#include "game/menu/system_menu_item.hpp"

namespace game::menu {

void OpenSystemMenuItemSave(menu::BasicMenu* menu);

class SystemMenuItem_Save : public SystemMenuItem {
public:
  const char* GetMid() override;
  bool IsDecidable() override { return decidable_; }
  bool IsActive() override { return active_; }

  int ACall() override {
    if (!active_) {
      return 1;
    }
    OpenSystemMenuItemSave(menu_->GetParent());
    return 12;
  }

};

}
