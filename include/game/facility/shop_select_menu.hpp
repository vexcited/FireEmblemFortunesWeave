#pragma once

#include <cstdint>

#include "game/menu/game_menu.hpp"

namespace game::facility {

class IShopSelectMenu : public menu::GameMenu {
public:
  const char* Unknown32() override;
  void Unknown96() override;
  uint8_t ImplUnknown08() override;
  virtual void Unknown140();
  virtual void Unknown141();
  virtual void Unknown142();

protected:
  // Lists the items of an item kind.
  void Unknown1874730(int kind);
};

class MaterialShopSelectMenu : public IShopSelectMenu {
public:
  virtual int Unknown143();
};

}
