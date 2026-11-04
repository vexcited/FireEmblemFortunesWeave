#pragma GCC visibility push(hidden)
#include "game/facility/item_shop_menu_item.hpp"
#pragma GCC visibility pop

namespace game::facility {

#pragma GCC visibility push(hidden)

class BlacksmithItemMenuItem_Base : public ItemShopMenuItem_Account {
public:
  const char* Unknown70() override;
  virtual void Unknown77() = 0;
  virtual void Unknown78() = 0;
  bool ShopUnknown03() override { return IsActive(); }
  int ShopUnknown07() override { return 1; }
};

#pragma GCC visibility pop

namespace {

class BlacksmithMenuItem_Refine : public BlacksmithItemMenuItem_Base {
public:
  BlacksmithMenuItem_Refine();

  void DrawText() override;
  bool IsActive() override;
  int Unknown76() override;
  void Unknown77() override;
  void Unknown78() override;
  void ShopUnknown04() override;
  void ShopUnknown05() override;
  void ShopUnknown06() override;
  const char* ShopUnknown08() override { return "MID_RefineMenu_Confirm"; }
  const char* ShopUnknown09() override { return "MID_Shop_Consumption"; }
};

[[gnu::used]] BlacksmithMenuItem_Refine::BlacksmithMenuItem_Refine() = default;

class BlacksmithMenuItem_Repair : public BlacksmithItemMenuItem_Base {
public:
  BlacksmithMenuItem_Repair();

  void DrawText() override;
  bool IsActive() override;
  int Unknown76() override;
  void Unknown77() override;
  void Unknown78() override;
  void ShopUnknown04() override;
  void ShopUnknown06() override;
  const char* ShopUnknown08() override { return "MID_RepairMenu_Confirm"; }
  const char* ShopUnknown09() override { return "MID_Shop_Consumption"; }
};

[[gnu::used]] BlacksmithMenuItem_Repair::BlacksmithMenuItem_Repair() = default;

}

}
