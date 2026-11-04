#include "game/facility/facility_menu_item.hpp"
#include "game/facility/facility_unit_menu_item.hpp"
#include "game/menu/material_menu_item.hpp"

namespace game::facility {

namespace {

class CastingUnitMenuItem : public facility::FacilityUnitMenuItem {
public:
  CastingUnitMenuItem();

  int Unknown79() override { return 1; }
  int Unknown80() override;
};

[[gnu::used]] CastingUnitMenuItem::CastingUnitMenuItem() = default;

class ThermaeThermaeMenuItem : public facility::FacilityMenuItem {
public:
  ThermaeThermaeMenuItem();

  void DrawText() override;
  void Unknown70() override;
};

[[gnu::used]] ThermaeThermaeMenuItem::ThermaeThermaeMenuItem() = default;

class PerchFoodMenuItem : public menu::MaterialMenuItem {
public:
  PerchFoodMenuItem();

  int ACall() override;
};

[[gnu::used]] PerchFoodMenuItem::PerchFoodMenuItem() = default;

}

}
