#include "nn/diag/diag_abort.hpp"
#include "nn/ntc/detail/ntc_shim.hpp"

namespace nn::ntc::detail::shim {

EnsureNetworkClockAvailabilityClientImpl::
  ~EnsureNetworkClockAvailabilityClientImpl() {
  m_Service.Reset();
  if (m_IsEventInitialized != 0) {
    os::DestroySystemEvent(
      reinterpret_cast<os::SystemEventType*>(m_EventStorage));
  }
}

Result EnsureNetworkClockAvailabilityClientImpl::StartTask() {
  return m_Service->StartTask();
}

Result EnsureNetworkClockAvailabilityClientImpl::GetResult() {
  return m_Service->GetResult();
}

void EnsureNetworkClockAvailabilityClientImpl::Cancel() {
  NN_ABORT_UNLESS_RESULT_SUCCESS(m_Service->Cancel());
}

bool EnsureNetworkClockAvailabilityClientImpl::IsProcessing() {
  bool isProcessing = false;
  const Result result =
    m_Service->IsProcessing(sf::Out<bool>(&isProcessing));
  return result.IsSuccess() & isProcessing;
}

Result EnsureNetworkClockAvailabilityClientImpl::GetServerTime(
  time::PosixTime* pOutTime) {
  time::PosixTime serverTime = {};
  const Result result =
    m_Service->GetServerTime(sf::Out<time::PosixTime>(&serverTime));
  if (result.IsSuccess()) {
    *pOutTime = serverTime;
  }
  return result;
}

}
