#pragma once

#include <stdint.h>

#include "nn/diag/diag_abort.hpp"
#include "nn/diag/unexpected_default.hpp"
#include "nn/os/time.hpp"

extern "C" void svcSynchronizePreemptionState();
extern "C" uint32_t svcWaitForAddress(volatile uint32_t* address,
  uint32_t arbitrationType, int32_t value, int64_t timeout);
extern "C" uint32_t svcSignalToAddress(volatile uint32_t* address,
  uint32_t signalType, int32_t value, int32_t count);

namespace nn::os::detail {

struct DispatchState {
  uint16_t disableCount;
  uint16_t isInterruptRequested;
};

inline DispatchState* GetDispatchState() {
  uintptr_t tls;
  asm volatile("mrs %0, tpidrro_el0" : "=r"(tls));
  return reinterpret_cast<DispatchState*>(tls + 0x100);
}

inline void DisableDispatch(DispatchState* state) {
  ++state->disableCount;
}

inline void EnableDispatch(DispatchState* state) {
  if (--state->disableCount == 0 && state->isInterruptRequested) {
    svcSynchronizePreemptionState();
  }
}

// A spin lock that keeps the thread from being preempted while it is held.
struct InternalBusyMutex {
  uint32_t value;

  bool TryAcquire() {
    uint32_t expected = 0;
    return __atomic_compare_exchange_n(&value, &expected, 1, false,
      __ATOMIC_ACQUIRE, __ATOMIC_ACQUIRE);
  }

  void Lock() {
    DispatchState* state = GetDispatchState();

    while (true) {
      DisableDispatch(state);

      if (TryAcquire()) {
        return;
      }

      EnableDispatch(state);
    }
  }

  bool TryLock() {
    DispatchState* state = GetDispatchState();
    DisableDispatch(state);

    if (TryAcquire()) {
      return true;
    }

    EnableDispatch(state);
    return false;
  }

  void Unlock() {
    __atomic_store_n(&value, 0, __ATOMIC_RELEASE);
    EnableDispatch(GetDispatchState());
  }
};

// The state is 0 when cleared, 1 when cleared with waiters and 2 when
// signaled. Waiters sleep in the kernel while the state stays 1.
struct InternalLightEvent {
  enum State : uint32_t {
    State_NotSignaled,
    State_NotSignaledWithWaiters,
    State_Signaled,
  };

  static constexpr uint32_t ArbitrationType_WaitIfEqual = 2;
  static constexpr uint32_t SignalType_SignalAndIncrementIfEqual = 1;
  static constexpr uint32_t SignalType_SignalAndModifyByWaitingCountIfEqual =
    2;

  uint32_t state;

  static bool IsInvalidState(Result result) {
    return result.GetInnerValueForDebug() == 0xfa01;
  }

  static bool IsTimedOut(Result result) {
    return result.GetInnerValueForDebug() == 0xea01;
  }

  static void Fence() {
    __atomic_thread_fence(__ATOMIC_SEQ_CST);
  }

  uint32_t LoadAcquire() const {
    return __atomic_load_n(&state, __ATOMIC_ACQUIRE);
  }

  bool CompareAndSwap(uint32_t expected, uint32_t desired) {
    return __atomic_compare_exchange_n(&state, &expected, desired, false,
      __ATOMIC_SEQ_CST, __ATOMIC_SEQ_CST);
  }

  void SignalImpl(uint32_t signalType, int32_t count) {
    while (true) {
      Fence();

      switch (__atomic_load_n(&state, __ATOMIC_RELAXED)) {
        case State_NotSignaled:
          if (CompareAndSwap(State_NotSignaled, State_Signaled)) {
            return;
          }
          break;
        case State_NotSignaledWithWaiters: {
          const Result result = {svcSignalToAddress(&state, signalType,
            State_NotSignaledWithWaiters, count)};

          if (IsInvalidState(result)) {
            break;
          }

          NN_ABORT_UNLESS_RESULT_SUCCESS(result);
          return;
        }
        case State_Signaled:
          return;
        default:
          nn::detail::UnexpectedDefaultImpl();
      }
    }
  }

  void SignalWithAutoClear() {
    SignalImpl(SignalType_SignalAndModifyByWaitingCountIfEqual, 1);
  }

  void SignalWithManualClear() {
    SignalImpl(SignalType_SignalAndIncrementIfEqual, -1);
  }

  void Clear() {
    Fence();
    CompareAndSwap(State_Signaled, State_NotSignaled);
    Fence();
  }

  bool TryWaitWithAutoClear() {
    const bool isSignaled = CompareAndSwap(State_Signaled, State_NotSignaled);
    Fence();
    return isSignaled;
  }

  bool TryWaitWithManualClear() const {
    const bool isSignaled = LoadAcquire() == State_Signaled;
    Fence();
    return isSignaled;
  }

  void WaitWithAutoClear() {
    while (true) {
      switch (LoadAcquire()) {
        case State_Signaled:
          if (CompareAndSwap(State_Signaled, State_NotSignaled)) {
            Fence();
            return;
          }
          continue;
        case State_NotSignaledWithWaiters:
          break;
        case State_NotSignaled:
          if (!CompareAndSwap(State_NotSignaled,
            State_NotSignaledWithWaiters)) {
            continue;
          }
          break;
        default:
          nn::detail::UnexpectedDefaultImpl();
      }

      const Result result = {svcWaitForAddress(&state,
        ArbitrationType_WaitIfEqual, State_NotSignaledWithWaiters, -1)};

      if (!IsInvalidState(result)) {
        NN_ABORT_UNLESS_RESULT_SUCCESS(result);
        Fence();
        return;
      }
    }
  }

  void WaitWithManualClear() {
    while (true) {
      const uint32_t current = LoadAcquire();

      if (current == State_NotSignaled) {
        if (!CompareAndSwap(State_NotSignaled,
          State_NotSignaledWithWaiters)) {
          continue;
        }
        break;
      }

      if (current == State_NotSignaledWithWaiters) {
        break;
      }

      if (current == State_Signaled) {
        Fence();
        return;
      }

      nn::detail::UnexpectedDefaultImpl();
    }

    const Result result = {svcWaitForAddress(&state,
      ArbitrationType_WaitIfEqual, State_NotSignaledWithWaiters, -1)};

    if (!IsInvalidState(result)) {
      NN_ABORT_UNLESS_RESULT_SUCCESS(result);
    }

    Fence();
  }

  bool TimedWaitWithAutoClear(const TimeoutHelper& timeout) {
    while (true) {
      switch (LoadAcquire()) {
        case State_Signaled:
          if (CompareAndSwap(State_Signaled, State_NotSignaled)) {
            Fence();
            return true;
          }
          continue;
        case State_NotSignaledWithWaiters:
          break;
        case State_NotSignaled:
          if (!CompareAndSwap(State_NotSignaled,
            State_NotSignaledWithWaiters)) {
            continue;
          }
          break;
        default:
          nn::detail::UnexpectedDefaultImpl();
      }

      const Result result = {svcWaitForAddress(&state,
        ArbitrationType_WaitIfEqual, State_NotSignaledWithWaiters,
        timeout.GetLeftTimeOnTarget())};

      if (!IsInvalidState(result)) {
        if (IsTimedOut(result)) {
          Fence();
          return false;
        }

        NN_ABORT_UNLESS_RESULT_SUCCESS(result);
        Fence();
        return true;
      }
    }
  }

  bool TimedWaitWithManualClear(const TimeoutHelper& timeout) {
    while (true) {
      const uint32_t current = LoadAcquire();

      if (current == State_NotSignaled) {
        if (!CompareAndSwap(State_NotSignaled,
          State_NotSignaledWithWaiters)) {
          continue;
        }
        break;
      }

      if (current == State_NotSignaledWithWaiters) {
        break;
      }

      if (current == State_Signaled) {
        Fence();
        return true;
      }

      nn::detail::UnexpectedDefaultImpl();
    }

    const Result result = {svcWaitForAddress(&state,
      ArbitrationType_WaitIfEqual, State_NotSignaledWithWaiters,
      timeout.GetLeftTimeOnTarget())};
    const bool isSignaled = !IsTimedOut(result);

    if (!IsInvalidState(result) && !IsTimedOut(result)) {
      NN_ABORT_UNLESS_RESULT_SUCCESS(result);
    }

    Fence();
    return isSignaled;
  }
};

inline TimeoutHelper MakeLightTimeout(TimeSpan timeout) {
  if (timeout.nanoseconds == 0) {
    return {0};
  }

  const uint64_t now = __builtin_arm_rsr64("cntpct_el0");
  const uint64_t end = now + uint64_t(ConvertToTick(timeout).value) + 1;
  return {end >= uint64_t(INT64_MAX) ? INT64_MAX : int64_t(end)};
}

inline bool IsLightTimeoutExpired(const TimeoutHelper& timeout) {
  if (timeout.deadline == 0) {
    return true;
  }

  const int64_t now = __builtin_arm_rsr64("cntpct_el0");
  return now >= timeout.deadline;
}

}
