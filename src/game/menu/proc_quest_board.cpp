#pragma GCC visibility push(hidden)
#include "game/menu/game_menu.hpp"
#pragma GCC visibility pop

namespace game::menu {

namespace {

class ProcQuestBoard : public menu::GameMenu {
public:
  ProcQuestBoard();

  const char* Unknown32() override { return "Layout/CommonMenu.arc"; }
  const char* Unknown33() override { return "Common_Quest"; }
  int Unknown63() override { return 0; }
  const char* Unknown65() override { return "案内板"; }
  const char* Unknown67() override { return "案内板"; }
  void Unknown84() override;
  void Unknown85() override;
  void Unknown87() override;
  void Unknown88() override;
  int Unknown102() override;
  void Unknown128() override;
  int InputUnknown01() override { return 15; }
  const char* ImplUnknown03() override { return "MID_Access_QuestBoard"; }
  const char* ImplUnknown05() override { return "MID_QuestBoard_Help"; }
  virtual const char* Unknown142() { return "MID_QuestMenu_SubQuest"; }
  uint8_t ImplUnknown08() override { return 1; }
  virtual int Unknown144();
};

[[gnu::used]] ProcQuestBoard::ProcQuestBoard() = default;

class ProcProcurement : public ProcQuestBoard {
public:
  ProcProcurement();

  const char* Unknown65() override { return "仕送り"; }
  const char* Unknown67() override { return "仕送り"; }
  void Unknown128() override;
  const char* ImplUnknown03() override { return "MID_HubMenu_Procurement"; }
  const char* ImplUnknown05() override { return "MID_ProcurementMenu_Help"; }
  const char* Unknown142() override;
  int Unknown144() override { return 0; }
};

[[gnu::used]] ProcProcurement::ProcProcurement() = default;

}

}
