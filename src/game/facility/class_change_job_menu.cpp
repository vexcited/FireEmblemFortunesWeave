#include <cstdint>

#include "game/data/data_file.hpp"
#include "game/facility/class_change_job_menu.hpp"
#include "game/game_mode_data.hpp"
#include "game/sound/se.hpp"
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

ClassChangeJobMenu::~ClassChangeJobMenu() = default;

void ClassChangeJobMenu::Unknown30(bool enable) {
  BasicMenu::Unknown31(enable);
  std::weak_ptr<ui::LayoutAccessor> info =
    accessor_.GetPart("L_ClassInfo/L_KeyHelp");
  ui::SetPartEnabled(info, enable, false);
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

void ClassChangeJobMenu::Unknown145() {
  accessor_.StartAnimation("JobSelect");
  accessor_3b8_.StartAnimation("JobSelect");
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
  void Unknown147() override;

  bool Unknown148(uint8_t rank) override {
    return rank != 0 && GetOpenClassRank() >= rank;
  }
};

[[gnu::used]] ProcClassTrialJobMenu::ProcClassTrialJobMenu() = default;

}

}
