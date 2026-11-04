#include <cstdint>

#include "game/menu/game_menu_item.hpp"

namespace game::menu {

namespace {

class ConfigMenuItem : public menu::GameMenuItem {
public:
  ConfigMenuItem();

  bool IsDecidable() override { return unknown_60_; }

protected:
  uint8_t unknown_53_[0xd];
  bool unknown_60_;
};

[[gnu::used]] ConfigMenuItem::ConfigMenuItem() = default;

class InfoMenuItem : public ConfigMenuItem {
public:
  InfoMenuItem();

  bool IsEnable() override { return false; }
  void Unknown17() override;
  int ACall() override { return 0; }
};

[[gnu::used]] InfoMenuItem::InfoMenuItem() = default;

}

}
