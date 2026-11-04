#pragma GCC visibility push(hidden)
#include "game/menu/basic_menu.hpp"
#pragma GCC visibility pop

namespace game::menu {

class ExDialog : public BasicMenu {
public:
  ~ExDialog() override;

  int Unknown24() override { return 10; }
  int Unknown26() override { return 110; }
  const char* Unknown32() override { return "Layout/CommonMenu.arc"; }
  const char* Unknown33() override { return "Common_DialogEx"; }
  bool Unknown39() override { return true; }
  int Unknown56() override { return 7; }
  int Unknown61() override { return 0; }
  int Unknown68() override { return 1; }
  void Unknown72() override;
  void Unknown84() override;
  int Unknown100() override;
  int Unknown101() override { return 3; }
};

ExDialog::~ExDialog() = default;

}
