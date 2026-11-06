#include <cstdint>

#include "game/data/data_file.hpp"
#include "game/facility/class_change_job_menu.hpp"
#include "game/game_mode_data.hpp"
#include "game/gameui/header_footer.hpp"
#include "game/gameui/message.hpp"
#include "game/sound/se.hpp"
#include "game/unit_list_set.hpp"
#include "msg/message_manager.hpp"
#include "ui/layout_accessor.hpp"

namespace game {

#pragma GCC visibility push(hidden)

// Set while the hub forces the player through a facility.
extern const HashedString kVariableHubFacilityForced;

#pragma GCC visibility pop

// The highest class rank the story has opened.
uint8_t GetOpenClassRank();

}

namespace game::facility {

#pragma GCC visibility push(hidden)

// The message ids of the class ranks.
extern const char* const kJobRankMids[6];
const char* const kJobRankMids[6] = {
  "MID_ClassTrialMenu_JobRank_None",
  "MID_ClassTrialMenu_JobRank_Novice",
  "MID_ClassTrialMenu_JobRank_Middle",
  "MID_ClassTrialMenu_JobRank_Higher",
  "MID_ClassTrialMenu_JobRank_Super",
  "MID_ClassTrialMenu_JobRank_Legend",
};

// The facility scene behind the menus, it redraws the shown unit when the
// byte at 0xf1 is set.
class FacilityView {
public:
  static FacilityView* instance_;

  void SetUnitChanged() { unit_changed_ = true; }

private:
  uint8_t unknown_00_[0xf1];
  bool unit_changed_;
};

#pragma GCC visibility pop

// Makes the unit the only one of the Mind units.
void SetMindUnit(Unit* unit);

}

namespace game::facility {

ClassChangeJobMenu::~ClassChangeJobMenu() = default;

void ClassChangeJobMenu::Unknown30(bool enable) {
  BasicMenu::Unknown31(enable);
  {
    std::weak_ptr<ui::LayoutAccessor> info =
      accessor_.GetPart("L_ClassInfo/L_KeyHelp");
    ui::SetPartEnabled(info, enable, false);
  }
  std::weak_ptr<ui::LayoutAccessor> help = accessor_.GetPart("L_KeyHelp");
  ui::SetPartEnabled(help, enable, true);
}

void ClassChangeJobMenu::Unknown76(int result) {
  if (result != 13) {
    FacilityMenu::Unknown76(result);
    return;
  }
  sound::PlaySe("SE_SYS_UnitChange_Left");
}

void ClassChangeJobMenu::Unknown77(int result) {
  if (result != 13) {
    FacilityMenu::Unknown77(result);
    return;
  }
  sound::PlaySe("SE_SYS_UnitChange_Right");
}

void ClassChangeJobMenu::Unknown78(int result) {
  sound::PlaySe("SE_SYS_List_Change_H");
}

int ClassChangeJobMenu::Unknown101() {
  return GameModeData::IsVariableSet(kVariableHubFacilityForced) ? 1 : 3;
}

int ClassChangeJobMenu::Unknown103() {
  if (GameModeData::IsVariableSet(kVariableHubFacilityForced)) {
    return 0;
  }
  if (mode_ == kModeUnknown2) {
    return 0;
  }

  Unit* start = unit_;
  do {
    Unit* unit = unit_;
    if (UnitCycleList* list = UnitListSet::instance_->GetList(0)) {
      unit = list->GetNext(unit, 2);
    }
    unit_ = unit;
    if (unit != start) {
      SetMindUnit(unit);
      if (FacilityView::instance_ != nullptr) {
        FacilityView::instance_->SetUnitChanged();
      }
      if (!Unknown148(tab_.GetCurrent())) {
        tab_.Move(-1, true);
      }
    }
  } while (!Unknown148(tab_.GetCurrent()));

  if (unit_ == start) {
    return 0;
  }
  Unknown16b41a0(unit_);
  Unknown16defa0();
  return 13;
}

int ClassChangeJobMenu::Unknown105() {
  if (GameModeData::IsVariableSet(kVariableHubFacilityForced)) {
    return 0;
  }
  if (mode_ == kModeUnknown2) {
    return 0;
  }

  Unit* start = unit_;
  do {
    Unit* unit = unit_;
    if (UnitCycleList* list = UnitListSet::instance_->GetList(0)) {
      unit = list->GetPrevious(unit, 2);
    }
    unit_ = unit;
    if (unit != start) {
      SetMindUnit(unit);
      if (FacilityView::instance_ != nullptr) {
        FacilityView::instance_->SetUnitChanged();
      }
      if (!Unknown148(tab_.GetCurrent())) {
        tab_.Move(1, true);
      }
    }
  } while (!Unknown148(tab_.GetCurrent()));

  if (unit_ == start) {
    return 0;
  }
  Unknown16b41a0(unit_);
  Unknown16defa0();
  return 13;
}

void ClassChangeJobMenu::Unknown145() {
  accessor_.StartAnimation("JobSelect");
  accessor_3b8_.StartAnimation("JobSelect");
}

int ClassChangeJobMenu::InputUnknown12(int direction, bool loop) {
  if (GameModeData::IsVariableSet(kVariableHubFacilityForced)) {
    return 0;
  }
  if (tab_.GetCount() < 1 || !tab_.Move(direction, loop)) {
    return 0;
  }
  Unknown16de4d0();
  return 13;
}

void ClassChangeJobMenu::Unknown146(uint8_t rank) {
  int count = 0;
  int index = 0;
  for (uint8_t page = 0; page < 6; page++) {
    if (Unknown148(page)) {
      if (rank == page) {
        index = count;
      }
      tab_.Add(page);
      count++;
    }
  }
  ResetTabs(count, index);
}

void ClassChangeJobMenu::SetupRankPageTab() {
  std::weak_ptr<ui::LayoutAccessor> part = accessor_.GetPart("L_PageTab");
  tab_.SetupLabel(part, [this](int) -> gameui::Message::StringArg {
    uint8_t rank = tab_.GetCurrent();
    const char* mid = kJobRankMids[rank];
    return *mid != '\0' ? msg::GetText(mid) :
      msg::MessageManager::empty_text_;
  }, Unknown24(), 14, 15);
}

void ClassChangeJobMenu::Unknown131() {
  if (gameui::Footer* footer = gameui::Footer::instance_) {
    footer->Refresh(false);
  }
}

bool ClassChangeJobMenu::Unknown148(uint8_t rank) {
  return GetOpenClassRank() >= rank;
}

namespace {

class ProcClassTrialJobMenu : public ClassChangeJobMenu {
public:
  ProcClassTrialJobMenu();

  void Unknown88() override;
  int Unknown100() override;
  void Unknown128() override;
  void Unknown129() override;

  const char* ImplUnknown03() override {
    return "MID_TempleMenu_ClassTrial";
  }

  const char* ImplUnknown05() override {
    return "MID_ClassTrialMenu_JobSelect_Help";
  }

  bool Unknown144() override { return false; }

  void Unknown145() override {
    accessor_.StartAnimation("TrialJobSelect");
    accessor_3b8_.StartAnimation("TrialJobSelect");
  }

  void Unknown146(uint8_t rank) override;
  void SetupRankPageTab() override;

  bool Unknown148(uint8_t rank) override {
    return rank != 0 && GetOpenClassRank() >= rank;
  }
};

void ProcClassTrialJobMenu::Unknown146(uint8_t rank) {
  int count = 0;
  int index = 0;
  for (uint8_t page = 1; page < 6; page++) {
    if (Unknown148(page)) {
      if (rank == page) {
        index = count;
      }
      tab_.Add(page);
      count++;
    }
  }
  ResetTabs(count, index);
}

[[gnu::used]] ProcClassTrialJobMenu::ProcClassTrialJobMenu() = default;

}

}
