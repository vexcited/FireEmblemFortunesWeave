#include "nn/applet/applet_api.hpp"
#include "nn/la/la_applet_to_nifm_arguments_reader.hpp"
#include "nn/nifm/detail/nifm_request_client.hpp"
#include "nn/nifm/nifm_request.hpp"

namespace nn::nifm {

namespace {

constexpr Result ResultErrorHandlingFailure = {0x1686e};
constexpr Result ResultErrorHandlingNotPrepared = {0x16a6e};
constexpr Result ResultErrorHandlingCanceled = {0x16e6e};
constexpr Result ResultErrorHandlingUnexpected = {0x1726e};

detail::RequestClient* GetClient(RequestHandle handle) {
  return static_cast<detail::RequestClient*>(handle._value);
}

}

Result PrepareHandlingNetworkRequestResult(RequestHandle handle,
  applet::LibraryAppletHandle* pOutHandle) {
  GetClient(handle)->GetResult();
  return GetClient(handle)->PrepareLibraryApplet(pOutHandle);
}

Result StartHandlingNetworkRequestResult(
  const applet::LibraryAppletHandle& handle, void* pUserArgument) {
  if (handle._p == nullptr) {
    return ResultErrorHandlingNotPrepared;
  }

  Result result = applet::StartLibraryApplet(handle, pUserArgument);
  if (result.IsFailure()) {
    applet::CloseLibraryApplet(handle);
  }
  return result;
}

Result FinishHandlingNetworkRequestResult(
  const applet::LibraryAppletHandle& handle) {
  if (handle._p == nullptr) {
    return ResultErrorHandlingNotPrepared;
  }

  applet::JoinLibraryApplet(handle);
  Result result = ResultErrorHandlingFailure;
  switch (applet::GetLibraryAppletExitReason(handle)) {
    case applet::LibraryAppletExitReason_Normal: {
      la::AppletToNifmArgumentsReader reader;
      if (reader.TryPopFromOutChannel(handle)) {
        result = reader.GetResult();
      }
      break;
    }
    case applet::LibraryAppletExitReason_Canceled:
      result = ResultErrorHandlingCanceled;
      break;
    case applet::LibraryAppletExitReason_Abnormal:
      NN_ABORT_UNLESS(false);
      break;
    default:
      result = ResultErrorHandlingUnexpected;
      break;
  }
  applet::CloseLibraryApplet(handle);
  return result;
}

Result GetResultHandlingNetworkRequestResult(
  const applet::StorageHandle& storage) {
  la::AppletToNifmArgumentsReader reader;
  if (!reader.ReadFromStorage(storage)) {
    return ResultErrorHandlingFailure;
  }
  return reader.GetResult();
}

applet::AppletId GetHandlingNetworkRequestResultAppletId(
  RequestHandle handle) {
  GetClient(handle)->GetResult();
  return GetClient(handle)->GetLibraryAppletId();
}

Result PersistTemporaryNetworkProfile(NetworkProfileHandle handle) {
  return static_cast<detail::TemporaryNetworkProfileClient*>(handle._value)
    ->Persist();
}

Result SetRequestRequirementPreset(RequestHandle handle,
  RequirementPreset preset) {
  return GetClient(handle)->SetRequirementPreset(preset);
}

Result SetRequestRequirementBySubmitId(RequestHandle handle,
  uint32_t submitId) {
  return GetClient(handle)->SetRequirementBySubmitId(submitId);
}

Result SetRequestPriority(RequestHandle handle, uint8_t priority) {
  return GetClient(handle)->SetPriority(priority);
}

Result SetRequestRawPriority(RequestHandle handle, uint8_t priority) {
  return GetClient(handle)->SetRawPriority(priority);
}

Result SetRequestNetworkProfileId(RequestHandle handle,
  const util::Uuid& id) {
  return GetClient(handle)->SetNetworkProfileId(id);
}

Result SetRequestRejectable(RequestHandle handle, bool isRejectable) {
  return GetClient(handle)->SetRejectable(isRejectable);
}

Result SetRequestConnectionConfirmationOption(RequestHandle handle,
  ConnectionConfirmationOption option) {
  return GetClient(handle)->SetConnectionConfirmationOption(option);
}

Result SetRequestPersistent(RequestHandle handle, bool isPersistent) {
  return GetClient(handle)->SetPersistent(isPersistent);
}

Result SetRequestInstant(RequestHandle handle, bool isInstant) {
  return GetClient(handle)->SetInstant(isInstant);
}

Result SetRequestSustainable(RequestHandle handle, bool isSustainable) {
  return GetClient(handle)->SetSustainable(isSustainable);
}

Result SetRequestGreedy(RequestHandle handle, bool isGreedy) {
  return GetClient(handle)->SetGreedy(isGreedy);
}

Result SetRequestSharable(RequestHandle handle, bool isSharable) {
  return GetClient(handle)->SetSharable(isSharable);
}

Result SetRequestKeptInSleep(RequestHandle handle, bool isKeptInSleep) {
  return GetClient(handle)->SetKeptInSleep(isKeptInSleep);
}

Result RegisterRequestSocketDescriptor(RequestHandle handle, int socket) {
  return GetClient(handle)->RegisterSocketDescriptor(socket);
}

Result UnregisterRequestSocketDescriptor(RequestHandle handle) {
  return GetClient(handle)->UnregisterSocketDescriptor(-1);
}

Result GetRequestAdditionalInfo(AdditionalInfo* pOutInfo,
  uint32_t* pOutRevision, RequestHandle handle) {
  return GetClient(handle)->GetAdditionalInfo(pOutInfo, pOutRevision);
}

detail::RequestClient* GetRequestClientPointer(RequestHandle handle) {
  return GetClient(handle);
}

}
