#pragma GCC visibility push(hidden)
#include "game/menu/basic_menu.hpp"
#pragma GCC visibility pop

namespace game::menu {

namespace {

class ProcGameOverMenu : public menu::BasicMenu {
public:
  ProcGameOverMenu();

  void Unknown02() override;
  int Unknown26() override { return 10; }
  int Unknown27() override { return 0; }
  const char* Unknown32() override { return "Layout/CommonMenu.arc"; }
  const char* Unknown33() override { return "Common_GameOver"; }
  const char* Unknown35() override { return "L_List"; }
  int Unknown56() override { return 7; }
  void Unknown57(std::vector<int64_t>& handles) override;
  bool Unknown64() override { return true; }
  void Unknown84() override;
  void Unknown85() override;
  void Unknown88() override;
  bool Unknown124() override;
  void Unknown128() override;
  void Unknown129() override;
  void Unknown132() override;
};

[[gnu::used]] ProcGameOverMenu::ProcGameOverMenu() = default;

}

}
