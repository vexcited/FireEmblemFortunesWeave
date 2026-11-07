#pragma GCC visibility push(hidden)
#include "game/menu/multi_menu.hpp"
#include "game/menu/unit_troop_sequence.hpp"

namespace game::menu {

class InfoUnitTroopSequence : public UnitTroopSequence {
public:
  ~InfoUnitTroopSequence() override;

  const char* Unknown36() override;
  int Unknown46() override { return 1; }
};

class InventoryUnitTroopSequence : public UnitTroopSequence {
public:
  ~InventoryUnitTroopSequence() override;

  const char* Unknown36() override;
  int Unknown46() override { return (flags_ & 1) == 0; }
  const char* ImplUnknown03() override { return "MID_SysMenu_Inventory"; }
  int ImplUnknown10() override;
  const char* ImplUnknown05() override { return "MID_Menu_UnitSelect_Help"; }
};

UnitTroopSequence::~UnitTroopSequence() = default;

void UnitTroopSequence::Unknown20() {
  Unknown1786b20();
  if (auto* menu = dynamic_cast<UnitTroopMenu*>(
        reinterpret_cast<MultiMenu*>(menus_[index_]))) {
    menu->Unknown99();
  }
}

InfoUnitTroopSequence::~InfoUnitTroopSequence() = default;
InventoryUnitTroopSequence::~InventoryUnitTroopSequence() = default;

}

#pragma GCC visibility pop
