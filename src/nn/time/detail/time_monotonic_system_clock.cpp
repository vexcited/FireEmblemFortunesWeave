#include "nn/time/detail/time_monotonic_system_clock.hpp"

#include "nn/diag/diag_abort.hpp"

namespace nn::time::detail {

SystemClockContext MonotonicSystemClock::GetSystemClockContext() const {
  SystemClockContext context;
  uint32_t counter;
  do {
    counter = m_Context.counter.load(std::memory_order_relaxed);
    context = m_Context.value[counter & 1];
    std::atomic_thread_fence(std::memory_order_acquire);
  } while (counter != m_Context.counter.load(std::memory_order_relaxed));
  return context;
}

void MonotonicSystemClock::SetSystemClockContext(
  const SystemClockContext& context) {
  m_Mutex.Lock();
  uint32_t counter = m_Context.counter.load(std::memory_order_relaxed) + 1;
  m_Context.value[counter & 1] = context;
  asm volatile("dmb ishst" ::: "memory");
  m_Context.counter.store(counter, std::memory_order_relaxed);
  m_Mutex.Unlock();
}

Result MonotonicSystemClock::GetCurrentTime(PosixTime* pOutTime) const {
  NN_ABORT_UNLESS(g_SharedMemoryClient.isInitialized);
  SystemClockContext context = GetSystemClockContext();
  return g_SharedMemoryClient->CalculateSystemClockCurrentTime(pOutTime,
    context);
}

Result MonotonicSystemClock::GetCurrentTimespec(timespec* pOutTime) const {
  NN_ABORT_UNLESS(g_SharedMemoryClient.isInitialized);
  SystemClockContext context = GetSystemClockContext();
  return g_SharedMemoryClient->CalculateSystemClockCurrentTimespec(pOutTime,
    context);
}

bool MonotonicSystemClock::IsAdjusted() const {
  NN_ABORT_UNLESS(g_SharedMemoryClient.isInitialized);
  SystemClockContext context = GetSystemClockContext();
  PosixTime time = {};
  return g_SharedMemoryClient->CalculateSystemClockCurrentTime(&time, context)
    .IsSuccess();
}

}
