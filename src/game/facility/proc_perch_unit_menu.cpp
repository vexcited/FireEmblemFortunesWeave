#include "game/facility/facility_unit_menu.hpp"

namespace game::facility {

namespace {

class ProcPerchUnitMenu : public FacilityUnitMenu {
public:
  ProcPerchUnitMenu();

  const char* Unknown65() override { return "白鴉の止まり木"; }
  const char* Unknown67() override { return "白鴉の止まり木"; }
  void Unknown88() override;
  void Unknown94() override;
  void Unknown135(std::vector<int64_t>& handles) override;
  int Unknown136(std::vector<int64_t>& handles) override;
  int Unknown150() override { return 1; }
  uint8_t ImplUnknown08() override { return 0; }
  void Unknown158() override;
  const char* ImplUnknown03() override { return "MID_PerchMenu_Perch"; }

  const char* ImplUnknown05() override {
    return "MID_Menu_Food_UnitSelect_Help";
  }
};

[[gnu::used]] ProcPerchUnitMenu::ProcPerchUnitMenu() = default;

class ProcPerchOnlyGazeUnitMenu : public ProcPerchUnitMenu {
public:
  ProcPerchOnlyGazeUnitMenu();

  const char* Unknown65() override { return nullptr; }
  const char* Unknown67() override { return nullptr; }
  void Unknown88() override;
  void Unknown94() override;
  void Unknown135(std::vector<int64_t>& handles) override;
  int Unknown136(std::vector<int64_t>& handles) override;
  int Unknown150() override { return 0; }
  void Unknown158() override;
  const char* ImplUnknown03() override { return "MID_PerchMenu_Perch_Part3"; }
  const char* ImplUnknown05() override { return "MID_Menu_UnitSelect_Help"; }
};

[[gnu::used]]
ProcPerchOnlyGazeUnitMenu::ProcPerchOnlyGazeUnitMenu() = default;

}

}
