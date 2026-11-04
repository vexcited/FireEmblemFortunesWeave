#include "game/menu/material_menu_item.hpp"
#include "game/menu/material_menu_item_base.hpp"

namespace game::menu {

int MaterialMenuItem::ACall() {
  return 0;
}

class MaterialMenuItem_Empty : public MaterialMenuItem_Base {
public:
  const char* GetMid() override;
  int ACall() override;
  bool IsActive() override;
  bool IsEmpty() override;
  const char* Unknown70() override;
};

const char* MaterialMenuItem_Empty::GetMid() {
  return "MID_Sys_Empty";
}

int MaterialMenuItem_Empty::ACall() {
  return 0;
}

bool MaterialMenuItem_Empty::IsActive() {
  return true;
}

bool MaterialMenuItem_Empty::IsEmpty() {
  return true;
}

const char* MaterialMenuItem_Empty::Unknown70() {
  return "";
}

}
