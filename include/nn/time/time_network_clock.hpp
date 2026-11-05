#pragma once

#include <stdint.h>

#include "nn/os/system_event.hpp"
#include "nn/os/timer_event.hpp"
#include "nn/result.hpp"
#include "nn/time/time_types.hpp"

namespace nn::ntc {

enum EnsureNetworkClockAvailabilityMode : int32_t {
  EnsureNetworkClockAvailabilityMode_Default,
  EnsureNetworkClockAvailabilityMode_ForcibleDownload,
  EnsureNetworkClockAvailabilityMode_GetServerTime,
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
  time::PosixTime GetServerPosixTime();

 private:
  uint8_t m_Storage[0x80];
};

Result EnsureNetworkClockAvailability();
void CancelEnsuringNetworkClockAvailability();
void SuspendAutonomicTimeCorrection();
void ResumeAutonomicTimeCorrection();
Result CalibrateSystemClockWithInternalOffset();

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

  alignas(8) uint8_t m_Storage[0x90];
  bool m_IsInitialized;
};

Result EnsureNetworkClockAvailability();
void CancelEnsuringNetworkClockAvailability();
void SuspendAutonomicTimeCorrection();
void ResumeAutonomicTimeCorrection();
Result CalibrateSystemClockWithInternalOffset();

}
