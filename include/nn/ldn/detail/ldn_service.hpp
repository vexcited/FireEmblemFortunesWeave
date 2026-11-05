#pragma once

#include "nn/ldn/ldn_types.hpp"
#include "nn/result.hpp"
#include "nn/sf/native_handle.hpp"
#include "nn/sf/sf_buffers.hpp"
#include "nn/sf/shared_pointer.hpp"

namespace nn::ldn::detail {

const int UserNameBytesMax = 32;

struct UserConfigIpc {
  char userName[33];
  uint8_t reserved21[15];
};

struct ActionFrameSettingsIpc {
  uint64_t localCommunicationId;
  uint8_t reserved08[0x34];
  uint16_t securityMode;
  uint16_t passphraseSize;
  uint8_t passphrase[64];
};

class ILocalCommunicationService : public sf::IServiceObject {
 public:
  virtual void Reserved2() = 0;
  virtual void Reserved3() = 0;
  virtual Result GetState(sf::Out<State> pOutState) = 0;
  virtual Result GetNetworkInfo(sf::Out<NetworkInfo> pOutInfo) = 0;
  virtual Result GetIpv4Address(sf::Out<Ipv4Address> pOutAddress,
    sf::Out<SubnetMask> pOutMask) = 0;
  virtual Result GetDisconnectReason(sf::Out<int16_t> pOutReason) = 0;
  virtual Result GetSecurityParameter(
    sf::Out<SecurityParameter> pOutParameter) = 0;
  virtual Result GetNetworkConfig(sf::Out<NetworkConfig> pOutConfig) = 0;
  virtual Result AttachStateChangeEvent(
    sf::Out<sf::NativeHandle> pOutHandle) = 0;
  virtual Result GetNetworkInfoLatestUpdate(sf::Out<NetworkInfo> pOutInfo,
    const sf::OutArray<NodeLatestUpdate>& outUpdates) = 0;
  virtual Result Scan(const sf::OutArray<NetworkInfo>& outInfos,
    sf::Out<int16_t> pOutCount, const ScanFilter& filter, int channel) = 0;
  virtual Result ScanPrivate(const sf::OutArray<NetworkInfo>& outInfos,
    sf::Out<int16_t> pOutCount, const ScanFilter& filter, int channel) = 0;
  virtual Result SetWirelessControllerPolicy(
    WirelessControllerPolicy policy) = 0;
  virtual Result SetWirelessAudioPolicy(WirelessAudioPolicy policy) = 0;
  virtual Result SetProtocol(int protocol) = 0;
  virtual Result OpenAccessPoint() = 0;
  virtual Result CloseAccessPoint() = 0;
  virtual Result CreateNetwork(const NetworkConfig& network,
    const SecurityConfig& security, const UserConfigIpc& user) = 0;
  virtual Result CreateNetworkPrivate(const NetworkConfig& network,
    const SecurityConfig& security, const SecurityParameter& parameter,
    const UserConfigIpc& user, const sf::InArray<AddressEntry>& addresses)
    = 0;
  virtual Result DestroyNetwork() = 0;
  virtual Result Reject(Ipv4Address address) = 0;
  virtual Result SetAdvertiseData(const sf::InBuffer& data) = 0;
  virtual Result SetStationAcceptPolicy(AcceptPolicy policy) = 0;
  virtual Result AddAcceptFilterEntry(MacAddress address) = 0;
  virtual Result ClearAcceptFilter() = 0;
  virtual Result OpenStation() = 0;
  virtual Result CloseStation() = 0;
  virtual Result Connect(const NetworkInfo& network,
    const SecurityConfig& security, const UserConfigIpc& user, int version,
    ConnectOption option) = 0;
  virtual Result ConnectPrivate(const NetworkConfig& network,
    const SecurityConfig& security, const SecurityParameter& parameter,
    const UserConfigIpc& user, int version, ConnectOption option) = 0;
  virtual Result Disconnect() = 0;
  virtual Result EnableActionFrame(const ActionFrameSettingsIpc& settings) = 0;
  virtual Result DisableActionFrame() = 0;
  virtual Result SendActionFrame(MacAddress destination, MacAddress bssid,
    const sf::InBuffer& data, int channel, MessageFlagSet flags) = 0;
  virtual Result RecvActionFrame(const sf::OutBuffer& outData,
    sf::Out<uint32_t> pOutSize, sf::Out<MacAddress> pOutSource,
    sf::Out<MacAddress> pOutBssid, sf::Out<uint16_t> pOutChannel,
    sf::Out<int> pOutLinkLevel, MessageFlagSet flags) = 0;
  virtual Result SetHomeChannel(int channel) = 0;
  virtual Result SetTxPower(int power) = 0;
  virtual Result ResetTxPower() = 0;
  virtual void Reserved39() = 0;
  virtual Result Finalize() = 0;
};

class IUserLocalCommunicationService : public ILocalCommunicationService {
 public:
  virtual Result Initialize(uint64_t processId, int protocolVersion) = 0;
  virtual Result SetOperationMode(OperationMode mode) = 0;
};

class ISystemLocalCommunicationService : public ILocalCommunicationService {
 public:
  virtual Result SetOperationModeWithPrivilege(OperationMode mode) = 0;
  virtual void Reserved42() = 0;
  virtual Result InitializeSystem(uint64_t processId, int protocolVersion,
    int version) = 0;
};

class IClientProcessMonitor : public sf::IServiceObject {
 public:
  virtual void Reserved2() = 0;
  virtual void Reserved3() = 0;
  virtual Result RegisterClient(uint64_t processId) = 0;
};

class IUserServiceCreator : public sf::IServiceObject {
 public:
  virtual void Reserved2() = 0;
  virtual void Reserved3() = 0;
  virtual Result CreateUserLocalCommunicationService(
    const sf::Out<sf::SharedPointer<IUserLocalCommunicationService>>&
      pOutService) = 0;
  virtual Result CreateClientProcessMonitor(
    const sf::Out<sf::SharedPointer<IClientProcessMonitor>>& pOutMonitor)
    = 0;
};

class ISystemServiceCreator : public sf::IServiceObject {
 public:
  virtual void Reserved2() = 0;
  virtual void Reserved3() = 0;
  virtual Result CreateSystemLocalCommunicationService(
    const sf::Out<sf::SharedPointer<ISystemLocalCommunicationService>>&
      pOutService) = 0;
  virtual Result CreateClientProcessMonitor(
    const sf::Out<sf::SharedPointer<IClientProcessMonitor>>& pOutMonitor)
    = 0;
};

class IMonitorService : public sf::IServiceObject {
 public:
  virtual void Reserved2() = 0;
  virtual void Reserved3() = 0;
  virtual Result GetState(sf::Out<State> pOutState) = 0;
  virtual Result GetNetworkInfo(sf::Out<NetworkInfo> pOutInfo) = 0;
  virtual Result GetIpv4Address(sf::Out<Ipv4Address> pOutAddress,
    sf::Out<SubnetMask> pOutMask) = 0;
  virtual void Reserved7() = 0;
  virtual void Reserved8() = 0;
  virtual void Reserved9() = 0;
  virtual Result InitializeMonitor() = 0;
  virtual Result FinalizeMonitor() = 0;
};

class IMonitorServiceCreator : public sf::IServiceObject {
 public:
  virtual void Reserved2() = 0;
  virtual void Reserved3() = 0;
  virtual Result CreateMonitorService(
    const sf::Out<sf::SharedPointer<IMonitorService>>& pOutService) = 0;
};

sf::SharedPointer<IUserServiceCreator> CreateUserServiceCreatorByHipc();
sf::SharedPointer<ISystemServiceCreator> CreateSystemServiceCreatorByHipc();
sf::SharedPointer<IMonitorServiceCreator>
  CreateMonitorServiceCreatorByHipc();

}
