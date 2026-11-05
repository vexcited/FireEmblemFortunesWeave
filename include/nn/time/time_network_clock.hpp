#pragma once

#include <stdint.h>

#include "nn/os/system_event.hpp"
#include "nn/os/timer_event.hpp"
#include "nn/result.hpp"

namespace nn::ntc {

enum EnsureNetworkClockAvailabilityMode : int32_t {
  EnsureNetworkClockAvailabilityMode_Default,
};

namespace shim {

class CorrectionNetworkClockAsyncTask {
 public:
  CorrectionNetworkClockAsyncTask(os::EventClearMode clearMode,
    EnsureNetworkClockAvailabilityMode mode);
  ~CorrectionNetworkClockAsyncTask();

  Result StartTask();
  Result GetResult();
  os::SystemEventType* GetFinishNotificationEvent();
  void Cancel();

 private:
  uint8_t m_Storage[0x90];
};

Result EnsureNetworkClockAvailability();
void CancelEnsuringNetworkClockAvailability();
void SuspendAutonomicTimeCorrection();
void ResumeAutonomicTimeCorrection();

}

}

namespace nn::time {

class AsyncEnsureNetworkClockAvailabilityTask {
 public:
  AsyncEnsureNetworkClockAvailabilityTask();
  ~AsyncEnsureNetworkClockAvailabilityTask();

  void Initialize(os::EventClearMode clearMode);
  Result StartTask();
  Result GetResult();
  os::SystemEventType* GetFinishEvent();
  void Cancel();

 private:
  ntc::shim::CorrectionNetworkClockAsyncTask* GetTask() {
    return reinterpret_cast<ntc::shim::CorrectionNetworkClockAsyncTask*>(
      m_Storage);
  }

  alignas(8) uint8_t
    m_Storage[sizeof(ntc::shim::CorrectionNetworkClockAsyncTask)];
  bool m_IsInitialized;
};

Result EnsureNetworkClockAvailability();
void CancelEnsuringNetworkClockAvailability();
void SuspendAutonomicTimeCorrection();
void ResumeAutonomicTimeCorrection();

}
