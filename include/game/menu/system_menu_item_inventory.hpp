#pragma once

#include "game/menu/system_menu_item.hpp"

namespace game::menu {

class SystemMenuItem_Inventory : public SystemMenuItem {
public:
  const char* GetMid() override;
  bool IsDecidable() override;
  int ACall() override;
  bool IsActive() override;
};

}
