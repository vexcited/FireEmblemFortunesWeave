#pragma once

namespace game::facility {

// The second base of the facility sequences. Its destructor is not virtual
// and lives in another unit.
class FacilitySeq {
public:
  ~FacilitySeq();

  virtual void Unknown00() {}
};

// Rebuilds the unit lists of the temple.
void BuildTempleUnitLists();

}
