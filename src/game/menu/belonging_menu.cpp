#pragma GCC visibility push(hidden)
#include "game/menu/game_menu.hpp"
#pragma GCC visibility pop

namespace game::menu {

class BelongingMenu : public GameMenu {
public:
  ~BelongingMenu() override;

  int Unknown24() override;
  const char* Unknown32() override { return "Layout/CommonMenu.arc"; }
  const char* Unknown33() override { return "Common_Belongings"; }
  const char* Unknown35() override { return "L_ItemSelectMenu"; }
  const char* Unknown42() override { return "L_UnitInfo/L_KeySort"; }
  int Unknown56() override { return 3; }
  bool Unknown60() override { return true; }
  bool Unknown64() override { return true; }
  void Unknown84() override;
  void Unknown85() override;
  virtual int Unknown139() { return 9; }
  virtual bool Unknown140() { return false; }
  virtual bool Unknown141() { return true; }
  virtual void* Unknown142() { return nullptr; }
  virtual void Unknown143() {}
  int InputUnknown12(int direction, bool loop) override;
};

BelongingMenu::~BelongingMenu() = default;

int BelongingMenu::InputUnknown12(int direction, bool loop) {
  if (!Unknown140() || !tab_.Move(direction, loop)) {
    return 0;
  }
  Unknown16de4d0();
  return 13;
}

}
