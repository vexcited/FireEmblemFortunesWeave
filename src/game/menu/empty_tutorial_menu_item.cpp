#include "game/menu/empty_menu_item.hpp"
#include "game/menu/game_menu_item.hpp"

namespace game::menu {

namespace {

class EmptyTutorialMenuItem : public menu::EmptyMenuItem {
public:
  EmptyTutorialMenuItem();

  void DrawText() override;
};

[[gnu::used]] EmptyTutorialMenuItem::EmptyTutorialMenuItem() = default;

class TutorialMenuItem : public menu::GameMenuItem {
public:
  TutorialMenuItem();

  const char* GetMid() override;
  void OnDeselect() override;
  void Unknown23() override;
  int ACall() override { return 0; }
  void DrawText() override;
};

[[gnu::used]] TutorialMenuItem::TutorialMenuItem() = default;

}

}
