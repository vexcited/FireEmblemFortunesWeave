#pragma once

#include <stdint.h>

#include "nn/result.hpp"
#include "nn/sf/native_handle.hpp"
#include "nn/sf/sf_buffers.hpp"
#include "nn/sf/shared_pointer.hpp"

namespace nn::socket::sf {

// Sizes of the socket buffers the service sets up for the client.
struct LibraryConfigData {
  uint32_t version;
  uint32_t tcpTxBufferSize;
  uint32_t tcpRxBufferSize;
  uint32_t tcpTxBufferSizeMax;
  uint32_t tcpRxBufferSizeMax;
  uint32_t udpTxBufferSize;
  uint32_t udpRxBufferSize;
  uint32_t socketBufferEfficiency;
};

struct SelectTimeout {
  int64_t seconds;
  int64_t microseconds;
  bool isNull;
};

struct Timespec {
  int64_t seconds;
  int64_t nanoseconds;
};

// Output of commands 42 and 43, only its layout is known.
struct ExtendedResult {
  uint32_t data[7];
};

class IClient : public ::nn::sf::IServiceObject {
 public:
  virtual void Reserved2() = 0;
  virtual void Reserved3() = 0;
  virtual Result RegisterClient(::nn::sf::Out<uint32_t> pOutErrno,
    uint64_t processId, ::nn::sf::NativeHandle&& transferMemory,
    uint64_t transferMemorySize, const LibraryConfigData& config) = 0;
  virtual Result StartMonitoring(uint64_t processId) = 0;
  virtual Result Socket(::nn::sf::Out<int32_t> pOutResult,
    ::nn::sf::Out<int32_t> pOutErrno, int32_t domain, int32_t type,
    int32_t protocol) = 0;
  virtual Result SocketExempt(::nn::sf::Out<int32_t> pOutResult,
    ::nn::sf::Out<int32_t> pOutErrno, int32_t domain, int32_t type,
    int32_t protocol) = 0;
  virtual Result Open(::nn::sf::Out<int32_t> pOutResult,
    ::nn::sf::Out<int32_t> pOutErrno,
    const ::nn::sf::InAutoSelectBuffer& path, int32_t flags) = 0;
  virtual Result Select(::nn::sf::Out<int32_t> pOutResult,
    ::nn::sf::Out<int32_t> pOutErrno, int32_t count,
    const ::nn::sf::InAutoSelectBuffer& readSet,
    const ::nn::sf::InAutoSelectBuffer& writeSet,
    const ::nn::sf::InAutoSelectBuffer& exceptSet,
    const ::nn::sf::OutAutoSelectBuffer& outReadSet,
    const ::nn::sf::OutAutoSelectBuffer& outWriteSet,
    const ::nn::sf::OutAutoSelectBuffer& outExceptSet,
    const SelectTimeout& timeout) = 0;
  virtual Result Poll(::nn::sf::Out<int32_t> pOutResult,
    ::nn::sf::Out<int32_t> pOutErrno,
    const ::nn::sf::InAutoSelectBuffer& fds,
    const ::nn::sf::OutAutoSelectBuffer& outFds, int32_t count,
    int32_t timeout) = 0;
  virtual Result Sysctl(::nn::sf::Out<int32_t> pOutResult,
    ::nn::sf::Out<int32_t> pOutErrno,
    const ::nn::sf::InAutoSelectBuffer& name,
    const ::nn::sf::OutAutoSelectBuffer& oldValue,
    ::nn::sf::Out<uint32_t> pOutOldLength,
    const ::nn::sf::InAutoSelectBuffer& newValue) = 0;
  virtual Result Recv(::nn::sf::Out<int32_t> pOutResult,
    ::nn::sf::Out<int32_t> pOutErrno, int32_t socket,
    const ::nn::sf::OutAutoSelectBuffer& buffer, int32_t flags) = 0;
  virtual Result RecvFrom(::nn::sf::Out<int32_t> pOutResult,
    ::nn::sf::Out<int32_t> pOutErrno, int32_t socket,
    const ::nn::sf::OutAutoSelectBuffer& buffer, int32_t flags,
    const ::nn::sf::OutAutoSelectBuffer& address,
    ::nn::sf::Out<uint32_t> pOutAddressLength) = 0;
  virtual Result Send(::nn::sf::Out<int32_t> pOutResult,
    ::nn::sf::Out<int32_t> pOutErrno, int32_t socket,
    const ::nn::sf::InAutoSelectBuffer& buffer, int32_t flags) = 0;
  virtual Result SendTo(::nn::sf::Out<int32_t> pOutResult,
    ::nn::sf::Out<int32_t> pOutErrno, int32_t socket,
    const ::nn::sf::InAutoSelectBuffer& buffer, int32_t flags,
    const ::nn::sf::InAutoSelectBuffer& address) = 0;
  virtual Result Accept(::nn::sf::Out<int32_t> pOutResult,
    ::nn::sf::Out<int32_t> pOutErrno, int32_t socket,
    const ::nn::sf::OutAutoSelectBuffer& address,
    ::nn::sf::Out<uint32_t> pOutAddressLength) = 0;
  virtual Result Bind(::nn::sf::Out<int32_t> pOutResult,
    ::nn::sf::Out<int32_t> pOutErrno, int32_t socket,
    const ::nn::sf::InAutoSelectBuffer& address) = 0;
  virtual Result Connect(::nn::sf::Out<int32_t> pOutResult,
    ::nn::sf::Out<int32_t> pOutErrno, int32_t socket,
    const ::nn::sf::InAutoSelectBuffer& address) = 0;
  virtual Result GetPeerName(::nn::sf::Out<int32_t> pOutResult,
    ::nn::sf::Out<int32_t> pOutErrno, int32_t socket,
    const ::nn::sf::OutAutoSelectBuffer& address,
    ::nn::sf::Out<uint32_t> pOutAddressLength) = 0;
  virtual Result GetSockName(::nn::sf::Out<int32_t> pOutResult,
    ::nn::sf::Out<int32_t> pOutErrno, int32_t socket,
    const ::nn::sf::OutAutoSelectBuffer& address,
    ::nn::sf::Out<uint32_t> pOutAddressLength) = 0;
  virtual Result GetSockOpt(::nn::sf::Out<int32_t> pOutResult,
    ::nn::sf::Out<int32_t> pOutErrno, int32_t socket, int32_t level,
    int32_t option, const ::nn::sf::OutAutoSelectBuffer& value,
    ::nn::sf::Out<uint32_t> pOutLength) = 0;
  virtual Result Listen(::nn::sf::Out<int32_t> pOutResult,
    ::nn::sf::Out<int32_t> pOutErrno, int32_t socket, int32_t backlog) = 0;
  virtual Result Ioctl(::nn::sf::Out<int32_t> pOutResult,
    ::nn::sf::Out<int32_t> pOutErrno, int32_t socket, uint32_t request,
    const ::nn::sf::InAutoSelectBuffer& inBuffer0,
    const ::nn::sf::InAutoSelectBuffer& inBuffer1,
    const ::nn::sf::InAutoSelectBuffer& inBuffer2,
    const ::nn::sf::InAutoSelectBuffer& inBuffer3,
    const ::nn::sf::OutAutoSelectBuffer& outBuffer0,
    const ::nn::sf::OutAutoSelectBuffer& outBuffer1,
    const ::nn::sf::OutAutoSelectBuffer& outBuffer2,
    const ::nn::sf::OutAutoSelectBuffer& outBuffer3,
    uint32_t bufferCount) = 0;
  virtual Result Fcntl(::nn::sf::Out<int32_t> pOutResult,
    ::nn::sf::Out<int32_t> pOutErrno, int32_t socket, int32_t command,
    int32_t value) = 0;
  virtual Result SetSockOpt(::nn::sf::Out<int32_t> pOutResult,
    ::nn::sf::Out<int32_t> pOutErrno, int32_t socket, int32_t level,
    int32_t option, const ::nn::sf::InAutoSelectBuffer& value) = 0;
  virtual Result Shutdown(::nn::sf::Out<int32_t> pOutResult,
    ::nn::sf::Out<int32_t> pOutErrno, int32_t socket, int32_t how) = 0;
  virtual Result ShutdownAllSocketsDeprecated(
    ::nn::sf::Out<int32_t> pOutResult, ::nn::sf::Out<int32_t> pOutErrno,
    int32_t how) = 0;
  virtual Result Write(::nn::sf::Out<int32_t> pOutResult,
    ::nn::sf::Out<int32_t> pOutErrno, int32_t socket,
    const ::nn::sf::InAutoSelectBuffer& buffer) = 0;
  virtual Result Read(::nn::sf::Out<int32_t> pOutResult,
    ::nn::sf::Out<int32_t> pOutErrno, int32_t socket,
    const ::nn::sf::OutAutoSelectBuffer& buffer) = 0;
  virtual Result Close(::nn::sf::Out<int32_t> pOutResult,
    ::nn::sf::Out<int32_t> pOutErrno, int32_t socket) = 0;
  virtual Result DuplicateSocket(::nn::sf::Out<int32_t> pOutResult,
    ::nn::sf::Out<int32_t> pOutErrno, int32_t socket,
    uint64_t ownerProcessId) = 0;
  virtual Result GetResourceStatistics(::nn::sf::Out<int32_t> pOutResult,
    ::nn::sf::Out<int32_t> pOutErrno, uint64_t processId, uint32_t type,
    const ::nn::sf::OutAutoSelectBuffer& statistics, uint32_t options,
    const ::nn::sf::InAutoSelectBuffer& parameter) = 0;
  virtual Result RecvMMsg(::nn::sf::Out<int32_t> pOutResult,
    ::nn::sf::Out<int32_t> pOutErrno, int32_t socket,
    const ::nn::sf::OutBuffer& messages, uint32_t count, int32_t flags,
    const Timespec& timeout) = 0;
  virtual Result SendMMsg(::nn::sf::Out<int32_t> pOutResult,
    ::nn::sf::Out<int32_t> pOutErrno, int32_t socket,
    const ::nn::sf::OutBuffer& messages, uint32_t count, int32_t flags) = 0;
  virtual Result EventFd(::nn::sf::Out<int32_t> pOutResult,
    ::nn::sf::Out<int32_t> pOutErrno, uint64_t initialValue,
    int32_t flags) = 0;
  virtual Result RegisterResourceStatisticsName(
    ::nn::sf::Out<int32_t> pOutResult, ::nn::sf::Out<int32_t> pOutErrno,
    uint64_t processId, const ::nn::sf::InAutoSelectBuffer& name,
    bool isEnabled) = 0;
  virtual Result RegisterClientShared(::nn::sf::Out<uint32_t> pOutErrno,
    uint64_t processId, uint64_t clientId,
    const LibraryConfigData& config) = 0;
  virtual Result GetSocketStatistics(::nn::sf::Out<int32_t> pOutResult,
    ::nn::sf::Out<int32_t> pOutErrno, uint64_t processId, uint32_t type,
    const ::nn::sf::OutAutoSelectBuffer& statistics) = 0;
  virtual Result NifIoctl(::nn::sf::Out<int32_t> pOutResult,
    ::nn::sf::Out<int32_t> pOutErrno, int32_t socket, uint32_t request,
    const ::nn::sf::InAutoSelectBuffer& inBuffer,
    const ::nn::sf::OutAutoSelectBuffer& outBuffer) = 0;
  virtual Result Command36(::nn::sf::Out<uint32_t> pOutErrno,
    uint64_t processId, uint32_t value) = 0;
  virtual Result Command37(::nn::sf::Out<int32_t> pOutResult,
    ::nn::sf::Out<int32_t> pOutErrno, uint16_t value0, uint16_t value1,
    uint32_t value2) = 0;
  virtual Result Command38(::nn::sf::Out<int32_t> pOutResult,
    ::nn::sf::Out<int32_t> pOutErrno,
    const ::nn::sf::InAutoSelectBuffer& buffer, uint32_t value) = 0;
  virtual Result Command39(::nn::sf::Out<int32_t> pOutResult,
    ::nn::sf::Out<int32_t> pOutErrno, uint64_t value0, uint32_t value1,
    uint32_t value2) = 0;
  virtual Result ShutdownAllSockets(::nn::sf::Out<int32_t> pOutResult,
    ::nn::sf::Out<int32_t> pOutErrno,
    const ::nn::sf::InAutoSelectBuffer& address, uint32_t mask) = 0;
  virtual Result CreateNoSfEventFdPair() = 0;
  virtual Result Command42(::nn::sf::Out<int32_t> pOutResult,
    ::nn::sf::Out<int32_t> pOutErrno,
    ::nn::sf::Out<ExtendedResult> pOutExtended,
    const ::nn::sf::InAutoSelectBuffer& buffer0,
    const ::nn::sf::InAutoSelectBuffer& buffer1,
    const ::nn::sf::InAutoSelectBuffer& buffer2,
    const ::nn::sf::InAutoSelectBuffer& buffer3,
    const ::nn::sf::InAutoSelectBuffer& buffer4,
    const ::nn::sf::InAutoSelectBuffer& buffer5,
    const ::nn::sf::InAutoSelectBuffer& buffer6,
    const ::nn::sf::InAutoSelectBuffer& buffer7) = 0;
  virtual Result Command43(::nn::sf::Out<int32_t> pOutResult,
    ::nn::sf::Out<int32_t> pOutErrno,
    ::nn::sf::Out<ExtendedResult> pOutExtended,
    const ::nn::sf::InAutoSelectBuffer& inBuffer,
    const ::nn::sf::OutAutoSelectBuffer& outBuffer0,
    const ::nn::sf::OutAutoSelectBuffer& outBuffer1,
    const ::nn::sf::OutAutoSelectBuffer& outBuffer2,
    const ::nn::sf::OutAutoSelectBuffer& outBuffer3,
    const ::nn::sf::OutAutoSelectBuffer& outBuffer4,
    const ::nn::sf::OutAutoSelectBuffer& outBuffer5,
    const ::nn::sf::OutAutoSelectBuffer& outBuffer6,
    const Timespec& timeout) = 0;
  virtual Result SetThreadCoreMask(uint64_t mask) = 0;
  virtual Result GetThreadCoreMask(::nn::sf::Out<uint64_t> pOutMask) = 0;
};

}
