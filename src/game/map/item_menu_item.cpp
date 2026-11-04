#include "game/menu/equip_menu_item_item.hpp"
#include "game/menu/sub_menu_item.hpp"

namespace game::map {

namespace {

class ItemMenuItem : public menu::EquipMenuItem_Item {
public:
  ItemMenuItem();

  bool IsDecidable() override;
  int ACall() override;
  void DrawText() override;
  bool IsActive() override;
  bool IsEquip() override;
  virtual void Unknown70();
  virtual void Unknown71();
};

[[gnu::used]] ItemMenuItem::ItemMenuItem() = default;

class MenuItem : public menu::SubMenuItem {};

class SubOpenMenuItem : public MenuItem {
public:
  SubOpenMenuItem();

  const char* GetMid() override { return "MID_Menu_Open"; }
  int ACall() override;
  virtual void Unknown71();
};

[[gnu::used]] SubOpenMenuItem::SubOpenMenuItem() = default;

class SubUseMenuItem : public MenuItem {
public:
  SubUseMenuItem();

  const char* GetMid() override { return "MID_Menu_Use"; }
  int ACall() override;
  virtual void Unknown71();
};

[[gnu::used]] SubUseMenuItem::SubUseMenuItem() = default;

class CmdBtlItemMenuItem : public ItemMenuItem {
public:
  CmdBtlItemMenuItem();

  bool IsActive() override;
  void Unknown70() override;
  void Unknown71() override;
};

[[gnu::used]] CmdBtlItemMenuItem::CmdBtlItemMenuItem() = default;

class CmdBtlSubOpenMenuItem : public SubOpenMenuItem {
public:
  CmdBtlSubOpenMenuItem();

  void Unknown71() override;
};

[[gnu::used]] CmdBtlSubOpenMenuItem::CmdBtlSubOpenMenuItem() = default;

class CmdBtlSubUseMenuItem : public SubUseMenuItem {
public:
  CmdBtlSubUseMenuItem();

  void Unknown71() override;
};

[[gnu::used]] CmdBtlSubUseMenuItem::CmdBtlSubUseMenuItem() = default;

class ExchangeMenuItem : public menu::EquipMenuItem_Item {
public:
  ExchangeMenuItem();

  void DrawText() override;
  bool IsActive() override;
};

[[gnu::used]] ExchangeMenuItem::ExchangeMenuItem() = default;

}

}
