#include "nn/diag/diag_abort.hpp"
#include "nn/time/detail/time_shared_memory_client.hpp"
#include "nn/time/time_adjustable_system_clock.hpp"

// Included last since its time::sf namespace hides nn::sf in the headers.
#include "nn/time/time_clock_snapshot.hpp"

namespace nn::time {

ClockSnapshot::ClockSnapshot() : m_Storage() {
  const CalendarTime epoch = {1970, 1, 1, 0, 0, 0};
  sf::CalendarAdditionalInfo epochInfo = {};
  // 1970-01-01 is a Thursday.
  epochInfo.dayOfWeek = 4;
  epochInfo.timeZone.standardTimeName[0] = 'U';
  epochInfo.timeZone.standardTimeName[1] = 'T';
  epochInfo.timeZone.standardTimeName[2] = 'C';
  const LocationName utc = {{'U', 'T', 'C'}};

  sf::ClockSnapshot* pSnapshot = detail::GetSfClockSnapshotPtr(this);
  pSnapshot->userCalendarTime = epoch;
  pSnapshot->networkCalendarTime = epoch;
  pSnapshot->userCalendarAdditionalInfo = epochInfo;
  pSnapshot->networkCalendarAdditionalInfo = epochInfo;
  pSnapshot->locationName = utc;
  pSnapshot->type = 0;
}

void ClockSnapshot::CreateWithStandardSystemClock(ClockSnapshot* pOutValue) {
  NN_ABORT_UNLESS(g_pStaticService != nullptr);
  NN_ABORT_UNLESS_RESULT_SUCCESS(g_pStaticService->GetClockSnapshot(
    ::nn::sf::Out<detail::SfClockSnapshot>(
      detail::GetSfClockSnapshotPtr(pOutValue)), 1));
}

void ClockSnapshot::CreateWithAdjustableSystemClock(ClockSnapshot* pOutValue) {
  NN_ABORT_UNLESS(g_pStaticService != nullptr);
  SystemClockContext userContext = {};
  SystemClockContext networkContext = {};
  AdjustableUserSystemClock::GetSystemClockContext(&userContext);
  AdjustableNetworkSystemClock::GetSystemClockContext(&networkContext);
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    g_pStaticService->GetClockSnapshotFromSystemClockContext(
      ::nn::sf::Out<detail::SfClockSnapshot>(
        detail::GetSfClockSnapshotPtr(pOutValue)),
      userContext, networkContext, 2));
}

PosixTime ClockSnapshot::GetStandardUserSystemClockPosixTime() const {
  return detail::GetSfClockSnapshotPtr(this)->userPosixTime;
}

SystemClockContext ClockSnapshot::GetStandardUserSystemClockContext() const {
  return detail::GetSfClockSnapshotPtr(this)->userContext;
}

CalendarTime ClockSnapshot::GetStandardUserSystemClockCalendarTime() const {
  return detail::GetSfClockSnapshotPtr(this)->userCalendarTime;
}

namespace {

CalendarAdditionalInfo ToCalendarAdditionalInfo(
  const sf::CalendarAdditionalInfo& info) {
  CalendarAdditionalInfo value;
  value.dayOfWeek = info.dayOfWeek;
  value.dayOfYear = info.dayOfYear;
  value.timeZone = info.timeZone;
  return value;
}

}

CalendarAdditionalInfo
ClockSnapshot::GetStandardUserSystemClockCalendarAdditionalInfo() const {
  return ToCalendarAdditionalInfo(
    detail::GetSfClockSnapshotPtr(this)->userCalendarAdditionalInfo);
}

PosixTime ClockSnapshot::GetStandardNetworkSystemClockPosixTime() const {
  return detail::GetSfClockSnapshotPtr(this)->networkPosixTime;
}

SystemClockContext ClockSnapshot::GetStandardNetworkSystemClockContext()
  const {
  return detail::GetSfClockSnapshotPtr(this)->networkContext;
}

CalendarTime ClockSnapshot::GetStandardNetworkSystemClockCalendarTime() const {
  return detail::GetSfClockSnapshotPtr(this)->networkCalendarTime;
}

CalendarAdditionalInfo
ClockSnapshot::GetStandardNetworkSystemClockCalendarAdditionalInfo() const {
  return ToCalendarAdditionalInfo(
    detail::GetSfClockSnapshotPtr(this)->networkCalendarAdditionalInfo);
}

SteadyClockTimePoint ClockSnapshot::GetStandardSteadyClockTimePoint() const {
  return detail::GetSfClockSnapshotPtr(this)->steadyClockTimePoint;
}

SteadyClockTimePoint GetStandardSteadyClockTimePoint(
  const ClockSnapshot& snapshot) {
  return detail::GetSfClockSnapshotPtr(&snapshot)->steadyClockTimePoint;
}

LocationName ClockSnapshot::GetLocationName() const {
  return detail::GetSfClockSnapshotPtr(this)->locationName;
}

}
