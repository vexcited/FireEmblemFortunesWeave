#include <memory>
#include <vector>

#include "game/facility/facility_unit_menu.hpp"
#include "game/facility/facility_unit_menu_item.hpp"
#include "game/gameui/menu_animator.hpp"

namespace game::gameui {

// Shows the reliance between a unit and a person.
void Unknown157de20(ui::LayoutAccessor& part, const char* pid, Unit* unit);

}

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
  void Unknown136(std::vector<int64_t>& handles) override;
  bool Unknown150() override { return true; }
  uint8_t ImplUnknown08() override { return 0; }
  int Unknown158() override;
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
  void Unknown88() override { FacilityUnitMenu::Unknown88(); }
  void Unknown94() override;

  void Unknown135(std::vector<int64_t>& handles) override {
    GameMenu::Unknown135(handles);
  }

  void Unknown136(std::vector<int64_t>& handles) override {
    GameMenu::Unknown136(handles);
  }

  bool Unknown150() override { return false; }
  int Unknown158() override;
  const char* ImplUnknown03() override { return "MID_PerchMenu_Perch_Part3"; }
  const char* ImplUnknown05() override { return "MID_Menu_UnitSelect_Help"; }
};

[[gnu::used]]
ProcPerchOnlyGazeUnitMenu::ProcPerchOnlyGazeUnitMenu() = default;

// The reliance part shows the bond with Ishmael.
void ProcPerchUnitMenu::Unknown88() {
  if (current_ == nullptr) {
    return;
  }
  FacilityUnitMenuItem* item = dynamic_cast<FacilityUnitMenuItem*>(current_);
  if (item == nullptr) {
    return;
  }

  FacilityUnitMenu::Unknown88();
  Unit* unit = item->GetUnit();
  if (std::shared_ptr<ui::LayoutAccessor> part =
        accessor_.GetPart("L_Reliance").lock()) {
    gameui::Unknown157de20(*part, "PID_イシュマール", unit);
  }
}

void ProcPerchUnitMenu::Unknown94() {
  BasicMenu::Unknown94();
  accessor_.SetVisible(true);
  accessor_.SetPaneVisible("L_HubUnitInfo", false);
  accessor_.SetPaneVisible("L_UnitList", false);
}

void ProcPerchUnitMenu::Unknown135(std::vector<int64_t>& handles) {
  accessor_.SetPaneVisible("L_HubUnitInfo", true);
  accessor_.SetPaneVisible("L_UnitList", true);
  if (Unknown21() != 9) {
    GameMenu::Unknown135(handles);
    return;
  }
  gameui::MenuAnimator::PlayDirection(3, 0, accessor_, "L_UnitList", "Right",
    "In");
  gameui::MenuAnimator::PlayDirection(2, 0, accessor_, "Left", "Left", "In");
}

void ProcPerchUnitMenu::Unknown136(std::vector<int64_t>& handles) {
  if (Unknown21() != 9) {
    GameMenu::Unknown136(handles);
    return;
  }
  gameui::MenuAnimator::PlayDirection(3, 1, accessor_, "L_UnitList", "Right",
    "Out");
  gameui::MenuAnimator::PlayDirection(2, 1, accessor_, "Left", "Left", "Out");
}

}

}
