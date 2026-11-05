#pragma once

#include <stdint.h>

#include "nn/result.hpp"
#include "nn/time/time_types.hpp"

namespace nn::time {

namespace sf {

struct CalendarAdditionalInfo {
  int8_t dayOfWeek;
  int32_t dayOfYear;
  TimeZone timeZone;
};

struct ClockSnapshot {
  SystemClockContext userContext;
  SystemClockContext networkContext;
  PosixTime userPosixTime;
  PosixTime networkPosixTime;
  CalendarTime userCalendarTime;
  CalendarTime networkCalendarTime;
  CalendarAdditionalInfo userCalendarAdditionalInfo;
  CalendarAdditionalInfo networkCalendarAdditionalInfo;
  SteadyClockTimePoint steadyClockTimePoint;
  LocationName locationName;
  bool isAutomaticCorrectionEnabled;
  uint8_t type;
};

}

class ClockSnapshot {
 public:
  ClockSnapshot();

  static void CreateWithStandardSystemClock(ClockSnapshot* pOutValue);
  static void CreateWithAdjustableSystemClock(ClockSnapshot* pOutValue);

  PosixTime GetStandardUserSystemClockPosixTime() const;
  SystemClockContext GetStandardUserSystemClockContext() const;
  CalendarTime GetStandardUserSystemClockCalendarTime() const;
  CalendarAdditionalInfo GetStandardUserSystemClockCalendarAdditionalInfo()
    const;
  PosixTime GetStandardNetworkSystemClockPosixTime() const;
  SystemClockContext GetStandardNetworkSystemClockContext() const;
  CalendarTime GetStandardNetworkSystemClockCalendarTime() const;
  CalendarAdditionalInfo GetStandardNetworkSystemClockCalendarAdditionalInfo()
    const;
  SteadyClockTimePoint GetStandardSteadyClockTimePoint() const;
  LocationName GetLocationName() const;

 private:
  alignas(8) uint8_t m_Storage[208];
};

struct PeriodicBenefitClaimContext {
  ClockSnapshot snapshot;
  ClockSnapshot lastBenefitReceivedSnapshot;
  SteadyClockTimePoint endOfPenalty;
  bool isMatched;

  bool GetLastReceivedStandardUserSystemClockCalendarTime(
    CalendarTime* pOutValue) const;
  bool GetEndOfPenaltyAtLastClaimForDebug(SteadyClockTimePoint* pOutValue)
    const;
  bool GetSpanToEndOfPenaltyAtLastClaimForDebug(TimeSpan* pOutValue) const;
};

SteadyClockTimePoint GetStandardSteadyClockTimePoint(
  const ClockSnapshot& snapshot);

bool operator==(const ClockSnapshot& lhs, const ClockSnapshot& rhs);
bool operator==(const PeriodicBenefitClaimContext& lhs,
  const PeriodicBenefitClaimContext& rhs);
bool operator!=(const PeriodicBenefitClaimContext& lhs,
  const PeriodicBenefitClaimContext& rhs);

namespace detail {

sf::ClockSnapshot* GetSfClockSnapshotPtr(ClockSnapshot* pSnapshot);
const sf::ClockSnapshot* GetSfClockSnapshotPtr(const ClockSnapshot* pSnapshot);
uint8_t GetClockSnapshotInitialType(const ClockSnapshot& snapshot);
bool IsClockSnapshotAutomaticCorrectionEnabled(const ClockSnapshot& snapshot);
bool HasLastBenefitReceivedInfo(const PeriodicBenefitClaimContext& context);
bool HasPenaltyInfo(const PeriodicBenefitClaimContext& context);

}

}
