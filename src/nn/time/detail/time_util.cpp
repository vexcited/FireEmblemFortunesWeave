#include <limits>

#include "nn/time/detail/time_util.hpp"

namespace nn::time::detail::util {

namespace {

const int DaysInMonth[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

const int DaysBeforeMonth[12] = {
  0, 31, 59, 90, 120, 151, 181, 212, 243, 273, 304, 334};

// Days from 0001-01-01 to 1970-01-01 and the matching seconds.
const int DaysToUnixEpoch = 719162;
const int64_t SecondsToUnixEpoch = 62135596800;

const int SecondsPerDay = 86400;

}

Result GetSpanBetween(int64_t* pOutSeconds, const SteadyClockTimePoint& from,
  const SteadyClockTimePoint& to) {
  if (pOutSeconds == nullptr) {
    return Result{0x70a74};
  }

  if (to.sourceId != from.sourceId) {
    return Result{0x19074};
  }

  const int64_t begin = from.value;
  const int64_t end = to.value;
  if (begin >= 0) {
    if (end < std::numeric_limits<int64_t>::min() + begin) {
      return Result{0x19274};
    }
  }
  else {
    if (end > std::numeric_limits<int64_t>::max() + begin) {
      return Result{0x19274};
    }
  }

  *pOutSeconds = end - begin;
  return Result{0};
}

bool IsLeapYear(int year) {
  return year % 400 == 0 || (year % 100 != 0 && year % 4 == 0);
}

bool IsValidDate(int year, int month, int day) {
  if (day < 1 || year < 1 || month < 1 || month > 12) {
    return false;
  }

  return day <= GetDaysInMonth(year, month);
}

int GetDaysInMonth(int year, int month) {
  if (month == 2 && IsLeapYear(year)) {
    return 29;
  }

  return DaysInMonth[month - 1];
}

int DateToDays(int year, int month, int day) {
  year += month / 12;
  month %= 12;
  if (month == 0) {
    month = 12;
    year--;
  }

  int days = day + 365 * year + year / 4 - year / 100 + year / 400 +
    DaysBeforeMonth[month - 1] - 365;
  if (month <= 2 && IsLeapYear(year)) {
    days--;
  }

  return days - 1;
}

void DaysToDate(int* pOutYear, int* pOutMonth, int* pOutDay, int days) {
  // Counts from March 1st so that the leap day ends each cycle.
  days += 306;
  int era = days / 146097;
  int dayOfEra = days % 146097;
  if (dayOfEra < 0) {
    dayOfEra += 146097;
    era--;
  }

  const int century = dayOfEra / 36524;
  const int dayOfCentury = dayOfEra % 36524;
  const int quad = dayOfCentury / 1461;
  const int dayOfQuad = dayOfCentury % 1461;
  const int yearOfQuad = dayOfQuad / 365;
  const int dayOfYear = dayOfQuad % 365;
  const bool isLeapDay = dayOfQuad == 1460 || dayOfEra == 146096;

  int year = era * 400 + century * 100 + quad * 4 + yearOfQuad;
  int monthIndex;
  int day;
  if (isLeapDay) {
    year--;
    monthIndex = 11;
    day = 29;
  }
  else {
    monthIndex = (dayOfYear * 5 + 2) / 153;
    day = dayOfYear + 1 - (monthIndex * 153 + 2) / 5;
  }

  int month;
  if (monthIndex >= 10) {
    year++;
    month = monthIndex - 9;
  }
  else {
    month = monthIndex + 3;
  }

  if (pOutYear != nullptr) {
    *pOutYear = year;
  }
  if (pOutMonth != nullptr) {
    *pOutMonth = month;
  }
  if (pOutDay != nullptr) {
    *pOutDay = day;
  }
}

int GetDayOfWeek(int year, int month, int day) {
  return (DateToDays(year, month, day) + 1) % 7;
}

PosixTime ToPosixTimeFromUtc(const CalendarTime& calendarTime) {
  const int64_t days =
    DateToDays(calendarTime.year, calendarTime.month, calendarTime.day);
  const PosixTime posixTime = {calendarTime.second + 60 * (calendarTime.minute +
    60 * (calendarTime.hour + 24 * days)) - SecondsToUnixEpoch};
  return posixTime;
}

CalendarTime ToCalendarTimeInUtc(const PosixTime& posixTime) {
  int64_t seconds = posixTime.value % SecondsPerDay;
  int year;
  int month;
  int day;
  DaysToDate(&year, &month, &day,
    static_cast<int>(posixTime.value / SecondsPerDay) + DaysToUnixEpoch);
  if (seconds < 0) {
    if (--day <= 0) {
      if (--month <= 0) {
        year--;
        month = 12;
      }
      day = GetDaysInMonth(year, month);
    }
    seconds += SecondsPerDay;
  }

  CalendarTime calendarTime;
  calendarTime.year = static_cast<int16_t>(year);
  calendarTime.month = static_cast<int8_t>(month);
  calendarTime.day = static_cast<int8_t>(day);
  calendarTime.hour = static_cast<int8_t>(seconds / 3600);
  calendarTime.minute = static_cast<int8_t>(seconds % 3600 / 60);
  calendarTime.second = static_cast<int8_t>(seconds % 60);
  return calendarTime;
}

}
