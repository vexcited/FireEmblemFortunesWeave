#include <stddef.h>

#include <utility>

#include "nn/sf/cmif/client/cmif_proxy_factory.hpp"
#include "nn/socket/resolver/resolver_interfaces.hpp"

namespace nn::sf {

template <typename Allocator>
class StatelessAllocationPolicy;

template <size_t Size, typename Tag>
class ExpHeapStaticAllocator;

}

// The original tags live in anonymous namespaces of the client units.

namespace nn::socket::resolver {

struct CreateResolverByHipcTag;

}

namespace nn::sf::cmif::client::detail {

template <typename Kind, typename AllocationPolicy, typename Modifier>
class CmifProxyImpl<socket::resolver::IPrivateResolver, Kind, AllocationPolicy,
  socket::resolver::IPrivateResolver, Modifier>
  : public CmifProxyImplBase<socket::resolver::IPrivateResolver, Kind> {
public:
  Result SetSupportedProtocols(uint32_t protocols) override {
    return ProxyMethodInvoker<Kind, false,
      void(uint32_t)>::Invoke(&this->m_State, 0, protocols);
  }

  Result GetSupportedProtocols(sf::Out<uint32_t> pOutProtocols) override {
    return ProxyMethodInvoker<Kind, false,
      void(sf::Out<uint32_t>)>::Invoke(&this->m_State, 1, pOutProtocols);
  }

  Result ResolverSetDnsAddressesRequest(const sf::InBuffer& addresses,
    uint32_t count) override {
    return ProxyMethodInvoker<Kind, false,
      void(const sf::InBuffer&, uint32_t)>::Invoke(&this->m_State, 2, addresses,
      count);
  }
};

template <typename Kind, typename AllocationPolicy, typename Modifier>
class CmifProxyImpl<socket::resolver::IResolver, Kind, AllocationPolicy,
  socket::resolver::IResolver, Modifier>
  : public CmifProxyImplBase<socket::resolver::IResolver, Kind> {
public:
  Result GetHostStringErrorRequest(uint32_t error,
    const sf::OutBuffer& string) override {
    return ProxyMethodInvoker<Kind, false,
      void(uint32_t, const sf::OutBuffer&)>::Invoke(&this->m_State, 4, error,
      string);
  }

  Result GetGaiStringErrorRequest(uint32_t error,
    const sf::OutBuffer& string) override {
    return ProxyMethodInvoker<Kind, false,
      void(uint32_t, const sf::OutBuffer&)>::Invoke(&this->m_State, 5, error,
      string);
  }

  Result GetHostByNameRequestWithOptions(uint64_t processId,
    const sf::InBuffer& name, const sf::OutBuffer& hostEnt,
    sf::Out<uint32_t> pOutSize, uint32_t cancelHandle,
    const sf::InBuffer& options, uint64_t optionCount,
    sf::Out<int32_t> pOutHostError, sf::Out<int32_t> pOutErrno) override {
    return ProxyMethodInvoker<Kind, true,
      void(uint64_t, const sf::InBuffer&, const sf::OutBuffer&,
      sf::Out<uint32_t>, uint32_t, const sf::InBuffer&, uint64_t,
      sf::Out<int32_t>, sf::Out<int32_t>)>::Invoke(&this->m_State, 10,
      processId, name, hostEnt, pOutSize, cancelHandle, options, optionCount,
      pOutHostError, pOutErrno);
  }

  Result GetHostByAddrRequestWithOptions(uint64_t processId,
    const sf::InBuffer& address, uint32_t length, uint32_t family,
    const sf::OutBuffer& hostEnt, sf::Out<uint32_t> pOutSize,
    uint32_t cancelHandle, const sf::InBuffer& options, uint64_t optionCount,
    sf::Out<int32_t> pOutHostError, sf::Out<int32_t> pOutErrno) override {
    return ProxyMethodInvoker<Kind, true,
      void(uint64_t, const sf::InBuffer&, uint32_t, uint32_t,
      const sf::OutBuffer&, sf::Out<uint32_t>, uint32_t, const sf::InBuffer&,
      uint64_t, sf::Out<int32_t>, sf::Out<int32_t>)>::Invoke(&this->m_State, 11,
      processId, address, length, family, hostEnt, pOutSize, cancelHandle,
      options, optionCount, pOutHostError, pOutErrno);
  }

  Result GetAddrInfoRequestWithOptions(uint64_t processId,
    const sf::InBuffer& node, const sf::InBuffer& service,
    const sf::InBuffer& hints, const sf::OutBuffer& addrInfo,
    sf::Out<uint32_t> pOutSize, sf::Out<int32_t> pOutAiError,
    uint32_t cancelHandle, const sf::InBuffer& options, uint64_t optionCount,
    sf::Out<int32_t> pOutHostError, sf::Out<int32_t> pOutErrno) override {
    return ProxyMethodInvoker<Kind, true,
      void(uint64_t, const sf::InBuffer&, const sf::InBuffer&,
      const sf::InBuffer&, const sf::OutBuffer&, sf::Out<uint32_t>,
      sf::Out<int32_t>, uint32_t, const sf::InBuffer&, uint64_t,
      sf::Out<int32_t>, sf::Out<int32_t>)>::Invoke(&this->m_State, 12,
      processId, node, service, hints, addrInfo, pOutSize, pOutAiError,
      cancelHandle, options, optionCount, pOutHostError, pOutErrno);
  }

  Result GetNameInfoRequestWithOptions(uint64_t processId,
    const sf::InBuffer& address, const sf::OutBuffer& host,
    const sf::OutBuffer& service, uint32_t flags, sf::Out<int32_t> pOutAiError,
    uint32_t cancelHandle, const sf::InBuffer& options, uint64_t optionCount,
    sf::Out<int32_t> pOutHostError, sf::Out<int32_t> pOutErrno) override {
    return ProxyMethodInvoker<Kind, true,
      void(uint64_t, const sf::InBuffer&, const sf::OutBuffer&,
      const sf::OutBuffer&, uint32_t, sf::Out<int32_t>, uint32_t,
      const sf::InBuffer&, uint64_t, sf::Out<int32_t>,
      sf::Out<int32_t>)>::Invoke(&this->m_State, 13, processId, address, host,
      service, flags, pOutAiError, cancelHandle, options, optionCount,
      pOutHostError, pOutErrno);
  }

  Result ResolverSetOptionRequest(uint64_t processId, uint32_t count,
    const sf::InBuffer& option, sf::Out<int32_t> pOutResult,
    sf::Out<int32_t> pOutErrno) override {
    return ProxyMethodInvoker<Kind, true,
      void(uint64_t, uint32_t, const sf::InBuffer&, sf::Out<int32_t>,
      sf::Out<int32_t>)>::Invoke(&this->m_State, 14, processId, count, option,
      pOutResult, pOutErrno);
  }

  Result ResolverGetOptionRequest(uint64_t processId, uint32_t count,
    uint32_t key, const sf::InBuffer& option, const sf::OutBuffer& value,
    sf::Out<uint32_t> pOutSize, sf::Out<int32_t> pOutResult,
    sf::Out<int32_t> pOutErrno) override {
    return ProxyMethodInvoker<Kind, true,
      void(uint64_t, uint32_t, uint32_t, const sf::InBuffer&,
      const sf::OutBuffer&, sf::Out<uint32_t>, sf::Out<int32_t>,
      sf::Out<int32_t>)>::Invoke(&this->m_State, 15, processId, count, key,
      option, value, pOutSize, pOutResult, pOutErrno);
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

using CreateResolverByHipcPolicy = nn::sf::StatelessAllocationPolicy<
  nn::sf::ExpHeapStaticAllocator<4096,
    nn::socket::resolver::CreateResolverByHipcTag>>;

}

template class nn::sf::cmif::client::detail::CmifProxyImpl<
  nn::socket::resolver::IPrivateResolver, PlainKind, CreateResolverByHipcPolicy,
  nn::socket::resolver::IPrivateResolver, DefaultModifier>;

template class nn::sf::cmif::client::detail::CmifProxyImpl<
  nn::socket::resolver::IResolver, PlainKind, CreateResolverByHipcPolicy,
  nn::socket::resolver::IResolver, DefaultModifier>;
