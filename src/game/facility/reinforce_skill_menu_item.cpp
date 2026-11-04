#include "game/facility/facility_equip_unit_menu_item.hpp"
#include "game/facility/skill_menu_item_base.hpp"

namespace game::facility {

namespace {

class ReinforceSkillMenuItem : public facility::SkillMenuItemBase {
public:
  ReinforceSkillMenuItem();

  int ACall() override;
  void DrawText() override;
};

[[gnu::used]] ReinforceSkillMenuItem::ReinforceSkillMenuItem() = default;

class ReinforceMenuItem : public facility::FacilityEquipUnitMenuItem {
public:
  ReinforceMenuItem();

  bool Unknown83() override;
};

[[gnu::used]] ReinforceMenuItem::ReinforceMenuItem() = default;

class EducateSkillMenuItem : public facility::SkillMenuItemBase {
public:
  EducateSkillMenuItem();

  int ACall() override;
  void DrawText() override;
};

[[gnu::used]] EducateSkillMenuItem::EducateSkillMenuItem() = default;

class EducateMenuItem : public facility::FacilityEquipUnitMenuItem {
public:
  EducateMenuItem();

  bool Unknown83() override;
};

[[gnu::used]] EducateMenuItem::EducateMenuItem() = default;

}

}
