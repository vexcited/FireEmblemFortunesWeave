#include <new>

#include "nn/time/time_network_clock.hpp"

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

void SuspendAutonomicTimeCorrection() {
  ntc::shim::SuspendAutonomicTimeCorrection();
}

void ResumeAutonomicTimeCorrection() {
  ntc::shim::ResumeAutonomicTimeCorrection();
}

}
