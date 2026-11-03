#include "nn/os/condition_variable.hpp"

#include <stddef.h>

namespace nn::os::detail {

[[noreturn]] void AbortCondition() asm("_ZN2nn4diag6detail9AbortImplEv");

}

namespace nn::os {

static_assert(sizeof(ConditionVariableType) == 8);
static_assert(offsetof(ConditionVariableType, condition) == 4);

void InitializeConditionVariable(ConditionVariableType* condition) {
  condition->condition.Initialize();
  condition->initialized = 1;
}

void FinalizeConditionVariable(ConditionVariableType* condition) {
  condition->initialized = 0;
}

void SignalConditionVariable(ConditionVariableType* condition) {
  condition->condition.Signal();
}

void BroadcastConditionVariable(ConditionVariableType* condition) {
  condition->condition.Broadcast();
}

void WaitConditionVariable(ConditionVariableType* condition, MutexType* mutex) {
  if (!mutex->lock.IsLockedByCurrentThread()) {
    detail::AbortCondition();
  }

  --mutex->count;
  condition->condition.Wait(&mutex->lock.state);
  ++mutex->count;
}

ConditionVariableStatus
TimedWaitConditionVariable(ConditionVariableType* condition, MutexType* mutex,
                           TimeSpan time) {
  if (!mutex->lock.IsLockedByCurrentThread()) {
    detail::AbortCondition();
  }

  --mutex->count;
  ConditionVariableStatus status;

  if (time.nanoseconds) {
    uint64_t now;
    asm volatile("mrs %0, cntpct_el0" : "=r"(now) : : "memory");
    uint64_t end = now + uint64_t(ConvertToTick(time).value) + 1;
    detail::TimeoutHelper timeout{end >= uint64_t(INT64_MAX) ? INT64_MAX
                                                             : int64_t(end)};
    status = condition->condition.TimedWait(&mutex->lock.state, timeout);
  }
  else {
    mutex->lock.Leave();
    mutex->lock.Enter();
    status = ConditionVariableStatus_Timeout;
  }

  ++mutex->count;
  return status;
}

}
