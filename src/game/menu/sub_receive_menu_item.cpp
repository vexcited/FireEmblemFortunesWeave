#include "game/menu/equip_menu_item_animal_pool_base.hpp"
#include "game/menu/sub_menu_item.hpp"

namespace {

class ChangeSubMenuItem_Base : public game::menu::SubMenuItem {};

class SubReceiveMenuItem : public ChangeSubMenuItem_Base {
public:
  SubReceiveMenuItem();

  const char* GetMid() override { return "MID_Menu_Receive"; }
  int ACall() override;
  bool IsActive() override;
};

[[gnu::used]] SubReceiveMenuItem::SubReceiveMenuItem() = default;

class SubExchangeMenuItem : public ChangeSubMenuItem_Base {
public:
  SubExchangeMenuItem();

  const char* GetMid() override { return "MID_Menu_Trade"; }
  int ACall() override;
  bool IsActive() override;
};

[[gnu::used]] SubExchangeMenuItem::SubExchangeMenuItem() = default;

class EquipMenuItem_PoolEmpty
  : public game::menu::EquipMenuItem_AnimalPool_Base {
public:
  EquipMenuItem_PoolEmpty();

  int ACall() override { return 1; }
  void DrawText() override;
  bool IsActive() override { return false; }
  bool IsEmpty() override { return true; }
};

[[gnu::used]] EquipMenuItem_PoolEmpty::EquipMenuItem_PoolEmpty() = default;

}
