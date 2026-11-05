#pragma once

#include "nn/result.hpp"
#include "nn/time/time_types.hpp"

namespace nn::time::detail::util {

Result GetSpanBetween(int64_t* pOutSeconds, const SteadyClockTimePoint& from,
  const SteadyClockTimePoint& to);
bool IsLeapYear(int year);
bool IsValidDate(int year, int month, int day);
int GetDaysInMonth(int year, int month);
int DateToDays(int year, int month, int day);
void DaysToDate(int* pOutYear, int* pOutMonth, int* pOutDay, int days);
int GetDayOfWeek(int year, int month, int day);
PosixTime ToPosixTimeFromUtc(const CalendarTime& calendarTime);
CalendarTime ToCalendarTimeInUtc(const PosixTime& posixTime);

}
