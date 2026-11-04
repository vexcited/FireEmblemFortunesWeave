#pragma once

#include "game/menu/top_menu_item.hpp"

namespace game::facility {

class ShopTopMenuItem : public menu::TopMenuItem {
public:
  bool IsActive() override;
  void Unknown73() override;
  virtual void Unknown74();
  virtual const char* Unknown75() = 0;
};

}
