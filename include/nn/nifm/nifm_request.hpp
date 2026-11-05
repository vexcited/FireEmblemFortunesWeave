#pragma once

#include "nn/applet/applet_types.hpp"
#include "nn/nifm/nifm_types.hpp"
#include "nn/os/system_event_class.hpp"

namespace nn::nifm {

struct RequestParameters {
  RequirementPreset requirementPreset;
};

struct NetworkProfileHandle {
  void* _value;
};

inline constexpr Result ResultErrorHandlingCompleted = {0x17c6e};

class Request {
 public:
  explicit Request(const RequestParameters& parameters);
  Request(const RequestParameters& parameters, os::EventClearMode clearMode);
  ~Request();

  void Submit();
  void SubmitAndWait();
  void Cancel();
  NetworkAccessStatus GetNetworkAccessStatus() const;
  RequestState GetRequestState() const;
  Result GetResult();
  RequestHandle GetHandle();
  os::SystemEvent& GetSystemEvent();

 private:
  alignas(8) uint8_t m_Storage[0x158];
};

class NetworkConnection {
 public:
  NetworkConnection();
  explicit NetworkConnection(os::EventClearMode clearMode);
  ~NetworkConnection();

  void SubmitRequest();
  void SubmitRequestAndWait();
  void CancelRequest();
  bool IsRequestOnHold() const;
  bool IsAvailable() const;
  NetworkAccessStatus GetNetworkAccessStatus() const;
  os::SystemEvent& GetSystemEvent();
  RequestState GetRequestState();
  Result GetResult();
  RequestHandle GetRequestHandle();
  Result HandleNetworkRequestResult();
  bool HandleNetworkRequestErrorResult();

 private:
  Request m_Request;
};

class TemporaryNetworkProfile {
 public:
  explicit TemporaryNetworkProfile(const NetworkProfileDataV2& networkProfile);
  ~TemporaryNetworkProfile();

  const util::Uuid& GetId() const;
  Result Update(const NetworkProfileDataV2& networkProfile);
  NetworkProfileHandle GetHandle();

 private:
  alignas(8) uint8_t m_Storage[0x18];
};

Result PrepareHandlingNetworkRequestResult(RequestHandle handle,
  applet::LibraryAppletHandle* pOutHandle);
Result StartHandlingNetworkRequestResult(
  const applet::LibraryAppletHandle& handle, void* pUserArgument);
Result FinishHandlingNetworkRequestResult(
  const applet::LibraryAppletHandle& handle);

}

namespace nn::nifm {

class TemporaryNetworkProfile;

Result SetRequestRequirementPreset(RequestHandle handle,
  RequirementPreset preset);
Result SetRequestNetworkProfileId(RequestHandle handle,
  const util::Uuid& id);
Result SetRequestConnectionConfirmationOption(RequestHandle handle,
  ConnectionConfirmationOption option);

namespace detail {

Result GetNetworkConnectionPointer(NetworkConnection** pOutConnection);
Result GetScanRequestClientPointer(ScanRequestClient** pOutClient);
Result GetNetworkConnectionResult();
void SetRequestTemporaryNetworkProfileId(RequestHandle handle);

}
}
