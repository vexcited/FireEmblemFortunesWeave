#include <stddef.h>
#include <stdint.h>

#include <utility>

#include "nn/sf/cmif/client/cmif_proxy.hpp"
#include "nn/socket/sf/socket_client.hpp"

namespace nn::sf {

template <typename Allocator>
class StatelessAllocationPolicy;

template <size_t Size, typename Tag>
class ExpHeapStaticAllocator;

}

namespace nn::socket::detail {

// The original tag lives in an anonymous namespace of the client unit.
struct CreateServiceTag;

}

namespace nn::sf::cmif::client::detail {

template <typename Kind, typename AllocationPolicy, typename Modifier>
class CmifProxyImpl<socket::sf::IClient, Kind, AllocationPolicy,
  socket::sf::IClient, Modifier>
  : public CmifProxyImplBase<socket::sf::IClient, Kind> {
public:
  Result RegisterClient(sf::Out<uint32_t> pOutErrno, uint64_t processId,
    sf::NativeHandle&& transferMemory, uint64_t transferMemorySize,
    const socket::sf::LibraryConfigData& config) override {
    return ProxyMethodInvoker<Kind, true,
      void(sf::Out<uint32_t>, uint64_t, sf::NativeHandle&&, uint64_t,
      const socket::sf::LibraryConfigData&)>::Invoke(&this->m_State, 0,
      pOutErrno, processId, std::move(transferMemory), transferMemorySize,
      config);
  }

  Result StartMonitoring(uint64_t processId) override {
    return ProxyMethodInvoker<Kind, true,
      void(uint64_t)>::Invoke(&this->m_State, 1, processId);
  }

  Result Socket(sf::Out<int32_t> pOutResult, sf::Out<int32_t> pOutErrno,
    int32_t domain, int32_t type, int32_t protocol) override {
    return ProxyMethodInvoker<Kind, false,
      void(sf::Out<int32_t>, sf::Out<int32_t>, int32_t, int32_t,
      int32_t)>::Invoke(&this->m_State, 2, pOutResult, pOutErrno, domain, type,
      protocol);
  }

  Result SocketExempt(sf::Out<int32_t> pOutResult, sf::Out<int32_t> pOutErrno,
    int32_t domain, int32_t type, int32_t protocol) override {
    return ProxyMethodInvoker<Kind, false,
      void(sf::Out<int32_t>, sf::Out<int32_t>, int32_t, int32_t,
      int32_t)>::Invoke(&this->m_State, 3, pOutResult, pOutErrno, domain, type,
      protocol);
  }

  Result Open(sf::Out<int32_t> pOutResult, sf::Out<int32_t> pOutErrno,
    const sf::InAutoSelectBuffer& path, int32_t flags) override {
    return ProxyMethodInvoker<Kind, false,
      void(sf::Out<int32_t>, sf::Out<int32_t>, const sf::InAutoSelectBuffer&,
      int32_t)>::Invoke(&this->m_State, 4, pOutResult, pOutErrno, path, flags);
  }

  Result Select(sf::Out<int32_t> pOutResult, sf::Out<int32_t> pOutErrno,
    int32_t count, const sf::InAutoSelectBuffer& readSet,
    const sf::InAutoSelectBuffer& writeSet,
    const sf::InAutoSelectBuffer& exceptSet,
    const sf::OutAutoSelectBuffer& outReadSet,
    const sf::OutAutoSelectBuffer& outWriteSet,
    const sf::OutAutoSelectBuffer& outExceptSet,
    const socket::sf::SelectTimeout& timeout) override {
    return ProxyMethodInvoker<Kind, false,
      void(sf::Out<int32_t>, sf::Out<int32_t>, int32_t,
      const sf::InAutoSelectBuffer&, const sf::InAutoSelectBuffer&,
      const sf::InAutoSelectBuffer&, const sf::OutAutoSelectBuffer&,
      const sf::OutAutoSelectBuffer&, const sf::OutAutoSelectBuffer&,
      const socket::sf::SelectTimeout&)>::Invoke(&this->m_State, 5, pOutResult,
      pOutErrno, count, readSet, writeSet, exceptSet, outReadSet, outWriteSet,
      outExceptSet, timeout);
  }

  Result Poll(sf::Out<int32_t> pOutResult, sf::Out<int32_t> pOutErrno,
    const sf::InAutoSelectBuffer& fds, const sf::OutAutoSelectBuffer& outFds,
    int32_t count, int32_t timeout) override {
    return ProxyMethodInvoker<Kind, false,
      void(sf::Out<int32_t>, sf::Out<int32_t>, const sf::InAutoSelectBuffer&,
      const sf::OutAutoSelectBuffer&, int32_t, int32_t)>::Invoke(&this->m_State,
      6, pOutResult, pOutErrno, fds, outFds, count, timeout);
  }

  Result Sysctl(sf::Out<int32_t> pOutResult, sf::Out<int32_t> pOutErrno,
    const sf::InAutoSelectBuffer& name, const sf::OutAutoSelectBuffer& oldValue,
    sf::Out<uint32_t> pOutOldLength,
    const sf::InAutoSelectBuffer& newValue) override {
    return ProxyMethodInvoker<Kind, false,
      void(sf::Out<int32_t>, sf::Out<int32_t>, const sf::InAutoSelectBuffer&,
      const sf::OutAutoSelectBuffer&, sf::Out<uint32_t>,
      const sf::InAutoSelectBuffer&)>::Invoke(&this->m_State, 7, pOutResult,
      pOutErrno, name, oldValue, pOutOldLength, newValue);
  }

  Result Recv(sf::Out<int32_t> pOutResult, sf::Out<int32_t> pOutErrno,
    int32_t socket, const sf::OutAutoSelectBuffer& buffer,
    int32_t flags) override {
    return ProxyMethodInvoker<Kind, false,
      void(sf::Out<int32_t>, sf::Out<int32_t>, int32_t,
      const sf::OutAutoSelectBuffer&, int32_t)>::Invoke(&this->m_State, 8,
      pOutResult, pOutErrno, socket, buffer, flags);
  }

  Result RecvFrom(sf::Out<int32_t> pOutResult, sf::Out<int32_t> pOutErrno,
    int32_t socket, const sf::OutAutoSelectBuffer& buffer, int32_t flags,
    const sf::OutAutoSelectBuffer& address,
    sf::Out<uint32_t> pOutAddressLength) override {
    return ProxyMethodInvoker<Kind, false,
      void(sf::Out<int32_t>, sf::Out<int32_t>, int32_t,
      const sf::OutAutoSelectBuffer&, int32_t, const sf::OutAutoSelectBuffer&,
      sf::Out<uint32_t>)>::Invoke(&this->m_State, 9, pOutResult, pOutErrno,
      socket, buffer, flags, address, pOutAddressLength);
  }

  Result Send(sf::Out<int32_t> pOutResult, sf::Out<int32_t> pOutErrno,
    int32_t socket, const sf::InAutoSelectBuffer& buffer,
    int32_t flags) override {
    return ProxyMethodInvoker<Kind, false,
      void(sf::Out<int32_t>, sf::Out<int32_t>, int32_t,
      const sf::InAutoSelectBuffer&, int32_t)>::Invoke(&this->m_State, 10,
      pOutResult, pOutErrno, socket, buffer, flags);
  }

  Result SendTo(sf::Out<int32_t> pOutResult, sf::Out<int32_t> pOutErrno,
    int32_t socket, const sf::InAutoSelectBuffer& buffer, int32_t flags,
    const sf::InAutoSelectBuffer& address) override {
    return ProxyMethodInvoker<Kind, false,
      void(sf::Out<int32_t>, sf::Out<int32_t>, int32_t,
      const sf::InAutoSelectBuffer&, int32_t,
      const sf::InAutoSelectBuffer&)>::Invoke(&this->m_State, 11, pOutResult,
      pOutErrno, socket, buffer, flags, address);
  }

  Result Accept(sf::Out<int32_t> pOutResult, sf::Out<int32_t> pOutErrno,
    int32_t socket, const sf::OutAutoSelectBuffer& address,
    sf::Out<uint32_t> pOutAddressLength) override {
    return ProxyMethodInvoker<Kind, false,
      void(sf::Out<int32_t>, sf::Out<int32_t>, int32_t,
      const sf::OutAutoSelectBuffer&, sf::Out<uint32_t>)>::Invoke(
      &this->m_State, 12, pOutResult, pOutErrno, socket, address,
      pOutAddressLength);
  }

  Result Bind(sf::Out<int32_t> pOutResult, sf::Out<int32_t> pOutErrno,
    int32_t socket, const sf::InAutoSelectBuffer& address) override {
    return ProxyMethodInvoker<Kind, false,
      void(sf::Out<int32_t>, sf::Out<int32_t>, int32_t,
      const sf::InAutoSelectBuffer&)>::Invoke(&this->m_State, 13, pOutResult,
      pOutErrno, socket, address);
  }

  Result Connect(sf::Out<int32_t> pOutResult, sf::Out<int32_t> pOutErrno,
    int32_t socket, const sf::InAutoSelectBuffer& address) override {
    return ProxyMethodInvoker<Kind, false,
      void(sf::Out<int32_t>, sf::Out<int32_t>, int32_t,
      const sf::InAutoSelectBuffer&)>::Invoke(&this->m_State, 14, pOutResult,
      pOutErrno, socket, address);
  }

  Result GetPeerName(sf::Out<int32_t> pOutResult, sf::Out<int32_t> pOutErrno,
    int32_t socket, const sf::OutAutoSelectBuffer& address,
    sf::Out<uint32_t> pOutAddressLength) override {
    return ProxyMethodInvoker<Kind, false,
      void(sf::Out<int32_t>, sf::Out<int32_t>, int32_t,
      const sf::OutAutoSelectBuffer&, sf::Out<uint32_t>)>::Invoke(
      &this->m_State, 15, pOutResult, pOutErrno, socket, address,
      pOutAddressLength);
  }

  Result GetSockName(sf::Out<int32_t> pOutResult, sf::Out<int32_t> pOutErrno,
    int32_t socket, const sf::OutAutoSelectBuffer& address,
    sf::Out<uint32_t> pOutAddressLength) override {
    return ProxyMethodInvoker<Kind, false,
      void(sf::Out<int32_t>, sf::Out<int32_t>, int32_t,
      const sf::OutAutoSelectBuffer&, sf::Out<uint32_t>)>::Invoke(
      &this->m_State, 16, pOutResult, pOutErrno, socket, address,
      pOutAddressLength);
  }

  Result GetSockOpt(sf::Out<int32_t> pOutResult, sf::Out<int32_t> pOutErrno,
    int32_t socket, int32_t level, int32_t option,
    const sf::OutAutoSelectBuffer& value,
    sf::Out<uint32_t> pOutLength) override {
    return ProxyMethodInvoker<Kind, false,
      void(sf::Out<int32_t>, sf::Out<int32_t>, int32_t, int32_t, int32_t,
      const sf::OutAutoSelectBuffer&, sf::Out<uint32_t>)>::Invoke(
      &this->m_State, 17, pOutResult, pOutErrno, socket, level, option, value,
      pOutLength);
  }

  Result Listen(sf::Out<int32_t> pOutResult, sf::Out<int32_t> pOutErrno,
    int32_t socket, int32_t backlog) override {
    return ProxyMethodInvoker<Kind, false,
      void(sf::Out<int32_t>, sf::Out<int32_t>, int32_t, int32_t)>::Invoke(
      &this->m_State, 18, pOutResult, pOutErrno, socket, backlog);
  }

  Result Ioctl(sf::Out<int32_t> pOutResult, sf::Out<int32_t> pOutErrno,
    int32_t socket, uint32_t request, const sf::InAutoSelectBuffer& inBuffer0,
    const sf::InAutoSelectBuffer& inBuffer1,
    const sf::InAutoSelectBuffer& inBuffer2,
    const sf::InAutoSelectBuffer& inBuffer3,
    const sf::OutAutoSelectBuffer& outBuffer0,
    const sf::OutAutoSelectBuffer& outBuffer1,
    const sf::OutAutoSelectBuffer& outBuffer2,
    const sf::OutAutoSelectBuffer& outBuffer3, uint32_t bufferCount) override {
    return ProxyMethodInvoker<Kind, false,
      void(sf::Out<int32_t>, sf::Out<int32_t>, int32_t, uint32_t,
      const sf::InAutoSelectBuffer&, const sf::InAutoSelectBuffer&,
      const sf::InAutoSelectBuffer&, const sf::InAutoSelectBuffer&,
      const sf::OutAutoSelectBuffer&, const sf::OutAutoSelectBuffer&,
      const sf::OutAutoSelectBuffer&, const sf::OutAutoSelectBuffer&,
      uint32_t)>::Invoke(&this->m_State, 19, pOutResult, pOutErrno, socket,
      request, inBuffer0, inBuffer1, inBuffer2, inBuffer3, outBuffer0,
      outBuffer1, outBuffer2, outBuffer3, bufferCount);
  }

  Result Fcntl(sf::Out<int32_t> pOutResult, sf::Out<int32_t> pOutErrno,
    int32_t socket, int32_t command, int32_t value) override {
    return ProxyMethodInvoker<Kind, false,
      void(sf::Out<int32_t>, sf::Out<int32_t>, int32_t, int32_t,
      int32_t)>::Invoke(&this->m_State, 20, pOutResult, pOutErrno, socket,
      command, value);
  }

  Result SetSockOpt(sf::Out<int32_t> pOutResult, sf::Out<int32_t> pOutErrno,
    int32_t socket, int32_t level, int32_t option,
    const sf::InAutoSelectBuffer& value) override {
    return ProxyMethodInvoker<Kind, false,
      void(sf::Out<int32_t>, sf::Out<int32_t>, int32_t, int32_t, int32_t,
      const sf::InAutoSelectBuffer&)>::Invoke(&this->m_State, 21, pOutResult,
      pOutErrno, socket, level, option, value);
  }

  Result Shutdown(sf::Out<int32_t> pOutResult, sf::Out<int32_t> pOutErrno,
    int32_t socket, int32_t how) override {
    return ProxyMethodInvoker<Kind, false,
      void(sf::Out<int32_t>, sf::Out<int32_t>, int32_t, int32_t)>::Invoke(
      &this->m_State, 22, pOutResult, pOutErrno, socket, how);
  }

  Result ShutdownAllSocketsDeprecated(sf::Out<int32_t> pOutResult,
    sf::Out<int32_t> pOutErrno, int32_t how) override {
    return ProxyMethodInvoker<Kind, false,
      void(sf::Out<int32_t>, sf::Out<int32_t>, int32_t)>::Invoke(&this->m_State,
      23, pOutResult, pOutErrno, how);
  }

  Result Write(sf::Out<int32_t> pOutResult, sf::Out<int32_t> pOutErrno,
    int32_t socket, const sf::InAutoSelectBuffer& buffer) override {
    return ProxyMethodInvoker<Kind, false,
      void(sf::Out<int32_t>, sf::Out<int32_t>, int32_t,
      const sf::InAutoSelectBuffer&)>::Invoke(&this->m_State, 24, pOutResult,
      pOutErrno, socket, buffer);
  }

  Result Read(sf::Out<int32_t> pOutResult, sf::Out<int32_t> pOutErrno,
    int32_t socket, const sf::OutAutoSelectBuffer& buffer) override {
    return ProxyMethodInvoker<Kind, false,
      void(sf::Out<int32_t>, sf::Out<int32_t>, int32_t,
      const sf::OutAutoSelectBuffer&)>::Invoke(&this->m_State, 25, pOutResult,
      pOutErrno, socket, buffer);
  }

  Result Close(sf::Out<int32_t> pOutResult, sf::Out<int32_t> pOutErrno,
    int32_t socket) override {
    return ProxyMethodInvoker<Kind, false,
      void(sf::Out<int32_t>, sf::Out<int32_t>, int32_t)>::Invoke(&this->m_State,
      26, pOutResult, pOutErrno, socket);
  }

  Result DuplicateSocket(sf::Out<int32_t> pOutResult,
    sf::Out<int32_t> pOutErrno, int32_t socket,
    uint64_t ownerProcessId) override {
    return ProxyMethodInvoker<Kind, false,
      void(sf::Out<int32_t>, sf::Out<int32_t>, int32_t, uint64_t)>::Invoke(
      &this->m_State, 27, pOutResult, pOutErrno, socket, ownerProcessId);
  }

  Result GetResourceStatistics(sf::Out<int32_t> pOutResult,
    sf::Out<int32_t> pOutErrno, uint64_t processId, uint32_t type,
    const sf::OutAutoSelectBuffer& statistics, uint32_t options,
    const sf::InAutoSelectBuffer& parameter) override {
    return ProxyMethodInvoker<Kind, true,
      void(sf::Out<int32_t>, sf::Out<int32_t>, uint64_t, uint32_t,
      const sf::OutAutoSelectBuffer&, uint32_t,
      const sf::InAutoSelectBuffer&)>::Invoke(&this->m_State, 28, pOutResult,
      pOutErrno, processId, type, statistics, options, parameter);
  }

  Result RecvMMsg(sf::Out<int32_t> pOutResult, sf::Out<int32_t> pOutErrno,
    int32_t socket, const sf::OutBuffer& messages, uint32_t count,
    int32_t flags, const socket::sf::Timespec& timeout) override {
    return ProxyMethodInvoker<Kind, false,
      void(sf::Out<int32_t>, sf::Out<int32_t>, int32_t, const sf::OutBuffer&,
      uint32_t, int32_t, const socket::sf::Timespec&)>::Invoke(&this->m_State,
      29, pOutResult, pOutErrno, socket, messages, count, flags, timeout);
  }

  Result SendMMsg(sf::Out<int32_t> pOutResult, sf::Out<int32_t> pOutErrno,
    int32_t socket, const sf::OutBuffer& messages, uint32_t count,
    int32_t flags) override {
    return ProxyMethodInvoker<Kind, false,
      void(sf::Out<int32_t>, sf::Out<int32_t>, int32_t, const sf::OutBuffer&,
      uint32_t, int32_t)>::Invoke(&this->m_State, 30, pOutResult, pOutErrno,
      socket, messages, count, flags);
  }

  Result EventFd(sf::Out<int32_t> pOutResult, sf::Out<int32_t> pOutErrno,
    uint64_t initialValue, int32_t flags) override {
    return ProxyMethodInvoker<Kind, false,
      void(sf::Out<int32_t>, sf::Out<int32_t>, uint64_t, int32_t)>::Invoke(
      &this->m_State, 31, pOutResult, pOutErrno, initialValue, flags);
  }

  Result RegisterResourceStatisticsName(sf::Out<int32_t> pOutResult,
    sf::Out<int32_t> pOutErrno, uint64_t processId,
    const sf::InAutoSelectBuffer& name, bool isEnabled) override {
    return ProxyMethodInvoker<Kind, true,
      void(sf::Out<int32_t>, sf::Out<int32_t>, uint64_t,
      const sf::InAutoSelectBuffer&, bool)>::Invoke(&this->m_State, 32,
      pOutResult, pOutErrno, processId, name, isEnabled);
  }

  Result RegisterClientShared(sf::Out<uint32_t> pOutErrno, uint64_t processId,
    uint64_t clientId, const socket::sf::LibraryConfigData& config) override {
    return ProxyMethodInvoker<Kind, true,
      void(sf::Out<uint32_t>, uint64_t, uint64_t,
      const socket::sf::LibraryConfigData&)>::Invoke(&this->m_State, 33,
      pOutErrno, processId, clientId, config);
  }

  Result GetSocketStatistics(sf::Out<int32_t> pOutResult,
    sf::Out<int32_t> pOutErrno, uint64_t processId, uint32_t type,
    const sf::OutAutoSelectBuffer& statistics) override {
    return ProxyMethodInvoker<Kind, true,
      void(sf::Out<int32_t>, sf::Out<int32_t>, uint64_t, uint32_t,
      const sf::OutAutoSelectBuffer&)>::Invoke(&this->m_State, 34, pOutResult,
      pOutErrno, processId, type, statistics);
  }

  Result NifIoctl(sf::Out<int32_t> pOutResult, sf::Out<int32_t> pOutErrno,
    int32_t socket, uint32_t request, const sf::InAutoSelectBuffer& inBuffer,
    const sf::OutAutoSelectBuffer& outBuffer) override {
    return ProxyMethodInvoker<Kind, false,
      void(sf::Out<int32_t>, sf::Out<int32_t>, int32_t, uint32_t,
      const sf::InAutoSelectBuffer&, const sf::OutAutoSelectBuffer&)>::Invoke(
      &this->m_State, 35, pOutResult, pOutErrno, socket, request, inBuffer,
      outBuffer);
  }

  Result Command36(sf::Out<uint32_t> pOutErrno, uint64_t processId,
    uint32_t value) override {
    return ProxyMethodInvoker<Kind, true,
      void(sf::Out<uint32_t>, uint64_t, uint32_t)>::Invoke(&this->m_State, 36,
      pOutErrno, processId, value);
  }

  Result Command37(sf::Out<int32_t> pOutResult, sf::Out<int32_t> pOutErrno,
    uint16_t value0, uint16_t value1, uint32_t value2) override {
    return ProxyMethodInvoker<Kind, false,
      void(sf::Out<int32_t>, sf::Out<int32_t>, uint16_t, uint16_t,
      uint32_t)>::Invoke(&this->m_State, 37, pOutResult, pOutErrno, value0,
      value1, value2);
  }

  Result Command38(sf::Out<int32_t> pOutResult, sf::Out<int32_t> pOutErrno,
    const sf::InAutoSelectBuffer& buffer, uint32_t value) override {
    return ProxyMethodInvoker<Kind, false,
      void(sf::Out<int32_t>, sf::Out<int32_t>, const sf::InAutoSelectBuffer&,
      uint32_t)>::Invoke(&this->m_State, 38, pOutResult, pOutErrno, buffer,
      value);
  }

  Result Command39(sf::Out<int32_t> pOutResult, sf::Out<int32_t> pOutErrno,
    uint64_t value0, uint32_t value1, uint32_t value2) override {
    return ProxyMethodInvoker<Kind, false,
      void(sf::Out<int32_t>, sf::Out<int32_t>, uint64_t, uint32_t,
      uint32_t)>::Invoke(&this->m_State, 39, pOutResult, pOutErrno, value0,
      value1, value2);
  }

  Result ShutdownAllSockets(sf::Out<int32_t> pOutResult,
    sf::Out<int32_t> pOutErrno, const sf::InAutoSelectBuffer& address,
    uint32_t mask) override {
    return ProxyMethodInvoker<Kind, false,
      void(sf::Out<int32_t>, sf::Out<int32_t>, const sf::InAutoSelectBuffer&,
      uint32_t)>::Invoke(&this->m_State, 40, pOutResult, pOutErrno, address,
      mask);
  }

  Result Command42(sf::Out<int32_t> pOutResult, sf::Out<int32_t> pOutErrno,
    sf::Out<socket::sf::ExtendedResult> pOutExtended,
    const sf::InAutoSelectBuffer& buffer0,
    const sf::InAutoSelectBuffer& buffer1,
    const sf::InAutoSelectBuffer& buffer2,
    const sf::InAutoSelectBuffer& buffer3,
    const sf::InAutoSelectBuffer& buffer4,
    const sf::InAutoSelectBuffer& buffer5,
    const sf::InAutoSelectBuffer& buffer6,
    const sf::InAutoSelectBuffer& buffer7) override {
    return ProxyMethodInvoker<Kind, false,
      void(sf::Out<int32_t>, sf::Out<int32_t>,
      sf::Out<socket::sf::ExtendedResult>, const sf::InAutoSelectBuffer&,
      const sf::InAutoSelectBuffer&, const sf::InAutoSelectBuffer&,
      const sf::InAutoSelectBuffer&, const sf::InAutoSelectBuffer&,
      const sf::InAutoSelectBuffer&, const sf::InAutoSelectBuffer&,
      const sf::InAutoSelectBuffer&)>::Invoke(&this->m_State, 42, pOutResult,
      pOutErrno, pOutExtended, buffer0, buffer1, buffer2, buffer3, buffer4,
      buffer5, buffer6, buffer7);
  }

  Result Command43(sf::Out<int32_t> pOutResult, sf::Out<int32_t> pOutErrno,
    sf::Out<socket::sf::ExtendedResult> pOutExtended,
    const sf::InAutoSelectBuffer& inBuffer,
    const sf::OutAutoSelectBuffer& outBuffer0,
    const sf::OutAutoSelectBuffer& outBuffer1,
    const sf::OutAutoSelectBuffer& outBuffer2,
    const sf::OutAutoSelectBuffer& outBuffer3,
    const sf::OutAutoSelectBuffer& outBuffer4,
    const sf::OutAutoSelectBuffer& outBuffer5,
    const sf::OutAutoSelectBuffer& outBuffer6,
    const socket::sf::Timespec& timeout) override {
    return ProxyMethodInvoker<Kind, false,
      void(sf::Out<int32_t>, sf::Out<int32_t>,
      sf::Out<socket::sf::ExtendedResult>, const sf::InAutoSelectBuffer&,
      const sf::OutAutoSelectBuffer&, const sf::OutAutoSelectBuffer&,
      const sf::OutAutoSelectBuffer&, const sf::OutAutoSelectBuffer&,
      const sf::OutAutoSelectBuffer&, const sf::OutAutoSelectBuffer&,
      const sf::OutAutoSelectBuffer&, const socket::sf::Timespec&)>::Invoke(
      &this->m_State, 43, pOutResult, pOutErrno, pOutExtended, inBuffer,
      outBuffer0, outBuffer1, outBuffer2, outBuffer3, outBuffer4, outBuffer5,
      outBuffer6, timeout);
  }

  Result SetThreadCoreMask(uint64_t mask) override {
    return ProxyMethodInvoker<Kind, false,
      void(uint64_t)>::Invoke(&this->m_State, 200, mask);
  }

  Result GetThreadCoreMask(sf::Out<uint64_t> pOutMask) override {
    return ProxyMethodInvoker<Kind, false,
      void(sf::Out<uint64_t>)>::Invoke(&this->m_State, 201, pOutMask);
  }
};

}

namespace {

using PlainKind = nn::sf::hipc::client::Hipc2ProxyKindBase<
  nn::sf::hipc::detail::MessageType::CmifRequestWithContext>;

using DomainKind = nn::sf::cmif::client::CmifDomainProxyKind<
  nn::sf::hipc::client::Hipc2ClientSessionManagedProxyKindBase<PlainKind>>;

using ClientAllocationPolicy = nn::sf::StatelessAllocationPolicy<
  nn::sf::ExpHeapStaticAllocator<4096, nn::socket::detail::CreateServiceTag>>;

using DefaultModifier = nn::sf::cmif::client::detail::ProcessModifierImpl<
  nn::sf::cmif::client::DefaultProxyFilterTag>;

}

template class nn::sf::cmif::client::detail::CmifProxyImpl<
  nn::socket::sf::IClient, PlainKind, ClientAllocationPolicy,
  nn::socket::sf::IClient, DefaultModifier>;

template class nn::sf::cmif::client::detail::CmifProxyImpl<
  nn::socket::sf::IClient, DomainKind, ClientAllocationPolicy,
  nn::socket::sf::IClient, DefaultModifier>;
