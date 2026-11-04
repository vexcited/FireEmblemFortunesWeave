#pragma once

#include "game/menu/system_menu_item.hpp"

namespace game::menu {

class SystemMenuItem_Info : public SystemMenuItem {
public:
  const char* GetMid() override;
  bool IsDecidable() override { return decidable_; }
  int ACall() override;
  bool IsActive() override;
};

}
