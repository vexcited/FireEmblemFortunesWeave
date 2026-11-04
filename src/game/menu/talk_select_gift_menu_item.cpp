#include "game/menu/material_menu_item.hpp"

namespace game::menu {

namespace {

class TalkSelectGiftMenuItem : public menu::MaterialMenuItem {
public:
  TalkSelectGiftMenuItem();

  int ACall() override;
};

[[gnu::used]] TalkSelectGiftMenuItem::TalkSelectGiftMenuItem() = default;

}

}
