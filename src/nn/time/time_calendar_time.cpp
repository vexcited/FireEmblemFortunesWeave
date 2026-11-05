#include "nn/time/time_api.hpp"
#include "nn/time/time_calendar_time.hpp"

namespace nn::time {

namespace {

const int64_t NanosecondsPerSecond = 1000000000;

uint64_t ToComparableValue(const CalendarTime& value) {
  return static_cast<uint64_t>(value.year) << 40 |
    static_cast<uint64_t>(value.month) << 32 |
    static_cast<uint64_t>(value.day) << 24 |
    static_cast<uint64_t>(value.hour) << 16 |
    static_cast<uint64_t>(value.minute) << 8 |
    static_cast<uint64_t>(value.second);
}

}

bool CalendarTime::IsValid() const {
  return IsValidDate(year, month, day) && 0 <= hour && hour <= 23 &&
    0 <= minute && minute <= 59 && 0 <= second && second <= 59;
}

CalendarTime& CalendarTime::operator+=(const TimeSpan& timeSpan) {
  PosixTime posixTime = ToPosixTimeFromUtc(*this);
  posixTime.value += timeSpan.nanoseconds / NanosecondsPerSecond;
  *this = ToCalendarTimeInUtc(posixTime);
  return *this;
}

CalendarTime& CalendarTime::operator-=(const TimeSpan& timeSpan) {
  PosixTime posixTime = ToPosixTimeFromUtc(*this);
  posixTime.value -= timeSpan.nanoseconds / NanosecondsPerSecond;
  *this = ToCalendarTimeInUtc(posixTime);
  return *this;
}

CalendarTime operator+(
  const CalendarTime& calendarTime, const TimeSpan& timeSpan) {
  PosixTime posixTime = ToPosixTimeFromUtc(calendarTime);
  posixTime.value += timeSpan.nanoseconds / NanosecondsPerSecond;
  return ToCalendarTimeInUtc(posixTime);
}

CalendarTime operator-(
  const CalendarTime& calendarTime, const TimeSpan& timeSpan) {
  PosixTime posixTime = ToPosixTimeFromUtc(calendarTime);
  posixTime.value -= timeSpan.nanoseconds / NanosecondsPerSecond;
  return ToCalendarTimeInUtc(posixTime);
}

TimeSpan operator-(const CalendarTime& lhs, const CalendarTime& rhs) {
  const int64_t seconds =
    ToPosixTimeFromUtc(lhs).value - ToPosixTimeFromUtc(rhs).value;
  return TimeSpan{seconds * NanosecondsPerSecond};
}

bool operator<=(const CalendarTime& lhs, const CalendarTime& rhs) {
  return ToComparableValue(lhs) <= ToComparableValue(rhs);
}

bool operator<(const CalendarTime& lhs, const CalendarTime& rhs) {
  return ToComparableValue(lhs) < ToComparableValue(rhs);
}

bool operator>=(const CalendarTime& lhs, const CalendarTime& rhs) {
  return ToComparableValue(lhs) >= ToComparableValue(rhs);
}

bool operator>(const CalendarTime& lhs, const CalendarTime& rhs) {
  return ToComparableValue(lhs) > ToComparableValue(rhs);
}

}
