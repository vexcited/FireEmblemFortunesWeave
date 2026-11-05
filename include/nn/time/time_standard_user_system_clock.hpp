#pragma once

#include <time.h>

#include <chrono>

#include "nn/result.hpp"
#include "nn/time/time_types.hpp"

namespace nn::time {

struct SystemClockTraits {
  using rep = int64_t;
  using period = std::ratio<1>;
  using duration = std::chrono::duration<rep, period>;
  using time_point = std::chrono::time_point<SystemClockTraits>;
};

class StandardUserSystemClock {
public:
  using rep = SystemClockTraits::rep;
  using period = SystemClockTraits::period;
  using duration = SystemClockTraits::duration;
  using time_point = SystemClockTraits::time_point;

  static Result GetCurrentTime(PosixTime* outValue);
  static Result GetSystemClockContext(SystemClockContext* outValue);
  static time_point now();
  static time_t to_time_t(const time_point& timePoint);
  static time_point from_time_t(time_t time);
};

class StandardNetworkSystemClock {
public:
  using rep = SystemClockTraits::rep;
  using period = SystemClockTraits::period;
  using duration = SystemClockTraits::duration;
  using time_point = SystemClockTraits::time_point;

  static Result GetCurrentTime(PosixTime* outValue);
  static Result GetSystemClockContext(SystemClockContext* outValue);
  static bool IsAccuracySufficient();
  static time_point now();
  static time_t to_time_t(const time_point& timePoint);
  static time_point from_time_t(time_t time);
};

Result GetStandardUserSystemClockCurrentTimespec(timespec* outValue);
Result GetStandardNetworkSystemClockCurrentTimespec(timespec* outValue);
bool IsStandardUserSystemClockAutomaticCorrectionEnabled();
void SetStandardUserSystemClockAutomaticCorrectionEnabled(bool isEnabled);

}
