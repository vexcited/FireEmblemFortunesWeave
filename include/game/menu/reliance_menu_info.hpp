#pragma once

#include <cstdint>
#include <functional>

namespace game {

class Unit;

}

namespace game::menu {

// The reliance menus open from the hotel or from the system menu.
class RelianceMenuInfo {
public:
  enum Mode : int32_t {
    kModeHotel = 0,
    kModeSystem = 1,
  };

  explicit RelianceMenuInfo(Mode mode) : mode_(mode) {}

  // Calls back with every unit the reliance menus list for a mode.
  static void EachUnit(Mode mode, bool all,
    const std::function<void(Unit*)>& callback);

protected:
  Mode mode_;
};

}
