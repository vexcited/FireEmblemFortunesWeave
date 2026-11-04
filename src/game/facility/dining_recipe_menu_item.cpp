#include "game/facility/facility_menu_item.hpp"

namespace game::facility {

namespace {

class DiningRecipeMenuItem : public facility::FacilityMenuItem {
public:
  DiningRecipeMenuItem();

  void DrawText() override;
  void Unknown70() override;
};

[[gnu::used]] DiningRecipeMenuItem::DiningRecipeMenuItem() = default;

}

}
