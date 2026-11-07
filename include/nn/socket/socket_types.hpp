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

struct timeval {
  int64_t tv_sec;
  int64_t tv_usec;
};

struct pollfd;
struct iovec;

struct msghdr {
  void* msg_name;
  uint32_t msg_namelen;
  iovec* msg_iov;
  int msg_iovlen;
  void* msg_control;
  uint32_t msg_controllen;
  int msg_flags;
};

struct mmsghdr {
  msghdr msg_hdr;
  uint32_t msg_len;
};

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

struct TimeVal {
  int64_t tv_sec;
  int64_t tv_usec;
};

struct IoVec {
  void* iov_base;
  size_t iov_len;
};

struct PollFd {
  int32_t fd;
  int16_t events;
  int16_t revents;
};

struct MsgHdr {
  void* msg_name;
  uint32_t msg_namelen;
  IoVec* msg_iov;
  int msg_iovlen;
  void* msg_control;
  uint32_t msg_controllen;
  MsgFlag msg_flags;
};

struct MMsgHdr {
  MsgHdr msg_hdr;
  uint32_t msg_len;
};

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

struct IfAddrs {
  IfAddrs* ifa_next;
  char* ifa_name;
  uint16_t ifa_flags;
  SockAddr* ifa_addr;
  SockAddr* ifa_netmask;
  SockAddr* ifa_dstaddr;
  void* ifa_data;
};

struct IfMAddrs {
  IfMAddrs* ifma_next;
  SockAddr* ifma_name;
  SockAddr* ifma_addr;
  SockAddr* ifma_lladdr;
};

class Config {
 public:
  static constexpr uint32_t DefaultVersion = 0x1000c;
  static constexpr size_t DefaultTcpInitialSendBufferSize = 0x8000;
  static constexpr size_t DefaultTcpInitialReceiveBufferSize = 0x10000;
  static constexpr size_t DefaultTcpAutoSendBufferSizeMax = 0x40000;
  static constexpr size_t DefaultTcpAutoReceiveBufferSizeMax = 0x40000;
  static constexpr size_t DefaultUdpSendBufferSize = 0x2400;
  static constexpr size_t DefaultUdpReceiveBufferSize = 0xa500;
  static constexpr int DefaultSocketBufferEfficiency = 4;

  Config(void* memoryPool, size_t memoryPoolSize, size_t allocatorPoolSize,
    int concurrencyLimit)
    : m_Version(DefaultVersion), m_IsSystemClient(false),
      m_MemoryPool(memoryPool), m_MemoryPoolSize(memoryPoolSize),
      m_AllocatorPoolSize(allocatorPoolSize),
      m_TcpInitialSendBufferSize(DefaultTcpInitialSendBufferSize),
      m_TcpInitialReceiveBufferSize(DefaultTcpInitialReceiveBufferSize),
      m_TcpAutoSendBufferSizeMax(DefaultTcpAutoSendBufferSizeMax),
      m_TcpAutoReceiveBufferSizeMax(DefaultTcpAutoReceiveBufferSizeMax),
      m_UdpSendBufferSize(DefaultUdpSendBufferSize),
      m_UdpReceiveBufferSize(DefaultUdpReceiveBufferSize),
      m_SocketBufferEfficiency(DefaultSocketBufferEfficiency),
      m_ConcurrencyLimit(concurrencyLimit) {}

  uint32_t m_Version;
  bool m_IsSystemClient;
  void* m_MemoryPool;
  size_t m_MemoryPoolSize;
  size_t m_AllocatorPoolSize;
  size_t m_TcpInitialSendBufferSize;
  size_t m_TcpInitialReceiveBufferSize;
  size_t m_TcpAutoSendBufferSizeMax;
  size_t m_TcpAutoReceiveBufferSizeMax;
  size_t m_UdpSendBufferSize;
  size_t m_UdpReceiveBufferSize;
  int m_SocketBufferEfficiency;
  int m_ConcurrencyLimit;
};

using IoctlRequest = util::BitPack<uint32_t, anif::IoctlRequestField>;

}
}
