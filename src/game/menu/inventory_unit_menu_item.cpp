#include "game/menu/equip_unit_select_menu_item.hpp"
#include "game/menu/sub_menu_item.hpp"

namespace game::menu {

namespace {

class InventoryUnitMenuItem : public menu::EquipUnitSelectMenuItem {
public:
  InventoryUnitMenuItem();

  bool IsActive() override;
  bool Unknown76() override { return true; }
};

[[gnu::used]] InventoryUnitMenuItem::InventoryUnitMenuItem() = default;

class MarginMenuItem : public InventoryUnitMenuItem {
public:
  MarginMenuItem();

  bool IsEnable() override { return false; }
  void Unknown16() override;
  bool IsActive() override { return false; }
  bool IsEmpty() override { return true; }
  bool Unknown76() override { return false; }
};

[[gnu::used]] MarginMenuItem::MarginMenuItem() = default;

class EmptyMenuItem : public InventoryUnitMenuItem {
public:
  EmptyMenuItem();

  bool IsEnable() override { return false; }
  bool IsDecidable() override { return true; }
  void OnSelect() override;
  void DrawText() override;
  bool IsActive() override { return false; }
  bool IsEmpty() override { return true; }
  bool Unknown76() override { return false; }
};

[[gnu::used]] EmptyMenuItem::EmptyMenuItem() = default;

class NoDeplyUnitMenuItem : public InventoryUnitMenuItem {
public:
  NoDeplyUnitMenuItem();

  bool Unknown76() override { return false; }
};

[[gnu::used]] NoDeplyUnitMenuItem::NoDeplyUnitMenuItem() = default;

class CmdBtlUnitMenuItem : public NoDeplyUnitMenuItem {
public:
  CmdBtlUnitMenuItem();

  bool Unknown72() override { return unknown_61_; }
};

[[gnu::used]] CmdBtlUnitMenuItem::CmdBtlUnitMenuItem() = default;

class EquipSubMenuItem : public menu::SubMenuItem {
public:
  virtual int Unknown71() = 0;
  virtual void Unknown72();
};

class SubTransportMenuItem : public EquipSubMenuItem {
public:
  SubTransportMenuItem();

  const char* GetMid() override { return "MID_SysMenu_Item"; }
  int ACall() override;
  int Unknown71() override { return 0; }
};

[[gnu::used]] SubTransportMenuItem::SubTransportMenuItem() = default;

class SubSkillMenuItem : public EquipSubMenuItem {
public:
  SubSkillMenuItem();

  const char* GetMid() override { return "MID_SysMenu_Skill"; }
  int ACall() override;
  bool IsActive() override;
  int Unknown71() override { return 4; }
};

[[gnu::used]] SubSkillMenuItem::SubSkillMenuItem() = default;

class SubArtsMenuItem : public EquipSubMenuItem {
public:
  SubArtsMenuItem();

  const char* GetMid() override { return "MID_SysMenu_Arts"; }
  int ACall() override;
  bool IsActive() override;
  int Unknown71() override { return 5; }
};

[[gnu::used]] SubArtsMenuItem::SubArtsMenuItem() = default;

class SubDeployMenuItem : public EquipSubMenuItem {
public:
  SubDeployMenuItem();

  const char* GetMid() override { return "MID_SysMenu_Deploy"; }
  bool IsDecidable() override;
  int ACall() override;
  bool IsActive() override;
  int Unknown71() override;
};

[[gnu::used]] SubDeployMenuItem::SubDeployMenuItem() = default;

class AutoListMenuItem : public EquipSubMenuItem {
public:
  virtual void Unknown73() = 0;
};

class AutoSkillMenuItem : public AutoListMenuItem {
public:
  AutoSkillMenuItem();

  const char* GetMid() override { return "MID_AllAutoMenu_Skill"; }
  int Unknown71() override { return 4; }
  void Unknown73() override;
};

[[gnu::used]] AutoSkillMenuItem::AutoSkillMenuItem() = default;

class AutoArtsMenuItem : public AutoListMenuItem {
public:
  AutoArtsMenuItem();

  const char* GetMid() override { return "MID_AllAutoMenu_Arts"; }
  int Unknown71() override { return 5; }
  void Unknown73() override;
};

[[gnu::used]] AutoArtsMenuItem::AutoArtsMenuItem() = default;

class AutoEquipMenuItem : public AutoListMenuItem {
public:
  AutoEquipMenuItem();

  const char* GetMid() override { return "MID_AllAutoMenu_Equip"; }
  int Unknown71() override { return 0; }
  void Unknown73() override;
};

[[gnu::used]] AutoEquipMenuItem::AutoEquipMenuItem() = default;

class AutoDepositMenuItem : public AutoListMenuItem {
public:
  AutoDepositMenuItem();

  const char* GetMid() override { return "MID_AllAutoMenu_Deposit"; }
  int Unknown71() override { return 0; }
  void Unknown73() override;
};

[[gnu::used]] AutoDepositMenuItem::AutoDepositMenuItem() = default;

class AutoDeployMenuItem : public AutoListMenuItem {
public:
  AutoDeployMenuItem();

  const char* GetMid() override { return "MID_AllAutoMenu_Deploy"; }
  int Unknown71() override;
  void Unknown72() override;
  void Unknown73() override;
};

[[gnu::used]] AutoDeployMenuItem::AutoDeployMenuItem() = default;

}

}
