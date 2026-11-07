#include <ctype.h>
#include <stdlib.h>

#include "nn/socket/detail/socket_api.hpp"
#include "nn/socket/socket_api.hpp"

namespace nn::socket::detail {

int socketAton(const char* source, InAddr* destination) {
  char* pEnd = nullptr;
  unsigned long long parts[4];
  int count = 0;
  if (source == nullptr || destination == nullptr) {
    socket::SetLastError(static_cast<Errno>(97));
    return 0;
  }

  const char* pCurrent = source;
  for (;;) {
    parts[count] = strtoull(pCurrent, &pEnd, 0);
    if (parts[count] > 0xffffffff || pEnd == pCurrent) {
      socket::SetLastError(static_cast<Errno>(97));
      return 0;
    }

    if (*pEnd == '\0') {
      break;
    }

    if (*pEnd != '.') {
      if (!(isspace)(*pEnd)) {
        socket::SetLastError(static_cast<Errno>(97));
        return 0;
      }

      break;
    }

    if (count == 3) {
      socket::SetLastError(static_cast<Errno>(97));
      return 0;
    }

    pCurrent = pEnd + 1;
    ++count;
  }

  uint32_t value = 0;
  switch (count) {
    case 0:
      value = parts[0];
      break;
    case 1:
      if (parts[1] > 0xffffff || parts[0] > 0xff) {
        socket::SetLastError(static_cast<Errno>(97));
        return 0;
      }

      value = parts[0] << 24 | parts[1];
      break;
    case 2:
      if (parts[2] > 0xffff || parts[0] > 0xff || parts[1] > 0xff) {
        socket::SetLastError(static_cast<Errno>(97));
        return 0;
      }

      value = parts[0] << 24 | parts[1] << 16 | parts[2];
      break;
    default:
      if (parts[3] > 0xff || parts[0] > 0xff || parts[1] > 0xff ||
        parts[2] > 0xff) {
        socket::SetLastError(static_cast<Errno>(97));
        return 0;
      }

      value = parts[0] << 24 | parts[1] << 16 | parts[2] << 8 | parts[3];
      break;
  }

  destination->S_addr = socket::InetHtonl(value);
  return 1;
}

int socketAton(const char* source, in_addr* destination) {
  char* pEnd = nullptr;
  unsigned long long parts[4];
  int count = 0;
  if (source == nullptr || destination == nullptr) {
    socket::SetLastError(static_cast<Errno>(97));
    return 0;
  }

  const char* pCurrent = source;
  for (;;) {
    parts[count] = strtoull(pCurrent, &pEnd, 0);
    if (parts[count] > 0xffffffff || pEnd == pCurrent) {
      socket::SetLastError(static_cast<Errno>(97));
      return 0;
    }

    if (*pEnd == '\0') {
      break;
    }

    if (*pEnd != '.') {
      if (!(isspace)(*pEnd)) {
        socket::SetLastError(static_cast<Errno>(97));
        return 0;
      }

      break;
    }

    if (count == 3) {
      socket::SetLastError(static_cast<Errno>(97));
      return 0;
    }

    pCurrent = pEnd + 1;
    ++count;
  }

  uint32_t value = 0;
  switch (count) {
    case 0:
      value = parts[0];
      break;
    case 1:
      if (parts[1] > 0xffffff || parts[0] > 0xff) {
        socket::SetLastError(static_cast<Errno>(97));
        return 0;
      }

      value = parts[0] << 24 | parts[1];
      break;
    case 2:
      if (parts[2] > 0xffff || parts[0] > 0xff || parts[1] > 0xff) {
        socket::SetLastError(static_cast<Errno>(97));
        return 0;
      }

      value = parts[0] << 24 | parts[1] << 16 | parts[2];
      break;
    default:
      if (parts[3] > 0xff || parts[0] > 0xff || parts[1] > 0xff ||
        parts[2] > 0xff) {
        socket::SetLastError(static_cast<Errno>(97));
        return 0;
      }

      value = parts[0] << 24 | parts[1] << 16 | parts[2] << 8 | parts[3];
      break;
  }

  destination->s_addr = socket::InetHtonl(value);
  return 1;
}

}
