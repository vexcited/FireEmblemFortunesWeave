#include "game/menu/sub_menu_item.hpp"

namespace game::facility {

namespace {

class TransporterDepositoryMenuItem : public menu::SubMenuItem {
public:
  TransporterDepositoryMenuItem();

  const char* GetMid() override { return "MID_BtlMenu_Transport"; }
  int ACall() override;
  void DrawText() override;
};

[[gnu::used]]
TransporterDepositoryMenuItem::TransporterDepositoryMenuItem() = default;

class MaterialDepositoryMenuItem : public menu::SubMenuItem {
public:
  MaterialDepositoryMenuItem();

  const char* GetMid() override { return "MID_SysMenu_Material"; }
  int ACall() override;
  void DrawText() override;
};

[[gnu::used]]
MaterialDepositoryMenuItem::MaterialDepositoryMenuItem() = default;

class LegionDepositoryMenuItem : public menu::SubMenuItem {
public:
  LegionDepositoryMenuItem();

  const char* GetMid() override { return "MID_DeployMenu_Legion"; }
  int ACall() override;
  void DrawText() override;
};

[[gnu::used]] LegionDepositoryMenuItem::LegionDepositoryMenuItem() = default;

class RideDepositoryMenuItem : public menu::SubMenuItem {
public:
  RideDepositoryMenuItem();

  const char* GetMid() override { return "MID_DeployMenu_Ride"; }
  int ACall() override;
  void DrawText() override;
};

[[gnu::used]] RideDepositoryMenuItem::RideDepositoryMenuItem() = default;

}

}
