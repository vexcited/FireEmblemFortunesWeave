#pragma once

#include <cstdint>
#include <functional>

namespace game {

class Unit;

#pragma GCC visibility push(hidden)

namespace facility {

// Selects the units a facility list is rebuilt from.
struct FacilityUnitListBuildArgs {
  uint8_t kind;
  std::function<bool(Unit*)> filter;
};

}

// A list of units the menus cycle through with the shoulder buttons.
class UnitCycleList {
public:
  Unit* GetNext(Unit* unit, int mode);
  Unit* GetPrevious(Unit* unit, int mode);
  void Build(const facility::FacilityUnitListBuildArgs& args);
};

// The unit lists of the hub facilities, owned by a global pointer.
class UnitListSet {
public:
  static UnitListSet* instance_;

  UnitCycleList* GetList(int index) const {
    return lists_[index];
  }

private:
  uint8_t unknown_00_[0x18];
  UnitCycleList* lists_[3];
};

#pragma GCC visibility pop

}
