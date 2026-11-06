#include <stddef.h>

#include <utility>

#include "nn/ldn/detail/ldn_service.hpp"
#include "nn/sf/cmif/client/cmif_proxy_factory.hpp"

namespace nn::sf {

template <typename Allocator>
class StatelessAllocationPolicy;

template <size_t Size, typename Tag>
class ExpHeapStaticAllocator;

}

// The original tags live in anonymous namespaces of the client units.

namespace nn::ldn::detail {

struct CreateServiceByHipcTag;

}

namespace nn::sf::cmif::client::detail {

template <typename Kind, typename AllocationPolicy, typename Modifier>
class CmifProxyImpl<ldn::detail::IClientProcessMonitor, Kind, AllocationPolicy,
  ldn::detail::IClientProcessMonitor, Modifier>
  : public CmifProxyImplBase<ldn::detail::IClientProcessMonitor, Kind> {
public:
  Result RegisterClient(uint64_t processId) override {
    return ProxyMethodInvoker<Kind, true,
      void(uint64_t)>::Invoke(&this->m_State, 0, processId);
  }
};

template <typename Kind, typename AllocationPolicy, typename Modifier>
class CmifProxyImpl<ldn::detail::IMonitorService, Kind, AllocationPolicy,
  ldn::detail::IMonitorService, Modifier>
  : public CmifProxyImplBase<ldn::detail::IMonitorService, Kind> {
public:
  Result GetState(sf::Out<ldn::State> pOutState) override {
    return ProxyMethodInvoker<Kind, false,
      void(sf::Out<ldn::State>)>::Invoke(&this->m_State, 0, pOutState);
  }

  Result GetIpv4Address(sf::Out<ldn::Ipv4Address> pOutAddress,
    sf::Out<ldn::SubnetMask> pOutMask) override {
    return ProxyMethodInvoker<Kind, false,
      void(sf::Out<ldn::Ipv4Address>, sf::Out<ldn::SubnetMask>)>::Invoke(
      &this->m_State, 2, pOutAddress, pOutMask);
  }

  Result InitializeMonitor() override {
    return ProxyMethodInvoker<Kind, false,
      void()>::Invoke(&this->m_State, 100);
  }
};

template <typename Kind, typename AllocationPolicy, typename Modifier>
class CmifProxyImpl<ldn::detail::IMonitorServiceCreator, Kind, AllocationPolicy,
  ldn::detail::IMonitorServiceCreator, Modifier>
  : public CmifProxyImplBase<ldn::detail::IMonitorServiceCreator, Kind> {
public:
  Result CreateMonitorService(
    const sf::Out<sf::SharedPointer<ldn::detail::IMonitorService>>&
      pOutService) override {
    return InvokeWithStatelessOutObject<Kind, false, 0, AllocationPolicy>(
      &this->m_State, pOutService);
  }
};

template <typename Kind, typename AllocationPolicy, typename Modifier>
class CmifProxyImpl<ldn::detail::ISystemLocalCommunicationService, Kind,
  AllocationPolicy, ldn::detail::ISystemLocalCommunicationService, Modifier>
  : public CmifProxyImplBase<
      ldn::detail::ISystemLocalCommunicationService, Kind> {
public:
  Result GetState(sf::Out<ldn::State> pOutState) override {
    return ProxyMethodInvoker<Kind, false,
      void(sf::Out<ldn::State>)>::Invoke(&this->m_State, 0, pOutState);
  }

  Result GetIpv4Address(sf::Out<ldn::Ipv4Address> pOutAddress,
    sf::Out<ldn::SubnetMask> pOutMask) override {
    return ProxyMethodInvoker<Kind, false,
      void(sf::Out<ldn::Ipv4Address>, sf::Out<ldn::SubnetMask>)>::Invoke(
      &this->m_State, 2, pOutAddress, pOutMask);
  }

  Result GetDisconnectReason(sf::Out<int16_t> pOutReason) override {
    return ProxyMethodInvoker<Kind, false,
      void(sf::Out<int16_t>)>::Invoke(&this->m_State, 3, pOutReason);
  }

  Result GetNetworkConfig(sf::Out<ldn::NetworkConfig> pOutConfig) override {
    return ProxyMethodInvoker<Kind, false,
      void(sf::Out<ldn::NetworkConfig>)>::Invoke(&this->m_State, 5, pOutConfig);
  }

  Result SetWirelessControllerPolicy(
    util::BitPack<uint32_t, ldn::WirelessControllerPolicyField>
      policy) override {
    return ProxyMethodInvoker<Kind, false,
      void(
      util::BitPack<uint32_t, ldn::WirelessControllerPolicyField>)>::Invoke(
      &this->m_State, 104, policy);
  }

  Result SetWirelessAudioPolicy(
    util::BitPack<uint32_t, ldn::WirelessAudioPolicyField> policy) override {
    return ProxyMethodInvoker<Kind, false,
      void(util::BitPack<uint32_t, ldn::WirelessAudioPolicyField>)>::Invoke(
      &this->m_State, 105, policy);
  }

  Result SetProtocol(int32_t protocol) override {
    return ProxyMethodInvoker<Kind, false,
      void(int32_t)>::Invoke(&this->m_State, 106, protocol);
  }

  Result DestroyNetwork() override {
    return ProxyMethodInvoker<Kind, false,
      void()>::Invoke(&this->m_State, 204);
  }

  Result Reject(ldn::Ipv4Address address) override {
    return ProxyMethodInvoker<Kind, false,
      void(ldn::Ipv4Address)>::Invoke(&this->m_State, 205, address);
  }

  Result SetAdvertiseData(const sf::InBuffer& data) override {
    return ProxyMethodInvoker<Kind, false,
      void(const sf::InBuffer&)>::Invoke(&this->m_State, 206, data);
  }

  Result AddAcceptFilterEntry(ldn::MacAddress address) override {
    return ProxyMethodInvoker<Kind, false,
      void(ldn::MacAddress)>::Invoke(&this->m_State, 208, address);
  }

  Result ClearAcceptFilter() override {
    return ProxyMethodInvoker<Kind, false,
      void()>::Invoke(&this->m_State, 209);
  }

  Result CloseStation() override {
    return ProxyMethodInvoker<Kind, false,
      void()>::Invoke(&this->m_State, 301);
  }

  Result Disconnect() override {
    return ProxyMethodInvoker<Kind, false,
      void()>::Invoke(&this->m_State, 304);
  }

  Result EnableActionFrame(
    const ldn::detail::ActionFrameSettingsIpc& settings) override {
    return ProxyMethodInvoker<Kind, false,
      void(const ldn::detail::ActionFrameSettingsIpc&)>::Invoke(&this->m_State,
      500, settings);
  }

  Result DisableActionFrame() override {
    return ProxyMethodInvoker<Kind, false,
      void()>::Invoke(&this->m_State, 501);
  }

  Result RecvActionFrame(const sf::OutBuffer& outData,
    sf::Out<uint32_t> pOutSize, sf::Out<ldn::MacAddress> pOutSource,
    sf::Out<ldn::MacAddress> pOutBssid, sf::Out<uint16_t> pOutChannel,
    sf::Out<int32_t> pOutLinkLevel,
    util::BitFlagSet<32, ldn::MessageFlag> flags) override {
    return ProxyMethodInvoker<Kind, false,
      void(const sf::OutBuffer&, sf::Out<uint32_t>, sf::Out<ldn::MacAddress>,
      sf::Out<ldn::MacAddress>, sf::Out<uint16_t>, sf::Out<int32_t>,
      util::BitFlagSet<32, ldn::MessageFlag>)>::Invoke(&this->m_State, 503,
      outData, pOutSize, pOutSource, pOutBssid, pOutChannel, pOutLinkLevel,
      flags);
  }

  Result ResetTxPower() override {
    return ProxyMethodInvoker<Kind, false,
      void()>::Invoke(&this->m_State, 601);
  }

  Result Finalize() override {
    return ProxyMethodInvoker<Kind, false,
      void()>::Invoke(&this->m_State, 401);
  }

  Result SetOperationModeWithPrivilege(ldn::OperationMode mode) override {
    return ProxyMethodInvoker<Kind, false,
      void(ldn::OperationMode)>::Invoke(&this->m_State, 402, mode);
  }
};

template <typename Kind, typename AllocationPolicy, typename Modifier>
class CmifProxyImpl<ldn::detail::ISystemServiceCreator, Kind, AllocationPolicy,
  ldn::detail::ISystemServiceCreator, Modifier>
  : public CmifProxyImplBase<ldn::detail::ISystemServiceCreator, Kind> {
public:
  Result CreateSystemLocalCommunicationService(
    const sf::Out<sf::SharedPointer<
      ldn::detail::ISystemLocalCommunicationService>>& pOutService) override {
    return InvokeWithStatelessOutObject<Kind, false, 0, AllocationPolicy>(
      &this->m_State, pOutService);
  }

  Result CreateClientProcessMonitor(
    const sf::Out<sf::SharedPointer<ldn::detail::IClientProcessMonitor>>&
      pOutMonitor) override {
    return InvokeWithStatelessOutObject<Kind, false, 1, AllocationPolicy>(
      &this->m_State, pOutMonitor);
  }
};

template <typename Kind, typename AllocationPolicy, typename Modifier>
class CmifProxyImpl<ldn::detail::IUserLocalCommunicationService, Kind,
  AllocationPolicy, ldn::detail::IUserLocalCommunicationService, Modifier>
  : public CmifProxyImplBase<
      ldn::detail::IUserLocalCommunicationService, Kind> {
public:
  Result GetState(sf::Out<ldn::State> pOutState) override {
    return ProxyMethodInvoker<Kind, false,
      void(sf::Out<ldn::State>)>::Invoke(&this->m_State, 0, pOutState);
  }

  Result GetIpv4Address(sf::Out<ldn::Ipv4Address> pOutAddress,
    sf::Out<ldn::SubnetMask> pOutMask) override {
    return ProxyMethodInvoker<Kind, false,
      void(sf::Out<ldn::Ipv4Address>, sf::Out<ldn::SubnetMask>)>::Invoke(
      &this->m_State, 2, pOutAddress, pOutMask);
  }

  Result GetDisconnectReason(sf::Out<int16_t> pOutReason) override {
    return ProxyMethodInvoker<Kind, false,
      void(sf::Out<int16_t>)>::Invoke(&this->m_State, 3, pOutReason);
  }

  Result GetNetworkConfig(sf::Out<ldn::NetworkConfig> pOutConfig) override {
    return ProxyMethodInvoker<Kind, false,
      void(sf::Out<ldn::NetworkConfig>)>::Invoke(&this->m_State, 5, pOutConfig);
  }

  Result SetWirelessControllerPolicy(
    util::BitPack<uint32_t, ldn::WirelessControllerPolicyField>
      policy) override {
    return ProxyMethodInvoker<Kind, false,
      void(
      util::BitPack<uint32_t, ldn::WirelessControllerPolicyField>)>::Invoke(
      &this->m_State, 104, policy);
  }

  Result SetWirelessAudioPolicy(
    util::BitPack<uint32_t, ldn::WirelessAudioPolicyField> policy) override {
    return ProxyMethodInvoker<Kind, false,
      void(util::BitPack<uint32_t, ldn::WirelessAudioPolicyField>)>::Invoke(
      &this->m_State, 105, policy);
  }

  Result SetProtocol(int32_t protocol) override {
    return ProxyMethodInvoker<Kind, false,
      void(int32_t)>::Invoke(&this->m_State, 106, protocol);
  }

  Result DestroyNetwork() override {
    return ProxyMethodInvoker<Kind, false,
      void()>::Invoke(&this->m_State, 204);
  }

  Result Reject(ldn::Ipv4Address address) override {
    return ProxyMethodInvoker<Kind, false,
      void(ldn::Ipv4Address)>::Invoke(&this->m_State, 205, address);
  }

  Result SetAdvertiseData(const sf::InBuffer& data) override {
    return ProxyMethodInvoker<Kind, false,
      void(const sf::InBuffer&)>::Invoke(&this->m_State, 206, data);
  }

  Result AddAcceptFilterEntry(ldn::MacAddress address) override {
    return ProxyMethodInvoker<Kind, false,
      void(ldn::MacAddress)>::Invoke(&this->m_State, 208, address);
  }

  Result ClearAcceptFilter() override {
    return ProxyMethodInvoker<Kind, false,
      void()>::Invoke(&this->m_State, 209);
  }

  Result CloseStation() override {
    return ProxyMethodInvoker<Kind, false,
      void()>::Invoke(&this->m_State, 301);
  }

  Result Disconnect() override {
    return ProxyMethodInvoker<Kind, false,
      void()>::Invoke(&this->m_State, 304);
  }

  Result EnableActionFrame(
    const ldn::detail::ActionFrameSettingsIpc& settings) override {
    return ProxyMethodInvoker<Kind, false,
      void(const ldn::detail::ActionFrameSettingsIpc&)>::Invoke(&this->m_State,
      500, settings);
  }

  Result DisableActionFrame() override {
    return ProxyMethodInvoker<Kind, false,
      void()>::Invoke(&this->m_State, 501);
  }

  Result RecvActionFrame(const sf::OutBuffer& outData,
    sf::Out<uint32_t> pOutSize, sf::Out<ldn::MacAddress> pOutSource,
    sf::Out<ldn::MacAddress> pOutBssid, sf::Out<uint16_t> pOutChannel,
    sf::Out<int32_t> pOutLinkLevel,
    util::BitFlagSet<32, ldn::MessageFlag> flags) override {
    return ProxyMethodInvoker<Kind, false,
      void(const sf::OutBuffer&, sf::Out<uint32_t>, sf::Out<ldn::MacAddress>,
      sf::Out<ldn::MacAddress>, sf::Out<uint16_t>, sf::Out<int32_t>,
      util::BitFlagSet<32, ldn::MessageFlag>)>::Invoke(&this->m_State, 503,
      outData, pOutSize, pOutSource, pOutBssid, pOutChannel, pOutLinkLevel,
      flags);
  }

  Result ResetTxPower() override {
    return ProxyMethodInvoker<Kind, false,
      void()>::Invoke(&this->m_State, 601);
  }

  Result Finalize() override {
    return ProxyMethodInvoker<Kind, false,
      void()>::Invoke(&this->m_State, 401);
  }

  Result Initialize(uint64_t processId, int32_t protocolVersion) override {
    return ProxyMethodInvoker<Kind, true,
      void(uint64_t, int32_t)>::Invoke(&this->m_State, 402, processId,
      protocolVersion);
  }

  Result SetOperationMode(ldn::OperationMode mode) override {
    return ProxyMethodInvoker<Kind, false,
      void(ldn::OperationMode)>::Invoke(&this->m_State, 403, mode);
  }
};

template <typename Kind, typename AllocationPolicy, typename Modifier>
class CmifProxyImpl<ldn::detail::IUserServiceCreator, Kind, AllocationPolicy,
  ldn::detail::IUserServiceCreator, Modifier>
  : public CmifProxyImplBase<ldn::detail::IUserServiceCreator, Kind> {
public:
  Result CreateUserLocalCommunicationService(
    const sf::Out<sf::SharedPointer<
      ldn::detail::IUserLocalCommunicationService>>& pOutService) override {
    return InvokeWithStatelessOutObject<Kind, false, 0, AllocationPolicy>(
      &this->m_State, pOutService);
  }

  Result CreateClientProcessMonitor(
    const sf::Out<sf::SharedPointer<ldn::detail::IClientProcessMonitor>>&
      pOutMonitor) override {
    return InvokeWithStatelessOutObject<Kind, false, 1, AllocationPolicy>(
      &this->m_State, pOutMonitor);
  }
};

}

namespace {

using PlainKind = nn::sf::hipc::client::Hipc2ProxyKindBase<
  nn::sf::hipc::detail::MessageType::CmifRequestWithContext>;

using DomainKind = nn::sf::cmif::client::CmifDomainProxyKind<
  nn::sf::hipc::client::Hipc2ClientSessionManagedProxyKindBase<PlainKind>>;

using DefaultModifier = nn::sf::cmif::client::detail::ProcessModifierImpl<
  nn::sf::cmif::client::DefaultProxyFilterTag>;

using CreateServiceByHipcPolicy = nn::sf::StatelessAllocationPolicy<
  nn::sf::ExpHeapStaticAllocator<16384,
    nn::ldn::detail::CreateServiceByHipcTag>>;

}

template class nn::sf::cmif::client::detail::CmifProxyImpl<
  nn::ldn::detail::IClientProcessMonitor, DomainKind, CreateServiceByHipcPolicy,
  nn::ldn::detail::IClientProcessMonitor, DefaultModifier>;

template class nn::sf::cmif::client::detail::CmifProxyImpl<
  nn::ldn::detail::IMonitorService, PlainKind, CreateServiceByHipcPolicy,
  nn::ldn::detail::IMonitorService, DefaultModifier>;

template class nn::sf::cmif::client::detail::CmifProxyImpl<
  nn::ldn::detail::IMonitorServiceCreator, PlainKind, CreateServiceByHipcPolicy,
  nn::ldn::detail::IMonitorServiceCreator, DefaultModifier>;

template class nn::sf::cmif::client::detail::CmifProxyImpl<
  nn::ldn::detail::ISystemLocalCommunicationService, DomainKind,
  CreateServiceByHipcPolicy, nn::ldn::detail::ISystemLocalCommunicationService,
  DefaultModifier>;

template class nn::sf::cmif::client::detail::CmifProxyImpl<
  nn::ldn::detail::ISystemServiceCreator, DomainKind, CreateServiceByHipcPolicy,
  nn::ldn::detail::ISystemServiceCreator, DefaultModifier>;

template class nn::sf::cmif::client::detail::CmifProxyImpl<
  nn::ldn::detail::IUserLocalCommunicationService, DomainKind,
  CreateServiceByHipcPolicy, nn::ldn::detail::IUserLocalCommunicationService,
  DefaultModifier>;

template class nn::sf::cmif::client::detail::CmifProxyImpl<
  nn::ldn::detail::IUserServiceCreator, DomainKind, CreateServiceByHipcPolicy,
  nn::ldn::detail::IUserServiceCreator, DefaultModifier>;
