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
  int InputUnknown01() override { return 7; }
  const char* ImplUnknown03() override { return "MID_SysMenu_Item"; }
  const char* ImplUnknown05() override { return "MID_SendUnitMenu_Help"; }
  int ImplUnknown10() override;
  uint8_t ImplUnknown08() override { return unknown_439_ << 1; }

private:
  uint8_t unknown_428_[0x10];
  bool unknown_438_;
  bool unknown_439_;
  uint8_t unknown_43a_[0x6];
  std::function<void()> unknown_440_;
  std::function<void()> unknown_470_;
};

SendUnitItemMenu::~SendUnitItemMenu() = default;

}
