#include "game/menu/sub_menu_item.hpp"
#include "game/menu/system_menu_item.hpp"
#include "game/menu/system_menu_item_info.hpp"
#include "game/menu/system_menu_item_retired.hpp"

namespace game::map {

namespace {

class MiracleMenuItem : public menu::SystemMenuItem {
public:
  MiracleMenuItem();

  const char* GetMid() override { return "MID_SysMenu_Miracle"; }
  bool IsDecidable() override;
  int ACall() override;
};

[[gnu::used]] MiracleMenuItem::MiracleMenuItem() = default;

class EntrustMenuItem : public menu::SystemMenuItem {
public:
  EntrustMenuItem();

  const char* GetMid() override { return "MID_SysMenu_Order"; }
  bool IsDecidable() override;
  int ACall() override;
};

[[gnu::used]] EntrustMenuItem::EntrustMenuItem() = default;

class EntrustKindMenuItem : public menu::SubMenuItem {
public:
  EntrustKindMenuItem();

  const char* GetMid() override;
  int ACall() override;
};

[[gnu::used]] EntrustKindMenuItem::EntrustKindMenuItem() = default;

class SystemMenuItem_Info_Map : public menu::SystemMenuItem_Info {
public:
  SystemMenuItem_Info_Map();

  int ACall() override;
};

[[gnu::used]] SystemMenuItem_Info_Map::SystemMenuItem_Info_Map() = default;

class TroopMenuItem : public menu::SubMenuItem {
public:
  TroopMenuItem();

  const char* GetMid() override { return "MID_SysMenu_TroopList"; }
  int ACall() override;
};

[[gnu::used]] TroopMenuItem::TroopMenuItem() = default;

class SuspendMenuItem : public menu::SystemMenuItem {
public:
  SuspendMenuItem();

  const char* GetMid() override { return "MID_SysMenu_Suspend"; }
  int ACall() override;
};

[[gnu::used]] SuspendMenuItem::SuspendMenuItem() = default;

class SystemMenuItem_Retired_Map : public menu::SystemMenuItem_Retired {
public:
  SystemMenuItem_Retired_Map();

  void Unknown71() override;
};

[[gnu::used]]
SystemMenuItem_Retired_Map::SystemMenuItem_Retired_Map() = default;

class PhaseEndMenuItem : public menu::SystemMenuItem {
public:
  PhaseEndMenuItem();

  const char* GetMid() override { return "MID_SysMenu_End_Phase"; }
  int ACall() override;
};

[[gnu::used]] PhaseEndMenuItem::PhaseEndMenuItem() = default;

}

}
