#include "game/menu/sub_menu_item.hpp"

namespace game::gmap {

namespace {

class ShopMenuItem : public menu::SubMenuItem {};

class ItemShopMenuItem : public ShopMenuItem {
public:
  ItemShopMenuItem();

  const char* GetMid() override;
  void OnClose() override;
  int ACall() override;
};

[[gnu::used]] ItemShopMenuItem::ItemShopMenuItem() = default;

class WeaponShopMenuItem : public ItemShopMenuItem {
public:
  WeaponShopMenuItem();
};

[[gnu::used]] WeaponShopMenuItem::WeaponShopMenuItem() = default;

class ToolShopMenuItem : public ItemShopMenuItem {
public:
  ToolShopMenuItem();
};

[[gnu::used]] ToolShopMenuItem::ToolShopMenuItem() = default;

class MarketShopMenuItem : public ItemShopMenuItem {
public:
  MarketShopMenuItem();
};

[[gnu::used]] MarketShopMenuItem::MarketShopMenuItem() = default;

class BlacksmithMenuItem : public ShopMenuItem {
public:
  BlacksmithMenuItem();

  const char* GetMid() override { return "MID_Shop_Blacksmith"; }
  void OnClose() override;
  int ACall() override;
};

[[gnu::used]] BlacksmithMenuItem::BlacksmithMenuItem() = default;

class HotelMenuItem : public ShopMenuItem {
public:
  HotelMenuItem();

  const char* GetMid() override { return "MID_HotelMenu_Stay"; }
  int ACall() override;
};

[[gnu::used]] HotelMenuItem::HotelMenuItem() = default;

}

}
