#include "nn/os/synchronization.hpp"

extern "C" uint32_t svcWaitProcessWideKeyAtomic(uint32_t* lock,
                                                uint32_t* condition,
                                                uint32_t requester,
                                                int64_t timeout);
extern "C" void svcSignalProcessWideKey(uint32_t* condition, int32_t count);

namespace nn::os::detail {

[[noreturn]] void AbortCondition() asm("_ZN2nn4diag6detail9AbortImplEv");
[[noreturn]] void AbortConditionResult(const uint32_t* result) asm(
  "_ZN2nn4diag6detail9AbortImplEPKNS_6ResultE");

void EnterInternalCriticalSectionNoInline(InternalCriticalSectionType* state,
                                          uint32_t observed,
                                          uint32_t requester);

static uint32_t CurrentThreadHandle() {
  uintptr_t tls;
  asm volatile("mrs %0, tpidrro_el0" : "=r"(tls));
  return *reinterpret_cast<const uint32_t*>(tls + 0x110);
}

static uint64_t ReadTick() {
  uint64_t value;
  asm volatile("mrs %0, cntpct_el0" : "=r"(value) : : "memory");
  return value;
}

TimeSpan TickManager::ConvertToTimeSpan(Tick ticks) {
  if (ticks.value > 288230376125000000LL) {
    return {INT64_MAX};
  }

  if (ticks.value < -288230376125000000LL) {
    return {INT64_MIN};
  }

  return {1000000000 * (ticks.value / 31250000) +
          32 * (ticks.value % 31250000)};
}

Tick TickManager::ConvertToTick(TimeSpan time) {
  // The target preserves INT64_MIN as a sentinel.
  if (time.nanoseconds == INT64_MIN) {
    return {INT64_MIN};
  }

  int64_t magnitude =
    time.nanoseconds < 0 ? -time.nanoseconds : time.nanoseconds;
  int64_t seconds = magnitude / 1000000000;
  int64_t fraction = magnitude % 1000000000;
  int64_t ticks =
    seconds * 31250000 + (fraction * 31250000 + 999999999) / 1000000000;
  return {time.nanoseconds < 0 ? -ticks : ticks};
}

int64_t TimeoutHelper::GetLeftTimeOnTarget() const {
  if (!deadline) {
    return 0;
  }

  int64_t now = static_cast<int64_t>(ReadTick());
  int64_t end = deadline;

  if (end <= now) {
    return 0;
  }

  int64_t difference = static_cast<int64_t>(uint64_t(end) - uint64_t(now));
  return os::ConvertToTimeSpan({difference}).nanoseconds;
}

bool InternalCriticalSection::IsLockedByCurrentThread() const {
  uint32_t requester = CurrentThreadHandle();
  return requester == (state.value & ~0x40000000u);
}

void InternalConditionVariableImplByHorizon::Initialize() {
  value = 0;
}

void InternalConditionVariableImplByHorizon::Signal() {
  if (value) {
    svcSignalProcessWideKey(&value, 1);
  }
}

void InternalConditionVariableImplByHorizon::Broadcast() {
  if (value) {
    svcSignalProcessWideKey(&value, -1);
  }
}

void InternalConditionVariableImplByHorizon::Wait(
  InternalCriticalSectionType* lock) {
  uint32_t requester = CurrentThreadHandle();

  if ((lock->value & ~0x40000000u) != requester) {
    AbortCondition();
  }

  uint32_t result =
    svcWaitProcessWideKeyAtomic(&lock->value, &value, requester, -1);

  if (result) {
    AbortConditionResult(&result);
  }
}

ConditionVariableStatus InternalConditionVariableImplByHorizon::TimedWait(
  InternalCriticalSectionType* lock, const TimeoutHelper& timeout) {
  uint32_t requester = CurrentThreadHandle();

  if ((lock->value & ~0x40000000u) != requester) {
    AbortCondition();
  }

  int64_t remaining = timeout.GetLeftTimeOnTarget();

  if (remaining <= 0) {
    return ConditionVariableStatus_Timeout;
  }

  uint32_t result =
    svcWaitProcessWideKeyAtomic(&lock->value, &value, requester, remaining);

  if (!result) {
    return ConditionVariableStatus_NoTimeout;
  }

  if ((result & 0x3fffff) != 0xea01) {
    AbortConditionResult(&result);
  }

  requester = CurrentThreadHandle();
  uint32_t observed = 0;
  __atomic_compare_exchange_n(&lock->value, &observed, requester, false,
                              __ATOMIC_ACQUIRE, __ATOMIC_ACQUIRE);

  if (observed) {
    EnterInternalCriticalSectionNoInline(lock, observed, requester);
  }

  return ConditionVariableStatus_Timeout;
}

static TimeoutHelper MakeTimeout(TimeSpan time) {
  uint64_t now = ReadTick();
  uint64_t end = now + uint64_t(os::ConvertToTick(time).value) + 1;
  return {end >= uint64_t(INT64_MAX) ? INT64_MAX : int64_t(end)};
}

}

namespace nn::os {

static_assert(sizeof(SdkMutexType) == 4);
static_assert(sizeof(SdkRecursiveMutexType) == 8);
static_assert(sizeof(SdkConditionVariableType) == 4);

TimeSpan ConvertToTimeSpan(Tick ticks) {
  return detail::TickManager::ConvertToTimeSpan(ticks);
}

Tick ConvertToTick(TimeSpan time) {
  return detail::TickManager::ConvertToTick(time);
}

bool SdkMutexType::IsLockedByCurrentThread() const {
  return lock.IsLockedByCurrentThread();
}

bool SdkRecursiveMutexType::IsLockedByCurrentThread() const {
  return lock.IsLockedByCurrentThread();
}

void SdkConditionVariableType::Initialize() {
  condition.Initialize();
}

void SdkConditionVariableType::Signal() {
  condition.Signal();
}

void SdkConditionVariableType::Broadcast() {
  condition.Broadcast();
}

void SdkConditionVariableType::Wait(SdkMutexType& mutex) {
  if (!mutex.IsLockedByCurrentThread()) {
    detail::AbortCondition();
  }

  condition.Wait(&mutex.lock.state);
}

void SdkConditionVariableType::Wait(SdkRecursiveMutexType& mutex) {
  if (!mutex.IsLockedByCurrentThread()) {
    detail::AbortCondition();
  }

  if (mutex.count != 1) {
    detail::AbortCondition();
  }

  mutex.count = 0;
  condition.Wait(&mutex.lock.state);
  ++mutex.count;

  if (!mutex.count) {
    detail::AbortCondition();
  }
}

ConditionVariableStatus SdkConditionVariableType::TimedWait(SdkMutexType& mutex,
                                                            TimeSpan time) {
  if (!mutex.IsLockedByCurrentThread()) {
    detail::AbortCondition();
  }

  if (!time.nanoseconds) {
    mutex.lock.Leave();
    mutex.lock.Enter();
    return ConditionVariableStatus_Timeout;
  }

  auto timeout = detail::MakeTimeout(time);
  return condition.TimedWait(&mutex.lock.state, timeout);
}

ConditionVariableStatus
SdkConditionVariableType::TimedWait(SdkRecursiveMutexType& mutex,
                                    TimeSpan time) {
  if (!mutex.IsLockedByCurrentThread()) {
    detail::AbortCondition();
  }

  if (!time.nanoseconds) {
    mutex.lock.Leave();
    mutex.lock.Enter();
    return ConditionVariableStatus_Timeout;
  }

  if (mutex.count != 1) {
    detail::AbortCondition();
  }

  mutex.count = 0;
  auto timeout = detail::MakeTimeout(time);
  auto status = condition.TimedWait(&mutex.lock.state, timeout);
  ++mutex.count;

  if (!mutex.count) {
    detail::AbortCondition();
  }

  return status == ConditionVariableStatus_NoTimeout
           ? ConditionVariableStatus_NoTimeout
           : ConditionVariableStatus_Timeout;
}

}
