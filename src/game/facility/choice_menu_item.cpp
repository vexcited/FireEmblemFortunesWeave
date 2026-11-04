#include "game/menu/game_menu_item.hpp"

namespace game::facility {

namespace {

class ChoiceMenuItem : public menu::GameMenuItem {
public:
  ChoiceMenuItem();

  bool Unknown14() override { return true; }
  void PlayDecideSe() override;
  void PlayCursorSe() override;
  void PlayPageSe() override;
  void PlayIdleAnimation() override;
};

[[gnu::used]] ChoiceMenuItem::ChoiceMenuItem() = default;

}

}
