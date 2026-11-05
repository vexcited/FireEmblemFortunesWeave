#include "game/sound/se.hpp"

#pragma GCC visibility push(hidden)
#include "game/menu/game_menu.hpp"
#pragma GCC visibility pop

namespace game::menu {

#pragma GCC visibility push(hidden)

// The cursor of the battle map settings, kept while the game runs.
int bmap_config_index = -1;

#pragma GCC visibility pop

namespace {

class ProcConfigMenu : public menu::GameMenu {
public:
  ProcConfigMenu();

  int Unknown24() override { return 3; }
  const char* Unknown32() override { return "Layout/CommonMenu.arc"; }
  const char* Unknown33() override { return "Common_Setting"; }
  void Unknown76(int result) override { Unknown78(result); }
  void Unknown77(int result) override { Unknown79(result); }

  void Unknown78(int result) override {
    sound::PlayCursorHorizontalLeftSe();
  }

  void Unknown79(int result) override {
    sound::PlayCursorHorizontalRightSe();
  }

  void Unknown84() override;
  void Unknown88() override;
  void Unknown94() override;
  int Unknown104(bool loop) override { return Unknown108(loop); }
  int Unknown106(bool loop) override { return Unknown110(loop); }
  int Unknown108(bool loop) override;
  int Unknown110(bool loop) override;
  int Unknown114() override;
  int Unknown117() override { return 1; }
  int Unknown118() override { return 1; }
  void Unknown128() override;
  void Unknown129() override;
  int InputUnknown01() override { return 14; }
  const char* ImplUnknown03() override { return "MID_SysMenu_Config"; }
  const char* ImplUnknown05() override { return nullptr; }
  int ImplUnknown10() override;

protected:
  void Unknown1670c60(int unknown, bool immediate);
};

[[gnu::used]] ProcConfigMenu::ProcConfigMenu() = default;

int ProcConfigMenu::Unknown108(bool loop) {
  if (!tab_.Move(-1, loop)) {
    return 0;
  }
  Unknown16de4d0();
  return 13;
}

int ProcConfigMenu::Unknown110(bool loop) {
  if (!tab_.Move(1, loop)) {
    return 0;
  }
  Unknown16de4d0();
  return 13;
}

class ProcBmapConfigMenu : public ProcConfigMenu {
public:
  ProcBmapConfigMenu();

  int Unknown24() override { return 5; }
  const char* Unknown32() override { return "Layout/Battle.arc"; }
  const char* Unknown33() override { return "Battle_Setting"; }
  bool Unknown64() override { return true; }
  void Unknown79(int result) override {}
  void Unknown84() override {}
  void Unknown88() override {}
  void Unknown94() override;

  void Unknown96() override {
    BasicMenu::Unknown96();
    int state = Unknown21();
    if (state < 2 || state > 7) {
      ImplUnknown12();
    }
    Unknown16dd9a0();
  }

  // Remembers the cursor and closes without the cancel sound.
  int Unknown101() override {
    if (current_ != nullptr) {
      int found = -1;
      int index = 0;
      for (BasicMenuItem* item : items_) {
        if (item == current_) {
          found = index;
          break;
        }
        ++index;
      }
      bmap_config_index = found;
    }
    return 3;
  }

  int Unknown104(bool loop) override { return 0; }
  int Unknown106(bool loop) override { return 0; }
  int Unknown108(bool loop) override { return 0; }
  int Unknown110(bool loop) override { return loop ? 3 : 0; }

  int Unknown112() override {
    Unknown1670c60(1, false);
    return 9;
  }

  int Unknown114() override;
  void Unknown129() override {}
  int InputUnknown01() override { return 13; }
  const char* ImplUnknown03() override { return nullptr; }
  const char* ImplUnknown05() override { return nullptr; }
  int ImplUnknown10() override;
};

[[gnu::used]] ProcBmapConfigMenu::ProcBmapConfigMenu() = default;

}

}
