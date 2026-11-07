#pragma GCC visibility push(hidden)
#include "game/game_mode_data.hpp"
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

[[gnu::visibility("hidden")]] extern const char* const kRouteQuestLabels[4];

const char* const kRouteQuestLabels[4] = {
  "MID_QuestMenu_RouteQuest_Kindness",
  "MID_QuestMenu_RouteQuest_Challenge",
  "MID_QuestMenu_RouteQuest_Procurement",
  "MID_QuestMenu_RouteQuest_Show",
};

namespace {

// Names the quests of the route of the current chapter.
const char* ProcProcurement::Unknown142() {
  if (const GameModeData* data = GameModeData::GetInstance()) {
    const uint8_t kind = data->GetChapterKind() - 1;
    if (kind <= 3) {
      return kRouteQuestLabels[kind];
    }
  }
  return "MID_QuestMenu_RouteQuest";
}

}

}
