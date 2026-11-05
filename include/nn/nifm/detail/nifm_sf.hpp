#pragma once

#include "nn/nifm/detail/nifm_sf_types.hpp"
#include "nn/os/process_id.hpp"
#include "nn/sf/native_handle.hpp"
#include "nn/sf/sf_buffers.hpp"
#include "nn/sf/shared_pointer.hpp"

namespace nn::nifm::detail {

struct NetworkAccessInfo {
  int32_t status;
  uint8_t reserved[252];
};

class IRequest : public ::nn::sf::IServiceObject {
 public:
  virtual void Reserved2() = 0;
  virtual void Reserved3() = 0;
  virtual Result GetRequestState(::nn::sf::Out<int32_t> pOutState) = 0;
  virtual Result GetResult() = 0;
  virtual Result GetSystemEventReadableHandles(
    ::nn::sf::Out<::nn::sf::NativeHandle> pOutUpdateHandle,
    ::nn::sf::Out<::nn::sf::NativeHandle> pOutUserHandle) = 0;
  virtual Result Cancel() = 0;
  virtual Result Submit() = 0;
  virtual Result SetRequirement(const Requirement& requirement) = 0;
  virtual Result SetRequirementPreset(int32_t preset) = 0;
  virtual Result SetPriority(uint8_t priority) = 0;
  virtual Result SetNetworkProfileId(const util::Uuid& id) = 0;
  virtual Result SetRejectable(bool isRejectable) = 0;
  virtual Result SetConnectionConfirmationOption(int32_t option) = 0;
  virtual Result SetPersistent(bool isPersistent) = 0;
  virtual Result SetInstant(bool isInstant) = 0;
  virtual Result SetSustainable(bool isSustainable, uint8_t priority) = 0;
  virtual Result SetRawPriority(uint8_t priority) = 0;
  virtual Result SetGreedy(bool isGreedy) = 0;
  virtual Result SetSharable(bool isSharable) = 0;
  virtual Result SetRequirementByRevision(uint32_t revision) = 0;
  virtual Result GetRequirement(::nn::sf::Out<Requirement> pOutRequirement) = 0;
  virtual Result GetRevision(::nn::sf::Out<uint32_t> pOutRevision) = 0;
  virtual Result GetAppletInfo(
    ::nn::sf::Out<uint32_t> pOutAppletId, ::nn::sf::Out<uint32_t> pOutMode,
    ::nn::sf::Out<uint32_t> pOutSize, const ::nn::sf::OutBuffer& buffer,
    uint32_t themeColor) = 0;
  virtual Result GetAdditionalInfo(
    ::nn::sf::Out<AdditionalInfo> pOutInfo,
    ::nn::sf::Out<uint32_t> pOutRevision) = 0;
  virtual Result SetKeptInSleep(bool isKeptInSleep) = 0;
  virtual Result RegisterSocketDescriptor(int socket) = 0;
  virtual Result UnregisterSocketDescriptor(int socket) = 0;
  virtual Result GetNetworkAccessStatus(
    ::nn::sf::Out<NetworkAccessInfo> pOutInfo) = 0;
};

class IScanRequest : public ::nn::sf::IServiceObject {
 public:
  virtual void Reserved2() = 0;
  virtual void Reserved3() = 0;
  virtual Result Submit() = 0;
  virtual Result IsProcessing(::nn::sf::Out<bool> pOutIsProcessing) = 0;
  virtual Result GetResult() = 0;
  virtual Result GetSystemEventReadableHandle(
    ::nn::sf::Out<::nn::sf::NativeHandle> pOutHandle) = 0;
  virtual Result SetChannels(const ::nn::sf::InArray<int16_t>& channels) = 0;
};

class INetworkProfile : public ::nn::sf::IServiceObject {
 public:
  virtual void Reserved2() = 0;
  virtual void Reserved3() = 0;
  virtual void Reserved4() = 0;
  virtual void Reserved5() = 0;
  virtual Result Persist(::nn::sf::Out<util::Uuid> pOutId) = 0;
  virtual Result Update(
    ::nn::sf::Out<util::Uuid> pOutId,
    const sf::NetworkProfileDataV2& profile) = 0;
};

class IGeneralService : public ::nn::sf::IServiceObject {
 public:
  virtual void Reserved2() = 0;
  virtual void Reserved3() = 0;
  virtual Result GetClientId(::nn::sf::Out<ClientId> pOutClientId) = 0;
  virtual Result CreateScanRequest(
    const ::nn::sf::Out<::nn::sf::SharedPointer<IScanRequest>>& pOut) = 0;
  virtual Result CreateRequest(
    const ::nn::sf::Out<::nn::sf::SharedPointer<IRequest>>& pOutRequest,
    int32_t preset) = 0;
  virtual void Reserved7() = 0;
  virtual Result EnumerateNetworkInterfaces(
    const ::nn::sf::OutArray<sf::NetworkInterfaceInfo>& pOutInfo,
    ::nn::sf::Out<int32_t> pOutCount, uint32_t filter) = 0;
  virtual Result EnumerateNetworkProfiles(
    const ::nn::sf::OutArray<sf::NetworkProfileBasicInfo>& pOutInfo,
    ::nn::sf::Out<int32_t> pOutCount, uint8_t type) = 0;
  virtual void Reserved10() = 0;
  virtual void Reserved11() = 0;
  virtual Result RemoveNetworkProfile(const util::Uuid& id) = 0;
  virtual void Reserved13() = 0;
  virtual Result GetCurrentIpAddress(::nn::sf::Out<uint32_t> pOutAddress) = 0;
  virtual void Reserved15() = 0;
  virtual void Reserved16() = 0;
  virtual Result GetCurrentIpConfigInfo(
    ::nn::sf::Out<sf::IpAddressSetting> pOutAddress,
    ::nn::sf::Out<sf::DnsSetting> pOutDns) = 0;
  virtual Result SetWirelessCommunicationEnabled(bool isEnabled) = 0;
  virtual Result IsWirelessCommunicationEnabled(
    ::nn::sf::Out<bool> pOutIsEnabled) = 0;
  virtual Result GetInternetConnectionStatus(
    ::nn::sf::Out<sf::InternetConnectionStatus> pOutStatus) = 0;
  virtual Result SetEthernetCommunicationEnabled(bool isEnabled) = 0;
  virtual Result IsEthernetCommunicationEnabled(
    ::nn::sf::Out<bool> pOutIsEnabled) = 0;
  virtual Result IsAnyInternetRequestAccepted(
    ::nn::sf::Out<bool> pOutIsAccepted, ClientId clientId) = 0;
  virtual Result IsAnyForegroundRequestAccepted(
    ::nn::sf::Out<bool> pOutIsAccepted) = 0;
  virtual Result PutToSleep() = 0;
  virtual Result WakeUp() = 0;
  virtual Result GetSsidListVersion(
    ::nn::sf::Out<SsidListVersion> pOutVersion) = 0;
  virtual Result SetExclusiveClient(ClientId clientId) = 0;
  virtual void Reserved29() = 0;
  virtual void Reserved30() = 0;
  virtual Result SetWirelessCommunicationEnabledForTest(bool isEnabled) = 0;
  virtual Result SetEthernetCommunicationEnabledForTest(bool isEnabled) = 0;
  virtual Result GetTelemetorySystemEventReadableHandle(
    ::nn::sf::Out<::nn::sf::NativeHandle> pOutHandle) = 0;
  virtual void Reserved34() = 0;
  virtual Result ConfirmSystemAvailability() = 0;
  virtual Result SetBackgroundRequestEnabled(bool isEnabled) = 0;
  virtual void Reserved37() = 0;
  virtual Result GetCurrentAccessPoint(
    ::nn::sf::Out<sf::AccessPointDataV1> pOutAccessPoint) = 0;
  virtual Result Shutdown() = 0;
  virtual Result GetAllowedChannels(
    const ::nn::sf::OutArray<int16_t>& pOutChannels,
    ::nn::sf::Out<int32_t> pOutCount) = 0;
  virtual Result NotifyApplicationRightsInvalidated(
    os::ProcessId processId) = 0;
  virtual Result SetAcceptableNetworkTypeFlag(uint32_t flag) = 0;
  virtual Result GetAcceptableNetworkTypeFlag(
    ::nn::sf::Out<uint32_t> pOutFlag) = 0;
  virtual Result NotifyConnectionStateChanged() = 0;
  virtual Result SetWowlDelayedWakeTime(int32_t time) = 0;
  virtual Result IsWiredConnectionAvailable(
    ::nn::sf::Out<bool> pOutIsAvailable) = 0;
  virtual Result IsNetworkEmulationFeatureEnabled(
    ::nn::sf::Out<bool> pOutIsEnabled) = 0;
  virtual Result SelectActiveNetworkEmulationProfileIdForDebug(
    NetworkEmulationProfileId id) = 0;
  virtual Result GetScanData(
    const ::nn::sf::OutArray<sf::AccessPointDataV1>& pOutAccessPoints,
    ::nn::sf::Out<int32_t> pOutCount, uint32_t version) = 0;
  virtual Result ResetActiveNetworkEmulationProfileIdForDebug() = 0;
  virtual Result GetActiveNetworkEmulationProfileId(
    ::nn::sf::Out<NetworkEmulationProfileId> pOutId) = 0;
  virtual Result IsRewriteFeatureEnabled(::nn::sf::Out<bool> pOutIsEnabled) = 0;
  virtual Result CreateRewriteRule(
    ::nn::sf::Out<uint64_t> pOutId, const sf::RewriteRule& rule,
    PacketDirection direction) = 0;
  virtual Result DestroyRewriteRule(uint64_t id) = 0;
  virtual Result IsActiveNetworkEmulationProfileIdSelected(
    ::nn::sf::Out<bool> pOutIsSelected) = 0;
  virtual Result SelectDefaultNetworkEmulationProfileId(
    NetworkEmulationProfileId id) = 0;
  virtual Result GetDefaultNetworkEmulationProfileId(
    ::nn::sf::Out<NetworkEmulationProfileId> pOutId) = 0;
  virtual Result GetNetworkEmulationProfile(
    ::nn::sf::Out<NetworkEmulationProfile> pOutProfile,
    NetworkEmulationProfileId id) = 0;
  virtual Result SetWowlTcpKeepAliveTimeout(int32_t timeout) = 0;
  virtual Result GetCurrentIpConfig(
    const ::nn::sf::OutArray<Ipv4Config>& pOutIpv4,
    ::nn::sf::Out<int32_t> pOutIpv4Count,
    const ::nn::sf::OutArray<Ipv6Config>& pOutIpv6,
    ::nn::sf::Out<int32_t> pOutIpv6Count) = 0;
  virtual Result GetCurrentNetworkProfile(
    ::nn::sf::Out<sf::NetworkProfileDataV2> pOutProfile) = 0;
  virtual Result GetNetworkProfile(
    ::nn::sf::Out<sf::NetworkProfileDataV2> pOutProfile,
    const util::Uuid& id) = 0;
  virtual Result SetNetworkProfile(
    ::nn::sf::Out<util::Uuid> pOutId,
    const sf::NetworkProfileDataV2& profile) = 0;
  virtual Result CreateTemporaryNetworkProfile(
    const ::nn::sf::Out<::nn::sf::SharedPointer<INetworkProfile>>& pOutProfile,
    ::nn::sf::Out<util::Uuid> pOutId, const sf::NetworkProfileDataV2& profile)
    = 0;
  virtual Result GetDefaultIpSetting(
    ::nn::sf::Out<IpSettingDataV2> pOutSetting) = 0;
  virtual Result SetDefaultIpSetting(const IpSettingDataV2& setting) = 0;
  virtual Result GetTelemetoryInfo(::nn::sf::Out<TelemetryInfoV2> pOutInfo) = 0;
};

}
