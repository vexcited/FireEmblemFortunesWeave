#include "game/data/data_file.hpp"
#include "game/facility/mind.hpp"
#include "game/menu/game_menu_item.hpp"
#include "game/sound/se.hpp"

namespace game::facility {

namespace {

class TalkMenuItem : public menu::GameMenuItem {
public:
  TalkMenuItem();

  bool Unknown14() override { return true; }

  // Remembers which talk the hub should play.
  int ACall() override {
    if (Mind* mind = Mind::GetInstance()) {
      mind->unknown_14_ = data_ != nullptr ? data_->index : -1;
    }
    return 2;
  }

  void PlayDecideSe() override { sound::PlaySe("SE_SYS_Decide_L"); }
  void PlayCursorSe() override { sound::PlayCursorSe(); }
  void PlayPageSe() override { sound::PlayCursorSe(); }
  void PlayIdleAnimation() override;

private:
  const Data* data_;
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
