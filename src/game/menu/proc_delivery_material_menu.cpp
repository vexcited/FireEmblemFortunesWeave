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
  bool Unknown137() override;
  int InputUnknown12(int direction, bool loop) override;

private:
  uint8_t unknown_428_[0x10];
  std::vector<const void*> unknown_438_;
  std::vector<const void*> unknown_450_;
};

[[gnu::used]] ProcDeliveryMaterialMenu::ProcDeliveryMaterialMenu() = default;

int ProcDeliveryMaterialMenu::InputUnknown12(int direction, bool loop) {
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

}
