#pragma once

#include <stdint.h>

#include <functional>
#include <vector>

#include "game/unit.hpp"

namespace game::gmap {

#pragma GCC visibility push(hidden)

class Spot;

// A world map troop, the units it carries live in the troop itself.
class Troop {
public:
  const Spot* GetSpot() const {
    return spot_;
  }

  // Set for the troops of the player.
  bool IsPlayer() const {
    return flags_ < 0;
  }

  void EachUnit(const std::function<void(Unit*)>& function);
  int CountUnit(const std::function<bool(Unit*)>& function);

private:
  const Spot* spot_;
  uint8_t unknown_08_[0x4c];
  int flags_;
  uint8_t unknown_58_[0x1e0];
  std::vector<Unit> units_;
};

#pragma GCC visibility pop

}
