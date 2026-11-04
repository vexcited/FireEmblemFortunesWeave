#include "game/facility/facility_menu.hpp"

namespace game::facility {

namespace {

class ProcDiningRecipeMenu : public FacilityMenu {
public:
  ProcDiningRecipeMenu();

  const char* Unknown33() override { return "Hub_Dining_Recipe"; }
  const char* Unknown67() override { return "食事"; }
  void Unknown84() override;
  void Unknown88() override;
  int Unknown100() override;

  int InputUnknown01() override { return 5; }
  const char* ImplUnknown03() override { return "MID_HotelMenu_Dining"; }

  const char* ImplUnknown05() override {
    return "MID_DiningMenu_RecipeSelect_Help";
  }
};

[[gnu::used]] ProcDiningRecipeMenu::ProcDiningRecipeMenu() = default;

}

}
