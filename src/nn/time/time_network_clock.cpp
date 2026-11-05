#include <new>

#include "nn/os/system_event.hpp"
#include "nn/time/time_network_clock.hpp"
#include "nn/time/time_standard_steady_clock.hpp"
#include "nn/time/time_standard_user_system_clock.hpp"

namespace nn::time {

AsyncEnsureNetworkClockAvailabilityTask::
  AsyncEnsureNetworkClockAvailabilityTask()
  : m_Storage(), m_IsInitialized(false) {}

AsyncEnsureNetworkClockAvailabilityTask::
  ~AsyncEnsureNetworkClockAvailabilityTask() {
  if (m_IsInitialized) {
    GetTask()->~CorrectionNetworkClockAsyncTask();
    m_IsInitialized = false;
  }
}

void AsyncEnsureNetworkClockAvailabilityTask::Initialize(
  os::EventClearMode clearMode) {
  if (!m_IsInitialized) {
    new (m_Storage) ntc::shim::CorrectionNetworkClockAsyncTask(clearMode,
      ntc::EnsureNetworkClockAvailabilityMode_Default);
    m_IsInitialized = true;
  }
}

Result AsyncEnsureNetworkClockAvailabilityTask::StartTask() {
  return GetTask()->StartTask();
}

Result AsyncEnsureNetworkClockAvailabilityTask::GetResult() {
  return GetTask()->GetResult();
}

os::SystemEventType* AsyncEnsureNetworkClockAvailabilityTask::GetFinishEvent() {
  return GetTask()->GetFinishNotificationEvent();
}

void AsyncEnsureNetworkClockAvailabilityTask::Cancel() {
  GetTask()->Cancel();
}

Result EnsureNetworkClockAvailability() {
  return ntc::shim::EnsureNetworkClockAvailability();
}

void CancelEnsuringNetworkClockAvailability() {
  ntc::shim::CancelEnsuringNetworkClockAvailability();
}

Result CalibrateSystemClockWithInternalOffset() {
  ntc::shim::SuspendAutonomicTimeCorrection();

  PosixTime networkTime = {};
  Result result = StandardNetworkSystemClock::GetCurrentTime(&networkTime);
  if (result.IsSuccess()) {
    ntc::shim::CorrectionNetworkClockAsyncTask task(
      os::EventClearMode_AutoClear,
      ntc::EnsureNetworkClockAvailabilityMode_GetServerTime);
    result = task.StartTask();
    if (result.IsSuccess()) {
      os::WaitSystemEvent(task.GetFinishNotificationEvent());
      result = task.GetResult();
      if (result.IsSuccess()) {
        const int64_t seconds =
          task.GetServerPosixTime().value - networkTime.value;
        const TimeSpan offset = GetStandardSteadyClockInternalOffset();
        SetStandardSteadyClockInternalOffset(
          TimeSpan{offset.nanoseconds + seconds * 1000000000});
      }
    }
  }

  ntc::shim::ResumeAutonomicTimeCorrection();
  return result;
}

void SuspendAutonomicTimeCorrection() {
  ntc::shim::SuspendAutonomicTimeCorrection();
}

void ResumeAutonomicTimeCorrection() {
  ntc::shim::ResumeAutonomicTimeCorrection();
}

}
