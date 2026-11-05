#include "game/unit_list_set.hpp"

#pragma GCC visibility push(hidden)
#include "game/facility/skill_menu_base.hpp"
#pragma GCC visibility pop

namespace game::facility {

namespace {

class ProcEducateSkillMenu : public SkillMenuBase {
public:
  ProcEducateSkillMenu();

  const char* Unknown33() override { return "Hub_EducateSkill"; }
  const char* Unknown67() override { return "伝授"; }

  void Unknown84() override {
    SkillMenuBase::Unknown84();
    Unknown16d7120(false);
    accessor_.SetPaneVisible("N_After", false);
  }

  void Unknown88() override;
  void Unknown128() override;

  Unit* GetNextUnit() override {
    if (UnitCycleList* list = UnitListSet::instance_->GetList(2)) {
      return list->GetNext(unit_, 2);
    }
    return unit_;
  }

  Unit* GetPreviousUnit() override {
    if (UnitCycleList* list = UnitListSet::instance_->GetList(2)) {
      return list->GetPrevious(unit_, 2);
    }
    return unit_;
  }

  bool Unknown141() override { return true; }
  int InputUnknown01() override { return 9; }
  const char* ImplUnknown03() override { return "MID_TempleMenu_Educate"; }
  const char* ImplUnknown05() override { return "MID_EducateMenu_Help"; }
};

[[gnu::used]] ProcEducateSkillMenu::ProcEducateSkillMenu() = default;

}

}
