#include "nn/time/time_time_zone_api.hpp"

#include "nn/diag/diag_abort.hpp"
#include "nn/time/detail/time_util.hpp"
#include "nn/time/time_api.hpp"

namespace nn::time {

namespace {

const Result ResultNotInitialized = {0x74};
const int PosixTimeCountMax = 2;

void CopyAdditionalInfo(CalendarAdditionalInfo* pOutInfo,
  const detail::CalendarAdditionalInfoIpc& info) {
  pOutInfo->dayOfWeek = info.dayOfWeek;
  pOutInfo->dayOfYear = info.dayOfYear;
  pOutInfo->timeZone = info.timeZone;
}

}

void GetDeviceLocationName(LocationName* pOutName) {
  NN_ABORT_UNLESS(g_pTimeZoneService != nullptr);
  NN_ABORT_UNLESS_RESULT_SUCCESS(g_pTimeZoneService->GetDeviceLocationName(
    sf::Out<LocationName>(pOutName)));
}

Result LoadTimeZoneRule(TimeZoneRule* pOutRule, const LocationName& name) {
  if (g_pTimeZoneService == nullptr) {
    return ResultNotInitialized;
  }
  return g_pTimeZoneService->LoadTimeZoneRule(
    sf::Out<TimeZoneRule>(pOutRule), name);
}

Result ToCalendarTime(CalendarTime* pOutTime, CalendarAdditionalInfo* pOutInfo,
  const PosixTime& posixTime, const TimeZoneRule& rule) {
  if (g_pTimeZoneService == nullptr) {
    return ResultNotInitialized;
  }
  detail::CalendarAdditionalInfoIpc info = {};
  Result result = g_pTimeZoneService->ToCalendarTime(
    sf::Out<CalendarTime>(pOutTime),
    sf::Out<detail::CalendarAdditionalInfoIpc>(&info), posixTime, rule);
  if (pOutInfo != nullptr && result.IsSuccess()) {
    CopyAdditionalInfo(pOutInfo, info);
  }
  return result;
}

Result ToCalendarTime(CalendarTime* pOutTime, CalendarAdditionalInfo* pOutInfo,
  const PosixTime& posixTime) {
  if (g_pTimeZoneService == nullptr) {
    return ResultNotInitialized;
  }
  detail::CalendarAdditionalInfoIpc info = {};
  Result result = g_pTimeZoneService->ToCalendarTimeWithMyRule(
    sf::Out<CalendarTime>(pOutTime),
    sf::Out<detail::CalendarAdditionalInfoIpc>(&info), posixTime);
  if (pOutInfo != nullptr && result.IsSuccess()) {
    CopyAdditionalInfo(pOutInfo, info);
  }
  return result;
}

CalendarTime ToCalendarTimeInUtc(const PosixTime& posixTime) {
  return detail::util::ToCalendarTimeInUtc(posixTime);
}

Result ToPosixTime(int* pOutCount, PosixTime* pOutTimes, int count,
  const CalendarTime& calendarTime, const TimeZoneRule& rule) {
  if (g_pTimeZoneService == nullptr) {
    return ResultNotInitialized;
  }
  return g_pTimeZoneService->ToPosixTime(sf::Out<int>(pOutCount),
    sf::OutArray<PosixTime>(pOutTimes,
      count < PosixTimeCountMax ? count : PosixTimeCountMax),
    calendarTime, rule);
}

Result ToPosixTime(int* pOutCount, PosixTime* pOutTimes, int count,
  const CalendarTime& calendarTime) {
  if (g_pTimeZoneService == nullptr) {
    return ResultNotInitialized;
  }
  return g_pTimeZoneService->ToPosixTimeWithMyRule(sf::Out<int>(pOutCount),
    sf::OutArray<PosixTime>(pOutTimes,
      count < PosixTimeCountMax ? count : PosixTimeCountMax),
    calendarTime);
}

PosixTime ToPosixTimeFromUtc(const CalendarTime& calendarTime) {
  return detail::util::ToPosixTimeFromUtc(calendarTime);
}

}
