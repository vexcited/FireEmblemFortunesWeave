#pragma once

#include "nn/applet/applet_types.hpp"
#include "nn/nifm/detail/nifm_sf.hpp"
#include "nn/os/synchronization.hpp"
#include "nn/os/system_event_class.hpp"

namespace nn::nifm::detail {

Result GetGeneralServicePointer(
  ::nn::sf::SharedPointer<IGeneralService>* pOutService);

class RequestClient {
 public:
  RequestClient(RequirementPreset preset, os::EventClearMode clearMode);
  ~RequestClient();

  void UpdateInternalState() const;
  void Submit();
  RequestState GetRequestState() const;
  void SubmitAndWait();
  void Cancel();
  Result GetResult();
  NetworkAccessStatus GetNetworkAccessStatus() const;
  os::SystemEvent& GetSystemEvent();
  Result GetAdditionalInfo(AdditionalInfo* pOutInfo, uint32_t* pOutRevision);
  Result SetRequirement(const Requirement& requirement);
  Result GetRequirement(Requirement* pOutRequirement) const;
  Result GetSubmitId(uint32_t* pOutSubmitId) const;
  Result SetRequirementPreset(RequirementPreset preset);
  Result SetRequirementBySubmitId(uint32_t submitId);
  Result SetPriority(uint8_t priority);
  Result SetRawPriority(uint8_t priority);
  Result SetNetworkProfileId(util::Uuid id);
  Result SetRejectable(bool isRejectable);
  Result SetConnectionConfirmationOption(
    ConnectionConfirmationOption option);
  Result SetPersistent(bool isPersistent);
  Result SetInstant(bool isInstant);
  Result SetSustainable(bool isSustainable);
  Result SetGreedy(bool isGreedy);
  Result SetSharable(bool isSharable);
  Result SetKeptInSleep(bool isKeptInSleep);
  Result RegisterSocketDescriptor(int socket);
  Result UnregisterSocketDescriptor(int socket);
  Result PrepareLibraryApplet(applet::LibraryAppletHandle* pOutHandle);
  Result GetLibaryAppletArgument(applet::AppletId* pOutAppletId,
    applet::LibraryAppletMode* pOutMode, size_t* pOutSize, void* buffer,
    size_t bufferSize);
  applet::AppletId GetLibraryAppletId();

 private:
  ::nn::sf::SharedPointer<IRequest> m_Request;
  os::SystemEvent m_UpdateEvent;
  os::SystemEvent m_SystemEvent;
  mutable os::SdkRecursiveMutexType m_Mutex;
  mutable RequestState m_State;
  mutable Result m_Result;
};

class ScanRequestClient {
 public:
  explicit ScanRequestClient(os::EventClearMode clearMode);
  ~ScanRequestClient();

  void Submit();
  bool IsProcessing();
  Result GetResult();
  os::SystemEvent& GetSystemEvent();
  Result SetChannels(const int16_t* channels, int count);

 private:
  ::nn::sf::SharedPointer<IScanRequest> m_ScanRequest;
  os::SystemEvent m_SystemEvent;
};

class TemporaryNetworkProfileClient {
 public:
  explicit TemporaryNetworkProfileClient(
    const NetworkProfileDataV2& networkProfile);
  ~TemporaryNetworkProfileClient();

  const util::Uuid& GetId() const;
  Result Update(const NetworkProfileDataV2& networkProfile);
  Result Persist();

 private:
  ::nn::sf::SharedPointer<INetworkProfile> m_NetworkProfile;
  util::Uuid m_Id;
};

void ConvertNetworkProfileDataToSfFromNifm(sf::NetworkProfileDataV2* pOut,
  const NetworkProfileDataV2& networkProfile);

}
