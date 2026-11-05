#pragma GCC visibility push(hidden)
#include "game/map/command_item_menu_base.hpp"
#pragma GCC visibility pop

namespace game::map {

// The weapon menus of the attack and assist commands.
class CommandAttackMenu_Base : public CommandItemMenu_Base {
public:
  int Unknown139() override { return unknown_4a4_ != 0 ? 9 : 10; }

protected:
  // Sets the menu up, for the command battle when the flag is set.
  void Unknown161e600(bool cmdbtl);

  int32_t unknown_4a4_;
};

class MapUnitCommandAttackMenu : public CommandAttackMenu_Base {
public:
  ~MapUnitCommandAttackMenu() override;

  void Unknown84() override { Unknown161e600(false); }
};

MapUnitCommandAttackMenu::~MapUnitCommandAttackMenu() = default;

class MapUnitCommandAssistMenu : public CommandAttackMenu_Base {
public:
  ~MapUnitCommandAssistMenu() override;

  void Unknown84() override { Unknown161e600(false); }
};

MapUnitCommandAssistMenu::~MapUnitCommandAssistMenu() = default;

class CmdBtlCommandAttackMenu : public CommandAttackMenu_Base {
public:
  ~CmdBtlCommandAttackMenu() override;

  void Unknown84() override { Unknown161e600(true); }
};

CmdBtlCommandAttackMenu::~CmdBtlCommandAttackMenu() = default;

class CmdBtlCommandAssistMenu : public CommandAttackMenu_Base {
public:
  ~CmdBtlCommandAssistMenu() override;

  void Unknown84() override { Unknown161e600(true); }
};

CmdBtlCommandAssistMenu::~CmdBtlCommandAssistMenu() = default;

}
