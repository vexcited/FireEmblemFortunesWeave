#pragma once

#include <stdint.h>

#include "nn/htcs/htcs_types.hpp"
#include "nn/result.hpp"
#include "nn/sf/native_handle.hpp"
#include "nn/sf/sf_buffers.hpp"
#include "nn/sf/shared_pointer.hpp"

namespace nn::tma {

class ISocket : public sf::IServiceObject {
 public:
  virtual void Reserved2() = 0;
  virtual void Reserved3() = 0;
  virtual Result Close(sf::Out<int> pOutError, sf::Out<int> pOutResult) = 0;
  virtual Result Connect(sf::Out<int> pOutError, sf::Out<int> pOutResult,
    const htcs::SockAddrHtcs& address) = 0;
  virtual Result Bind(sf::Out<int> pOutError, sf::Out<int> pOutResult,
    const htcs::SockAddrHtcs& address) = 0;
  virtual Result Listen(sf::Out<int> pOutError, sf::Out<int> pOutResult,
    int backlogCount) = 0;
  virtual Result Accept() = 0;
  virtual Result Recv() = 0;
  virtual Result Send() = 0;
  virtual Result Shutdown(sf::Out<int> pOutError, sf::Out<int> pOutResult,
    int how) = 0;
  virtual Result Fcntl(sf::Out<int> pOutError, sf::Out<int> pOutResult,
    int command, int value) = 0;
  virtual Result AcceptStart(sf::Out<uint32_t> pOutTaskId,
    sf::Out<sf::NativeHandle> pOutEvent) = 0;
  virtual Result AcceptResults(sf::Out<int> pOutError,
    const sf::Out<sf::SharedPointer<ISocket>>& pOutSocket,
    sf::Out<htcs::SockAddrHtcs> pOutAddress, uint32_t taskId) = 0;
  virtual Result RecvStart(sf::Out<uint32_t> pOutTaskId,
    sf::Out<sf::NativeHandle> pOutEvent, int size, int flags) = 0;
  virtual Result RecvResults(sf::Out<int> pOutError,
    sf::Out<int64_t> pOutSize, const sf::OutBuffer& buffer,
    uint32_t taskId) = 0;
  virtual Result RecvLargeStart() = 0;
  virtual Result SendStartOld() = 0;
  virtual Result SendLargeStart() = 0;
  virtual Result SendResults(sf::Out<int> pOutError,
    sf::Out<int64_t> pOutSize, uint32_t taskId) = 0;
  virtual Result StartSend(sf::Out<uint32_t> pOutTaskId,
    sf::Out<sf::NativeHandle> pOutEvent, sf::Out<int64_t> pOutMaxSize,
    int64_t size, int flags) = 0;
  virtual Result ContinueSendOld() = 0;
  virtual Result EndSend(sf::Out<int> pOutError, sf::Out<int64_t> pOutSize,
    uint32_t taskId) = 0;
  virtual Result StartRecv(sf::Out<uint32_t> pOutTaskId,
    sf::Out<sf::NativeHandle> pOutEvent, int64_t size, int flags) = 0;
  virtual Result EndRecv(sf::Out<int> pOutError, sf::Out<int64_t> pOutSize,
    const sf::OutBuffer& buffer, uint32_t taskId) = 0;
  virtual Result SendStart(sf::Out<uint32_t> pOutTaskId,
    sf::Out<sf::NativeHandle> pOutEvent, const sf::InBuffer& buffer,
    int flags) = 0;
  virtual Result ContinueSend(sf::Out<int64_t> pOutSize,
    sf::Out<bool> pOutWait, const sf::InBuffer& buffer,
    uint32_t taskId) = 0;
  virtual Result SendLargeResults() = 0;
  virtual Result GetBoundTcpPortNumberStart(sf::Out<uint32_t> pOutTaskId,
    sf::Out<sf::NativeHandle> pOutEvent) = 0;
  virtual Result GetBoundTcpPortNumberResults(sf::Out<int> pOutError,
    sf::Out<int> pOutPortNumber, uint32_t taskId) = 0;
  virtual Result EventFdReadStart(sf::Out<uint32_t> pOutTaskId,
    sf::Out<sf::NativeHandle> pOutEvent) = 0;
  virtual Result EventFdReadResults(sf::Out<int> pOutError,
    sf::Out<uint64_t> pOutValue, uint32_t taskId) = 0;
  virtual Result EventFdWriteStart(sf::Out<uint32_t> pOutTaskId,
    sf::Out<sf::NativeHandle> pOutEvent, uint64_t value) = 0;
  virtual Result EventFdWriteResults(sf::Out<int> pOutError,
    uint32_t taskId) = 0;
  virtual Result GetPrimitive(sf::Out<int> pOutPrimitive) = 0;
};

class IHtcsManager : public sf::IServiceObject {
 public:
  virtual void Reserved2() = 0;
  virtual void Reserved3() = 0;
  virtual Result Socket() = 0;
  virtual Result Close() = 0;
  virtual Result Connect() = 0;
  virtual Result Bind() = 0;
  virtual Result Listen() = 0;
  virtual Result Accept() = 0;
  virtual Result Recv() = 0;
  virtual Result Send() = 0;
  virtual Result Shutdown() = 0;
  virtual Result Fcntl() = 0;
  virtual Result GetPeerNameAny(sf::Out<htcs::HtcsPeerName> pOutName) = 0;
  virtual Result GetDefaultHostName(
    sf::Out<htcs::HtcsPeerName> pOutName) = 0;
  virtual Result CreateSocketOld() = 0;
  virtual Result CreateSocket(sf::Out<int> pOutError,
    const sf::Out<sf::SharedPointer<ISocket>>& pOutSocket,
    bool enableDisconnectionEmulation) = 0;
  virtual Result CreateEventFd(sf::Out<int> pOutError,
    const sf::Out<sf::SharedPointer<ISocket>>& pOutSocket,
    uint64_t initialValue, int flags) = 0;
  virtual Result RegisterProcessId(uint64_t processId) = 0;
  virtual Result MonitorManager(uint64_t processId) = 0;
  virtual Result StartSelect(sf::Out<uint32_t> pOutTaskId,
    sf::Out<sf::NativeHandle> pOutEvent, const sf::InArray<int>& readFds,
    const sf::InArray<int>& writeFds, const sf::InArray<int>& exceptFds,
    int64_t seconds, int64_t microseconds) = 0;
  virtual Result EndSelect(sf::Out<int> pOutError, sf::Out<int> pOutCount,
    const sf::OutArray<int>& readFds, const sf::OutArray<int>& writeFds,
    const sf::OutArray<int>& exceptFds, uint32_t taskId) = 0;
};

}
