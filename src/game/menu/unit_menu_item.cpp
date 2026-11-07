#include <string>

#include "game/menu/equip_menu_item_base.hpp"
#include "game/menu/equip_menu_item_empty.hpp"
#include "game/menu/game_menu_item.hpp"
#include "game/menu/unit_menu_item.hpp"
#include "game/unit.hpp"

namespace game::menu {

bool UnitMenuItem::Unknown74() {
  const Unit* unit = unit_;
  if (unit == nullptr) {
    return false;
  }
  const SkillKey key = {g_shared_system_skills[0].index};
  if (!HasSkill(unit->GetSkillList(7), key)) {
    return false;
  }
  return (1 << unit->GetForceType()) & 0xf1;
}

bool UnitMenuItem::Unknown78() {
  return false;
}

const char* EquipMenuItem_Empty::GetMid() {
  return "MID_Sys_Empty";
}

int EquipMenuItem_Empty::ACall() {
  return 0;
}

bool EquipMenuItem_Empty::IsEmpty() {
  return true;
}

class EquipMenuItem_Info : public EquipMenuItemBase {
public:
  bool IsEnable() override;
  void Unknown17() override;
  int ACall() override;

private:
  void* unknown_58_;
  std::string label_;
  std::string value_;
};

bool EquipMenuItem_Info::IsEnable() {
  return false;
}

int EquipMenuItem_Info::ACall() {
  return 0;
}

}
