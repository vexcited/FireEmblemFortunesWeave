#include <errno.h>
#include <stdarg.h>

#include "nn/socket/socket_api.hpp"

using namespace nn::socket;

extern "C" {

ssize_t nnsocketRecv(int socket, void* buffer, size_t length, int flags) {
  return Recv(socket, buffer, length, flags);
}

ssize_t nnsocketRecvFrom(int socket, void* buffer, size_t length, int flags,
  sockaddr* address, uint32_t* addressLength) {
  return RecvFrom(socket, buffer, length, flags, address, addressLength);
}

ssize_t nnsocketSend(int socket, const void* buffer, size_t length,
  int flags) {
  return Send(socket, buffer, length, flags);
}

ssize_t nnsocketSendTo(int socket, const void* buffer, size_t length,
  int flags, const sockaddr* address, uint32_t addressLength) {
  return SendTo(socket, buffer, length, flags, address, addressLength);
}

int nnsocketAccept(int socket, sockaddr* address, uint32_t* addressLength) {
  return Accept(socket, address, addressLength);
}

int nnsocketBind(int socket, const sockaddr* address,
  uint32_t addressLength) {
  return Bind(socket, address, addressLength);
}

int nnsocketConnect(int socket, const sockaddr* address,
  uint32_t addressLength) {
  return Connect(socket, address, addressLength);
}

int nnsocketGetPeerName(int socket, sockaddr* address,
  uint32_t* addressLength) {
  return GetPeerName(socket, address, addressLength);
}

int nnsocketGetSockName(int socket, sockaddr* address,
  uint32_t* addressLength) {
  return GetSockName(socket, address, addressLength);
}

int nnsocketGetSockOpt(int socket, int level, int option, void* value,
  uint32_t* valueLength) {
  return GetSockOpt(socket, level, option, value, valueLength);
}

int nnsocketListen(int socket, int backlog) {
  return Listen(socket, backlog);
}

int nnsocketSetSockOpt(int socket, int level, int option, const void* value,
  uint32_t valueLength) {
  return SetSockOpt(socket, level, option, value, valueLength);
}

int nnsocketSockAtMark(int socket) {
  return SockAtMark(socket);
}

int nnsocketShutdown(int socket, int how) {
  return Shutdown(socket, how);
}

int nnsocketSocket(int domain, int type, int protocol) {
  return Socket(domain, type, protocol);
}

int nnsocketWrite(int socket, const void* buffer, size_t length) {
  return Write(socket, buffer, length);
}

int nnsocketRead(int socket, void* buffer, size_t length) {
  return Read(socket, buffer, length);
}

int nnsocketClose(int socket) {
  return Close(socket);
}

int nnsocketSelect(int count, fd_set* readFds, fd_set* writeFds,
  fd_set* exceptFds, timeval* timeout) {
  return Select(count, readFds, writeFds, exceptFds, timeout);
}

int nnsocketPoll(pollfd* fds, size_t count, int timeout) {
  return Poll(fds, count, timeout);
}

int nnsocketFcntl(int socket, int command, ...) {
  va_list arguments;
  va_start(arguments, command);
  int value = va_arg(arguments, int);
  va_end(arguments);
  return Fcntl(socket, command, value);
}

int nnsocketInetPton(int family, const char* source, void* destination) {
  return InetPton(family, source, destination);
}

const char* nnsocketInetNtop(int family, const void* source,
  char* destination, uint32_t size) {
  return InetNtop(family, source, destination, size);
}

int nnsocketInetAton(const char* source, in_addr* destination) {
  return InetAton(source, destination);
}

char* nnsocketInetNtoa(in_addr address) {
  return InetNtoa(address);
}

uint16_t nnsocketInetHtons(uint16_t value) {
  return InetHtons(value);
}

uint32_t nnsocketInetHtonl(uint32_t value) {
  return InetHtonl(value);
}

uint64_t nnsocketInetHtonll(uint64_t value) {
  return InetHtonll(value);
}

uint16_t nnsocketInetNtohs(uint16_t value) {
  return InetNtohs(value);
}

uint32_t nnsocketInetNtohl(uint32_t value) {
  return InetNtohl(value);
}

uint64_t nnsocketInetNtohll(uint64_t value) {
  return InetNtohll(value);
}

int nnsocketGetLastErrno() {
  return GetLastErrno();
}

void nnsocketSetLastErrno(int error) {
  SetLastErrno(error);
}

ssize_t nnsocketRecvMsg(int socket, msghdr* message, int flags) {
  return RecvMsg(socket, message, flags);
}

ssize_t nnsocketSendMsg(int socket, const msghdr* message, int flags) {
  return SendMsg(socket, message, flags);
}

int nnsocketIoctl(int socket, uint32_t command, void* data, size_t length) {
  return Ioctl(socket, command, data, length);
}

int nnsocketOpen(const char* path, int flags) {
  return Open(path, flags);
}

uint32_t nnsocketInitialize(void* memory, size_t memorySize,
  size_t allocatorPoolSize, int concurrencyLimit) {
  return Initialize(memory, memorySize, allocatorPoolSize, concurrencyLimit)
    .GetInnerValueForDebug();
}

uint32_t nnsocketFinalize() {
  return Finalize().GetInnerValueForDebug();
}

int nnsocketGetAddrInfo(const char* node, const char* service,
  const addrinfo* hints, addrinfo** pOutResult) {
  return GetAddrInfo(node, service, hints, pOutResult, nullptr, 0);
}

int nnsocketGetAddrInfoWithOptions(const char* node, const char* service,
  const addrinfo* hints, addrinfo** pOutResult,
  const ResolverOption* options, size_t optionCount) {
  return GetAddrInfo(node, service, hints, pOutResult, options, optionCount);
}

hostent* nnsocketGetHostByName(const char* name) {
  return GetHostByName(name, nullptr, 0);
}

hostent* nnsocketGetHostByNameWithOptions(const char* name,
  const ResolverOption* options, size_t optionCount) {
  return GetHostByName(name, options, optionCount);
}

hostent* nnsocketGetHostByAddr(const void* address, uint32_t length,
  int family) {
  return GetHostByAddr(address, length, family, nullptr, 0);
}

hostent* nnsocketGetHostByAddrWithOptions(const void* address,
  uint32_t length, int family, const ResolverOption* options,
  size_t optionCount) {
  return GetHostByAddr(address, length, family, options, optionCount);
}

int nnsocketGetNameInfo(const sockaddr* address, uint32_t addressLength,
  char* host, uint32_t hostLength, char* service, uint32_t serviceLength,
  int flags) {
  return GetNameInfo(address, addressLength, host, hostLength, service,
    serviceLength, flags, nullptr, 0);
}

int nnsocketGetNameInfoWithOptions(const sockaddr* address,
  uint32_t addressLength, char* host, uint32_t hostLength, char* service,
  uint32_t serviceLength, int flags, const ResolverOption* options,
  size_t optionCount) {
  return GetNameInfo(address, addressLength, host, hostLength, service,
    serviceLength, flags, options, optionCount);
}

void nnsocketFreeAddrInfo(addrinfo* addressInfo) {
  FreeAddrInfo(addressInfo);
}

int nnsocketGetHErrno() {
  return GetHErrno();
}

const char* nnsocketHStrError(int error) {
  return HStrError(error);
}

int nnsocketResolverGetOption(ResolverOption* pOutOption,
  ResolverOptionKey key) {
  if (pOutOption == nullptr) {
    errno = EINVAL;
    return -1;
  }

  return ResolverGetOption(pOutOption, key);
}

int nnsocketResolverSetOption(const ResolverOption* option) {
  if (option == nullptr) {
    errno = EINVAL;
    return -1;
  }

  return ResolverSetOption(*option);
}

const char* nnsocketGAIStrError(int error) {
  return GAIStrError(error);
}

int nnsocketSysctl(int* name, size_t nameLength, void* oldValue,
  size_t* oldLength, void* newValue, size_t newLength) {
  return Sysctl(name, nameLength, oldValue, oldLength, newValue, newLength);
}

int nnsocketDuplicateSocket(int socket, uint64_t ownerProcessId) {
  return DuplicateSocket(socket, ownerProcessId);
}

int nnsocketEventFd(uint64_t initialValue, EventFdFlags flags) {
  return EventFd(initialValue, flags);
}

int nnsocketEventFdRead(int fd, uint64_t* pOutValue) {
  return EventFdRead(fd, pOutValue);
}

int nnsocketEventFdWrite(int fd, uint64_t value) {
  return EventFdWrite(fd, value);
}

int nnsocketGetResourceStatistics(StatisticsType type, void* buffer,
  size_t size, uint32_t processId, const char* name, size_t length) {
  return GetResourceStatistics(type, buffer, size, processId, name, length);
}

uint32_t nnsocketRegisterResourceStatisticsName(const char* name,
  size_t length) {
  return RegisterResourceStatisticsName(name, length).value;
}

}
