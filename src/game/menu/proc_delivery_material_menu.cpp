#pragma GCC visibility push(hidden)
#include "game/menu/game_menu.hpp"
#pragma GCC visibility pop

namespace game::menu {

namespace {

class ProcDeliveryMaterialMenu : public menu::GameMenu {
public:
  ProcDeliveryMaterialMenu();

  const char* Unknown33() override { return "Common_Quest_Material"; }
  const char* Unknown35() override { return "L_Menu/L_Pool"; }
  void Unknown84() override;
  void Unknown85() override;
  void Unknown88() override;
  void Unknown96() override;
  int Unknown100() override;
  int Unknown101() override;
  void Unknown128() override;
  void Unknown129() override;
  int Unknown137() override;
};

[[gnu::used]] ProcDeliveryMaterialMenu::ProcDeliveryMaterialMenu() = default;

}

}
