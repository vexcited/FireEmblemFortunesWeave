#pragma once

#include <stdint.h>

#include "game/singleton.hpp"

namespace game::hub {

#pragma GCC visibility push(hidden)

// The days and cycles the hub observes.
class ScheduleManager : public Singleton<ScheduleManager> {
public:
  uint64_t GetObserveDayIdx() const {
    return observe_day_idx_;
  }

  uint64_t GetObserveCycleIdx() const {
    return observe_cycle_idx_;
  }

private:
  uint8_t unknown_08_[0x40];
  uint64_t observe_day_idx_;
  uint64_t observe_cycle_idx_;
};

#pragma GCC visibility pop

}
