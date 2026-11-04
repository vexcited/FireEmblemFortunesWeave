#pragma once

#include "game/menu/sub_menu_item.hpp"

namespace game::menu {

class SortSubMenuItem : public SubMenuItem {
public:
  void PlayDecideSe() override;
  void DrawText() override;

protected:
  bool descending_;
};

}
