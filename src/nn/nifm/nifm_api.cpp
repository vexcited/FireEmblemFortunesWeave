#include "nn/diag/diag_abort.hpp"
#include "nn/nifm/detail/nifm_request_client.hpp"
#include "nn/nifm/detail/nifm_type_converter.hpp"
#include "nn/nifm/nifm_api.hpp"
#include "nn/nifm/nifm_rewrite_rule.hpp"
#include "nn/util/string_util.hpp"

namespace nn::nifm {

using ServicePointer = ::nn::sf::SharedPointer<detail::IGeneralService>;

Result SetAcceptableNetworkTypeFlag(uint32_t flag) {
  ServicePointer service;
  NN_RESULT_DO(detail::GetGeneralServicePointer(&service));
  return service->SetAcceptableNetworkTypeFlag(flag);
}

Result GetAcceptableNetworkTypeFlag(uint32_t* pOutFlag) {
  ServicePointer service;
  NN_RESULT_DO(detail::GetGeneralServicePointer(&service));
  return service->GetAcceptableNetworkTypeFlag(
    ::nn::sf::Out<uint32_t>(pOutFlag));
}

ClientId GetClientId() {
  ServicePointer service;
  if (detail::GetGeneralServicePointer(&service).IsFailure()) {
    return ClientId{0};
  }
  ClientId clientId = {0};
  if (service->GetClientId(::nn::sf::Out<ClientId>(&clientId)).IsFailure()) {
    return ClientId{0};
  }
  return clientId;
}

bool IsAnyInternetRequestAccepted(ClientId clientId) {
  ServicePointer service;
  if (detail::GetGeneralServicePointer(&service).IsFailure()) {
    return false;
  }
  bool isAccepted = false;
  return service->IsAnyInternetRequestAccepted(
    ::nn::sf::Out<bool>(&isAccepted), clientId).IsSuccess() && isAccepted;
}

bool IsAnyForegroundRequestAccepted() {
  ServicePointer service;
  if (detail::GetGeneralServicePointer(&service).IsFailure()) {
    return false;
  }
  bool isAccepted = false;
  return service->IsAnyForegroundRequestAccepted(
    ::nn::sf::Out<bool>(&isAccepted)).IsSuccess() && isAccepted;
}

Result SetBackgroundRequestEnabled(bool isEnabled) {
  ServicePointer service;
  NN_RESULT_DO(detail::GetGeneralServicePointer(&service));
  return service->SetBackgroundRequestEnabled(isEnabled);
}

Result SetWirelessCommunicationEnabledForTest(bool isEnabled) {
  ServicePointer service;
  NN_RESULT_DO(detail::GetGeneralServicePointer(&service));
  return service->SetWirelessCommunicationEnabledForTest(isEnabled);
}

Result SetEthernetCommunicationEnabledForTest(bool isEnabled) {
  ServicePointer service;
  NN_RESULT_DO(detail::GetGeneralServicePointer(&service));
  return service->SetEthernetCommunicationEnabledForTest(isEnabled);
}

void SetEthernetCommunicationEnabled(bool isEnabled) {
  ServicePointer service;
  if (detail::GetGeneralServicePointer(&service).IsSuccess()) {
    service->SetEthernetCommunicationEnabled(isEnabled);
  }
}

bool IsEthernetCommunicationEnabled() {
  ServicePointer service;
  if (detail::GetGeneralServicePointer(&service).IsFailure()) {
    return false;
  }
  bool isEnabled = false;
  return service->IsEthernetCommunicationEnabled(
    ::nn::sf::Out<bool>(&isEnabled)).IsSuccess() && isEnabled;
}

Result PutToSleep() {
  ServicePointer service;
  NN_RESULT_DO(detail::GetGeneralServicePointer(&service));
  return service->PutToSleep();
}

Result WakeUp() {
  ServicePointer service;
  NN_RESULT_DO(detail::GetGeneralServicePointer(&service));
  return service->WakeUp();
}

Result Shutdown() {
  ServicePointer service;
  NN_RESULT_DO(detail::GetGeneralServicePointer(&service));
  return service->Shutdown();
}

Result SetExclusiveClient(ClientId clientId) {
  ServicePointer service;
  NN_RESULT_DO(detail::GetGeneralServicePointer(&service));
  return service->SetExclusiveClient(clientId);
}

Result GetDefaultIpSetting(IpSettingDataV2* pOutSetting) {
  ServicePointer service;
  NN_RESULT_DO(detail::GetGeneralServicePointer(&service));
  return service->GetDefaultIpSetting(
    ::nn::sf::Out<IpSettingDataV2>(pOutSetting));
}

Result SetDefaultIpSetting(const IpSettingDataV2& setting) {
  ServicePointer service;
  NN_RESULT_DO(detail::GetGeneralServicePointer(&service));
  return service->SetDefaultIpSetting(setting);
}

Result GetInternetConnectionStatus(InternetConnectionStatus* pOutStatus) {
  NN_ABORT_UNLESS_NOT_NULL(pOutStatus);
  ServicePointer service;
  Result result = detail::GetGeneralServicePointer(&service);
  if (result.IsSuccess()) {
    detail::sf::InternetConnectionStatus status = {};
    result = service->GetInternetConnectionStatus(
      ::nn::sf::Out<detail::sf::InternetConnectionStatus>(&status));
    if (result.IsSuccess()) {
      detail::ConvertInternetConnectionStatusToNifmFromSf(pOutStatus, status);
    }
  }
  return result;
}

Result IsWiredConnectionAvailable(bool* pOutIsAvailable) {
  NN_ABORT_UNLESS_NOT_NULL(pOutIsAvailable);
  ServicePointer service;
  NN_RESULT_DO(detail::GetGeneralServicePointer(&service));
  return service->IsWiredConnectionAvailable(
    ::nn::sf::Out<bool>(pOutIsAvailable));
}

Result GetCurrentPrimaryIpAddress(socket::InAddr* pOutAddress) {
  NN_ABORT_UNLESS_NOT_NULL(pOutAddress);
  ServicePointer service;
  NN_RESULT_DO(detail::GetGeneralServicePointer(&service));
  uint32_t address = 0;
  NN_RESULT_DO(service->GetCurrentIpAddress(
    ::nn::sf::Out<uint32_t>(&address)));
  pOutAddress->S_addr = address;
  return Result{};
}

Result GetCurrentPrimaryIpAddress(in_addr* pOutAddress) {
  NN_ABORT_UNLESS_NOT_NULL(pOutAddress);
  ServicePointer service;
  NN_RESULT_DO(detail::GetGeneralServicePointer(&service));
  uint32_t address = 0;
  NN_RESULT_DO(service->GetCurrentIpAddress(
    ::nn::sf::Out<uint32_t>(&address)));
  pOutAddress->s_addr = address;
  return Result{};
}

Result GetCurrentIpConfigInfo(socket::InAddr* pOutAddress,
  socket::InAddr* pOutSubnetMask, socket::InAddr* pOutGateway,
  socket::InAddr* pOutPreferredDns, socket::InAddr* pOutAlternateDns) {
  NN_ABORT_UNLESS_NOT_NULL(pOutAddress);
  NN_ABORT_UNLESS_NOT_NULL(pOutSubnetMask);
  NN_ABORT_UNLESS_NOT_NULL(pOutGateway);
  NN_ABORT_UNLESS_NOT_NULL(pOutPreferredDns);
  NN_ABORT_UNLESS_NOT_NULL(pOutAlternateDns);
  ServicePointer service;
  NN_RESULT_DO(detail::GetGeneralServicePointer(&service));
  detail::sf::IpAddressSetting ipSetting = {};
  detail::sf::DnsSetting dnsSetting = {};
  NN_RESULT_DO(service->GetCurrentIpConfigInfo(
    ::nn::sf::Out<detail::sf::IpAddressSetting>(&ipSetting),
    ::nn::sf::Out<detail::sf::DnsSetting>(&dnsSetting)));
  pOutAddress->S_addr = ipSetting.ipAddress.s_addr;
  pOutSubnetMask->S_addr = ipSetting.subnetMask.s_addr;
  pOutGateway->S_addr = ipSetting.defaultGateway.s_addr;
  pOutPreferredDns->S_addr = dnsSetting.preferredDns.s_addr;
  pOutAlternateDns->S_addr = dnsSetting.alternateDns.s_addr;
  return Result{};
}

Result GetCurrentIpConfigInfo(in_addr* pOutAddress, in_addr* pOutSubnetMask,
  in_addr* pOutGateway, in_addr* pOutPreferredDns,
  in_addr* pOutAlternateDns) {
  NN_ABORT_UNLESS_NOT_NULL(pOutAddress);
  NN_ABORT_UNLESS_NOT_NULL(pOutSubnetMask);
  NN_ABORT_UNLESS_NOT_NULL(pOutGateway);
  NN_ABORT_UNLESS_NOT_NULL(pOutPreferredDns);
  NN_ABORT_UNLESS_NOT_NULL(pOutAlternateDns);
  ServicePointer service;
  NN_RESULT_DO(detail::GetGeneralServicePointer(&service));
  detail::sf::IpAddressSetting ipSetting = {};
  detail::sf::DnsSetting dnsSetting = {};
  NN_RESULT_DO(service->GetCurrentIpConfigInfo(
    ::nn::sf::Out<detail::sf::IpAddressSetting>(&ipSetting),
    ::nn::sf::Out<detail::sf::DnsSetting>(&dnsSetting)));
  *pOutAddress = ipSetting.ipAddress;
  *pOutSubnetMask = ipSetting.subnetMask;
  *pOutGateway = ipSetting.defaultGateway;
  *pOutPreferredDns = dnsSetting.preferredDns;
  *pOutAlternateDns = dnsSetting.alternateDns;
  return Result{};
}

bool IsNetworkEmulationFeatureEnabled() {
  ServicePointer service;
  bool isEnabled = false;
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::GetGeneralServicePointer(&service));
  NN_ABORT_UNLESS_RESULT_SUCCESS(service->IsNetworkEmulationFeatureEnabled(
    ::nn::sf::Out<bool>(&isEnabled)));
  return isEnabled;
}

void SelectActiveNetworkEmulationProfileIdForDebug(
  NetworkEmulationProfileId id) {
  ServicePointer service;
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::GetGeneralServicePointer(&service));
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    service->SelectActiveNetworkEmulationProfileIdForDebug(id));
}

void ResetActiveNetworkEmulationProfileIdForDebug() {
  ServicePointer service;
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::GetGeneralServicePointer(&service));
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    service->ResetActiveNetworkEmulationProfileIdForDebug());
}

NetworkEmulationProfileId GetActiveNetworkEmulationProfileId() {
  ServicePointer service;
  NetworkEmulationProfileId id = {0};
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::GetGeneralServicePointer(&service));
  NN_ABORT_UNLESS_RESULT_SUCCESS(service->GetActiveNetworkEmulationProfileId(
    ::nn::sf::Out<NetworkEmulationProfileId>(&id)));
  return id;
}

bool IsActiveNetworkEmulationProfileIdSelectedForDebug() {
  ServicePointer service;
  bool isSelected = false;
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::GetGeneralServicePointer(&service));
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    service->IsActiveNetworkEmulationProfileIdSelected(
      ::nn::sf::Out<bool>(&isSelected)));
  return isSelected;
}

void SelectDefaultNetworkEmulationProfileId(NetworkEmulationProfileId id) {
  ServicePointer service;
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::GetGeneralServicePointer(&service));
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    service->SelectDefaultNetworkEmulationProfileId(id));
}

NetworkEmulationProfileId GetDefaultNetworkEmulationProfileId() {
  ServicePointer service;
  NetworkEmulationProfileId id = {0};
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::GetGeneralServicePointer(&service));
  NN_ABORT_UNLESS_RESULT_SUCCESS(service->GetDefaultNetworkEmulationProfileId(
    ::nn::sf::Out<NetworkEmulationProfileId>(&id)));
  return id;
}

Result GetCurrentNetworkProfile(NetworkProfileDataV2* pOutProfile) {
  ServicePointer service;
  NN_RESULT_DO(detail::GetGeneralServicePointer(&service));
  detail::sf::NetworkProfileDataV2 profile = {};
  NN_RESULT_DO(service->GetCurrentNetworkProfile(
    ::nn::sf::Out<detail::sf::NetworkProfileDataV2>(&profile)));
  detail::ConvertNetworkProfileDataToNifmFromSf(pOutProfile, profile);
  return Result{};
}

Result GetCurrentAccessPoint(AccessPointData* pOutAccessPoint) {
  ServicePointer service;
  NN_RESULT_DO(detail::GetGeneralServicePointer(&service));
  detail::sf::AccessPointDataV1 accessPoint = {};
  NN_RESULT_DO(service->GetCurrentAccessPoint(
    ::nn::sf::Out<detail::sf::AccessPointDataV1>(&accessPoint)));
  detail::ConvertAccessPointDataToNifmFromSf(pOutAccessPoint, accessPoint);
  return Result{};
}

Result EnumerateNetworkInterfaces(NetworkInterfaceInfo* pOutInfo,
  int* pOutCount, int count, uint32_t filter) {
  ServicePointer service;
  NN_RESULT_DO(detail::GetGeneralServicePointer(&service));

  // The service fills the smaller sf entries in place, they are widened
  // backwards so that no entry is overwritten before it is read.
  auto entries = reinterpret_cast<detail::sf::NetworkInterfaceInfo*>(
    pOutInfo);
  int32_t outCount = 0;
  NN_RESULT_DO(service->EnumerateNetworkInterfaces(
    ::nn::sf::OutArray<detail::sf::NetworkInterfaceInfo>(entries, count),
    ::nn::sf::Out<int32_t>(&outCount), filter));
  *pOutCount = outCount;
  int converted = outCount < count ? outCount : count;
  for (int i = converted - 1; i >= 0; --i) {
    detail::sf::NetworkInterfaceInfo entry = entries[i];
    detail::ConvertNetworkInterfaceInfoToNifmFromSf(&pOutInfo[i], entry);
  }
  return Result{};
}

Result EnumerateNetworkProfiles(NetworkProfileBasicInfo* pOutInfo,
  int* pOutCount, int count, uint8_t type) {
  ServicePointer service;
  NN_RESULT_DO(detail::GetGeneralServicePointer(&service));

  auto entries = reinterpret_cast<detail::sf::NetworkProfileBasicInfo*>(
    pOutInfo);
  int32_t outCount = 0;
  NN_RESULT_DO(service->EnumerateNetworkProfiles(
    ::nn::sf::OutArray<detail::sf::NetworkProfileBasicInfo>(entries, count),
    ::nn::sf::Out<int32_t>(&outCount), type));
  *pOutCount = outCount;
  int converted = outCount < count ? outCount : count;
  for (int i = converted - 1; i >= 0; --i) {
    detail::sf::NetworkProfileBasicInfo entry = entries[i];
    detail::ConvertNetworkProfileBasicInfoToNifmFromSf(&pOutInfo[i], entry);
  }
  return Result{};
}

Result GetNetworkProfile(NetworkProfileDataV2* pOutProfile,
  const util::Uuid& id) {
  ServicePointer service;
  NN_RESULT_DO(detail::GetGeneralServicePointer(&service));
  detail::sf::NetworkProfileDataV2 profile = {};
  NN_RESULT_DO(service->GetNetworkProfile(
    ::nn::sf::Out<detail::sf::NetworkProfileDataV2>(&profile), id));
  detail::ConvertNetworkProfileDataToNifmFromSf(pOutProfile, profile);
  return Result{};
}

Result SetNetworkProfile(util::Uuid* pOutId,
  const NetworkProfileDataV2& networkProfile) {
  ServicePointer service;
  NN_RESULT_DO(detail::GetGeneralServicePointer(&service));
  detail::sf::NetworkProfileDataV2 profile = {};
  detail::ConvertNetworkProfileDataToSfFromNifm(&profile, networkProfile);
  return service->SetNetworkProfile(::nn::sf::Out<util::Uuid>(pOutId),
    profile);
}

Result RemoveNetworkProfile(const util::Uuid& id) {
  ServicePointer service;
  NN_RESULT_DO(detail::GetGeneralServicePointer(&service));
  return service->RemoveNetworkProfile(id);
}

Result GetSsidListVersion(SsidListVersion* pOutVersion) {
  ServicePointer service;
  NN_RESULT_DO(detail::GetGeneralServicePointer(&service));
  return service->GetSsidListVersion(
    ::nn::sf::Out<SsidListVersion>(pOutVersion));
}

Result GetCurrentAccessPointChannel(uint16_t* pOutChannel) {
  AccessPointData accessPoint = {};
  NN_RESULT_DO(GetCurrentAccessPoint(&accessPoint));
  *pOutChannel = static_cast<uint16_t>(accessPoint.channel);
  return Result{};
}

void NotifyApplicationRightsInvalidated(os::ProcessId processId) {
  ServicePointer service;
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::GetGeneralServicePointer(&service));
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    service->NotifyApplicationRightsInvalidated(processId));
}

void NotifyConnectionStateChanged() {
  ServicePointer service;
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::GetGeneralServicePointer(&service));
  NN_ABORT_UNLESS_RESULT_SUCCESS(service->NotifyConnectionStateChanged());
}

bool IsRewriteFeatureEnabled() {
  ServicePointer service;
  bool isEnabled = false;
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::GetGeneralServicePointer(&service));
  NN_ABORT_UNLESS_RESULT_SUCCESS(service->IsRewriteFeatureEnabled(
    ::nn::sf::Out<bool>(&isEnabled)));
  return isEnabled;
}

Result DestroyRewriteRule(uint64_t id) {
  ServicePointer service;
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::GetGeneralServicePointer(&service));
  return service->DestroyRewriteRule(id);
}

Result GetAllowedChannels(int16_t* pOutChannels, int* pOutCount,
  int count) {
  ServicePointer service;
  NN_RESULT_DO(detail::GetGeneralServicePointer(&service));
  return service->GetAllowedChannels(
    ::nn::sf::OutArray<int16_t>(pOutChannels, count),
    ::nn::sf::Out<int32_t>(pOutCount));
}

Result GetScanData(AccessPointData* pOutAccessPoints, int* pOutCount,
  int count) {
  ServicePointer service;
  NN_RESULT_DO(detail::GetGeneralServicePointer(&service));

  auto entries = reinterpret_cast<detail::sf::AccessPointDataV1*>(
    pOutAccessPoints);
  int32_t outCount = 0;
  NN_RESULT_DO(service->GetScanData(
    ::nn::sf::OutArray<detail::sf::AccessPointDataV1>(entries, count),
    ::nn::sf::Out<int32_t>(&outCount), 1));
  *pOutCount = outCount;
  int converted = outCount < count ? outCount : count;
  for (int i = converted - 1; i >= 0; --i) {
    detail::sf::AccessPointDataV1 entry = entries[i];
    detail::ConvertAccessPointDataToNifmFromSf(&pOutAccessPoints[i], entry);
  }
  return Result{};
}

Result ConfirmSystemAvailability() {
  ServicePointer service;
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::GetGeneralServicePointer(&service));
  return service->ConfirmSystemAvailability();
}

void BindTelemetryInfoEvent(os::SystemEventType* pEvent,
  os::EventClearMode clearMode) {
  ServicePointer service;
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::GetGeneralServicePointer(&service));
  ::nn::sf::NativeHandle handle;
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    service->GetTelemetorySystemEventReadableHandle(
      ::nn::sf::Out<::nn::sf::NativeHandle>(&handle)));
  os::AttachReadableHandleToSystemEvent(pEvent, handle.GetOsHandle(),
    handle.IsManaged(), clearMode);
  handle.Detach();
}

void SetWirelessCommunicationEnabled(bool isEnabled) {
  ServicePointer service;
  if (detail::GetGeneralServicePointer(&service).IsSuccess()) {
    service->SetWirelessCommunicationEnabled(isEnabled);
  }
}

bool IsWirelessCommunicationEnabled() {
  ServicePointer service;
  if (detail::GetGeneralServicePointer(&service).IsFailure()) {
    return false;
  }
  bool isEnabled = false;
  return service->IsWirelessCommunicationEnabled(
    ::nn::sf::Out<bool>(&isEnabled)).IsSuccess() && isEnabled;
}

Result SetWowlDelayedWakeTime(int time) {
  ServicePointer service;
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::GetGeneralServicePointer(&service));
  return service->SetWowlDelayedWakeTime(time);
}

Result SetWowlTcpKeepAliveTimeout(int timeout) {
  ServicePointer service;
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::GetGeneralServicePointer(&service));
  return service->SetWowlTcpKeepAliveTimeout(timeout);
}

void GetTelemetoryInfo(TelemetryInfoV2* pOutInfo) {
  ServicePointer service;
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::GetGeneralServicePointer(&service));
  NN_ABORT_UNLESS_RESULT_SUCCESS(service->GetTelemetoryInfo(
    ::nn::sf::Out<TelemetryInfoV2>(pOutInfo)));
}

Result GetCurrentIpConfig(Ipv4Config* pOutIpv4, int* pOutIpv4Count,
  Ipv6Config* pOutIpv6, int* pOutIpv6Count, int ipv4Count, int ipv6Count) {
  NN_ABORT_UNLESS_NOT_NULL(pOutIpv4);
  NN_ABORT_UNLESS_NOT_NULL(pOutIpv4Count);
  NN_ABORT_UNLESS_NOT_NULL(pOutIpv6);
  NN_ABORT_UNLESS_NOT_NULL(pOutIpv6Count);
  NN_ABORT_UNLESS(ipv4Count > 0);
  NN_ABORT_UNLESS(ipv6Count > 0);
  ServicePointer service;
  NN_RESULT_DO(detail::GetGeneralServicePointer(&service));
  return service->GetCurrentIpConfig(
    ::nn::sf::OutArray<Ipv4Config>(pOutIpv4,
      static_cast<uint32_t>(ipv4Count)),
    ::nn::sf::Out<int32_t>(pOutIpv4Count),
    ::nn::sf::OutArray<Ipv6Config>(pOutIpv6,
      static_cast<uint32_t>(ipv6Count)),
    ::nn::sf::Out<int32_t>(pOutIpv6Count));
}

Result CreateRewriteRule(uint64_t* pOutId, const RewriteRule& rule) {
  ServicePointer service;
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::GetGeneralServicePointer(&service));
  detail::sf::RewriteRule sfRule = {};
  util::Strlcpy(sfRule.action, rule.action, sizeof(sfRule.action));
  util::Strlcpy(sfRule.filter, rule.filter, sizeof(sfRule.filter));
  sfRule.isEnabled = true;
  sfRule.priority = static_cast<uint8_t>(rule.priority);
  return service->CreateRewriteRule(::nn::sf::Out<uint64_t>(pOutId), sfRule,
    rule.direction);
}

NetworkEmulationProfile GetNetworkEmulationProfile(
  NetworkEmulationProfileId id) {
  ServicePointer service;
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::GetGeneralServicePointer(&service));
  NetworkEmulationProfile profile = {};
  NN_ABORT_UNLESS_RESULT_SUCCESS(service->GetNetworkEmulationProfile(
    ::nn::sf::Out<NetworkEmulationProfile>(&profile), id));
  NN_ABORT_UNLESS(profile.name[sizeof(profile.name) - 1] == '\0');
  NN_ABORT_UNLESS(profile.uplinkMode < 5);
  NN_ABORT_UNLESS(profile.downlinkMode < 5);
  return profile;
}

}
