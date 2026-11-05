#pragma once

#include <stdint.h>

namespace nn {

struct TimeSpan {
  int64_t nanoseconds;
};

struct TimeSpanType {
  int64_t nanoseconds;
};

namespace os {

struct Tick {
  int64_t value;
};

Tick GetSystemTick();
TimeSpan ConvertToTimeSpan(Tick ticks);
Tick ConvertToTick(TimeSpan time);

namespace detail {

struct TickManager {
  static TimeSpan ConvertToTimeSpan(Tick ticks);
  static Tick ConvertToTick(TimeSpan time);
};

struct TimeoutHelper {
  int64_t deadline;

  int64_t GetLeftTimeOnTarget() const;
};

}
}
}
