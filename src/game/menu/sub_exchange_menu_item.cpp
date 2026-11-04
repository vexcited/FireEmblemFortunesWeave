#include "game/menu/sub_menu_item.hpp"

namespace game::menu {

namespace {

class SubExchangeMenuItem : public menu::SubMenuItem {
public:
  SubExchangeMenuItem();

  const char* GetMid() override { return "MID_Menu_Trade"; }
  void PlayDecideSe() override;
};

[[gnu::used]] SubExchangeMenuItem::SubExchangeMenuItem() = default;

class SubRemoveMenuItem : public menu::SubMenuItem {
public:
  SubRemoveMenuItem();

  const char* GetMid() override { return "MID_Menu_Remove"; }
  void PlayDecideSe() override;
};

[[gnu::used]] SubRemoveMenuItem::SubRemoveMenuItem() = default;

}

}
