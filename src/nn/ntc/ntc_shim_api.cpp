#include "nn/diag/diag_abort.hpp"
#include "nn/ntc/detail/ntc_shim.hpp"
#include "nn/time/time_network_clock.hpp"

namespace nn::ntc::shim {

using detail::service::IStaticService;
using detail::shim::EnsureNetworkClockAvailabilityClientImpl;

// The task storage starts with the client.
time::PosixTime CorrectionNetworkClockAsyncTask::GetServerPosixTime() {
  time::PosixTime serverTime = {};
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    reinterpret_cast<EnsureNetworkClockAvailabilityClientImpl*>(m_Storage)
      ->GetServerTime(&serverTime));
  return serverTime;
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
