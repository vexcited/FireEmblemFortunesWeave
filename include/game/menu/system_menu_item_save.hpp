#pragma once

#include "game/menu/system_menu_item.hpp"

namespace game::menu {

class SystemMenuItem_Save : public SystemMenuItem {
public:
  const char* GetMid() override;
  bool IsDecidable() override { return decidable_; }
  bool IsActive() override { return active_; }
  int ACall() override;
};

}
