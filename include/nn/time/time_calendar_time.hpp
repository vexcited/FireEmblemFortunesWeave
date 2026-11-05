#pragma once

#include "nn/time/time_types.hpp"

namespace nn::time {

CalendarTime operator+(
  const CalendarTime& calendarTime, const TimeSpan& timeSpan);
CalendarTime operator-(
  const CalendarTime& calendarTime, const TimeSpan& timeSpan);
TimeSpan operator-(const CalendarTime& lhs, const CalendarTime& rhs);
bool operator<=(const CalendarTime& lhs, const CalendarTime& rhs);
bool operator<(const CalendarTime& lhs, const CalendarTime& rhs);
bool operator>=(const CalendarTime& lhs, const CalendarTime& rhs);
bool operator>(const CalendarTime& lhs, const CalendarTime& rhs);

}
