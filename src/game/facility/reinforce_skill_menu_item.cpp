#include "game/facility/facility_equip_unit_menu_item.hpp"
#include "game/facility/skill_menu_item_base.hpp"
#include "game/menu/basic_menu.hpp"

namespace game::facility {

void OpenEducate(menu::BasicMenu* menu);

void OpenReinforce(menu::BasicMenu* menu);

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
  int ACall() override {
    if (!IsActive()) {
      return 1;
    }
    OpenReinforce(menu_->GetParent());
    return 9;
  }

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
  int ACall() override {
    if (!IsActive()) {
      return 1;
    }
    OpenEducate(menu_->GetParent());
    return 9;
  }

  EducateMenuItem();

  bool Unknown83() override;
};

[[gnu::used]] EducateMenuItem::EducateMenuItem() = default;

}

}
