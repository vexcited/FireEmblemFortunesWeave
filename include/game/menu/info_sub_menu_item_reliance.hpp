#pragma once

#include "game/menu/sub_menu_item.hpp"

namespace game::menu {

class InfoSubMenuItem_Reliance : public SubMenuItem {
public:
  const char* GetMid() override;
  bool IsDecidable() override;
  int ACall() override;
  bool IsActive() override;
};

}
