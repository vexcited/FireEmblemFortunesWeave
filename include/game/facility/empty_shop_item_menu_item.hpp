#pragma once

#include "game/facility/item_shop_menu_item_base.hpp"

namespace game::facility {

class EmptyShopItemMenuItem : public ItemShopMenuItem_Base {
public:
  const char* Unknown70() override;
  const char* GetMid() override { return "MID_Sys_Empty"; }
  int ACall() override { return 1; }
  bool IsActive() override { return true; }
  bool IsEmpty() override { return true; }
  void DrawText() override;
};

}
