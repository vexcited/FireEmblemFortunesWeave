#include "nn/diag/diag_abort.hpp"
#include "nn/util/string_util.hpp"
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

namespace {

bool IsEqual(const SystemClockContext& lhs, const SystemClockContext& rhs) {
  return lhs.offset == rhs.offset &&
    lhs.timeStamp.value == rhs.timeStamp.value &&
    lhs.timeStamp.sourceId == rhs.timeStamp.sourceId;
}

bool IsEqual(const CalendarTime& lhs, const CalendarTime& rhs) {
  return lhs.year == rhs.year && lhs.month == rhs.month &&
    lhs.day == rhs.day && lhs.hour == rhs.hour &&
    lhs.minute == rhs.minute && lhs.second == rhs.second;
}

[[gnu::noinline]] bool IsEqual(const TimeZone& lhs, const TimeZone& rhs) {
  return util::Strncmp(lhs.standardTimeName, rhs.standardTimeName,
    sizeof(lhs.standardTimeName)) == 0 &&
    lhs.isDaylightSavingTime == rhs.isDaylightSavingTime &&
    lhs.utcOffsetSeconds == rhs.utcOffsetSeconds;
}

bool IsEqual(const sf::CalendarAdditionalInfo& lhs,
  const sf::CalendarAdditionalInfo& rhs) {
  return lhs.dayOfWeek == rhs.dayOfWeek && lhs.dayOfYear == rhs.dayOfYear &&
    IsEqual(lhs.timeZone, rhs.timeZone);
}

}

bool operator==(const ClockSnapshot& lhs, const ClockSnapshot& rhs) {
  const sf::ClockSnapshot* l = detail::GetSfClockSnapshotPtr(&lhs);
  const sf::ClockSnapshot* r = detail::GetSfClockSnapshotPtr(&rhs);
  return IsEqual(l->userContext, r->userContext) &&
    IsEqual(l->networkContext, r->networkContext) &&
    l->userPosixTime.value == r->userPosixTime.value &&
    l->networkPosixTime.value == r->networkPosixTime.value &&
    IsEqual(l->userCalendarTime, r->userCalendarTime) &&
    IsEqual(l->networkCalendarTime, r->networkCalendarTime) &&
    IsEqual(l->userCalendarAdditionalInfo, r->userCalendarAdditionalInfo) &&
    IsEqual(l->networkCalendarAdditionalInfo,
      r->networkCalendarAdditionalInfo) &&
    l->steadyClockTimePoint.value == r->steadyClockTimePoint.value &&
    l->steadyClockTimePoint.sourceId == r->steadyClockTimePoint.sourceId &&
    util::Strncmp(l->locationName.value, r->locationName.value,
      sizeof(l->locationName.value)) == 0 &&
    l->isAutomaticCorrectionEnabled == r->isAutomaticCorrectionEnabled &&
    l->type == r->type && l->reserved[0] == r->reserved[0] &&
    l->reserved[1] == r->reserved[1];
}

}
