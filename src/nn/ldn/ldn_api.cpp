#include <string.h>

#include <mutex>

#include "nn/diag/diag_abort.hpp"
#include "nn/diag/unexpected_default.hpp"
#include "nn/ldn/detail/ldn_service.hpp"
#include "nn/os/sdk_mutex.hpp"
#include "nn/os/system_event.hpp"

namespace nn::err {

void ShowError(Result result);

}

namespace nn::ldn {

Result InitializeSystem(int version);

namespace {

const uint32_t ConnectionFailureMask = 0x3fe1ff;
const uint32_t ConnectionFailureValue = 0xe0cb;

const Result ResultAlreadyInitialized = {0x40cb};
const int ProtocolVersion = 4;

sf::SharedPointer<detail::IMonitorService> g_MonitorService;
os::SdkMutex g_Mutex;
sf::SharedPointer<detail::ILocalCommunicationService> g_Service;
sf::SharedPointer<detail::IUserLocalCommunicationService> g_UserService;
sf::SharedPointer<detail::IClientProcessMonitor> g_UserClientProcessMonitor;
sf::SharedPointer<detail::ISystemLocalCommunicationService> g_SystemService;
sf::SharedPointer<detail::IClientProcessMonitor>
  g_SystemClientProcessMonitor;

// Default is sent as the current protocol.
int ConvertProtocol(Protocol protocol) {
  switch (protocol) {
    case Protocol_Default:
      return Protocol_Reserved4;
    case Protocol_NxLegacy:
      return Protocol_NxLegacy;
    case Protocol_Nx:
      return Protocol_Nx;
    case Protocol_Reserved3:
      return Protocol_Reserved3;
    case Protocol_Reserved4:
      return Protocol_Reserved4;
    default:
      nn::detail::UnexpectedDefaultImpl();
  }
}

NetworkConfig ToNetworkConfigIpc(const NetworkConfig& network) {
  NetworkConfig ipc = {};
  ipc.intentId.localCommunicationId = network.intentId.localCommunicationId;
  ipc.intentId.sceneId = network.intentId.sceneId;
  ipc.channel = network.channel;
  ipc.nodeCountMax = network.nodeCountMax;
  ipc.localCommunicationVersion = network.localCommunicationVersion;
  return ipc;
}

detail::UserConfigIpc ToUserConfigIpc(const UserConfig& user) {
  detail::UserConfigIpc ipc = {};
  memcpy(ipc.userName, user.userName, detail::UserNameBytesMax);
  return ipc;
}

ScanFilter ToScanFilterIpc(const ScanFilter& filter, bool isPrivate) {
  ScanFilter ipc = {};
  ipc.networkId = filter.networkId;
  ipc.networkType = filter.networkType;
  if (isPrivate) {
    ipc.bssid = filter.bssid;
  }
  ipc.ssid = filter.ssid;
  ipc.flag = filter.flag & (isPrivate ? 0x3f : 0x37);
  return ipc;
}

Result HandleConnectResult(Result result, ConnectOption option) {
  if ((option & ConnectOption_ShowErrorOnFailure) != 0 &&
    (result.value & ConnectionFailureMask) == ConnectionFailureValue) {
    err::ShowError(result);
  }
  return result;
}

uint16_t GetHomeChannelBand(uint16_t channel) {
  if (channel == 0) {
    return 0;
  }
  if (channel < 15) {
    return 0x800;
  }
  return channel - 32 < 0x92 ? 0x1400 : 0xfc00;
}

}

void AttachStateChangeEvent(os::SystemEventType* pEvent) {
  sf::NativeHandle handle;
  NN_ABORT_UNLESS_RESULT_SUCCESS(g_Service->AttachStateChangeEvent(
    sf::Out<sf::NativeHandle>(&handle)));
  os::AttachReadableHandleToSystemEvent(pEvent, handle.GetOsHandle(),
    handle.IsManaged(), os::EventClearMode_AutoClear);
  handle.Detach();
}

void FinalizeMonitor() {
  NN_ABORT_UNLESS_RESULT_SUCCESS(g_MonitorService->FinalizeMonitor());
  g_MonitorService.Reset();
}

State GetState() {
  State state = State(0);
  sf::SharedPointer<detail::ILocalCommunicationService> service = g_Service;
  if (!service) {
    return State(0);
  }
  if (service->GetState(sf::Out<State>(&state)).IsFailure()) {
    return State(0);
  }
  return state;
}

Result GetNetworkInfo(NetworkInfo* pOutInfo, NodeLatestUpdate* pOutUpdates,
  int count) {
  return g_Service->GetNetworkInfoLatestUpdate(sf::Out<NetworkInfo>(pOutInfo),
    sf::OutArray<NodeLatestUpdate>(pOutUpdates, count));
}

Result GetNetworkInfo(NetworkInfo* pOutInfo) {
  return g_Service->GetNetworkInfo(sf::Out<NetworkInfo>(pOutInfo));
}

Result GetNetworkInfoForMonitor(NetworkInfo* pOutInfo) {
  return g_MonitorService->GetNetworkInfo(sf::Out<NetworkInfo>(pOutInfo));
}

Result GetIpv4Address(Ipv4Address* pOutAddress, SubnetMask* pOutMask) {
  return g_Service->GetIpv4Address(sf::Out<Ipv4Address>(pOutAddress),
    sf::Out<SubnetMask>(pOutMask));
}

Result GetIpv4AddressForMonitor(Ipv4Address* pOutAddress,
  SubnetMask* pOutMask) {
  return g_MonitorService->GetIpv4Address(sf::Out<Ipv4Address>(pOutAddress),
    sf::Out<SubnetMask>(pOutMask));
}

Result OpenAccessPoint() {
  return g_Service->OpenAccessPoint();
}

Result CloseAccessPoint() {
  return g_Service->CloseAccessPoint();
}

Result DestroyNetwork() {
  return g_Service->DestroyNetwork();
}

Result SetAdvertiseData(const void* data, size_t size) {
  return g_Service->SetAdvertiseData(sf::InBuffer(data, size));
}

Result SetStationAcceptPolicy(AcceptPolicy policy) {
  return g_Service->SetStationAcceptPolicy(policy);
}

Result Reject(Ipv4Address address) {
  return g_Service->Reject(address);
}

Result AddAcceptFilterEntry(const NodeInfo& node) {
  return g_Service->AddAcceptFilterEntry(node.macAddress);
}

Result AddAcceptFilterEntry(MacAddress address) {
  return g_Service->AddAcceptFilterEntry(address);
}

Result ClearAcceptFilter() {
  return g_Service->ClearAcceptFilter();
}

Result OpenStation() {
  return g_Service->OpenStation();
}

Result CloseStation() {
  return g_Service->CloseStation();
}

Result Disconnect() {
  return g_Service->Disconnect();
}

Result GetSecurityParameter(SecurityParameter* pOutParameter) {
  return g_Service->GetSecurityParameter(
    sf::Out<SecurityParameter>(pOutParameter));
}

Result GetNetworkConfig(NetworkConfig* pOutConfig) {
  return g_Service->GetNetworkConfig(sf::Out<NetworkConfig>(pOutConfig));
}

DisconnectReason GetDisconnectReason() {
  int16_t reason = 0;
  if (g_Service->GetDisconnectReason(sf::Out<int16_t>(&reason))
    .IsFailure()) {
    return DisconnectReason(-1);
  }
  return DisconnectReason(reason);
}

Result SetWirelessAudioPolicy(WirelessAudioPolicy policy) {
  return g_Service->SetWirelessAudioPolicy(policy);
}

Result SetWirelessControllerRestriction(
  WirelessControllerRestriction restriction) {
  WirelessControllerPolicy policy;
  policy._storage = restriction;
  return g_Service->SetWirelessControllerPolicy(policy);
}

Result SetWirelessControllerPolicy(WirelessControllerPolicy policy) {
  return g_Service->SetWirelessControllerPolicy(policy);
}

Result EnableActionFrame(const ActionFrameSettings& settings) {
  detail::ActionFrameSettingsIpc ipc = {};
  ipc.localCommunicationId = settings.GetLocalCommunicationId();
  ipc.securityMode = static_cast<uint16_t>(settings.GetSecurityMode());
  ipc.passphraseSize = static_cast<uint16_t>(
    settings.GetPassphrase(ipc.passphrase, sizeof(ipc.passphrase)));
  return g_Service->EnableActionFrame(ipc);
}

Result DisableActionFrame() {
  return g_Service->DisableActionFrame();
}

Result SetHomeChannel(int channel) {
  return g_Service->SetHomeChannel(
    GetHomeChannelBand(static_cast<uint16_t>(channel)) | channel);
}

Result SetTxPower(int power) {
  return g_Service->SetTxPower(power);
}

Result ResetTxPower() {
  return g_Service->ResetTxPower();
}

void Finalize() {
  NN_ABORT_UNLESS_RESULT_SUCCESS(g_UserService->Finalize());
  g_Service = g_SystemService;
  g_UserService.Reset();
  g_UserClientProcessMonitor.Reset();
}

void FinalizeSystem() {
  std::lock_guard<os::SdkMutex> lock(g_Mutex);
  NN_ABORT_UNLESS_RESULT_SUCCESS(g_SystemService->Finalize());
  g_Service = g_UserService;
  g_SystemService.Reset();
  g_SystemClientProcessMonitor.Reset();
}

void EmulateClientProcessTermination() {
  g_Service.Reset();
  g_SystemService.Reset();
  g_SystemClientProcessMonitor.Reset();
  g_UserService.Reset();
  g_UserClientProcessMonitor.Reset();
}

Result SetProtocol(Protocol protocol) {
  return g_Service->SetProtocol(ConvertProtocol(protocol));
}

Result SetOperationMode(OperationMode mode) {
  if (g_SystemService) {
    NN_RESULT_DO(g_SystemService->SetOperationModeWithPrivilege(mode));
  }
  else {
    NN_RESULT_DO(g_UserService->SetOperationMode(mode));
  }
  return Result();
}

Result SendActionFrame(MacAddress destination, MacAddress bssid,
  const void* data, size_t size, int channel, MessageFlagSet flags) {
  return g_Service->SendActionFrame(destination, bssid,
    sf::InBuffer(data, size),
    GetHomeChannelBand(static_cast<uint16_t>(channel)) | channel, flags);
}

Result RecvActionFrame(void* buffer, size_t* pOutSize,
  MacAddress* pOutSource, MacAddress* pOutBssid, int* pOutChannel,
  int* pOutLinkLevel, size_t bufferSize, MessageFlagSet flags) {
  uint32_t size = 0;
  uint16_t channel = 0;
  int linkLevel = 0;
  NN_RESULT_DO(g_Service->RecvActionFrame(sf::OutBuffer(buffer, bufferSize),
    sf::Out<uint32_t>(&size), sf::Out<MacAddress>(pOutSource),
    sf::Out<MacAddress>(pOutBssid), sf::Out<uint16_t>(&channel),
    sf::Out<int>(&linkLevel), flags));
  *pOutSize = size;
  *pOutChannel = channel & 0x3ff;
  *pOutLinkLevel = linkLevel;
  return Result();
}

Result InitializeSystem() {
  return InitializeSystem(56);
}

Result Scan(NetworkInfo* pOutInfos, int* pOutCount, int count,
  const ScanFilter& filter, int channel) {
  int16_t outCount = 0;
  ScanFilter ipc = ToScanFilterIpc(filter, false);
  NN_RESULT_DO(g_Service->Scan(sf::OutArray<NetworkInfo>(pOutInfos, count),
    sf::Out<int16_t>(&outCount), ipc, channel));
  *pOutCount = outCount;
  return Result();
}

Result ScanPrivate(NetworkInfo* pOutInfos, int* pOutCount, int count,
  const ScanFilter& filter, int channel) {
  int16_t outCount = 0;
  ScanFilter ipc = ToScanFilterIpc(filter, true);
  NN_RESULT_DO(g_Service->ScanPrivate(
    sf::OutArray<NetworkInfo>(pOutInfos, count), sf::Out<int16_t>(&outCount),
    ipc, channel));
  *pOutCount = outCount;
  return Result();
}

Result CreateNetwork(const NetworkConfig& network,
  const SecurityConfig& security, const UserConfig& user) {
  NetworkConfig networkIpc = ToNetworkConfigIpc(network);
  detail::UserConfigIpc userIpc = ToUserConfigIpc(user);
  return g_Service->CreateNetwork(networkIpc, security, userIpc);
}

Result CreateNetworkPrivate(const NetworkConfig& network,
  const SecurityConfig& security, const SecurityParameter& parameter,
  const UserConfig& user, int addressCount, const AddressEntry* addresses) {
  NetworkConfig networkIpc = ToNetworkConfigIpc(network);
  detail::UserConfigIpc userIpc = ToUserConfigIpc(user);
  return g_Service->CreateNetworkPrivate(networkIpc, security, parameter,
    userIpc, sf::InArray<AddressEntry>(addresses, addressCount));
}

Result Connect(const NetworkInfo& network, const SecurityConfig& security,
  const UserConfig& user, int version, ConnectOption option) {
  detail::UserConfigIpc userIpc = ToUserConfigIpc(user);
  return HandleConnectResult(g_Service->Connect(network, security, userIpc,
    version, option), option);
}

Result Connect(const NetworkInfo& network, const SecurityConfig& security,
  const UserConfig& user, int version) {
  detail::UserConfigIpc userIpc = ToUserConfigIpc(user);
  return HandleConnectResult(g_Service->Connect(network, security, userIpc,
    version, ConnectOption_ShowErrorOnFailure),
    ConnectOption_ShowErrorOnFailure);
}

Result ConnectPrivate(const NetworkConfig& network,
  const SecurityConfig& security, const SecurityParameter& parameter,
  const UserConfig& user, int version, ConnectOption option) {
  NetworkConfig networkIpc = ToNetworkConfigIpc(network);
  detail::UserConfigIpc userIpc = ToUserConfigIpc(user);
  return HandleConnectResult(g_Service->ConnectPrivate(networkIpc, security,
    parameter, userIpc, version, option), option);
}

Result ConnectPrivate(const NetworkConfig& network,
  const SecurityConfig& security, const SecurityParameter& parameter,
  const UserConfig& user, int version) {
  NetworkConfig networkIpc = ToNetworkConfigIpc(network);
  detail::UserConfigIpc userIpc = ToUserConfigIpc(user);
  return HandleConnectResult(g_Service->ConnectPrivate(networkIpc, security,
    parameter, userIpc, version, ConnectOption_ShowErrorOnFailure),
    ConnectOption_ShowErrorOnFailure);
}

Result Initialize() {
  sf::SharedPointer<detail::IUserServiceCreator> creator =
    detail::CreateUserServiceCreatorByHipc();
  sf::SharedPointer<detail::IUserLocalCommunicationService> service;
  NN_ABORT_UNLESS_RESULT_SUCCESS(creator->CreateUserLocalCommunicationService(
    sf::Out<sf::SharedPointer<detail::IUserLocalCommunicationService>>(
      &service)));
  NN_RESULT_DO(service->Initialize(0, ProtocolVersion));
  g_Service = service;
  g_UserService = service;
  Result result = g_Service->SetProtocol(ConvertProtocol(Protocol_Default));
  if (result.IsFailure()) {
    g_Service.Reset();
    g_UserService.Reset();
    return result;
  }
  NN_ABORT_UNLESS_RESULT_SUCCESS(creator->CreateClientProcessMonitor(
    sf::Out<sf::SharedPointer<detail::IClientProcessMonitor>>(
      &g_UserClientProcessMonitor)));
  NN_ABORT_UNLESS_RESULT_SUCCESS(g_UserClientProcessMonitor->RegisterClient(0));
  return Result();
}

Result InitializeSystem(int version) {
  std::lock_guard<os::SdkMutex> lock(g_Mutex);
  if (g_SystemService) {
    return ResultAlreadyInitialized;
  }
  sf::SharedPointer<detail::ISystemServiceCreator> creator =
    detail::CreateSystemServiceCreatorByHipc();
  sf::SharedPointer<detail::ISystemLocalCommunicationService> service;
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    creator->CreateSystemLocalCommunicationService(sf::Out<
      sf::SharedPointer<detail::ISystemLocalCommunicationService>>(&service)));
  NN_RESULT_DO(service->InitializeSystem(0, ProtocolVersion, version));
  g_Service = service;
  g_SystemService = service;
  Result result = g_Service->SetProtocol(ConvertProtocol(Protocol_Default));
  if (result.IsFailure()) {
    g_Service.Reset();
    g_SystemService.Reset();
    return result;
  }
  NN_ABORT_UNLESS_RESULT_SUCCESS(creator->CreateClientProcessMonitor(
    sf::Out<sf::SharedPointer<detail::IClientProcessMonitor>>(
      &g_SystemClientProcessMonitor)));
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    g_SystemClientProcessMonitor->RegisterClient(0));
  return Result();
}

void InitializeMonitor() {
  sf::SharedPointer<detail::IMonitorServiceCreator> creator =
    detail::CreateMonitorServiceCreatorByHipc();
  sf::SharedPointer<detail::IMonitorService> service;
  NN_ABORT_UNLESS_RESULT_SUCCESS(creator->CreateMonitorService(
    sf::Out<sf::SharedPointer<detail::IMonitorService>>(&service)));
  creator.Reset();
  NN_ABORT_UNLESS_RESULT_SUCCESS(service->InitializeMonitor());
  g_MonitorService = service;
}

}
