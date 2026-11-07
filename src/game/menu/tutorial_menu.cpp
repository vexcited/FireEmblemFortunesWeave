#include <cstdint>

#include "game/sound/se.hpp"

#pragma GCC visibility push(hidden)
#include "game/menu/game_menu.hpp"
#pragma GCC visibility pop

namespace game::menu {

#pragma GCC visibility push(hidden)

// Scrolled text page of the tutorial menu, its class name is unknown.
class TutorialScroll {
public:
  void ScrollUp(bool loop);
  void ScrollDown(bool loop, bool unknown);
};

#pragma GCC visibility pop

class TutorialMenu : public GameMenu {
public:
  [[gnu::visibility("hidden")]] static bool unknown_225d650_;

  ~TutorialMenu() override;

  int Unknown24() override { return 3; }
  int Unknown26() override;
  const char* Unknown32() override { return "Layout/CommonMenu.arc"; }
  const char* Unknown33() override { return "Common_TutorialMenu"; }
  int Unknown40() override { return 64; }
  void Unknown76(int result) override;
  void Unknown77(int result) override;
  void Unknown78(int result) override;
  void Unknown79(int result) override;
  void Unknown84() override;
  void Unknown86() override;
  void Unknown88() override;
  int Unknown101() override;
  int Unknown104(bool loop) override;
  int Unknown106(bool loop) override;
  int Unknown108(bool loop) override;
  int Unknown110(bool loop) override;
  int Unknown117() override { return 1; }
  int Unknown118() override { return 1; }
  void Unknown128() override;
  void Unknown129() override;
  int InputUnknown01() override { return 16; }

  int InputUnknown07(bool loop) override {
    if (scroll_ != nullptr) {
      scroll_->ScrollUp(loop);
    }
    return 0;
  }

  int InputUnknown08(bool loop) override {
    if (scroll_ != nullptr) {
      scroll_->ScrollDown(loop, false);
    }
    return 0;
  }

  const char* ImplUnknown03() override { return "MID_SysMenu_Tutorial"; }
  const char* ImplUnknown05() override { return "MID_TutorialMenu_Help"; }

private:
  int MovePageLeft(bool loop);
  int MovePageRight(bool loop);

  void PlayCursorSe() {
    if (InputUnknown00() != 0) {
      InputUnknown18();
      return;
    }
    if (BasicMenuItem* item = MenuInput::menu_->GetCurrentItem()) {
      item->PlayCursorSe();
      return;
    }
    sound::PlayCursorLeftSe();
  }

  void PlayPageSe() {
    if (InputUnknown00() != 0) {
      InputUnknown18();
      return;
    }
    if (BasicMenuItem* item = MenuInput::menu_->GetCurrentItem()) {
      item->PlayPageSe();
      return;
    }
    sound::PlayCursorRightSe();
  }

  std::vector<uint8_t> pages_;
  std::shared_ptr<TutorialScroll> scroll_;
  uint8_t unknown_450_[0x2];
  bool unknown_452_;
};

bool TutorialMenu::unknown_225d650_;

int TutorialMenu::Unknown26() {
  return unknown_452_ ? 10 : 0;
}

void TutorialMenu::Unknown76(int result) {
  PlayCursorSe();
}

void TutorialMenu::Unknown77(int result) {
  PlayPageSe();
}

void TutorialMenu::Unknown78(int result) {
  PlayCursorSe();
}

void TutorialMenu::Unknown79(int result) {
  PlayPageSe();
}

void TutorialMenu::Unknown86() {
  unknown_225d650_ = false;
}

int TutorialMenu::Unknown104(bool loop) {
  return MovePageLeft(loop);
}

int TutorialMenu::Unknown106(bool loop) {
  return MovePageRight(loop);
}

TutorialMenu::~TutorialMenu() = default;

}
