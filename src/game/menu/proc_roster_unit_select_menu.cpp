#include <vector>

#include "game/game_mode_data.hpp"
#include "game/menu/equip_unit_select_menu.hpp"
#include "game/menu/equip_unit_select_menu_item.hpp"
#include "game/unit.hpp"

namespace game {

// Only the member read by the unit menus is known.
struct PersonData {
  uint8_t unknown_00_[0x120];
  const void* unknown_120_;
};

// Looks up data of a person, null when there is none.
const void* Unknown975940(const void* data);

}

namespace game::menu {

// Opens the full unit information above a menu.
ProcInst* OpenUnitInfoFull(BasicMenu* parent, Unit* unit, int mode);

namespace {

class RosterUnitGridMenuItem : public EquipUnitSelectMenuItem {};

class ProcRosterUnitSelectMenu : public EquipUnitSelectMenu {
public:
  ProcRosterUnitSelectMenu();

  int Unknown100() override;
  void Unknown128() override;
  bool Unknown145() override { return true; }
  bool Unknown149() override { return true; }
  const char* ImplUnknown03() override { return "MID_SysMenu_Roster"; }
  const char* ImplUnknown05() override { return "MID_Menu_UnitSelect_Help"; }

private:
  uint8_t unknown_568_[0x8];
};

[[gnu::used]] ProcRosterUnitSelectMenu::ProcRosterUnitSelectMenu() = default;

int ProcRosterUnitSelectMenu::Unknown100() {
  if (current_ == nullptr) {
    return 1;
  }
  RosterUnitGridMenuItem* item =
    dynamic_cast<RosterUnitGridMenuItem*>(current_);
  if (item == nullptr) {
    return 1;
  }

  Unit* unit = item->GetUnit();
  UnitRestrictionKey key = {
    unit, unit != nullptr ? unit->GetPerson() : nullptr};
  if (GameModeData::GetInstance()->GetUnitRestriction().Find(key) != 0) {
    return 1;
  }
  const PersonData* person = unit->GetPerson();
  if (person == nullptr || person->unknown_120_ == nullptr ||
      Unknown975940(person->unknown_120_) == nullptr) {
    return 1;
  }
  OpenUnitInfoFull(this, item->GetUnit(), 5);
  return 9;
}

class ProcCmdBtlRosterUnitSelectMenu : public ProcRosterUnitSelectMenu {
public:
  ProcCmdBtlRosterUnitSelectMenu();
  ~ProcCmdBtlRosterUnitSelectMenu() override;

  void Unknown128() override;

private:
  std::vector<int32_t> unknown_570_;
};

[[gnu::used]]
ProcCmdBtlRosterUnitSelectMenu::ProcCmdBtlRosterUnitSelectMenu() = default;

ProcCmdBtlRosterUnitSelectMenu::~ProcCmdBtlRosterUnitSelectMenu() = default;

}

}
