#include <vector>

#include "game/menu/equip_unit_select_menu.hpp"
#include "game/menu/unit_menu_item.hpp"

namespace game::menu {

EquipUnitSelectMenu::~EquipUnitSelectMenu() = default;

bool EquipUnitSelectMenu::MovePage(int direction, bool loop) {
  if (!Unknown149() || current_ == nullptr) {
    return false;
  }
  UnitMenuItem* item = dynamic_cast<UnitMenuItem*>(current_);
  if (item == nullptr || !tab_.Move(direction, loop)) {
    return false;
  }

  int kind = pages_[tab_.GetCurrent()];
  page_ = kind;
  unknown_54c_ = kind;
  UpdateEquipList(item->GetUnit(), item->Unknown87());
  std::vector<KeyHelpEntry> keys;
  Unknown152(keys, page_);
  UpdateKeyHelp(keys);
  return true;
}

int EquipUnitSelectMenu::Unknown104(bool loop) {
  return MovePage(-1, loop) ? 13 : 0;
}

int EquipUnitSelectMenu::Unknown106(bool loop) {
  return MovePage(1, loop) ? 13 : 0;
}

}
