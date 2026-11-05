#pragma once

#include "nn/result.hpp"
#include "nn/socket/socket_types.hpp"

namespace nn::socket {

ssize_t Recv(int socket, void* buffer, size_t length, MsgFlag flags);
ssize_t Recv(int socket, void* buffer, size_t length, int flags);
ssize_t RecvFrom(int socket, void* buffer, size_t length, MsgFlag flags,
  SockAddr* address, uint32_t* addressLength);
ssize_t RecvFrom(int socket, void* buffer, size_t length, int flags,
  sockaddr* address, uint32_t* addressLength);
ssize_t Send(int socket, const void* buffer, size_t length, MsgFlag flags);
ssize_t Send(int socket, const void* buffer, size_t length, int flags);
ssize_t SendTo(int socket, const void* buffer, size_t length, MsgFlag flags,
  const SockAddr* address, uint32_t addressLength);
ssize_t SendTo(int socket, const void* buffer, size_t length, int flags,
  const sockaddr* address, uint32_t addressLength);
int Accept(int socket, SockAddr* address, uint32_t* addressLength);
int Accept(int socket, sockaddr* address, uint32_t* addressLength);
int Bind(int socket, const SockAddr* address, uint32_t addressLength);
int Bind(int socket, const sockaddr* address, uint32_t addressLength);
int Connect(int socket, const SockAddr* address, uint32_t addressLength);
int Connect(int socket, const sockaddr* address, uint32_t addressLength);
int GetPeerName(int socket, SockAddr* address, uint32_t* addressLength);
int GetPeerName(int socket, sockaddr* address, uint32_t* addressLength);
int GetSockName(int socket, SockAddr* address, uint32_t* addressLength);
int GetSockName(int socket, sockaddr* address, uint32_t* addressLength);
int GetSockOpt(int socket, Level level, Option option, void* value,
  uint32_t* valueLength);
int GetSockOpt(int socket, int level, int option, void* value,
  uint32_t* valueLength);
int Listen(int socket, int backlog);
int SetSockOpt(int socket, Level level, Option option, const void* value,
  uint32_t valueLength);
int SetSockOpt(int socket, int level, int option, const void* value,
  uint32_t valueLength);
int SockAtMark(int socket);
int Shutdown(int socket, ShutdownMethod how);
int Shutdown(int socket, int how);
int ShutdownAllSockets(const SockAddr* address, uint32_t addressLength,
  ShutdownAllSocketsMask mask);
int Socket(Family domain, Type type, Protocol protocol);
int Socket(int domain, int type, int protocol);
int SocketExempt(Family domain, Type type, Protocol protocol);
int SocketExempt(int domain, int type, int protocol);
int Write(int socket, const void* buffer, size_t length);
int Read(int socket, void* buffer, size_t length);
int Close(int socket);
int Select(int count, FdSet* readFds, FdSet* writeFds, FdSet* exceptFds,
  TimeVal* timeout);
int Select(int count, fd_set* readFds, fd_set* writeFds, fd_set* exceptFds,
  timeval* timeout);
int Poll(PollFd* fds, size_t count, int timeout);
int Poll(pollfd* fds, size_t count, int timeout);
int Fcntl(int socket, FcntlCommand command, ...);
int Fcntl(int socket, int command, ...);
int EventFd(uint64_t initialValue, EventFdFlags flags);
int EventFdRead(int fd, uint64_t* pOutValue);
int EventFdWrite(int fd, uint64_t value);
int InetPton(Family family, const char* source, void* destination);
int InetPton(int family, const char* source, void* destination);
const char* InetNtop(Family family, const void* source, char* destination,
  uint32_t size);
const char* InetNtop(int family, const void* source, char* destination,
  uint32_t size);
int InetAton(const char* source, InAddr* destination);
int InetAton(const char* source, in_addr* destination);
char* InetNtoa(InAddr address);
char* InetNtoa(in_addr address);
uint16_t InetHtons(uint16_t value);
uint32_t InetHtonl(uint32_t value);
uint64_t InetHtonll(uint64_t value);
uint16_t InetNtohs(uint16_t value);
uint32_t InetNtohl(uint32_t value);
uint64_t InetNtohll(uint64_t value);
Errno GetLastError();
int GetLastErrno();
void SetLastError(Errno error);
void SetLastErrno(int error);
ssize_t RecvMsg(int socket, MsgHdr* message, MsgFlag flags);
ssize_t RecvMsg(int socket, msghdr* message, int flags);
int RecvMMsg(int socket, MMsgHdr* messages, size_t count, MsgFlag flags,
  TimeSpan* timeout);
int RecvMMsg(int socket, mmsghdr* messages, size_t count, int flags,
  TimeSpan* timeout);
ssize_t SendMsg(int socket, const MsgHdr* message, MsgFlag flags);
ssize_t SendMsg(int socket, const msghdr* message, int flags);
int SendMMsg(int socket, MMsgHdr* messages, size_t count, MsgFlag flags);
int SendMMsg(int socket, mmsghdr* messages, size_t count, int flags);
int Ioctl(int socket, IoctlCommand command, void* data, size_t length);
int Ioctl(int socket, uint32_t command, void* data, size_t length);
int Ioctl(int socket, IoctlRequest command, void* data, size_t length);
int Open(const char* path, OpenFlag flags);
int Open(const char* path, int flags);
bool IsInitialized();
Result Initialize(void* memory, size_t memorySize, size_t allocatorPoolSize,
  int concurrencyLimit);
Result Initialize(const Config& config);
Result Finalize();
Result Finalize(int handle);
Result SetAllocator(MemoryResource* allocator);
Result GetAllocator(MemoryResource** pOutAllocator);
AiErrno GetAddrInfo(const char* node, const char* service,
  const AddrInfo* hints, AddrInfo** pOutResult);
int GetAddrInfo(const char* node, const char* service, const addrinfo* hints,
  addrinfo** pOutResult);
AiErrno GetAddrInfo(const char* node, const char* service,
  const AddrInfo* hints, AddrInfo** pOutResult,
  const ResolverOption* options, size_t optionCount);
int GetAddrInfo(const char* node, const char* service, const addrinfo* hints,
  addrinfo** pOutResult, const ResolverOption* options, size_t optionCount);
void FreeAddrInfo(AddrInfo* addressInfo);
void FreeAddrInfo(addrinfo* addressInfo);
AiErrno GetNameInfo(const SockAddr* address, uint32_t addressLength,
  char* host, size_t hostLength, char* service, size_t serviceLength,
  NameInfoFlag flags);
int GetNameInfo(const sockaddr* address, uint32_t addressLength, char* host,
  uint32_t hostLength, char* service, uint32_t serviceLength, int flags);
AiErrno GetNameInfo(const SockAddr* address, uint32_t addressLength,
  char* host, size_t hostLength, char* service, size_t serviceLength,
  NameInfoFlag flags, const ResolverOption* options, size_t optionCount);
int GetNameInfo(const sockaddr* address, uint32_t addressLength, char* host,
  uint32_t hostLength, char* service, uint32_t serviceLength, int flags,
  const ResolverOption* options, size_t optionCount);
HostEnt* GetHostEntByName(const char* name);
hostent* GetHostByName(const char* name);
HostEnt* GetHostEntByName(const char* name, const ResolverOption* options,
  size_t optionCount);
hostent* GetHostByName(const char* name, const ResolverOption* options,
  size_t optionCount);
HostEnt* GetHostEntByAddr(const void* address, uint32_t length,
  Family family);
hostent* GetHostByAddr(const void* address, uint32_t length, int family);
HostEnt* GetHostEntByAddr(const void* address, uint32_t length,
  Family family, const ResolverOption* options, size_t optionCount);
hostent* GetHostByAddr(const void* address, uint32_t length, int family,
  const ResolverOption* options, size_t optionCount);
HErrno GetHError();
int GetHErrno();
const char* HStrError(HErrno error);
const char* HStrError(int error);
const char* GAIStrError(AiErrno error);
const char* GAIStrError(int error);
int ResolverGetOption(ResolverOption* pOutOption, ResolverOptionKey key);
int ResolverSetOption(const ResolverOption& option);
int SetSupportedProtocols(ResolverProtocol protocols);
int GetSupportedProtocols(ResolverProtocol* pOutProtocols);
int ResolverSetDnsAddresses(const DnsAddress* addresses, uint32_t count);
int Sysctl(int* name, size_t nameLength, void* oldValue, size_t* oldLength,
  void* newValue, size_t newLength);
int DuplicateSocket(int socket, uint64_t ownerProcessId);
Result RegisterResourceStatisticsName(const char* name, size_t length,
  StatisticsMemory* memory);
Result RegisterResourceStatisticsName(const char* name, size_t length);
Result RegisterForStatistics(const char* name, size_t length,
  StatisticsMemory* memory);
Result RegisterForStatistics(const char* name, size_t length);
int GetResourceStatistics(StatisticsType type, void* buffer, size_t size,
  uint32_t processId, const char* name, size_t length);
int GetSocketStatistics(void* buffer, size_t size, SocketStatisticsType type);
Result SetSocketBufferAttribute(BufferAttribute attribute,
  BufferDirection direction, size_t size);
void SetThreadCoreMask(uint64_t mask);
uint64_t GetThreadCoreMask();
int GetIfAddrs(IfAddrs** pOutAddresses);
void FreeIfAddrs(IfAddrs* addresses);
int GetIfMAddrs(IfMAddrs** pOutAddresses);
void FreeIfMAddrs(IfMAddrs* addresses);
ssize_t SendMsgNoMem(int socket, const MsgHdr* message, MsgFlag flags);
int SendMMsgNoMem(int socket, MMsgHdr* messages, size_t count,
  MsgFlag flags);
ssize_t RecvMsgNoMem(int socket, MsgHdr* message, MsgFlag flags);
int RecvMMsgNoMem(int socket, MMsgHdr* messages, size_t count, MsgFlag flags,
  TimeSpan* timeout);
int NoSfEventFd();
int NoSfEventFdClose(int fd);
int NoSfEventFdTrigger(int fd);

namespace internal {

Result Initialize(int concurrencyLimit);
Result Initialize(int* pOutHandle, int concurrencyLimit, int sessionCount);

}
}
