#include <errno.h>
#include <string.h>

#include "nn/socket/detail/socket_api.hpp"
#include "nn/socket/socket_api.hpp"

namespace nn::util {

int SNPrintf(char* buffer, size_t size, const char* format, ...);

}

namespace nn::socket::detail {

namespace {

const size_t In6AddrSize = 16;
const size_t Int16Size = 2;

}

static const char* InetNtop4(const uint8_t* source, char* destination,
  uint32_t size) {
  char temporary[sizeof("255.255.255.255")] = {};
  int length = util::SNPrintf(temporary, sizeof(temporary), "%u.%u.%u.%u",
    source[0], source[1], source[2], source[3]);
  if (length >= static_cast<int>(size)) {
    socket::SetLastError(static_cast<Errno>(28));
    return nullptr;
  }

  strncpy(destination, temporary, length + 1);
  return destination;
}

static const char* InetNtop6(const uint8_t* source, char* destination,
  uint32_t size) {
  char temporary[sizeof("ffff:ffff:ffff:ffff:ffff:ffff:255.255.255.255")] =
    {};
  struct {
    int base;
    int length;
  } best, current;
  unsigned int words[In6AddrSize / Int16Size];
  memset(words, 0, sizeof(words));
  for (size_t index = 0; index < In6AddrSize; ++index) {
    words[index / 2] |= source[index] << ((1 - (index % 2)) << 3);
  }

  best.base = -1;
  best.length = 0;
  current.base = -1;
  current.length = 0;
  for (int index = 0; index < static_cast<int>(In6AddrSize / Int16Size);
    ++index) {
    if (words[index] == 0) {
      if (current.base == -1) {
        current.base = index;
        current.length = 1;
      }
      else {
        ++current.length;
      }
    }
    else if (current.base != -1) {
      if (best.base == -1 || current.length > best.length) {
        best = current;
      }

      current.base = -1;
    }
  }

  if (current.base != -1) {
    if (best.base == -1 || current.length > best.length) {
      best = current;
    }
  }

  if (best.base != -1 && best.length < 2) {
    best.base = -1;
  }

  char* pCurrent = temporary;
  for (int index = 0; index < static_cast<int>(In6AddrSize / Int16Size);
    ++index) {
    if (best.base != -1 && index >= best.base &&
      index < best.base + best.length) {
      if (index == best.base) {
        *pCurrent++ = ':';
      }

      continue;
    }

    if (index != 0) {
      *pCurrent++ = ':';
    }

    if (index == 6 && best.base == 0 &&
      (best.length == 6 || (best.length == 5 && words[5] == 0xffff))) {
      if (InetNtop4(source + 12, pCurrent,
        sizeof(temporary) - (pCurrent - temporary)) == nullptr) {
        return nullptr;
      }

      pCurrent += strlen(pCurrent);
      break;
    }

    pCurrent += util::SNPrintf(pCurrent,
      temporary + sizeof(temporary) - pCurrent, "%x", words[index]);
  }

  if (best.base != -1 &&
    best.base + best.length == static_cast<int>(In6AddrSize / Int16Size)) {
    *pCurrent++ = ':';
  }

  *pCurrent++ = '\0';
  if (static_cast<uint32_t>(pCurrent - temporary) > size) {
    errno = ENOSPC;
    return nullptr;
  }

  strcpy(destination, temporary);
  return destination;
}

const char* socketNtop(Family family, const void* source, char* destination,
  uint32_t size) {
  if (source == nullptr) {
    socket::SetLastError(static_cast<Errno>(22));
    return nullptr;
  }

  if (destination == nullptr) {
    socket::SetLastError(static_cast<Errno>(28));
    return nullptr;
  }

  switch (family) {
    case Family::Af_Inet:
      return InetNtop4(static_cast<const uint8_t*>(source), destination,
        size);
    case Family::Af_Inet6:
      return InetNtop6(static_cast<const uint8_t*>(source), destination,
        size);
    default:
      socket::SetLastError(static_cast<Errno>(97));
      return nullptr;
  }
}

}
