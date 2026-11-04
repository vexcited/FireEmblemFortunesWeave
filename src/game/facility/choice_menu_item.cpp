#include "game/menu/game_menu_item.hpp"
#include "game/sound/se.hpp"

namespace game::facility {

namespace {

class ChoiceMenuItem : public menu::GameMenuItem {
public:
  ChoiceMenuItem();

  bool Unknown14() override { return true; }
  void PlayDecideSe() override { sound::PlaySe("SE_SYS_Decide_L"); }
  void PlayCursorSe() override { sound::PlayCursorSe(); }
  void PlayPageSe() override { sound::PlayCursorSe(); }
  void PlayIdleAnimation() override;
};

[[gnu::used]] ChoiceMenuItem::ChoiceMenuItem() = default;

}

}
