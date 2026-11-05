#pragma once

#include "nn/result.hpp"
#include "nn/sf/sf_buffers.hpp"
#include "nn/sf/native_handle.hpp"
#include "nn/sf/shared_pointer.hpp"
#include "nn/time/time_types.hpp"

namespace nn::time {

struct TimeZoneRule {
  uint8_t storage[0x4000];
};

struct TimeZoneRuleVersion {
  uint8_t value[16];
};

namespace detail {

struct CalendarAdditionalInfoIpc {
  int8_t dayOfWeek;
  int32_t dayOfYear;
  TimeZone timeZone;
};

}

}

namespace nn::timesrv::detail::service {

class ITimeZoneService : public sf::IServiceObject {
 public:
  virtual void Reserved2() = 0;
  virtual void Reserved3() = 0;
  virtual Result GetDeviceLocationName(
    sf::Out<time::LocationName> pOutName) = 0;
  virtual Result SetDeviceLocationName(const time::LocationName& name) = 0;
  virtual Result GetTotalLocationNameCount(sf::Out<int> pOutCount) = 0;
  virtual Result LoadLocationNameList(sf::Out<int> pOutCount,
    const sf::OutArray<time::LocationName>& outNames, int offset) = 0;
  virtual Result LoadTimeZoneRule(sf::Out<time::TimeZoneRule> pOutRule,
    const time::LocationName& name) = 0;
  virtual Result GetTimeZoneRuleVersion(
    sf::Out<time::TimeZoneRuleVersion> pOutVersion) = 0;
  virtual Result GetDeviceLocationNameAndUpdatedTime(
    sf::Out<time::LocationName> pOutName,
    sf::Out<time::SteadyClockTimePoint> pOutUpdatedTime) = 0;
  virtual void Reserved11() = 0;
  virtual void Reserved12() = 0;
  virtual Result GetDeviceLocationNameOperationEventReadableHandle(
    sf::Out<sf::NativeHandle> pOutHandle) = 0;
  virtual Result ToCalendarTime(sf::Out<time::CalendarTime> pOutTime,
    sf::Out<time::detail::CalendarAdditionalInfoIpc> pOutInfo,
    time::PosixTime posixTime, const time::TimeZoneRule& rule) = 0;
  virtual Result ToCalendarTimeWithMyRule(
    sf::Out<time::CalendarTime> pOutTime,
    sf::Out<time::detail::CalendarAdditionalInfoIpc> pOutInfo,
    time::PosixTime posixTime) = 0;
  virtual Result ToPosixTime(sf::Out<int> pOutCount,
    const sf::OutArray<time::PosixTime>& outTimes,
    time::CalendarTime calendarTime, const time::TimeZoneRule& rule) = 0;
  virtual Result ToPosixTimeWithMyRule(sf::Out<int> pOutCount,
    const sf::OutArray<time::PosixTime>& outTimes,
    time::CalendarTime calendarTime) = 0;
};

}

namespace nn::time {

extern sf::SharedPointer<timesrv::detail::service::ITimeZoneService>
  g_pTimeZoneService;

void GetDeviceLocationName(LocationName* pOutName);
Result LoadTimeZoneRule(TimeZoneRule* pOutRule, const LocationName& name);
Result ToCalendarTime(CalendarTime* pOutTime, CalendarAdditionalInfo* pOutInfo,
  const PosixTime& posixTime, const TimeZoneRule& rule);
Result ToCalendarTime(CalendarTime* pOutTime, CalendarAdditionalInfo* pOutInfo,
  const PosixTime& posixTime);
Result ToPosixTime(int* pOutCount, PosixTime* pOutTimes, int count,
  const CalendarTime& calendarTime, const TimeZoneRule& rule);
Result ToPosixTime(int* pOutCount, PosixTime* pOutTimes, int count,
  const CalendarTime& calendarTime);

}
