#pragma once

#include <string>

#include "game/menu/equip_menu_item_base.hpp"

namespace game::menu {

class EquipMenuItem_Empty : public EquipMenuItemBase {
public:
  const char* GetMid() override;
  void Unknown17() override;
  int ACall() override;
  bool IsEmpty() override;

protected:
  void* unknown_58_;
  std::string label_;
};

}
