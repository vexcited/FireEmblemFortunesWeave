#pragma once

#include <vector>

#include "game/menu/unit_grid_select_menu.hpp"
#include "nn/ui2d/text_box.hpp"
#include "ui/layout_accessor.hpp"

namespace game {

class Unit;

}

namespace game::facility {

class FacilityUnitMenuItem;

// Even its own translation unit loads the vtable through the global offset
// table.
class FacilityUnitMenu : public menu::UnitGridSelectMenu {
public:
  const char* Unknown32() override;
  const char* Unknown33() override;
  void Unknown84() override;
  void Unknown88() override;
  void Unknown96() override;
  int Unknown100() override;
  int Unknown101() override;
  // Whether the facility counts one more participant than the units.
  virtual bool Unknown149();
  virtual bool Unknown150();
  virtual bool Unknown151();
  virtual int Unknown152();
  virtual int Unknown153();
  uint8_t ImplUnknown08() override;
  virtual void Unknown155();
  virtual void Unknown156();
  virtual void Unknown157();
  virtual int Unknown158() = 0;

protected:
  bool SelectUnit(FacilityUnitMenuItem* item);

  // Shows the number of chosen participants.
  void UpdateCount() {
    int count = count_ + Unknown149();
    nn::ui2d::Pane* pane = accessor_3b8_.FindPane("L_Num/T_Num");
    if (auto* box = dynamic_cast<nn::ui2d::TextBox*>(pane)) {
      ui::SetTextBoxFormat(box, "%d", 1, count);
    }
  }

  // The chosen units, null where none is chosen yet.
  std::vector<Unit*> units_;
  int32_t count_;
};

}
