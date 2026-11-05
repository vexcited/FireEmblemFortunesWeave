#pragma once

#include <stddef.h>
#include <stdint.h>

namespace nn::htcs {

constexpr int SocketCountMax = 40;
constexpr int SessionCountMax = 16;

enum SocketError {
  HTCS_ENONE = 0,
  HTCS_EADDRINUSE = 3,
  HTCS_EADDRNOTAVAIL = 4,
  HTCS_EBADF = 8,
  HTCS_EINTR = 27,
  HTCS_EINVAL = 28,
  HTCS_EMFILE = 33,
  HTCS_ENOTCONN = 56,
};

struct HtcsPeerName {
  char name[32];
};

struct HtcsPortName {
  char name[32];
};

struct SockAddrHtcs {
  uint16_t family;
  HtcsPeerName peerName;
  HtcsPortName portName;
};

struct FdSet {
  int fds[SocketCountMax];
};

struct TimeVal {
  int64_t tv_sec;
  int64_t tv_usec;
};

using AllocateFunction = void* (*)(size_t size);
using DeallocateFunction = void (*)(void* pointer, size_t size);

namespace detail {

enum PortType {
  PortType_Normal = 0,
  PortType_System = 1,
};

}
}
