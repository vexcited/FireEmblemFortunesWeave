#include "game/menu/equip_unit_select_menu_item.hpp"

namespace game::menu {

namespace {

class RosterUnitGridMenuItem : public menu::EquipUnitSelectMenuItem {
public:
  RosterUnitGridMenuItem();

  bool IsActive() override;
  bool Unknown77() override;
};

[[gnu::used]] RosterUnitGridMenuItem::RosterUnitGridMenuItem() = default;

class CmdBtlRosterUnitGridMenuItem : public RosterUnitGridMenuItem {
public:
  CmdBtlRosterUnitGridMenuItem();

  bool Unknown72() override { return unknown_60_; }
};

[[gnu::used]]
CmdBtlRosterUnitGridMenuItem::CmdBtlRosterUnitGridMenuItem() = default;

}

}
