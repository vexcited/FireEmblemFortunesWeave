#include <functional>
#include <memory>

#include "game/menu/sub_menu_item.hpp"
#include "game/menu/unit_command_menu_item.hpp"
#include "ui/layout_accessor.hpp"

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

class LinkSelectMenuItem : public menu::SubMenuItem {
public:
  LinkSelectMenuItem();

  const char* GetMid() override {
    switch (kind_) {
      case 0:
        return "MID_CmdMenu_Link_Attack";
      case 1:
        return "MID_CmdMenu_Link_Heal";
      case 2:
        return "MID_CmdMenu_Link_Guard";
    }
    return nullptr;
  }

  void OnSelect() override {
    GameMenuItem::OnSelect();
    if (on_select_) {
      on_select_(kind_);
    }
  }

  int ACall() override;
  bool Unknown70(void* pane) override;

private:
  int kind_;
  std::function<void(int)> on_select_;
};

[[gnu::used]] LinkSelectMenuItem::LinkSelectMenuItem() = default;

class LinkUnitMenuItem : public menu::GameMenuItem {
public:
  LinkUnitMenuItem();

  int ACall() override;
  void DrawText() override;

private:
  std::weak_ptr<ui::LayoutAccessor> unit_parts_;
};

[[gnu::used]] LinkUnitMenuItem::LinkUnitMenuItem() = default;

}

}
