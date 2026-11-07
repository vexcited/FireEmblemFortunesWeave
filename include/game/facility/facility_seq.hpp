#pragma once

namespace game::facility {

// The facility base of the sequences. The sequence destructors end the visit
// themselves, at different points of their bodies.
class FacilitySeq {
public:
  virtual void Unknown00() {}

protected:
  // Frees the shared buffer, clears the forced facility variable and
  // releases the facility mind.
  void Leave();
};

// Rebuilds the unit lists of the temple.
void BuildTempleUnitLists();

}
