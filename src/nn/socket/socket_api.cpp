#include <stdarg.h>

#include "nn/socket/detail/socket_api.hpp"
#include "nn/socket/socket_api.hpp"

namespace nn::socket {

namespace detail {

void TrackCall() {}

}

ssize_t Recv(int socket, void* buffer, size_t length, MsgFlag flags) {
  return detail::Recv(socket, buffer, length, flags);
}

ssize_t Recv(int socket, void* buffer, size_t length, int flags) {
  return detail::Recv(socket, buffer, length, flags);
}

ssize_t RecvFrom(int socket, void* buffer, size_t length, MsgFlag flags,
  SockAddr* address, uint32_t* addressLength) {
  return detail::RecvFrom(socket, buffer, length, flags, address,
    addressLength);
}

ssize_t RecvFrom(int socket, void* buffer, size_t length, int flags,
  sockaddr* address, uint32_t* addressLength) {
  return detail::RecvFrom(socket, buffer, length, flags, address,
    addressLength);
}

ssize_t Send(int socket, const void* buffer, size_t length, MsgFlag flags) {
  return detail::Send(socket, buffer, length, flags);
}

ssize_t Send(int socket, const void* buffer, size_t length, int flags) {
  return detail::Send(socket, buffer, length, flags);
}

ssize_t SendTo(int socket, const void* buffer, size_t length, MsgFlag flags,
  const SockAddr* address, uint32_t addressLength) {
  return detail::SendTo(socket, buffer, length, flags, address,
    addressLength);
}

ssize_t SendTo(int socket, const void* buffer, size_t length, int flags,
  const sockaddr* address, uint32_t addressLength) {
  return detail::SendTo(socket, buffer, length, flags, address,
    addressLength);
}

int Accept(int socket, SockAddr* address, uint32_t* addressLength) {
  return detail::Accept(socket, address, addressLength);
}

int Accept(int socket, sockaddr* address, uint32_t* addressLength) {
  return detail::Accept(socket, address, addressLength);
}

int Bind(int socket, const SockAddr* address, uint32_t addressLength) {
  return detail::Bind(socket, address, addressLength);
}

int Bind(int socket, const sockaddr* address, uint32_t addressLength) {
  return detail::Bind(socket, address, addressLength);
}

int Connect(int socket, const SockAddr* address, uint32_t addressLength) {
  return detail::Connect(socket, address, addressLength);
}

int Connect(int socket, const sockaddr* address, uint32_t addressLength) {
  return detail::Connect(socket, address, addressLength);
}

int GetPeerName(int socket, SockAddr* address, uint32_t* addressLength) {
  return detail::GetPeerName(socket, address, addressLength);
}

int GetPeerName(int socket, sockaddr* address, uint32_t* addressLength) {
  return detail::GetPeerName(socket, address, addressLength);
}

int GetSockName(int socket, SockAddr* address, uint32_t* addressLength) {
  return detail::GetSockName(socket, address, addressLength);
}

int GetSockName(int socket, sockaddr* address, uint32_t* addressLength) {
  return detail::GetSockName(socket, address, addressLength);
}

int GetSockOpt(int socket, Level level, Option option, void* value,
  uint32_t* valueLength) {
  return detail::GetSockOpt(socket, level, option, value, valueLength);
}

int GetSockOpt(int socket, int level, int option, void* value,
  uint32_t* valueLength) {
  return detail::GetSockOpt(socket, level, option, value, valueLength);
}

int Listen(int socket, int backlog) {
  return detail::Listen(socket, backlog);
}

int SetSockOpt(int socket, Level level, Option option, const void* value,
  uint32_t valueLength) {
  return detail::SetSockOpt(socket, level, option, value, valueLength);
}

int SetSockOpt(int socket, int level, int option, const void* value,
  uint32_t valueLength) {
  return detail::SetSockOpt(socket, level, option, value, valueLength);
}

int SockAtMark(int socket) {
  return detail::SockAtMark(socket);
}

int Shutdown(int socket, ShutdownMethod how) {
  return detail::Shutdown(socket, how);
}

int Shutdown(int socket, int how) {
  return detail::Shutdown(socket, how);
}

int ShutdownAllSockets(const SockAddr* address, uint32_t addressLength,
  ShutdownAllSocketsMask mask) {
  return detail::ShutdownAllSockets(address, addressLength, mask);
}

int Socket(Family domain, Type type, Protocol protocol) {
  return detail::Socket(domain, type, protocol);
}

int Socket(int domain, int type, int protocol) {
  return detail::Socket(domain, type, protocol);
}

int SocketExempt(Family domain, Type type, Protocol protocol) {
  return detail::SocketExempt(domain, type, protocol);
}

int SocketExempt(int domain, int type, int protocol) {
  return detail::SocketExempt(domain, type, protocol);
}

ssize_t Write(int socket, const void* buffer, size_t length) {
  return detail::Write(socket, buffer, length);
}

ssize_t Read(int socket, void* buffer, size_t length) {
  return detail::Read(socket, buffer, length);
}

int Close(int socket) {
  return detail::Close(socket);
}

int Select(int count, FdSet* readFds, FdSet* writeFds, FdSet* exceptFds,
  TimeVal* timeout) {
  return detail::Select(count, readFds, writeFds, exceptFds, timeout);
}

int Select(int count, fd_set* readFds, fd_set* writeFds, fd_set* exceptFds,
  timeval* timeout) {
  return detail::Select(count, readFds, writeFds, exceptFds, timeout);
}

int Poll(PollFd* fds, size_t count, int timeout) {
  return detail::Poll(fds, count, timeout);
}

int Poll(pollfd* fds, size_t count, int timeout) {
  return detail::Poll(fds, count, timeout);
}

int Fcntl(int socket, FcntlCommand command, ...) {
  va_list arguments;
  va_start(arguments, command);
  int value = va_arg(arguments, int);
  va_end(arguments);
  return detail::Fcntl(socket, command, value);
}

int Fcntl(int socket, int command, ...) {
  va_list arguments;
  va_start(arguments, command);
  int value = va_arg(arguments, int);
  va_end(arguments);
  return detail::Fcntl(socket, command, value);
}

int EventFd(uint64_t initialValue, EventFdFlags flags) {
  return detail::EventFd(initialValue, static_cast<int>(flags));
}

int EventFdRead(int fd, uint64_t* pOutValue) {
  if (pOutValue == nullptr) {
    return -1;
  }

  uint64_t value = 0;
  if (static_cast<int>(detail::Read(fd, &value, sizeof(value))) !=
    sizeof(value)) {
    return -1;
  }

  *pOutValue = value;
  return 0;
}

int EventFdWrite(int fd, uint64_t value) {
  if (static_cast<int>(detail::Write(fd, &value, sizeof(value))) !=
    sizeof(value)) {
    return -1;
  }

  return 0;
}

int InetPton(Family family, const char* source, void* destination) {
  return detail::InetPton(family, source, destination);
}

int InetPton(int family, const char* source, void* destination) {
  return detail::InetPton(family, source, destination);
}

const char* InetNtop(Family family, const void* source, char* destination,
  uint32_t size) {
  return detail::InetNtop(family, source, destination, size);
}

const char* InetNtop(int family, const void* source, char* destination,
  uint32_t size) {
  return detail::InetNtop(family, source, destination, size);
}

int InetAton(const char* source, InAddr* destination) {
  return detail::InetAton(source, destination);
}

int InetAton(const char* source, in_addr* destination) {
  return detail::InetAton(source, destination);
}

char* InetNtoa(InAddr address) {
  return detail::InetNtoa(address);
}

char* InetNtoa(in_addr address) {
  return detail::InetNtoa(address);
}

uint16_t InetHtons(uint16_t value) {
  return detail::InetHtons(value);
}

uint32_t InetHtonl(uint32_t value) {
  return detail::InetHtonl(value);
}

uint64_t InetHtonll(uint64_t value) {
  return detail::InetHtonll(value);
}

uint16_t InetNtohs(uint16_t value) {
  return detail::InetNtohs(value);
}

uint32_t InetNtohl(uint32_t value) {
  return detail::InetNtohl(value);
}

uint64_t InetNtohll(uint64_t value) {
  return detail::InetNtohll(value);
}

Errno GetLastError() {
  return detail::GetLastError();
}

int GetLastErrno() {
  return detail::GetLastErrno();
}

void SetLastError(Errno error) {
  detail::SetLastError(error);
}

void SetLastErrno(int error) {
  detail::SetLastErrno(error);
}

ssize_t RecvMsg(int socket, MsgHdr* message, MsgFlag flags) {
  return detail::RecvMsg(socket, message, flags);
}

ssize_t RecvMsg(int socket, msghdr* message, int flags) {
  return detail::RecvMsg(socket, message, flags);
}

int RecvMMsg(int socket, MMsgHdr* messages, size_t count, MsgFlag flags,
  TimeSpan* timeout) {
  return detail::RecvMMsg(socket, messages, count, flags, timeout);
}

int RecvMMsg(int socket, mmsghdr* messages, size_t count, int flags,
  TimeSpan* timeout) {
  return detail::RecvMMsg(socket, messages, count, flags, timeout);
}

ssize_t SendMsg(int socket, const MsgHdr* message, MsgFlag flags) {
  return detail::SendMsg(socket, message, flags);
}

ssize_t SendMsg(int socket, const msghdr* message, int flags) {
  return detail::SendMsg(socket, message, flags);
}

int SendMMsg(int socket, MMsgHdr* messages, size_t count, MsgFlag flags) {
  return detail::SendMMsg(socket, messages, count, flags);
}

int SendMMsg(int socket, mmsghdr* messages, size_t count, int flags) {
  return detail::SendMMsg(socket, messages, count, flags);
}

int Ioctl(int socket, IoctlCommand command, void* data, size_t length) {
  return detail::Ioctl(socket, command, data, length);
}

int Ioctl(int socket, uint32_t command, void* data, size_t length) {
  return detail::Ioctl(socket, command, data, length);
}

int Ioctl(int socket, IoctlRequest command, void* data, size_t length) {
  return detail::Ioctl(socket, command, data, length);
}

int Open(const char* path, OpenFlag flags) {
  return detail::Open(path, flags);
}

int Open(const char* path, int flags) {
  return detail::Open(path, flags);
}

bool IsInitialized() {
  return detail::IsInitialized();
}

namespace internal {

Result Initialize(int concurrencyLimit) {
  return detail::Initialize(concurrencyLimit);
}

Result Initialize(int* pOutHandle, int concurrencyLimit, int sessionCount) {
  return detail::Initialize(pOutHandle, concurrencyLimit, sessionCount);
}

}

Result Initialize(void* memory, size_t memorySize, size_t allocatorPoolSize,
  int concurrencyLimit) {
  return detail::Initialize(memory, memorySize, allocatorPoolSize,
    concurrencyLimit);
}

Result Initialize(const Config& config) {
  return detail::Initialize(config);
}

Result Finalize() {
  return detail::Finalize();
}

Result Finalize(int handle) {
  return detail::Finalize(handle);
}

Result SetAllocator(MemoryResource* allocator) {
  return detail::SetAllocator(allocator);
}

Result GetAllocator(MemoryResource** pOutAllocator) {
  return detail::GetAllocator(pOutAllocator);
}

AiErrno GetAddrInfo(const char* node, const char* service,
  const AddrInfo* hints, AddrInfo** pOutResult) {
  return detail::GetAddrInfo(node, service, hints, pOutResult, nullptr, 0);
}

int GetAddrInfo(const char* node, const char* service, const addrinfo* hints,
  addrinfo** pOutResult) {
  return detail::GetAddrInfo(node, service, hints, pOutResult, nullptr, 0);
}

AiErrno GetAddrInfo(const char* node, const char* service,
  const AddrInfo* hints, AddrInfo** pOutResult,
  const ResolverOption* options, size_t optionCount) {
  return detail::GetAddrInfo(node, service, hints, pOutResult, options,
    optionCount);
}

int GetAddrInfo(const char* node, const char* service, const addrinfo* hints,
  addrinfo** pOutResult, const ResolverOption* options, size_t optionCount) {
  return detail::GetAddrInfo(node, service, hints, pOutResult, options,
    optionCount);
}

void FreeAddrInfo(AddrInfo* addressInfo) {
  detail::FreeAddrInfo(addressInfo);
}

void FreeAddrInfo(addrinfo* addressInfo) {
  detail::FreeAddrInfo(addressInfo);
}

AiErrno GetNameInfo(const SockAddr* address, uint32_t addressLength,
  char* host, size_t hostLength, char* service, size_t serviceLength,
  NameInfoFlag flags) {
  return detail::GetNameInfo(address, addressLength, host, hostLength,
    service, serviceLength, flags, nullptr, 0);
}

int GetNameInfo(const sockaddr* address, uint32_t addressLength, char* host,
  uint32_t hostLength, char* service, uint32_t serviceLength, int flags) {
  return detail::GetNameInfo(address, addressLength, host, hostLength,
    service, serviceLength, flags, nullptr, 0);
}

AiErrno GetNameInfo(const SockAddr* address, uint32_t addressLength,
  char* host, size_t hostLength, char* service, size_t serviceLength,
  NameInfoFlag flags, const ResolverOption* options, size_t optionCount) {
  return detail::GetNameInfo(address, addressLength, host, hostLength,
    service, serviceLength, flags, options, optionCount);
}

int GetNameInfo(const sockaddr* address, uint32_t addressLength, char* host,
  uint32_t hostLength, char* service, uint32_t serviceLength, int flags,
  const ResolverOption* options, size_t optionCount) {
  return detail::GetNameInfo(address, addressLength, host, hostLength,
    service, serviceLength, flags, options, optionCount);
}

HostEnt* GetHostEntByName(const char* name) {
  return detail::GetHostEntByName(name, nullptr, 0);
}

hostent* GetHostByName(const char* name) {
  return detail::GetHostByName(name, nullptr, 0);
}

HostEnt* GetHostEntByName(const char* name, const ResolverOption* options,
  size_t optionCount) {
  return detail::GetHostEntByName(name, options, optionCount);
}

hostent* GetHostByName(const char* name, const ResolverOption* options,
  size_t optionCount) {
  return detail::GetHostByName(name, options, optionCount);
}

HostEnt* GetHostEntByAddr(const void* address, uint32_t length,
  Family family) {
  return detail::GetHostEntByAddr(address, length, family, nullptr, 0);
}

hostent* GetHostByAddr(const void* address, uint32_t length, int family) {
  return detail::GetHostByAddr(address, length, family, nullptr, 0);
}

HostEnt* GetHostEntByAddr(const void* address, uint32_t length,
  Family family, const ResolverOption* options, size_t optionCount) {
  return detail::GetHostEntByAddr(address, length, family, options,
    optionCount);
}

hostent* GetHostByAddr(const void* address, uint32_t length, int family,
  const ResolverOption* options, size_t optionCount) {
  return detail::GetHostByAddr(address, length, family, options,
    optionCount);
}

HErrno GetHError() {
  return detail::GetHError();
}

int GetHErrno() {
  return detail::GetHErrno();
}

const char* HStrError(HErrno error) {
  return detail::HStrError(error);
}

const char* HStrError(int error) {
  return detail::HStrError(error);
}

const char* GAIStrError(AiErrno error) {
  return detail::GAIStrError(error);
}

const char* GAIStrError(int error) {
  return detail::GAIStrError(error);
}

int ResolverGetOption(ResolverOption* pOutOption, ResolverOptionKey key) {
  return detail::ResolverGetOption(pOutOption, static_cast<uint32_t>(key));
}

int ResolverSetOption(const ResolverOption& option) {
  return detail::ResolverSetOption(option);
}

int SetSupportedProtocols(ResolverProtocol protocols) {
  return detail::SetSupportedProtocols(static_cast<uint32_t>(protocols));
}

int GetSupportedProtocols(ResolverProtocol* pOutProtocols) {
  return detail::GetSupportedProtocols(
    reinterpret_cast<uint32_t*>(pOutProtocols));
}

int ResolverSetDnsAddresses(const DnsAddress* addresses, uint32_t count) {
  return detail::ResolverSetDnsAddresses(addresses, count);
}

int Sysctl(int* name, size_t nameLength, void* oldValue, size_t* oldLength,
  void* newValue, size_t newLength) {
  return detail::Sysctl(name, nameLength, oldValue, oldLength, newValue,
    newLength);
}

int DuplicateSocket(int socket, uint64_t ownerProcessId) {
  return detail::DuplicateSocket(socket, ownerProcessId);
}

Result RegisterResourceStatisticsName(const char* name, size_t length,
  StatisticsMemory* memory) {
  return detail::RegisterResourceStatisticsName(name, length, memory);
}

Result RegisterResourceStatisticsName(const char* name, size_t length) {
  return detail::RegisterResourceStatisticsName(name, length);
}

Result RegisterForStatistics(const char* name, size_t length,
  StatisticsMemory* memory) {
  return detail::RegisterForStatistics(name, length, memory);
}

Result RegisterForStatistics(const char* name, size_t length) {
  return detail::RegisterForStatistics(name, length);
}

int GetResourceStatistics(StatisticsType type, void* buffer, size_t size,
  uint32_t processId, const char* name, size_t length) {
  return detail::GetResourceStatistics(type, buffer, size, processId, name,
    length);
}

int GetSocketStatistics(void* buffer, size_t size,
  SocketStatisticsType type) {
  return detail::GetSocketStatistics(type, buffer, size);
}

Result SetSocketBufferAttribute(BufferAttribute attribute,
  BufferDirection direction, size_t size) {
  return detail::SetSocketBufferAttribute(attribute, direction, size);
}

void SetThreadCoreMask(uint64_t mask) {
  detail::SetThreadCoreMask(mask);
}

uint64_t GetThreadCoreMask() {
  return detail::GetThreadCoreMask();
}

int GetIfAddrs(IfAddrs** pOutAddresses) {
  return detail::GetIfAddrs(pOutAddresses);
}

void FreeIfAddrs(IfAddrs* addresses) {
  detail::FreeIfAddrs(addresses);
}

int GetIfMAddrs(IfMAddrs** pOutAddresses) {
  return detail::GetIfMAddrs(pOutAddresses);
}

void FreeIfMAddrs(IfMAddrs* addresses) {
  detail::FreeIfMAddrs(addresses);
}

ssize_t SendMsgNoMem(int socket, const MsgHdr* message, MsgFlag flags) {
  return detail::SendMsgNoMem(socket, message, flags);
}

int SendMMsgNoMem(int socket, MMsgHdr* messages, size_t count,
  MsgFlag flags) {
  return detail::SendMMsgNoMem(socket, messages, count, flags);
}

ssize_t RecvMsgNoMem(int socket, MsgHdr* message, MsgFlag flags) {
  return detail::RecvMsgNoMem(socket, message, flags);
}

int RecvMMsgNoMem(int socket, MMsgHdr* messages, size_t count, MsgFlag flags,
  TimeSpan* timeout) {
  return detail::RecvMMsgNoMem(socket, messages, count, flags, timeout);
}

int NoSfEventFd() {
  return detail::NoSfEventFd();
}

int NoSfEventFdClose(int fd) {
  return detail::NoSfEventFdClose(fd);
}

int NoSfEventFdTrigger(int fd) {
  return detail::NoSfEventFdTrigger(fd);
}

}
