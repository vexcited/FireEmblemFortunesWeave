#include "game/menu/game_menu_item.hpp"

namespace game::facility {

namespace {

class TalkMenuItem : public menu::GameMenuItem {
public:
  TalkMenuItem();

  bool Unknown14() override { return true; }
  int ACall() override;
  void PlayDecideSe() override;
  void PlayCursorSe() override;
  void PlayPageSe() override;
  void PlayIdleAnimation() override;
};

[[gnu::used]] TalkMenuItem::TalkMenuItem() = default;

class GazeMenuItem : public menu::GameMenuItem {
public:
  GazeMenuItem();

  const char* GetMid() override { return "MID_GazeMenu_Gaze"; }
  int ACall() override;
};

[[gnu::used]] GazeMenuItem::GazeMenuItem() = default;

class CancelMenuItem : public menu::GameMenuItem {
public:
  CancelMenuItem();

  const char* GetMid() override { return "MID_GazeMenu_Farewell"; }
  int ACall() override;
};

[[gnu::used]] CancelMenuItem::CancelMenuItem() = default;

}

}
