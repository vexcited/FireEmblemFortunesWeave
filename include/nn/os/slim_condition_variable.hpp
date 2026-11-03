#pragma once

#include "nn/os/slim_mutex.hpp"

namespace nn::os {

struct SlimConditionVariableType {
  detail::InternalConditionVariableImplByHorizon condition;
};

void InitializeSlimConditionVariable(SlimConditionVariableType* condition);
void SignalSlimConditionVariable(SlimConditionVariableType* condition);
void BroadcastSlimConditionVariable(SlimConditionVariableType* condition);
void WaitSlimConditionVariable(SlimConditionVariableType* condition,
                               SlimMutexType* mutex);
ConditionVariableStatus
TimedWaitSlimConditionVariable(SlimConditionVariableType* condition,
                               SlimMutexType* mutex, TimeSpan time);

}
