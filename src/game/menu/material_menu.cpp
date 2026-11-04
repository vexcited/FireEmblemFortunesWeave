#pragma GCC visibility push(hidden)
#include "game/menu/game_menu.hpp"
#pragma GCC visibility pop

namespace game::menu {

class MaterialMenu : public GameMenu {
public:
  ~MaterialMenu() override;

  const char* Unknown32() override { return "Layout/CommonMenu.arc"; }
  const char* Unknown33() override { return "Common_MaterialMenu"; }
  const char* Unknown35() override { return "L_Pool"; }
  const char* Unknown42() override { return "L_Pool/L_PageTab/L_KeySort"; }
  const char* Unknown43(uint8_t kind) override;
  bool Unknown60() override { return true; }
  void Unknown84() override;
  void Unknown85() override;
  void Unknown88() override;
  void Unknown128() override;
  void Unknown129() override;
};

namespace {

class ProcTalkSelectGiftMenu : public MaterialMenu {
public:
  ProcTalkSelectGiftMenu();

  int Unknown61() override { return 2; }
  const char* Unknown67() override { return "贈り物"; }
  int Unknown101() override;
  void Unknown128() override;
  int Unknown137() override;
};

[[gnu::used]] ProcTalkSelectGiftMenu::ProcTalkSelectGiftMenu() = default;

}

MaterialMenu::~MaterialMenu() = default;

}
