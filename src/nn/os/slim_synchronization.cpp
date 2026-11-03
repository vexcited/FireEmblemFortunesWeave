#include "nn/os/slim_condition_variable.hpp"

#include "nn/os/startup.hpp"
#include "nn/os/thread_manager.hpp"

namespace nn::os::detail {

[[noreturn]] void AbortCondition() asm("_ZN2nn4diag6detail9AbortImplEv");

}

namespace nn::os {

static_assert(sizeof(SlimMutexType) == 4);
static_assert(sizeof(SlimConditionVariableType) == 4);

void InitializeSlimMutex(SlimMutexType* mutex) {
  mutex->lock.Initialize();
}

void LockSlimMutex(SlimMutexType* mutex) {
  mutex->lock.Enter();
}

bool TryLockSlimMutex(SlimMutexType* mutex) {
  return mutex->lock.TryEnter();
}

void UnlockSlimMutex(SlimMutexType* mutex) {
  mutex->lock.Leave();
}

bool IsSlimMutexLockedByCurrentThread(const SlimMutexType* mutex) {
  return mutex->lock.IsLockedByCurrentThread();
}

Result GetSlimMutexOwnerThread(ThreadType** output,
                               const SlimMutexType* mutex) {
  uint32_t handle = mutex->lock.state.value & ~0x40000000u;

  if (!handle) {
    return {0x1c03};
  }

  auto* manager = reinterpret_cast<detail::ThreadManager*>(
    detail::g_OsResourceManagerStorage + 288);
  auto* lock = reinterpret_cast<detail::InternalCriticalSection*>(
    &manager->critical_section);
  lock->Enter();
  auto* node = manager->threads.previous;

  while (node != &manager->threads) {
    auto* thread = reinterpret_cast<ThreadType*>(node);

    if (thread->handle == handle) {
      *output = thread;
      break;
    }

    node = node->previous;
  }

  Result result{node == &manager->threads ? 0x1e03u : 0u};
  lock->Leave();
  return result;
}

void InitializeSlimConditionVariable(SlimConditionVariableType* condition) {
  condition->condition.Initialize();
}

void SignalSlimConditionVariable(SlimConditionVariableType* condition) {
  condition->condition.Signal();
}

void BroadcastSlimConditionVariable(SlimConditionVariableType* condition) {
  condition->condition.Broadcast();
}

void WaitSlimConditionVariable(SlimConditionVariableType* condition,
                               SlimMutexType* mutex) {
  if (!mutex->lock.IsLockedByCurrentThread()) {
    detail::AbortCondition();
  }

  condition->condition.Wait(&mutex->lock.state);
}

ConditionVariableStatus
TimedWaitSlimConditionVariable(SlimConditionVariableType* condition,
                               SlimMutexType* mutex, TimeSpan time) {
  if (!mutex->lock.IsLockedByCurrentThread()) {
    detail::AbortCondition();
  }

  if (!time.nanoseconds) {
    mutex->lock.Leave();
    mutex->lock.Enter();
    return ConditionVariableStatus_Timeout;
  }

  uint64_t now;
  asm volatile("mrs %0, cntpct_el0" : "=r"(now) : : "memory");
  uint64_t end = now + uint64_t(ConvertToTick(time).value) + 1;
  detail::TimeoutHelper timeout{end >= uint64_t(INT64_MAX) ? INT64_MAX
                                                           : int64_t(end)};
  return condition->condition.TimedWait(&mutex->lock.state, timeout);
}

}
