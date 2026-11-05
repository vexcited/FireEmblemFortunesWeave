#pragma once

#include <functional>

#include "game/unit.hpp"

namespace game {

#pragma GCC visibility push(hidden)

class CorpsManager {
public:
  // Walks the units of the player army.
  static void EachUnit(const std::function<void(Unit*)>& function);
  // Walks the units of one corps, its leader first.
  static void EachUnit(int corps, const std::function<void(Unit*)>& function);
};

#pragma GCC visibility pop

}
