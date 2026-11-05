#include "nn/time/time_clock_snapshot.hpp"

namespace nn::time::detail {

bool HasLastBenefitReceivedInfo(const PeriodicBenefitClaimContext& context) {
  return GetSfClockSnapshotPtr(&context.lastBenefitReceivedSnapshot)->type != 0;
}

bool HasPenaltyInfo(const PeriodicBenefitClaimContext& context) {
  return GetSfClockSnapshotPtr(&context.snapshot)->type != 0 &&
    context.endOfPenalty.sourceId != util::Uuid();
}

}
