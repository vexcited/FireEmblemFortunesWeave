#pragma once

#include <stddef.h>
#include <stdint.h>

#include "nn/os/time.hpp"
#include "nn/util/bit_flag_set.hpp"

typedef long ssize_t;

struct sockaddr;

struct fd_set {
  uint64_t fds_bits[16];
};

struct timeval;
struct pollfd;
struct msghdr;
struct mmsghdr;

struct in_addr {
  uint32_t s_addr;
};

struct in6_addr {
  uint8_t s6_addr[16];
};

struct sockaddr_in {
  uint8_t sin_len;
  uint8_t sin_family;
  uint16_t sin_port;
  in_addr sin_addr;
  uint8_t sin_zero[8];
};

struct sockaddr_in6 {
  uint8_t sin6_len;
  uint8_t sin6_family;
  uint16_t sin6_port;
  uint32_t sin6_flowinfo;
  in6_addr sin6_addr;
  uint32_t sin6_scope_id;
};

struct addrinfo {
  int ai_flags;
  int ai_family;
  int ai_socktype;
  int ai_protocol;
  uint32_t ai_addrlen;
  char* ai_canonname;
  sockaddr* ai_addr;
  addrinfo* ai_next;
};

struct hostent {
  char* h_name;
  char** h_aliases;
  int h_addrtype;
  int h_length;
  char** h_addr_list;
};

namespace nn {

class MemoryResource;

namespace anif {

struct IoctlRequestField;

}

namespace socket {

enum class Errno : int32_t {};
enum class HErrno : int32_t {};
enum class AiErrno : int32_t {};
enum class Family : uint8_t {
  Af_Unspec = 0,
  Af_Inet = 2,
  Af_Inet6 = 28
};
enum class Type : uint32_t {};
enum class Protocol : uint32_t {};
enum class MsgFlag : int32_t {};
enum class Level : int32_t {};
enum class Option : uint32_t {};
enum class ShutdownMethod : uint32_t {};
enum class ShutdownAllSocketsMask : uint32_t {};
enum class FcntlCommand : uint32_t {};
enum class EventFdFlags : uint32_t {};
enum class IoctlCommand : uint32_t {};
enum class OpenFlag : uint32_t {};
enum class NameInfoFlag : int32_t {};
enum class ResolverOptionKey : uint32_t {};
enum class ResolverProtocol : uint32_t {};
enum class StatisticsType : uint32_t {};
enum class SocketStatisticsType : uint32_t {};
enum class BufferAttribute : uint32_t {};
enum class BufferDirection : uint32_t {};

struct InAddr {
  uint32_t S_addr;
};

struct In6Addr {
  uint8_t S6_addr[16];
};

struct SockAddr;

struct SockAddrIn {
  uint8_t sin_len;
  Family sin_family;
  uint16_t sin_port;
  InAddr sin_addr;
  uint8_t sin_zero[8];
};

struct FdSet {
  uint64_t fds_bits[16];
};

struct TimeVal;
struct PollFd;
struct MsgHdr;
struct MMsgHdr;

struct AddrInfo {
  int ai_flags;
  Family ai_family;
  Type ai_socktype;
  Protocol ai_protocol;
  uint32_t ai_addrlen;
  SockAddr* ai_addr;
  char* ai_canonname;
  AddrInfo* ai_next;
};

struct HostEnt {
  char* h_name;
  char** h_aliases;
  Family h_addrtype;
  int h_length;
  char** h_addr_list;
};

enum class ResolverOptionType : uint32_t {
  Boolean = 100,
  Integer = 101,
  Unsigned32 = 102,
  Unsigned64 = 103,
  Double = 104,
  Pointer = 105
};

struct ResolverOption {
  ResolverOptionKey key;
  ResolverOptionType type;
  size_t size;

  union {
    bool booleanValue;
    int integerValue;
    uint32_t unsigned32Value;
    uint64_t unsigned64Value;
    double doubleValue;
    const char* pointerValue;
  } data;
};

struct DnsAddress;
struct StatisticsMemory;
struct IfAddrs;
struct IfMAddrs;
class Config;

using IoctlRequest = util::BitPack<uint32_t, anif::IoctlRequestField>;

}
}
