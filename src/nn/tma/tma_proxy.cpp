#include <stddef.h>

#include <utility>

#include "nn/htc/htc_service_holder.hpp"
#include "nn/htcs/detail/htcs_tma.hpp"
#include "nn/sf/cmif/client/cmif_proxy_factory.hpp"

namespace nn::sf {

template <typename Allocator>
class StatelessAllocationPolicy;

template <size_t Size, typename Tag>
class ExpHeapStaticAllocator;

}

// The original tags live in anonymous namespaces of the client units.

namespace nn::htcs {

struct CreateTmaManagerByHipcTag;

}

namespace nn::sf::cmif::client::detail {

template <typename Kind, typename AllocationPolicy, typename Modifier>
class CmifProxyImpl<tma::IHtcsManager, Kind, AllocationPolicy,
  tma::IHtcsManager, Modifier>
  : public CmifProxyImplBase<tma::IHtcsManager, Kind> {
public:
  Result GetPeerNameAny(sf::Out<htcs::HtcsPeerName> pOutName) override {
    return ProxyMethodInvoker<Kind, false,
      void(sf::Out<htcs::HtcsPeerName>)>::Invoke(&this->m_State, 10, pOutName);
  }

  Result GetDefaultHostName(sf::Out<htcs::HtcsPeerName> pOutName) override {
    return ProxyMethodInvoker<Kind, false,
      void(sf::Out<htcs::HtcsPeerName>)>::Invoke(&this->m_State, 11, pOutName);
  }

  Result RegisterProcessId(uint64_t processId) override {
    return ProxyMethodInvoker<Kind, true,
      void(uint64_t)>::Invoke(&this->m_State, 100, processId);
  }

  Result MonitorManager(uint64_t processId) override {
    return ProxyMethodInvoker<Kind, true,
      void(uint64_t)>::Invoke(&this->m_State, 101, processId);
  }

  Result StartSelect(sf::Out<uint32_t> pOutTaskId,
    sf::Out<sf::NativeHandle> pOutEvent, const sf::InArray<int32_t>& readFds,
    const sf::InArray<int32_t>& writeFds, const sf::InArray<int32_t>& exceptFds,
    int64_t seconds, int64_t microseconds) override {
    return ProxyMethodInvoker<Kind, false,
      void(sf::Out<uint32_t>, sf::Out<sf::NativeHandle>,
      const sf::InArray<int32_t>&, const sf::InArray<int32_t>&,
      const sf::InArray<int32_t>&, int64_t, int64_t)>::Invoke(&this->m_State,
      130, pOutTaskId, pOutEvent, readFds, writeFds, exceptFds, seconds,
      microseconds);
  }

  Result EndSelect(sf::Out<int32_t> pOutError, sf::Out<int32_t> pOutCount,
    const sf::OutArray<int32_t>& readFds, const sf::OutArray<int32_t>& writeFds,
    const sf::OutArray<int32_t>& exceptFds, uint32_t taskId) override {
    return ProxyMethodInvoker<Kind, false,
      void(sf::Out<int32_t>, sf::Out<int32_t>, const sf::OutArray<int32_t>&,
      const sf::OutArray<int32_t>&, const sf::OutArray<int32_t>&,
      uint32_t)>::Invoke(&this->m_State, 131, pOutError, pOutCount, readFds,
      writeFds, exceptFds, taskId);
  }
};

template <typename Kind, typename AllocationPolicy, typename Modifier>
class CmifProxyImpl<tma::ISocket, Kind, AllocationPolicy, tma::ISocket,
  Modifier>
  : public CmifProxyImplBase<tma::ISocket, Kind> {
public:
  Result Close(sf::Out<int32_t> pOutError,
    sf::Out<int32_t> pOutResult) override {
    return ProxyMethodInvoker<Kind, false,
      void(sf::Out<int32_t>, sf::Out<int32_t>)>::Invoke(&this->m_State, 0,
      pOutError, pOutResult);
  }

  Result Connect(sf::Out<int32_t> pOutError, sf::Out<int32_t> pOutResult,
    const htcs::SockAddrHtcs& address) override {
    return ProxyMethodInvoker<Kind, false,
      void(sf::Out<int32_t>, sf::Out<int32_t>,
      const htcs::SockAddrHtcs&)>::Invoke(&this->m_State, 1, pOutError,
      pOutResult, address);
  }

  Result Bind(sf::Out<int32_t> pOutError, sf::Out<int32_t> pOutResult,
    const htcs::SockAddrHtcs& address) override {
    return ProxyMethodInvoker<Kind, false,
      void(sf::Out<int32_t>, sf::Out<int32_t>,
      const htcs::SockAddrHtcs&)>::Invoke(&this->m_State, 2, pOutError,
      pOutResult, address);
  }

  Result Listen(sf::Out<int32_t> pOutError, sf::Out<int32_t> pOutResult,
    int32_t backlogCount) override {
    return ProxyMethodInvoker<Kind, false,
      void(sf::Out<int32_t>, sf::Out<int32_t>, int32_t)>::Invoke(&this->m_State,
      3, pOutError, pOutResult, backlogCount);
  }

  Result Shutdown(sf::Out<int32_t> pOutError, sf::Out<int32_t> pOutResult,
    int32_t how) override {
    return ProxyMethodInvoker<Kind, false,
      void(sf::Out<int32_t>, sf::Out<int32_t>, int32_t)>::Invoke(&this->m_State,
      7, pOutError, pOutResult, how);
  }

  Result Fcntl(sf::Out<int32_t> pOutError, sf::Out<int32_t> pOutResult,
    int32_t command, int32_t value) override {
    return ProxyMethodInvoker<Kind, false,
      void(sf::Out<int32_t>, sf::Out<int32_t>, int32_t, int32_t)>::Invoke(
      &this->m_State, 8, pOutError, pOutResult, command, value);
  }

  Result AcceptStart(sf::Out<uint32_t> pOutTaskId,
    sf::Out<sf::NativeHandle> pOutEvent) override {
    return ProxyMethodInvoker<Kind, false,
      void(sf::Out<uint32_t>, sf::Out<sf::NativeHandle>)>::Invoke(
      &this->m_State, 9, pOutTaskId, pOutEvent);
  }

  Result RecvStart(sf::Out<uint32_t> pOutTaskId,
    sf::Out<sf::NativeHandle> pOutEvent, int32_t size, int32_t flags) override {
    return ProxyMethodInvoker<Kind, false,
      void(sf::Out<uint32_t>, sf::Out<sf::NativeHandle>, int32_t,
      int32_t)>::Invoke(&this->m_State, 11, pOutTaskId, pOutEvent, size, flags);
  }

  Result RecvResults(sf::Out<int32_t> pOutError, sf::Out<int64_t> pOutSize,
    const sf::OutBuffer& buffer, uint32_t taskId) override {
    return ProxyMethodInvoker<Kind, false,
      void(sf::Out<int32_t>, sf::Out<int64_t>, const sf::OutBuffer&,
      uint32_t)>::Invoke(&this->m_State, 12, pOutError, pOutSize, buffer,
      taskId);
  }

  Result SendResults(sf::Out<int32_t> pOutError, sf::Out<int64_t> pOutSize,
    uint32_t taskId) override {
    return ProxyMethodInvoker<Kind, false,
      void(sf::Out<int32_t>, sf::Out<int64_t>, uint32_t)>::Invoke(
      &this->m_State, 16, pOutError, pOutSize, taskId);
  }

  Result StartSend(sf::Out<uint32_t> pOutTaskId,
    sf::Out<sf::NativeHandle> pOutEvent, sf::Out<int64_t> pOutMaxSize,
    int64_t size, int32_t flags) override {
    return ProxyMethodInvoker<Kind, false,
      void(sf::Out<uint32_t>, sf::Out<sf::NativeHandle>, sf::Out<int64_t>,
      int64_t, int32_t)>::Invoke(&this->m_State, 17, pOutTaskId, pOutEvent,
      pOutMaxSize, size, flags);
  }

  Result EndSend(sf::Out<int32_t> pOutError, sf::Out<int64_t> pOutSize,
    uint32_t taskId) override {
    return ProxyMethodInvoker<Kind, false,
      void(sf::Out<int32_t>, sf::Out<int64_t>, uint32_t)>::Invoke(
      &this->m_State, 19, pOutError, pOutSize, taskId);
  }

  Result StartRecv(sf::Out<uint32_t> pOutTaskId,
    sf::Out<sf::NativeHandle> pOutEvent, int64_t size, int32_t flags) override {
    return ProxyMethodInvoker<Kind, false,
      void(sf::Out<uint32_t>, sf::Out<sf::NativeHandle>, int64_t,
      int32_t)>::Invoke(&this->m_State, 20, pOutTaskId, pOutEvent, size, flags);
  }

  Result EndRecv(sf::Out<int32_t> pOutError, sf::Out<int64_t> pOutSize,
    const sf::OutBuffer& buffer, uint32_t taskId) override {
    return ProxyMethodInvoker<Kind, false,
      void(sf::Out<int32_t>, sf::Out<int64_t>, const sf::OutBuffer&,
      uint32_t)>::Invoke(&this->m_State, 21, pOutError, pOutSize, buffer,
      taskId);
  }

  Result SendStart(sf::Out<uint32_t> pOutTaskId,
    sf::Out<sf::NativeHandle> pOutEvent, const sf::InBuffer& buffer,
    int32_t flags) override {
    return ProxyMethodInvoker<Kind, false,
      void(sf::Out<uint32_t>, sf::Out<sf::NativeHandle>, const sf::InBuffer&,
      int32_t)>::Invoke(&this->m_State, 22, pOutTaskId, pOutEvent, buffer,
      flags);
  }

  Result ContinueSend(sf::Out<int64_t> pOutSize, sf::Out<bool> pOutWait,
    const sf::InBuffer& buffer, uint32_t taskId) override {
    return ProxyMethodInvoker<Kind, false,
      void(sf::Out<int64_t>, sf::Out<bool>, const sf::InBuffer&,
      uint32_t)>::Invoke(&this->m_State, 23, pOutSize, pOutWait, buffer,
      taskId);
  }

  Result GetBoundTcpPortNumberStart(sf::Out<uint32_t> pOutTaskId,
    sf::Out<sf::NativeHandle> pOutEvent) override {
    return ProxyMethodInvoker<Kind, false,
      void(sf::Out<uint32_t>, sf::Out<sf::NativeHandle>)>::Invoke(
      &this->m_State, 25, pOutTaskId, pOutEvent);
  }

  Result GetBoundTcpPortNumberResults(sf::Out<int32_t> pOutError,
    sf::Out<int32_t> pOutPortNumber, uint32_t taskId) override {
    return ProxyMethodInvoker<Kind, false,
      void(sf::Out<int32_t>, sf::Out<int32_t>, uint32_t)>::Invoke(
      &this->m_State, 26, pOutError, pOutPortNumber, taskId);
  }

  Result EventFdReadStart(sf::Out<uint32_t> pOutTaskId,
    sf::Out<sf::NativeHandle> pOutEvent) override {
    return ProxyMethodInvoker<Kind, false,
      void(sf::Out<uint32_t>, sf::Out<sf::NativeHandle>)>::Invoke(
      &this->m_State, 27, pOutTaskId, pOutEvent);
  }

  Result EventFdReadResults(sf::Out<int32_t> pOutError,
    sf::Out<uint64_t> pOutValue, uint32_t taskId) override {
    return ProxyMethodInvoker<Kind, false,
      void(sf::Out<int32_t>, sf::Out<uint64_t>, uint32_t)>::Invoke(
      &this->m_State, 28, pOutError, pOutValue, taskId);
  }

  Result EventFdWriteStart(sf::Out<uint32_t> pOutTaskId,
    sf::Out<sf::NativeHandle> pOutEvent, uint64_t value) override {
    return ProxyMethodInvoker<Kind, false,
      void(sf::Out<uint32_t>, sf::Out<sf::NativeHandle>, uint64_t)>::Invoke(
      &this->m_State, 29, pOutTaskId, pOutEvent, value);
  }

  Result EventFdWriteResults(sf::Out<int32_t> pOutError,
    uint32_t taskId) override {
    return ProxyMethodInvoker<Kind, false,
      void(sf::Out<int32_t>, uint32_t)>::Invoke(&this->m_State, 30, pOutError,
      taskId);
  }

  Result GetPrimitive(sf::Out<int32_t> pOutPrimitive) override {
    return ProxyMethodInvoker<Kind, false,
      void(sf::Out<int32_t>)>::Invoke(&this->m_State, 130, pOutPrimitive);
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

using CreateTmaManagerByHipcPolicy = nn::sf::StatelessAllocationPolicy<
  nn::sf::ExpHeapStaticAllocator<16384,
    nn::htcs::CreateTmaManagerByHipcTag>>;

}

template class nn::sf::cmif::client::detail::CmifProxyImpl<
  nn::tma::IHtcsManager, DomainKind, CreateTmaManagerByHipcPolicy,
  nn::tma::IHtcsManager, DefaultModifier>;

template class nn::sf::cmif::client::detail::CmifProxyImpl<
  nn::tma::IHtcsManager, PlainKind, CreateTmaManagerByHipcPolicy,
  nn::tma::IHtcsManager, DefaultModifier>;

template class nn::sf::cmif::client::detail::CmifProxyImpl<nn::tma::ISocket,
  DomainKind, CreateTmaManagerByHipcPolicy, nn::tma::ISocket, DefaultModifier>;

template class nn::sf::cmif::client::detail::CmifProxyImpl<nn::tma::ISocket,
  PlainKind, CreateTmaManagerByHipcPolicy, nn::tma::ISocket, DefaultModifier>;
