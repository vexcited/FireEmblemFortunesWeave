#pragma GCC visibility push(hidden)
#include "game/menu/basic_menu.hpp"
#pragma GCC visibility pop

namespace game::menu {

class TutorialInfo : public BasicMenu {
public:
  ~TutorialInfo() override;

  int Unknown24() override { return 10; }
  int Unknown26() override { return 110; }
  const char* Unknown32() override { return "Layout/CommonMenu.arc"; }
  const char* Unknown33() override { return "Common_TutorialInfo"; }
  bool Unknown39() override { return true; }
  int Unknown61() override { return 1; }
  int Unknown68() override { return 1; }
  void Unknown72() override;
  void Unknown82() override;
  void Unknown84() override;
  int Unknown100() override { return 0; }
  int Unknown101() override { return 0; }
  void Unknown114() override;
  int Unknown115() override;
};

TutorialInfo::~TutorialInfo() = default;

}
