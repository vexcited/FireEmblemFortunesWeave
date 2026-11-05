#include "nn/diag/diag_abort.hpp"
#include "nn/time/time_api.hpp"
#include "nn/time/time_clock_snapshot.hpp"

namespace nn::time {

bool PeriodicBenefitClaimContext::
  GetLastReceivedStandardUserSystemClockCalendarTime(
    CalendarTime* pOutValue) const {
  const bool hasInfo = detail::HasLastBenefitReceivedInfo(*this);
  if (hasInfo) {
    *pOutValue =
      lastBenefitReceivedSnapshot.GetStandardUserSystemClockCalendarTime();
  }
  return hasInfo;
}

bool PeriodicBenefitClaimContext::GetEndOfPenaltyAtLastClaimForDebug(
  SteadyClockTimePoint* pOutValue) const {
  const bool hasInfo = detail::HasPenaltyInfo(*this);
  if (hasInfo) {
    *pOutValue = endOfPenalty;
  }
  return hasInfo;
}

bool PeriodicBenefitClaimContext::GetSpanToEndOfPenaltyAtLastClaimForDebug(
  TimeSpan* pOutValue) const {
  if (!detail::HasPenaltyInfo(*this)) {
    return false;
  }

  SteadyClockTimePoint current = {};
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    GetStandardSteadyClockCurrentTimePoint(&current));

  int64_t seconds = 0;
  if (GetElapsedSecondsBetween(&seconds, current, endOfPenalty).IsFailure()) {
    return false;
  }

  pOutValue->nanoseconds = seconds * 1000000000;
  return true;
}

bool operator==(const PeriodicBenefitClaimContext& lhs,
  const PeriodicBenefitClaimContext& rhs) {
  return lhs.snapshot == rhs.snapshot &&
    lhs.lastBenefitReceivedSnapshot == rhs.lastBenefitReceivedSnapshot &&
    lhs.endOfPenalty.value == rhs.endOfPenalty.value &&
    lhs.endOfPenalty.sourceId == rhs.endOfPenalty.sourceId &&
    lhs.isMatched == rhs.isMatched;
}

bool operator!=(const PeriodicBenefitClaimContext& lhs,
  const PeriodicBenefitClaimContext& rhs) {
  return !(lhs == rhs);
}

}
