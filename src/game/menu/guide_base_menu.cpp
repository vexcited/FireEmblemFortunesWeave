#pragma GCC visibility push(hidden)
#include "game/menu/game_menu.hpp"
#pragma GCC visibility pop

namespace game::menu {

class GuideBaseMenu : public GameMenu {
public:
  ~GuideBaseMenu() override;

  int Unknown24() override { return 3; }
  bool Unknown64() override { return true; }
  void Unknown69() override {}
  void Unknown76(int result) override;
  void Unknown77(int result) override;
  void Unknown78(int result) override;
  void Unknown79(int result) override;
  int Unknown101() override { return 3; }
  int Unknown104(bool loop) override;
  int Unknown106(bool loop) override;
  int Unknown108(bool loop) override;
  int Unknown110(bool loop) override;
  void Unknown114() override;
  int Unknown117() override { return 1; }
  int Unknown118() override { return 1; }
};

namespace {

class ProcHonorMenu : public GuideBaseMenu {
public:
  ProcHonorMenu();

  const char* Unknown32() override { return "Layout/CommonMenu.arc"; }
  const char* Unknown33() override { return "Common_HonorList"; }
  void Unknown85() override;
  void Unknown93() override;
};

[[gnu::used]] ProcHonorMenu::ProcHonorMenu() = default;

class ProcQuestMenu : public GuideBaseMenu {
public:
  ProcQuestMenu();

  const char* Unknown32() override { return "Layout/CommonMenu.arc"; }
  const char* Unknown33() override { return "Common_Quest"; }
  void Unknown84() override;
  void Unknown85() override;
  void Unknown88() override;
  int Unknown102() override;
  void Unknown128() override;
  void Unknown129() override;
  int InputUnknown12(int direction, bool loop) override;
};

[[gnu::used]] ProcQuestMenu::ProcQuestMenu() = default;

int ProcQuestMenu::InputUnknown12(int direction, bool loop) {
  if (tab_.GetCount() < 1) {
    return 0;
  }
  if (!tab_.Move(direction, loop)) {
    return 14;
  }
  Unknown16de4d0();
  return 13;
}

}

GuideBaseMenu::~GuideBaseMenu() = default;

}
