#pragma once

#include <stdint.h>

#include "nn/result.hpp"
#include "nn/sf/sf_buffers.hpp"
#include "nn/sf/shared_pointer.hpp"

namespace nn::socket::sf {

class IClient : public ::nn::sf::IServiceObject {
 public:
  virtual void Reserved2() = 0;
  virtual void Reserved3() = 0;
  virtual Result RegisterClient() = 0;
  virtual Result StartMonitoring() = 0;
  virtual Result Socket(::nn::sf::Out<int32_t> pOutResult,
    ::nn::sf::Out<int32_t> pOutErrno, int32_t domain, int32_t type,
    int32_t protocol) = 0;
  virtual Result SocketExempt(::nn::sf::Out<int32_t> pOutResult,
    ::nn::sf::Out<int32_t> pOutErrno, int32_t domain, int32_t type,
    int32_t protocol) = 0;
  virtual Result Open(::nn::sf::Out<int32_t> pOutResult,
    ::nn::sf::Out<int32_t> pOutErrno, const ::nn::sf::InBuffer& path,
    int32_t flags) = 0;
  virtual Result Select() = 0;
  virtual Result Poll() = 0;
  virtual Result Sysctl() = 0;
  virtual Result Recv(::nn::sf::Out<int32_t> pOutResult,
    ::nn::sf::Out<int32_t> pOutErrno, int32_t socket,
    const ::nn::sf::OutBuffer& buffer, int32_t flags) = 0;
  virtual Result RecvFrom(::nn::sf::Out<int32_t> pOutResult,
    ::nn::sf::Out<int32_t> pOutErrno, int32_t socket,
    const ::nn::sf::OutBuffer& buffer, int32_t flags,
    const ::nn::sf::OutBuffer& address,
    ::nn::sf::Out<uint32_t> pOutAddressLength) = 0;
  virtual Result Send(::nn::sf::Out<int32_t> pOutResult,
    ::nn::sf::Out<int32_t> pOutErrno, int32_t socket,
    const ::nn::sf::InBuffer& buffer, int32_t flags) = 0;
  virtual Result SendTo(::nn::sf::Out<int32_t> pOutResult,
    ::nn::sf::Out<int32_t> pOutErrno, int32_t socket,
    const ::nn::sf::InBuffer& buffer, int32_t flags,
    const ::nn::sf::InBuffer& address) = 0;
  virtual Result Accept() = 0;
  virtual Result Bind(::nn::sf::Out<int32_t> pOutResult,
    ::nn::sf::Out<int32_t> pOutErrno, int32_t socket,
    const ::nn::sf::InBuffer& address) = 0;
  virtual Result Connect(::nn::sf::Out<int32_t> pOutResult,
    ::nn::sf::Out<int32_t> pOutErrno, int32_t socket,
    const ::nn::sf::InBuffer& address) = 0;
  virtual Result GetPeerName(::nn::sf::Out<int32_t> pOutResult,
    ::nn::sf::Out<int32_t> pOutErrno, int32_t socket,
    const ::nn::sf::OutBuffer& address,
    ::nn::sf::Out<uint32_t> pOutAddressLength) = 0;
  virtual Result GetSockName(::nn::sf::Out<int32_t> pOutResult,
    ::nn::sf::Out<int32_t> pOutErrno, int32_t socket,
    const ::nn::sf::OutBuffer& address,
    ::nn::sf::Out<uint32_t> pOutAddressLength) = 0;
  virtual Result GetSockOpt(::nn::sf::Out<int32_t> pOutResult,
    ::nn::sf::Out<int32_t> pOutErrno, int32_t socket, int32_t level,
    int32_t option, const ::nn::sf::OutBuffer& value,
    ::nn::sf::Out<uint32_t> pOutLength) = 0;
  virtual Result Listen(::nn::sf::Out<int32_t> pOutResult,
    ::nn::sf::Out<int32_t> pOutErrno, int32_t socket, int32_t backlog) = 0;
  virtual Result Ioctl() = 0;
  virtual Result Fcntl(::nn::sf::Out<int32_t> pOutResult,
    ::nn::sf::Out<int32_t> pOutErrno, int32_t socket, int32_t command,
    int32_t value) = 0;
  virtual Result SetSockOpt(::nn::sf::Out<int32_t> pOutResult,
    ::nn::sf::Out<int32_t> pOutErrno, int32_t socket, int32_t level,
    int32_t option, const ::nn::sf::InBuffer& value) = 0;
  virtual Result Shutdown(::nn::sf::Out<int32_t> pOutResult,
    ::nn::sf::Out<int32_t> pOutErrno, int32_t socket, int32_t how) = 0;
  virtual Result ShutdownAllSocketsDeprecated() = 0;
  virtual Result Write(::nn::sf::Out<int32_t> pOutResult,
    ::nn::sf::Out<int32_t> pOutErrno, int32_t socket,
    const ::nn::sf::InBuffer& buffer) = 0;
  virtual Result Read(::nn::sf::Out<int32_t> pOutResult,
    ::nn::sf::Out<int32_t> pOutErrno, int32_t socket,
    const ::nn::sf::OutBuffer& buffer) = 0;
  virtual Result Close(::nn::sf::Out<int32_t> pOutResult,
    ::nn::sf::Out<int32_t> pOutErrno, int32_t socket) = 0;
  virtual Result DuplicateSocket(::nn::sf::Out<int32_t> pOutResult,
    ::nn::sf::Out<int32_t> pOutErrno, int32_t socket,
    uint64_t ownerProcessId) = 0;
  virtual Result GetResourceStatistics() = 0;
  virtual Result RecvMMsg() = 0;
  virtual Result SendMMsg() = 0;
  virtual Result EventFd(::nn::sf::Out<int32_t> pOutResult,
    ::nn::sf::Out<int32_t> pOutErrno, uint64_t initialValue,
    int32_t flags) = 0;
  virtual Result RegisterResourceStatisticsName() = 0;
  virtual Result RegisterClientShared() = 0;
  virtual Result GetSocketStatistics() = 0;
  virtual Result NifIoctl() = 0;
  virtual Result Reserved40() = 0;
  virtual Result Reserved41() = 0;
  virtual Result Reserved42() = 0;
  virtual Result Reserved43() = 0;
  virtual Result ShutdownAllSockets(::nn::sf::Out<int32_t> pOutResult,
    ::nn::sf::Out<int32_t> pOutErrno, const ::nn::sf::InBuffer& address,
    uint32_t mask) = 0;
  virtual Result CreateNoSfEventFdPair() = 0;
  virtual Result Reserved46() = 0;
  virtual Result Reserved47() = 0;
  virtual Result SetThreadCoreMask(uint64_t mask) = 0;
  virtual Result GetThreadCoreMask(::nn::sf::Out<uint64_t> pOutMask) = 0;
};

}
