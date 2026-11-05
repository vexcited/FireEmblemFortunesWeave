#include <string.h>

#include "nn/socket/detail/socket_api.hpp"
#include "nn/socket/socket_api.hpp"

namespace nn::socket::detail {

namespace {

const size_t InAddrSize = 4;
const size_t In6AddrSize = 16;
const size_t Int16Size = 2;

}

// The BIND inet_pton4, reporting failures through SetLastError.
static int InetPton4(const char* source, uint8_t* destination) {
  static const char digits[] = "0123456789";
  uint8_t temporary[InAddrSize] = {};
  uint8_t* pCurrent = temporary;
  bool sawDigit = false;
  int octets = 0;
  int character;
  while ((character = *source++) != '\0') {
    const char* pDigit = strchr(digits, character);
    if (pDigit != nullptr) {
      unsigned int value = *pCurrent * 10 + (pDigit - digits);
      if (sawDigit && *pCurrent == 0) {
        socket::SetLastError(static_cast<Errno>(97));
        return 0;
      }

      if (value > 255) {
        socket::SetLastError(static_cast<Errno>(97));
        return 0;
      }

      *pCurrent = value;
      if (!sawDigit) {
        if (++octets > 4) {
          socket::SetLastError(static_cast<Errno>(97));
          return 0;
        }

        sawDigit = true;
      }
    }
    else if (character == '.' && sawDigit) {
      if (octets == 4) {
        socket::SetLastError(static_cast<Errno>(97));
        return 0;
      }

      ++pCurrent;
      sawDigit = false;
    }
    else {
      socket::SetLastError(static_cast<Errno>(97));
      return 0;
    }
  }

  if (octets < 4) {
    socket::SetLastError(static_cast<Errno>(97));
    return 0;
  }

  memcpy(destination, temporary, InAddrSize);
  return 1;
}

static int InetPton6(const char* source, uint8_t* destination) {
  const char* lowerDigits = "0123456789abcdef";
  const char* upperDigits = "0123456789ABCDEF";
  uint8_t temporary[In6AddrSize] = {};
  uint8_t* pCurrent = temporary;
  uint8_t* pEnd = temporary + In6AddrSize;
  uint8_t* pColon = nullptr;
  if (*source == ':') {
    if (*++source != ':') {
      return 0;
    }
  }

  const char* pToken = source;
  int seenDigits = 0;
  unsigned int value = 0;
  int character;
  while ((character = *source++) != '\0') {
    const char* pDigits = lowerDigits;
    const char* pDigit = strchr(pDigits, character);
    if (pDigit == nullptr) {
      pDigits = upperDigits;
      pDigit = strchr(pDigits, character);
    }

    if (pDigit != nullptr) {
      if (++seenDigits > 4) {
        return 0;
      }

      value <<= 4;
      value |= pDigit - pDigits;
      continue;
    }

    if (character == ':') {
      pToken = source;
      if (seenDigits == 0) {
        if (pColon != nullptr) {
          return 0;
        }

        pColon = pCurrent;
        continue;
      }

      if (pCurrent + Int16Size > pEnd) {
        return 0;
      }

      *pCurrent++ = static_cast<uint8_t>(value >> 8);
      *pCurrent++ = static_cast<uint8_t>(value);
      seenDigits = 0;
      value = 0;
      continue;
    }

    if (character == '.' && pCurrent + InAddrSize <= pEnd &&
      InetPton4(pToken, pCurrent) > 0) {
      pCurrent += InAddrSize;
      seenDigits = 0;
      break;
    }

    return 0;
  }

  if (seenDigits != 0) {
    if (pCurrent + Int16Size > pEnd) {
      return 0;
    }

    *pCurrent++ = static_cast<uint8_t>(value >> 8);
    *pCurrent++ = static_cast<uint8_t>(value);
  }

  if (pColon != nullptr) {
    if (pCurrent == pEnd) {
      return 0;
    }

    const int count = pCurrent - pColon;
    for (int index = 1; index <= count; ++index) {
      pEnd[-index] = pColon[count - index];
      pColon[count - index] = 0;
    }

    pCurrent = pEnd;
  }

  if (pCurrent != pEnd) {
    return 0;
  }

  memcpy(destination, temporary, In6AddrSize);
  return 1;
}

int socketPton(Family family, const char* source, void* destination) {
  if (family != Family::Af_Inet && family != Family::Af_Inet6) {
    socket::SetLastError(static_cast<Errno>(97));
    return -1;
  }

  if (source == nullptr || destination == nullptr) {
    socket::SetLastError(static_cast<Errno>(97));
    return 0;
  }

  switch (family) {
    case Family::Af_Inet:
      return InetPton4(source, static_cast<uint8_t*>(destination));
    case Family::Af_Inet6:
      return InetPton6(source, static_cast<uint8_t*>(destination));
    default:
      socket::SetLastError(static_cast<Errno>(97));
      return -1;
  }
}

}
