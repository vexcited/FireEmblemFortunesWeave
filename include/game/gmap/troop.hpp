#pragma once

#include <stdint.h>

#include <functional>
#include <vector>

#include "game/unit.hpp"

namespace game {
class Stream;
}

namespace game::gmap {

#pragma GCC visibility push(hidden)

class Spot;

// A world map troop, the units it carries live in the troop itself.
class Troop {
public:
  ~Troop();

  void Serialize(Stream& stream) const;

  const Spot* GetSpot() const {
    return spot_;
  }

  // The spot reached on the route, or the spot of the troop before it moves.
  const Spot* GetCurrentSpot() const {
    const int index = route_index_ - 1;
    if (index >= 0 && static_cast<size_t>(index) < route_.size()) {
      return route_[index];
    }
    return spot_;
  }

  // Set for the troops of the player.
  bool IsPlayer() const {
    return flags_ < 0;
  }

  int GetId() const {
    return flags_;
  }

  // The troop selected when no id is, the names of both fields are unknown.
  bool IsFree() const {
    return unknown_60_ == nullptr && unknown_228_ == nullptr;
  }

  void EachUnit(const std::function<void(Unit*)>& function);
  int CountUnit(const std::function<bool(Unit*)>& function);

private:
  const Spot* spot_;
  uint8_t unknown_08_[0x10];
  std::vector<const Spot*> route_;
  uint8_t unknown_30_[0x24];
  int flags_;
  uint8_t unknown_58_[0x8];
  const void* unknown_60_;
  uint8_t unknown_68_[0x1b4];
  int route_index_;
  uint8_t unknown_220_[0x8];
  const void* unknown_228_;
  uint8_t unknown_230_[0x8];
  std::vector<Unit> units_;
};

#pragma GCC visibility pop

}
