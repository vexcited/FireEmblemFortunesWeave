#pragma once

#include "nn/os/synchronization.hpp"

namespace nn::os {

struct BarrierType {
  uint16_t participants;
  uint16_t arrived;
  uint32_t generation_low;
  uint32_t generation_high;
  detail::InternalCriticalSection lock;
  detail::InternalConditionVariableImplByHorizon condition;
};

void InitializeBarrier(BarrierType* barrier, int participants);
void FinalizeBarrier(BarrierType* barrier);
void AwaitBarrier(BarrierType* barrier);

}
