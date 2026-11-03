#pragma once

#include "nn/os/mutex.hpp"

namespace nn::os {

struct ConditionVariableType {
  uint8_t initialized;
  uint8_t reserved01[3];
  detail::InternalConditionVariableImplByHorizon condition;
};

void InitializeConditionVariable(ConditionVariableType* condition);
void FinalizeConditionVariable(ConditionVariableType* condition);
void SignalConditionVariable(ConditionVariableType* condition);
void BroadcastConditionVariable(ConditionVariableType* condition);
void WaitConditionVariable(ConditionVariableType* condition, MutexType* mutex);
ConditionVariableStatus
TimedWaitConditionVariable(ConditionVariableType* condition, MutexType* mutex,
                           TimeSpan time);

}
