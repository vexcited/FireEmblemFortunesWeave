#include "game/menu/unit_command_menu_item.hpp"

namespace game::cmdbtl {

namespace {

class CommandMenuItem : public menu::UnitCommandMenuItem {
public:
  int ACall() override;
  int BCall() override { return 1; }
  bool IsActive() override;
  virtual void Unknown71() {}
  virtual void Unknown72() = 0;
};

class AttackMenuItem : public CommandMenuItem {
public:
  AttackMenuItem();

  const char* GetMid() override { return "MID_BtlMenu_Attack"; }
  bool IsDecidable() override;
  void Unknown72() override;
};

[[gnu::used]] AttackMenuItem::AttackMenuItem() = default;

class LinkMenuItem : public CommandMenuItem {
public:
  LinkMenuItem();

  const char* GetMid() override { return "MID_CmdMenu_Link"; }
  bool IsDecidable() override;
  int ACall() override;
  void Unknown71() override;
  void Unknown72() override {}
};

[[gnu::used]] LinkMenuItem::LinkMenuItem() = default;

class ArtsMenuItem : public CommandMenuItem {
public:
  ArtsMenuItem();

  const char* GetMid() override { return "MID_BtlMenu_Arts"; }
  bool IsDecidable() override;
  void Unknown72() override;
};

[[gnu::used]] ArtsMenuItem::ArtsMenuItem() = default;

class AssistMenuItem : public CommandMenuItem {
public:
  AssistMenuItem();

  const char* GetMid() override { return "MID_BtlMenu_Assist"; }
  bool IsDecidable() override;
  void Unknown72() override;
};

[[gnu::used]] AssistMenuItem::AssistMenuItem() = default;

class ItemMenuItem : public CommandMenuItem {
public:
  ItemMenuItem();

  const char* GetMid() override { return "MID_BtlMenu_Item"; }
  bool IsDecidable() override;
  void Unknown72() override;
};

[[gnu::used]] ItemMenuItem::ItemMenuItem() = default;

class FixedMenuItem : public CommandMenuItem {
public:
  FixedMenuItem();

  const char* GetMid() override { return "MID_BtlMenu_Fixed"; }
  bool IsDecidable() override;
  void Unknown72() override;
};

[[gnu::used]] FixedMenuItem::FixedMenuItem() = default;

class EscapeMenuItem : public CommandMenuItem {
public:
  EscapeMenuItem();

  const char* GetMid() override { return "MID_SysMenu_Retired"; }
  bool IsDecidable() override;
  int ACall() override;
  void Unknown72() override {}
};

[[gnu::used]] EscapeMenuItem::EscapeMenuItem() = default;

}

}
