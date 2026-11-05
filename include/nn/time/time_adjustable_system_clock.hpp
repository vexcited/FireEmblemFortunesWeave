#pragma once

#include <time.h>

#include "nn/result.hpp"
#include "nn/time/time_standard_user_system_clock.hpp"

namespace nn::time {

class AdjustableNetworkSystemClock {
public:
  using rep = SystemClockTraits::rep;
  using period = SystemClockTraits::period;
  using duration = SystemClockTraits::duration;
  using time_point = SystemClockTraits::time_point;

  static Result GetCurrentTime(PosixTime* outValue);
  static void Adjust();
  static void GetSystemClockContext(SystemClockContext* outValue);
  static time_point now();
  static time_t to_time_t(const time_point& timePoint);
  static time_point from_time_t(time_t time);
};

class AdjustableUserSystemClock {
public:
  using rep = SystemClockTraits::rep;
  using period = SystemClockTraits::period;
  using duration = SystemClockTraits::duration;
  using time_point = SystemClockTraits::time_point;

  static Result GetCurrentTime(PosixTime* outValue);
  static void Adjust();
  static void GetSystemClockContext(SystemClockContext* outValue);
  static time_point now();
  static time_t to_time_t(const time_point& timePoint);
  static time_point from_time_t(time_t time);
};

Result GetAdjustableNetworkSystemClockCurrentTimespec(timespec* outValue);
Result GetAdjustableUserSystemClockCurrentTimespec(timespec* outValue);

}
