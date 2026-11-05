#pragma once

#include <stdint.h>

#include "nn/fs/fs_file_system_proxy_types.hpp"
#include "nn/os/time.hpp"
#include "nn/util/uuid.hpp"

namespace nn::time {

struct SteadyClockTimePoint {
  int64_t value;
  util::Uuid sourceId;
};

struct SystemClockContext {
  int64_t offset;
  SteadyClockTimePoint timeStamp;
};

struct CalendarTime {
  int16_t year;
  int8_t month;
  int8_t day;
  int8_t hour;
  int8_t minute;
  int8_t second;

  bool IsValid() const;
  CalendarTime& operator+=(const TimeSpan& timeSpan);
  CalendarTime& operator-=(const TimeSpan& timeSpan);
};

struct TimeZone {
  char standardTimeName[8];
  bool isDaylightSavingTime;
  int32_t utcOffsetSeconds;
};

struct CalendarAdditionalInfo {
  int32_t dayOfWeek;
  int32_t dayOfYear;
  TimeZone timeZone;
};

struct LocationName {
  char value[36];
};

}
