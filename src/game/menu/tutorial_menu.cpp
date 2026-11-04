#pragma GCC visibility push(hidden)
#include "game/menu/game_menu.hpp"
#pragma GCC visibility pop

namespace game::menu {

class TutorialMenu : public GameMenu {
public:
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
};

TutorialMenu::~TutorialMenu() = default;

}
