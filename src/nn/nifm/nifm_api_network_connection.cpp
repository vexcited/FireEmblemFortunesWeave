#include "nn/diag/diag_abort.hpp"
#include "nn/nifm/detail/nifm_request_client.hpp"
#include "nn/nifm/nifm_api.hpp"

namespace nn::nifm {

namespace {

constexpr Result ResultIpAddressConflicted = {0x17466e};
constexpr RequirementPreset RequirementPreset_InternetForApplet =
  static_cast<RequirementPreset>(2);
constexpr RequirementPreset RequirementPreset_Scan =
  static_cast<RequirementPreset>(21);

}

void SubmitNetworkRequest() {
  NetworkConnection* pConnection = nullptr;
  if (detail::GetNetworkConnectionPointer(&pConnection).IsFailure()) {
    return;
  }
  detail::SetRequestTemporaryNetworkProfileId(
    pConnection->GetRequestHandle());
  pConnection->SubmitRequest();
}

void SubmitNetworkRequestAndWait() {
  NetworkConnection* pConnection = nullptr;
  if (detail::GetNetworkConnectionPointer(&pConnection).IsFailure()) {
    return;
  }
  detail::SetRequestTemporaryNetworkProfileId(
    pConnection->GetRequestHandle());
  pConnection->SubmitRequestAndWait();
}

void CancelNetworkRequest() {
  NetworkConnection* pConnection = nullptr;
  if (detail::GetNetworkConnectionPointer(&pConnection).IsFailure()) {
    return;
  }
  pConnection->CancelRequest();
}

bool IsNetworkRequestOnHold() {
  NetworkConnection* pConnection = nullptr;
  if (detail::GetNetworkConnectionPointer(&pConnection).IsFailure()) {
    return false;
  }
  return pConnection->IsRequestOnHold();
}

bool IsNetworkAvailable() {
  NetworkConnection* pConnection = nullptr;
  if (detail::GetNetworkConnectionPointer(&pConnection).IsFailure()) {
    return false;
  }
  return pConnection->IsAvailable();
}

NetworkAccessStatus GetNetworkAccessStatus() {
  NetworkConnection* pConnection = nullptr;
  if (detail::GetNetworkConnectionPointer(&pConnection).IsFailure()) {
    return NetworkAccessStatus{};
  }
  return pConnection->GetNetworkAccessStatus();
}

void AttachRequestStateUpdatedEvent(os::SystemEventType* pEvent) {
  NetworkConnection* pConnection = nullptr;
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    detail::GetNetworkConnectionPointer(&pConnection));
  os::AttachReadableHandleToSystemEvent(pEvent,
    os::GetReadableHandleOfSystemEvent(
      pConnection->GetSystemEvent().GetBase()),
    false, os::EventClearMode_AutoClear);
}

bool HandleNetworkRequestErrorResult() {
  NetworkConnection* pConnection = nullptr;
  if (detail::GetNetworkConnectionPointer(&pConnection).IsFailure()) {
    return false;
  }
  return pConnection->HandleNetworkRequestErrorResult();
}

void SetLocalNetworkMode(bool isLocalNetworkMode) {
  NetworkConnection* pConnection = nullptr;
  if (detail::GetNetworkConnectionPointer(&pConnection).IsFailure()) {
    return;
  }
  NN_ABORT_UNLESS_RESULT_SUCCESS(SetRequestConnectionConfirmationOption(
    pConnection->GetRequestHandle(), isLocalNetworkMode ?
      ConnectionConfirmationOption_Prohibited :
      ConnectionConfirmationOption_Required));
}

NetworkConnection* GetGlobalNetworkConnectionPointer() {
  NetworkConnection* pConnection = nullptr;
  if (detail::GetNetworkConnectionPointer(&pConnection).IsFailure()) {
    return nullptr;
  }
  return pConnection;
}

Result Scan(const int16_t* channels, int count, RequirementPreset preset) {
  detail::ScanRequestClient* pScanRequest = nullptr;
  NN_RESULT_DO(detail::GetScanRequestClientPointer(&pScanRequest));

  // Scanning needs a connection request when the system is not already
  // connected, the request goes back to its default preset afterwards.
  NetworkConnection* pConnection = nullptr;
  Result result;
  do {
    if (!pScanRequest->IsProcessing()) {
      InternetConnectionStatus status = {};
      if (GetInternetConnectionStatus(&status).IsFailure() ||
        (status.state != 3 && status.state != 4)) {
        result = detail::GetNetworkConnectionPointer(&pConnection);
        if (result.IsFailure()) {
          break;
        }
        pConnection->CancelRequest();
        result = SetRequestRequirementPreset(pConnection->GetRequestHandle(),
          preset);
        if (result.IsFailure()) {
          break;
        }
        pConnection->SubmitRequestAndWait();
        result = pConnection->GetResult();
        if (result.IsFailure()) {
          break;
        }
      }
      result = pScanRequest->SetChannels(channels, count);
      if (result.IsFailure()) {
        break;
      }
      pScanRequest->Submit();
    }
    while (pScanRequest->IsProcessing()) {
      if (pScanRequest->GetSystemEvent().TimedWait(TimeSpan{5000000000})) {
        break;
      }
    }
    result = pScanRequest->GetResult();
  } while (false);

  if (pConnection != nullptr) {
    pConnection->CancelRequest();
    NN_ABORT_UNLESS_RESULT_SUCCESS(SetRequestRequirementPreset(
      pConnection->GetRequestHandle(), RequirementPreset_InternetForApplet));
  }
  return result;
}

Result Scan() {
  return Scan(nullptr, 0, RequirementPreset_Scan);
}

Result Scan(const int16_t* channels, int count) {
  return Scan(channels, count, RequirementPreset_Scan);
}

Result Scan(RequirementPreset preset) {
  return Scan(nullptr, 0, preset);
}

bool IsIpAddressConflicted() {
  return detail::GetNetworkConnectionResult().GetInnerValueForDebug() ==
    ResultIpAddressConflicted.GetInnerValueForDebug();
}

}
