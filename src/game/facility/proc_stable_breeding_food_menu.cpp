#include "game/facility/facility_menu.hpp"

namespace game::facility {

// The original table holds absolute pointers, an internal one would be
// turned into relative offsets.
[[gnu::visibility("hidden")]] extern const char* const kFoodSortLabels[3];

const char* const kFoodSortLabels[3] = {
  "MID_BanquetMenu_Taste",
  "MID_Menu_Lv_Rare",
  "MID_Menu_Stock",
};

namespace {

class ProcStableBreedingFoodMenu : public FacilityMenu {
public:
  ProcStableBreedingFoodMenu();

  const char* Unknown33() override { return "Hub_Breeding_Food"; }
  const char* Unknown35() override { return "L_Pool"; }
  const char* Unknown42() override { return "L_Pool/L_PageTab/L_KeySort"; }

  const char* Unknown43(uint8_t kind) override {
    uint8_t index = kind - 1;
    return index < 3 ? kFoodSortLabels[index] : "MID_Menu_Default";
  }

  bool Unknown64() override { return true; }
  const char* Unknown67() override { return "厩舎"; }
  void Unknown84() override;
  void Unknown85() override;
  void Unknown88() override;
  int Unknown101() override;
  void Unknown128() override;
  void Unknown129() override;
  bool Unknown137() override { return true; }
  uint8_t ImplUnknown08() override { return 0; }
  int InputUnknown01() override { return 11; }
  const char* ImplUnknown03() override { return "MID_StableMenu_Breeding"; }

  const char* ImplUnknown05() override {
    return "MID_BreedingMenu_FoodSelect_Help";
  }

  int InputUnknown12(int direction, bool loop) override;
};

[[gnu::used]]
ProcStableBreedingFoodMenu::ProcStableBreedingFoodMenu() = default;

int ProcStableBreedingFoodMenu::InputUnknown12(int direction, bool loop) {
  if (tab_.GetCount() < 1) {
    return 0;
  }
  if (!tab_.Move(direction, loop)) {
    return 14;
  }
  Unknown16de4d0();
  return 13;
}

}

}
