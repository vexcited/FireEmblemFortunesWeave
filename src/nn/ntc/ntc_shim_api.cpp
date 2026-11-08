#include <new>

#include "nn/diag/diag_abort.hpp"
#include "nn/ntc/detail/ntc_shim.hpp"
#include "nn/time/time_network_clock.hpp"

namespace nn::ntc::shim {

using detail::service::IStaticService;
using detail::shim::EnsureNetworkClockAvailabilityClientImpl;

namespace {

// The task storage starts with the client.
[[gnu::always_inline]] inline EnsureNetworkClockAvailabilityClientImpl*
GetClient(uint8_t* pStorage) {
  return reinterpret_cast<EnsureNetworkClockAvailabilityClientImpl*>(
    pStorage);
}

}

Result CorrectionNetworkClockAsyncTask::StartTask() {
  return GetClient(m_Storage)->StartTask();
}

bool CorrectionNetworkClockAsyncTask::IsProcessing() {
  return GetClient(m_Storage)->IsProcessing();
}

os::SystemEventType*
CorrectionNetworkClockAsyncTask::GetFinishNotificationEvent() {
  return GetClient(m_Storage)->GetFinishNotificationEvent();
}

Result CorrectionNetworkClockAsyncTask::GetResult() {
  return GetClient(m_Storage)->GetResult();
}

time::PosixTime CorrectionNetworkClockAsyncTask::GetServerPosixTime() {
  time::PosixTime serverTime = {};
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    reinterpret_cast<EnsureNetworkClockAvailabilityClientImpl*>(m_Storage)
      ->GetServerTime(&serverTime));
  return serverTime;
}

void CorrectionNetworkClockAsyncTask::Cancel() {
  GetClient(m_Storage)->Cancel();
}

CorrectionNetworkClockAsyncTask::CorrectionNetworkClockAsyncTask(
  os::EventClearMode clearMode, EnsureNetworkClockAvailabilityMode) {
  new (m_Storage) EnsureNetworkClockAvailabilityClientImpl(clearMode);
}

CorrectionNetworkClockAsyncTask::~CorrectionNetworkClockAsyncTask() {
  GetClient(m_Storage)->~EnsureNetworkClockAvailabilityClientImpl();
}

void SuspendAutonomicTimeCorrection() {
  sf::SharedPointer<IStaticService> service;
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    detail::shim::GetStaticServiceSharedPointer(&service));
  NN_ABORT_UNLESS_RESULT_SUCCESS(service->SuspendAutonomicTimeCorrection());
}

void ResumeAutonomicTimeCorrection() {
  sf::SharedPointer<IStaticService> service;
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    detail::shim::GetStaticServiceSharedPointer(&service));
  NN_ABORT_UNLESS_RESULT_SUCCESS(service->ResumeAutonomicTimeCorrection());
}

}
