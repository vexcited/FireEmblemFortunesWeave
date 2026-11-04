#pragma once

#include <cstdint>

#include "game/facility/item_shop_menu_item_base.hpp"

namespace game::facility {

class IShopSelectMenu;

// Interface of the shop items, none of its slots is a destructor.
class IShopMenuItem {
public:
  virtual const void* ShopUnknown00() = 0;
  virtual const void* ShopUnknown01() = 0;
  virtual int ShopUnknown02(int kind);
  virtual bool ShopUnknown03() = 0;
  virtual void ShopUnknown04() = 0;
  virtual void ShopUnknown05();
  virtual void ShopUnknown06() = 0;
  virtual int ShopUnknown07() = 0;
  virtual const char* ShopUnknown08() = 0;
  virtual const char* ShopUnknown09() = 0;
  virtual IShopSelectMenu* ShopUnknown10() = 0;
};

// Shop items with a price, the overrides of the interface are appended to
// the primary table in this order.
class ItemShopMenuItem_Account : public ItemShopMenuItem_Base,
  public IShopMenuItem {
public:
  // Buying or selling starts with the first kind.
  int ACall() override { return ShopUnknown02(0); }

  const void* ShopUnknown00() override;
  const void* ShopUnknown01() override;
  virtual int Unknown74() { return 0; }
  IShopSelectMenu* ShopUnknown10() override;
  virtual int Unknown76() = 0;

protected:
  const void* unknown_68_;
  uint64_t unknown_70_;
};

class ItemShopMenuItem : public ItemShopMenuItem_Account {
public:
  const char* Unknown70() override;
  bool Unknown71() override;
  int Unknown74() override;
  int Unknown76() override;
  void ShopUnknown05() override;
  void ShopUnknown06() override;
  int ShopUnknown07() override;
  const char* ShopUnknown08() override;
  const char* ShopUnknown09() override;

protected:
  const void* unknown_78_;
  char unknown_80_[8];
  bool unknown_88_;
};

}
