#include "nn/diag/diag_abort.hpp"
#include "nn/os/detail/internal_light_primitives.hpp"
#include "nn/os/interrupt_event.hpp"

extern "C" uint32_t svcCloseHandle(uint32_t handle);
extern "C" uint32_t svcClearEvent(uint32_t handle);
extern "C" uint32_t svcResetSignal(uint32_t handle);
extern "C" uint32_t svcWaitSynchronization(int32_t* index,
  const uint32_t* handles, int32_t count, int64_t timeout);

namespace nn::os::detail {

namespace {

bool IsInvalidState(Result result) {
  return result.GetInnerValueForDebug() == 0xfa01;
}

bool IsTimedOut(Result result) {
  return result.GetInnerValueForDebug() == 0xea01;
}

}

InterruptEventImplByHorizon::~InterruptEventImplByHorizon() {
  NN_ABORT_UNLESS_RESULT_SUCCESS(Result{svcCloseHandle(m_Handle)});
}

void InterruptEventImplByHorizon::Clear() {
  NN_ABORT_UNLESS_RESULT_SUCCESS(Result{svcClearEvent(m_Handle)});
}

void InterruptEventImplByHorizon::Wait() {
  while (true) {
    int32_t index = 0;

    if (svcWaitSynchronization(&index, &m_Handle, 1, -1) != 0) {
      continue;
    }

    if (m_IsManualClear) {
      return;
    }

    const Result result = {svcResetSignal(m_Handle)};

    if (IsInvalidState(result)) {
      continue;
    }

    NN_ABORT_UNLESS_RESULT_SUCCESS(result);
    return;
  }
}

bool InterruptEventImplByHorizon::TryWait() {
  if (!m_IsManualClear) {
    return svcResetSignal(m_Handle) == 0;
  }

  while (true) {
    int32_t index = 0;
    const Result result = {svcWaitSynchronization(&index, &m_Handle, 1, 0)};

    if (result.IsSuccess()) {
      return true;
    }

    if (IsTimedOut(result)) {
      return false;
    }
  }
}

bool InterruptEventImplByHorizon::TimedWait(TimeSpan timeout) {
  const TimeoutHelper helper = MakeLightTimeout(timeout);

  while (true) {
    int32_t index = 0;
    const Result result = {svcWaitSynchronization(&index, &m_Handle, 1,
      helper.GetLeftTimeOnTarget())};

    if (result.IsFailure()) {
      if (IsTimedOut(result)) {
        return false;
      }

      continue;
    }

    if (m_IsManualClear) {
      return true;
    }

    const Result reset = {svcResetSignal(m_Handle)};

    if (IsInvalidState(reset)) {
      continue;
    }

    NN_ABORT_UNLESS_RESULT_SUCCESS(reset);
    return true;
  }
}

}
