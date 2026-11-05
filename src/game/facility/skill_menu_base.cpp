#include "game/data/data_file.hpp"
#include "game/game_mode_data.hpp"
#include "game/sound/se.hpp"
#include "game/unit_list_set.hpp"

#pragma GCC visibility push(hidden)
#include "game/facility/skill_menu_base.hpp"
#pragma GCC visibility pop

namespace game {

#pragma GCC visibility push(hidden)

extern const HashedString kVariableHubFacilityForced;

#pragma GCC visibility pop

}

namespace game::facility {

void SkillMenuBase::Unknown76(int result) {
  if (result != 13) {
    GameMenu::Unknown76(result);
    return;
  }
  sound::PlaySe("SE_SYS_UnitChange_Left");
}

void SkillMenuBase::Unknown77(int result) {
  if (result != 13) {
    GameMenu::Unknown77(result);
    return;
  }
  sound::PlaySe("SE_SYS_UnitChange_Right");
}

void SkillMenuBase::Unknown96() {
  BasicMenu::Unknown96();
  int state = Unknown21();
  if (state < 2 || state > 7) {
    ImplUnknown12();
  }
  Unknown16dd9a0();
  Unknown88();
}

int SkillMenuBase::Unknown101() {
  if (GameModeData::IsVariableSet(kVariableHubFacilityForced) &&
      !Unknown141()) {
    return 1;
  }
  return GameMenu::Unknown101();
}

int SkillMenuBase::Unknown103() {
  if (GameModeData::IsVariableSet(kVariableHubFacilityForced) &&
      !Unknown141()) {
    return 0;
  }
  Unit* unit = GetNextUnit();
  if (unit == nullptr || unit == unit_) {
    return 0;
  }
  ChangeUnit(unit);
  return 13;
}

int SkillMenuBase::Unknown105() {
  if (GameModeData::IsVariableSet(kVariableHubFacilityForced) &&
      !Unknown141()) {
    return 0;
  }
  Unit* unit = GetPreviousUnit();
  if (unit == nullptr || unit == unit_) {
    return 0;
  }
  ChangeUnit(unit);
  return 13;
}

namespace {

class ProcReinforceSkillMenu : public SkillMenuBase {
public:
  ProcReinforceSkillMenu();

  const char* Unknown33() override { return "Hub_ReinforceSkill"; }
  const char* Unknown67() override { return "戦技強化"; }
  void Unknown84() override;
  void Unknown88() override;
  void Unknown128() override;

  Unit* GetNextUnit() override {
    if (UnitCycleList* list = UnitListSet::instance_->GetList(1)) {
      return list->GetNext(unit_, 2);
    }
    return unit_;
  }

  Unit* GetPreviousUnit() override {
    if (UnitCycleList* list = UnitListSet::instance_->GetList(1)) {
      return list->GetPrevious(unit_, 2);
    }
    return unit_;
  }

  bool Unknown141() override { return false; }
  int InputUnknown01() override { return 14; }

  const char* ImplUnknown03() override {
    return "MID_TempleMenu_Reinforce";
  }

  const char* ImplUnknown05() override { return "MID_ReinforceMenu_Help"; }
};

[[gnu::used]] ProcReinforceSkillMenu::ProcReinforceSkillMenu() = default;

}

}
