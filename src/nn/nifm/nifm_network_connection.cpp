#include "nn/nifm/nifm_request.hpp"

namespace nn::nifm {

namespace {

constexpr RequestParameters NetworkConnectionRequestParameters = {
  static_cast<RequirementPreset>(2)};

}

NetworkConnection::NetworkConnection()
  : m_Request(NetworkConnectionRequestParameters) {}

NetworkConnection::NetworkConnection(os::EventClearMode clearMode)
  : m_Request(NetworkConnectionRequestParameters, clearMode) {}

NetworkConnection::~NetworkConnection() {}

void NetworkConnection::SubmitRequest() {
  m_Request.Submit();
}

void NetworkConnection::SubmitRequestAndWait() {
  m_Request.SubmitAndWait();
}

void NetworkConnection::CancelRequest() {
  m_Request.Cancel();
}

bool NetworkConnection::IsRequestOnHold() const {
  return m_Request.GetRequestState() == RequestState_OnHold;
}

bool NetworkConnection::IsAvailable() const {
  return m_Request.GetRequestState() == RequestState_Accepted;
}

NetworkAccessStatus NetworkConnection::GetNetworkAccessStatus() const {
  return m_Request.GetNetworkAccessStatus();
}

os::SystemEvent& NetworkConnection::GetSystemEvent() {
  return m_Request.GetSystemEvent();
}

RequestState NetworkConnection::GetRequestState() {
  return m_Request.GetRequestState();
}

Result NetworkConnection::GetResult() {
  return m_Request.GetResult();
}

RequestHandle NetworkConnection::GetRequestHandle() {
  return m_Request.GetHandle();
}

Result NetworkConnection::HandleNetworkRequestResult() {
  Result result = m_Request.GetResult();
  if (result.IsSuccess()) {
    return result;
  }

  applet::LibraryAppletHandle handle = {};
  NN_RESULT_DO(PrepareHandlingNetworkRequestResult(m_Request.GetHandle(),
    &handle));
  NN_RESULT_DO(StartHandlingNetworkRequestResult(handle, nullptr));
  result = FinishHandlingNetworkRequestResult(handle);
  return result.IsSuccess() ? ResultErrorHandlingCompleted : result;
}

bool NetworkConnection::HandleNetworkRequestErrorResult() {
  applet::LibraryAppletHandle handle = {};
  if (PrepareHandlingNetworkRequestResult(m_Request.GetHandle(), &handle)
    .IsFailure()) {
    return false;
  }
  if (StartHandlingNetworkRequestResult(handle, nullptr).IsFailure()) {
    return false;
  }

  Result result = FinishHandlingNetworkRequestResult(handle);
  return result.IsSuccess() || result.GetInnerValueForDebug() ==
    ResultErrorHandlingCompleted.GetInnerValueForDebug();
}

}
