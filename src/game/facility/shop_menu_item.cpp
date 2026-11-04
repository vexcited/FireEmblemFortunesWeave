#pragma GCC visibility push(hidden)
#include "game/facility/item_shop_menu_item.hpp"
#pragma GCC visibility pop

namespace game::facility {

#pragma GCC visibility push(hidden)

class ShopMenuItem_Buy : public ItemShopMenuItem {
public:
  ~ShopMenuItem_Buy() override;

  int ShopUnknown02(int kind) override;
  bool ShopUnknown03() override;
  void ShopUnknown04() override;
};

class ShopMenuItem_Sell : public ItemShopMenuItem_Account {
public:
  ~ShopMenuItem_Sell() override;

  const char* Unknown70() override;
  int Unknown76() override;
  bool ShopUnknown03() override;
  void ShopUnknown04() override;
  int ShopUnknown07() override { return 1; }
  void ShopUnknown06() override;
  const char* ShopUnknown08() override { return "MID_Shop_Sell_Confirm"; }
  const char* ShopUnknown09() override { return "MID_Shop_Aquisition"; }
};

#pragma GCC visibility pop

ShopMenuItem_Buy::~ShopMenuItem_Buy() = default;

ShopMenuItem_Sell::~ShopMenuItem_Sell() = default;

namespace {

class ShopMenuItem_Trade : public ItemShopMenuItem {
public:
  ShopMenuItem_Trade();

  int Unknown76() override { return 0; }

  const char* ShopUnknown08() override {
    return "MID_Shop_Exchange_Confirm";
  }

  void ShopUnknown04() override;
  bool ShopUnknown03() override;
};

[[gnu::used]] ShopMenuItem_Trade::ShopMenuItem_Trade() = default;

}

}
