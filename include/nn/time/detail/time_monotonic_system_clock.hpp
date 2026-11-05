#pragma once

#include <time.h>

#include "nn/os/synchronization.hpp"
#include "nn/result.hpp"
#include "nn/time/detail/time_shared_memory_client.hpp"
#include "nn/time/time_types.hpp"

namespace nn::time::detail {

// A system clock context kept in process, read through a sequence lock.
class MonotonicSystemClock {
 public:
  constexpr MonotonicSystemClock() : m_Mutex{}, m_Context{} {}

  SystemClockContext GetSystemClockContext() const;
  void SetSystemClockContext(const SystemClockContext& context);
  Result GetCurrentTime(PosixTime* pOutTime) const;
  Result GetCurrentTimespec(timespec* pOutTime) const;
  bool IsAdjusted() const;

 private:
  os::SdkMutexType m_Mutex;
  LockFreeAtomicType<SystemClockContext> m_Context;
};

}
