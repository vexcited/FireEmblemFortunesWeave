#pragma GCC visibility push(hidden)
#include "game/menu/game_menu.hpp"
#pragma GCC visibility pop

namespace game::menu {

class SendUnitItemMenu : public GameMenu {
public:
  ~SendUnitItemMenu() override;

  int Unknown23() override { return 1; }
  const char* Unknown32() override { return "Layout/CommonMenu.arc"; }
  const char* Unknown33() override { return "Common_SendUnitItem"; }
  const char* Unknown35() override { return "L_EquipList"; }
  void* Unknown36() override;
  void Unknown84() override;
  void Unknown88() override;
  int Unknown100() override;
  int Unknown101() override;
  void Unknown128() override;
};

SendUnitItemMenu::~SendUnitItemMenu() = default;

}
