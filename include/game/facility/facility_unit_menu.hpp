#pragma once

#include <vector>

#include "game/menu/unit_grid_select_menu.hpp"

namespace game {

class Unit;

}

namespace game::facility {

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
  virtual int Unknown149();
  virtual int Unknown150();
  virtual int Unknown151();
  virtual int Unknown152();
  virtual int Unknown153();
  uint8_t ImplUnknown08() override;
  virtual void Unknown155();
  virtual void Unknown156();
  virtual void Unknown157();
  virtual void Unknown158() = 0;

protected:
  std::vector<Unit*> units_;
};

}
