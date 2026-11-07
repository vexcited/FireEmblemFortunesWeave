#include <string.h>

#include "nn/socket/detail/socket_api.hpp"
#include "nn/socket/resolver/serializer/dns_serializer.hpp"
#include "nn/socket/socket_api.hpp"

namespace nn::socket::resolver::serializer {

namespace {

const uint32_t AddrInfoMagic = 0xbeefcafe;
const size_t HeaderSize = 6 * sizeof(uint32_t);

template <typename T>
void FreeContents(T& addressInfo) {
  T* pCurrent = &addressInfo;
  do {
    T* pNext = pCurrent->ai_next;
    if (pCurrent->ai_addr != nullptr) {
      detail::Free(pCurrent->ai_addr);
      pCurrent->ai_addr = nullptr;
    }

    if (pCurrent->ai_canonname != nullptr) {
      detail::Free(pCurrent->ai_canonname);
      pCurrent->ai_canonname = nullptr;
    }

    if (pCurrent != &addressInfo) {
      detail::Free(pCurrent);
    }

    pCurrent = pNext;
  } while (pCurrent != nullptr);
}

}

void FreeAddrinfoContents(addrinfo& addressInfo) {
  FreeContents(addressInfo);
}

template <>
size_t DNSSerializer::SizeOf(const AddrInfo& in) {
  size_t rc = 0;
  const AddrInfo* pCurrent = &in;
  do {
    DNSSerializer serializer;
    size_t entrySize = 0;
    if (pCurrent->ai_addr == nullptr) {
      entrySize = HeaderSize + sizeof(uint32_t);
    }
    else {
      switch (pCurrent->ai_family) {
        case Family::Af_Inet:
          entrySize = serializer.SizeOf(
            *reinterpret_cast<const SockAddrIn*>(pCurrent->ai_addr)) +
            HeaderSize;
          break;
        case Family::Af_Inet6:
          entrySize = serializer.SizeOf(
            *reinterpret_cast<const sockaddr_in6*>(pCurrent->ai_addr)) +
            HeaderSize;
          break;
        default:
          entrySize = pCurrent->ai_addrlen != 0 ?
            pCurrent->ai_addrlen + HeaderSize :
            HeaderSize + sizeof(uint32_t);
          break;
      }
    }

    if (pCurrent->ai_canonname != nullptr) {
      entrySize += serializer.SizeOf(
        static_cast<const char*>(pCurrent->ai_canonname));
    }
    else {
      entrySize += 1;
    }

    pCurrent = pCurrent->ai_next;
    if (pCurrent == nullptr) {
      entrySize += sizeof(uint32_t);
    }

    rc += entrySize;
  } while (pCurrent != nullptr);

  return rc;
}

template <>
ssize_t DNSSerializer::ToBufferInternal(uint8_t* pBufferOut,
  size_t bufferSize, const AddrInfo& in) {
  uint32_t value = AddrInfoMagic;
  ssize_t rc = ToBuffer(pBufferOut, bufferSize, value);
  if (rc == -1) {
    return -1;
  }

  size_t total = rc;
  uint8_t* pCursor = pBufferOut + rc;
  value = in.ai_flags;
  rc = ToBuffer(pCursor, bufferSize - total, value);
  if (rc == -1) {
    return -1;
  }

  total += rc;
  pCursor += rc;
  value = static_cast<uint32_t>(in.ai_family);
  rc = ToBuffer(pCursor, bufferSize - total, value);
  if (rc == -1) {
    return -1;
  }

  total += rc;
  pCursor += rc;
  value = static_cast<uint32_t>(in.ai_socktype);
  rc = ToBuffer(pCursor, bufferSize - total, value);
  if (rc == -1) {
    return -1;
  }

  total += rc;
  pCursor += rc;
  value = static_cast<uint32_t>(in.ai_protocol);
  rc = ToBuffer(pCursor, bufferSize - total, value);
  if (rc == -1) {
    return -1;
  }

  total += rc;
  pCursor += rc;
  value = in.ai_addrlen;
  rc = ToBuffer(pCursor, bufferSize - total, value);
  if (rc == -1) {
    return -1;
  }

  pCursor += rc;
  if (in.ai_addr != nullptr && in.ai_addrlen != 0) {
    total += rc;
    switch (in.ai_family) {
      case Family::Af_Inet6:
        rc = ToBuffer(pCursor, bufferSize - total,
          *reinterpret_cast<const sockaddr_in6*>(in.ai_addr));
        if (rc == -1) {
          return -1;
        }

        break;
      case Family::Af_Inet:
        rc = ToBuffer(pCursor, bufferSize - total,
          *reinterpret_cast<const sockaddr_in*>(in.ai_addr));
        if (rc == -1) {
          return -1;
        }

        break;
      default:
        if (bufferSize - total < in.ai_addrlen) {
          return -1;
        }

        // The original copies the bytes of the ai_addr field itself.
        memmove(pCursor, &in.ai_addr, in.ai_addrlen);
        rc = in.ai_addrlen;
        break;
    }
  }
  else {
    total += rc;
    value = 0;
    rc = ToBuffer(pCursor, bufferSize - total, value);
    if (rc == -1) {
      return -1;
    }
  }

  total += rc;
  pCursor += rc;
  rc = ToBuffer(pCursor, bufferSize - total, in.ai_canonname);
  if (rc == -1) {
    return -1;
  }

  pCursor += rc;
  if (in.ai_next == nullptr) {
    value = 0;
    rc = ToBuffer(pCursor, bufferSize - (total + rc), value);
    if (rc == -1) {
      return -1;
    }

    pCursor += rc;
  }

  return pCursor - pBufferOut;
}

template <>
ssize_t DNSSerializer::ToBuffer(uint8_t* pBufferOut, size_t bufferSize,
  const AddrInfo& in) {
  size_t requiredSize = SizeOf(in);
  memset(pBufferOut, 0, bufferSize);
  if (CheckToBufferArguments(pBufferOut, bufferSize, requiredSize, 459) ==
    -1) {
    return -1;
  }

  uint8_t* pCursor = pBufferOut;
  for (const AddrInfo* pCurrent = &in; pCurrent != nullptr;
    pCurrent = pCurrent->ai_next) {
    ssize_t rc = ToBufferInternal(pCursor, bufferSize, *pCurrent);
    if (rc == -1) {
      return -1;
    }

    pCursor += rc;
  }

  return pCursor - pBufferOut;
}

template <>
ssize_t DNSSerializer::FromBufferInternal(AddrInfo& out, const uint8_t* pBuffer,
  size_t bufferSize) {
  uint32_t value = 0;
  size_t total = 0;
  const uint8_t* pCursor = pBuffer;
  memset(&out, 0, sizeof(out));
  ssize_t rc = FromBuffer(value, pBuffer, bufferSize);
  if (rc == -1) {
    rc = -1;
    goto bail;
  }

  if (value != AddrInfoMagic) {
    goto bail;
  }

  total = rc;
  pCursor += rc;
  rc = FromBuffer(value, pCursor, bufferSize - total);
  if (rc == -1) {
    rc = -1;
    goto bail;
  }

  out.ai_flags = value;
  total += rc;
  pCursor += rc;
  rc = FromBuffer(value, pCursor, bufferSize - total);
  if (rc == -1) {
    rc = -1;
    goto bail;
  }

  out.ai_family = static_cast<Family>(value);
  total += rc;
  pCursor += rc;
  rc = FromBuffer(value, pCursor, bufferSize - total);
  if (rc == -1) {
    rc = -1;
    goto bail;
  }

  out.ai_socktype = static_cast<Type>(value);
  total += rc;
  pCursor += rc;
  rc = FromBuffer(value, pCursor, bufferSize - total);
  if (rc == -1) {
    rc = -1;
    goto bail;
  }

  out.ai_protocol = static_cast<Protocol>(value);
  total += rc;
  pCursor += rc;
  rc = FromBuffer(value, pCursor, bufferSize - total);
  if (rc == -1) {
    rc = -1;
    goto bail;
  }

  out.ai_addrlen = value;
  pCursor += rc;
  if (value == 0) {
    total += rc;
    rc = FromBuffer(value, pCursor, bufferSize - total);
    if (rc == -1 || value != 0) {
      rc = -1;
      goto bail;
    }

    out.ai_addr = nullptr;
  }
  else {
    switch (out.ai_family) {
      case Family::Af_Inet6:
        out.ai_addr = static_cast<SockAddr*>(
          detail::Alloc(sizeof(sockaddr_in6)));
        if (out.ai_addr == nullptr) {
          rc = -1;
          goto bail;
        }

        memset(out.ai_addr, 0, sizeof(sockaddr_in6));
        total += rc;
        rc = FromBuffer(*reinterpret_cast<sockaddr_in6*>(out.ai_addr),
          pCursor, bufferSize - total);
        if (rc == -1) {
          rc = -1;
          goto bail;
        }

        break;
      case Family::Af_Inet:
        out.ai_addr = static_cast<SockAddr*>(
          detail::Alloc(sizeof(SockAddrIn)));
        if (out.ai_addr == nullptr) {
          rc = -1;
          goto bail;
        }

        memset(out.ai_addr, 0, sizeof(SockAddrIn));
        total += rc;
        rc = FromBuffer(*reinterpret_cast<SockAddrIn*>(out.ai_addr),
          pCursor, bufferSize - total);
        if (rc == -1) {
          rc = -1;
          goto bail;
        }

        break;
      default:
        out.ai_addr = static_cast<SockAddr*>(detail::Alloc(value));
        if (out.ai_addr == nullptr) {
          rc = -1;
          goto bail;
        }

        // The original copies into the ai_addr field itself.
        memcpy(&out.ai_addr, pCursor, out.ai_addrlen);
        total += rc;
        rc = out.ai_addrlen;
        break;
    }
  }

  total += rc;
  pCursor += rc;
  rc = FromBuffer(out.ai_canonname, pCursor, bufferSize - total);
  if (rc == -1) {
    rc = -1;
    goto bail;
  }

  total += rc;
  pCursor += rc;
  rc = FromBuffer(value, pCursor, bufferSize - total);
  if (rc == -1) {
    rc = -1;
    goto bail;
  }

  if (value == AddrInfoMagic) {
    out.ai_next = static_cast<AddrInfo*>(detail::Alloc(sizeof(AddrInfo)));
    if (out.ai_next == nullptr) {
      rc = -1;
      goto bail;
    }

    memset(out.ai_next, 0, sizeof(AddrInfo));
  }
  else if (value != 0) {
    rc = -1;
    goto bail;
  }
  else {
    out.ai_next = nullptr;
    pCursor += rc;
  }

  rc = pCursor - pBuffer;

bail:
  if (rc < 0) {
    FreeContents(out);
  }

  return rc;
}

template <>
ssize_t DNSSerializer::FromBuffer(AddrInfo& out, const uint8_t* pBuffer,
  size_t bufferSize) {
  if (bufferSize < SizeOf(out)) {
    SetLastError(static_cast<Errno>(28));
    return -1;
  }

  const uint8_t* pCursor = pBuffer;
  for (AddrInfo* pCurrent = &out; pCurrent != nullptr;
    pCurrent = pCurrent->ai_next) {
    ssize_t rc = FromBufferInternal(*pCurrent, pCursor,
      pBuffer + bufferSize - pCursor);
    if (rc == -1) {
      return -1;
    }

    pCursor += rc;
  }

  return pCursor - pBuffer;
}

template <>
size_t DNSSerializer::SizeOf(const addrinfo& in) {
  size_t rc = 0;
  const addrinfo* pCurrent = &in;
  do {
    DNSSerializer serializer;
    size_t entrySize = 0;
    if (pCurrent->ai_addr == nullptr) {
      entrySize = HeaderSize + sizeof(uint32_t);
    }
    else {
      switch (pCurrent->ai_family) {
        case static_cast<int>(Family::Af_Inet):
          entrySize = serializer.SizeOf(
            *reinterpret_cast<const sockaddr_in*>(pCurrent->ai_addr)) +
            HeaderSize;
          break;
        case static_cast<int>(Family::Af_Inet6):
          entrySize = serializer.SizeOf(
            *reinterpret_cast<const sockaddr_in6*>(pCurrent->ai_addr)) +
            HeaderSize;
          break;
        default:
          entrySize = pCurrent->ai_addrlen != 0 ?
            pCurrent->ai_addrlen + HeaderSize :
            HeaderSize + sizeof(uint32_t);
          break;
      }
    }

    if (pCurrent->ai_canonname != nullptr) {
      entrySize += serializer.SizeOf(
        static_cast<const char*>(pCurrent->ai_canonname));
    }
    else {
      entrySize += 1;
    }

    pCurrent = pCurrent->ai_next;
    if (pCurrent == nullptr) {
      entrySize += sizeof(uint32_t);
    }

    rc += entrySize;
  } while (pCurrent != nullptr);

  return rc;
}

template <>
ssize_t DNSSerializer::ToBufferInternal(uint8_t* pBufferOut,
  size_t bufferSize, const addrinfo& in) {
  uint32_t value = AddrInfoMagic;
  ssize_t rc = ToBuffer(pBufferOut, bufferSize, value);
  if (rc == -1) {
    return -1;
  }

  size_t total = rc;
  uint8_t* pCursor = pBufferOut + rc;
  value = in.ai_flags;
  rc = ToBuffer(pCursor, bufferSize - total, value);
  if (rc == -1) {
    return -1;
  }

  total += rc;
  pCursor += rc;
  value = static_cast<uint32_t>(in.ai_family);
  rc = ToBuffer(pCursor, bufferSize - total, value);
  if (rc == -1) {
    return -1;
  }

  total += rc;
  pCursor += rc;
  value = static_cast<uint32_t>(in.ai_socktype);
  rc = ToBuffer(pCursor, bufferSize - total, value);
  if (rc == -1) {
    return -1;
  }

  total += rc;
  pCursor += rc;
  value = static_cast<uint32_t>(in.ai_protocol);
  rc = ToBuffer(pCursor, bufferSize - total, value);
  if (rc == -1) {
    return -1;
  }

  total += rc;
  pCursor += rc;
  value = in.ai_addrlen;
  rc = ToBuffer(pCursor, bufferSize - total, value);
  if (rc == -1) {
    return -1;
  }

  pCursor += rc;
  if (in.ai_addr != nullptr && in.ai_addrlen != 0) {
    total += rc;
    switch (in.ai_family) {
      case static_cast<int>(Family::Af_Inet6):
        rc = ToBuffer(pCursor, bufferSize - total,
          *reinterpret_cast<const sockaddr_in6*>(in.ai_addr));
        if (rc == -1) {
          return -1;
        }

        break;
      case static_cast<int>(Family::Af_Inet):
        rc = ToBuffer(pCursor, bufferSize - total,
          *reinterpret_cast<const sockaddr_in*>(in.ai_addr));
        if (rc == -1) {
          return -1;
        }

        break;
      default:
        if (bufferSize - total < in.ai_addrlen) {
          return -1;
        }

        // The original copies the bytes of the ai_addr field itself.
        memmove(pCursor, &in.ai_addr, in.ai_addrlen);
        rc = in.ai_addrlen;
        break;
    }
  }
  else {
    total += rc;
    value = 0;
    rc = ToBuffer(pCursor, bufferSize - total, value);
    if (rc == -1) {
      return -1;
    }
  }

  total += rc;
  pCursor += rc;
  rc = ToBuffer(pCursor, bufferSize - total, in.ai_canonname);
  if (rc == -1) {
    return -1;
  }

  pCursor += rc;
  if (in.ai_next == nullptr) {
    value = 0;
    rc = ToBuffer(pCursor, bufferSize - (total + rc), value);
    if (rc == -1) {
      return -1;
    }

    pCursor += rc;
  }

  return pCursor - pBufferOut;
}

template <>
ssize_t DNSSerializer::ToBuffer(uint8_t* pBufferOut, size_t bufferSize,
  const addrinfo& in) {
  size_t requiredSize = SizeOf(in);
  memset(pBufferOut, 0, bufferSize);
  if (CheckToBufferArguments(pBufferOut, bufferSize, requiredSize, 677) ==
    -1) {
    return -1;
  }

  uint8_t* pCursor = pBufferOut;
  for (const addrinfo* pCurrent = &in; pCurrent != nullptr;
    pCurrent = pCurrent->ai_next) {
    ssize_t rc = ToBufferInternal(pCursor, bufferSize, *pCurrent);
    if (rc == -1) {
      return -1;
    }

    pCursor += rc;
  }

  return pCursor - pBufferOut;
}

template <>
ssize_t DNSSerializer::FromBufferInternal(addrinfo& out, const uint8_t* pBuffer,
  size_t bufferSize) {
  uint32_t value = 0;
  size_t total = 0;
  const uint8_t* pCursor = pBuffer;
  memset(&out, 0, sizeof(out));
  ssize_t rc = FromBuffer(value, pBuffer, bufferSize);
  if (rc == -1) {
    rc = -1;
    goto bail;
  }

  if (value != AddrInfoMagic) {
    goto bail;
  }

  total = rc;
  pCursor += rc;
  rc = FromBuffer(value, pCursor, bufferSize - total);
  if (rc == -1) {
    rc = -1;
    goto bail;
  }

  out.ai_flags = value;
  total += rc;
  pCursor += rc;
  rc = FromBuffer(value, pCursor, bufferSize - total);
  if (rc == -1) {
    rc = -1;
    goto bail;
  }

  out.ai_family = static_cast<int>(value);
  total += rc;
  pCursor += rc;
  rc = FromBuffer(value, pCursor, bufferSize - total);
  if (rc == -1) {
    rc = -1;
    goto bail;
  }

  out.ai_socktype = static_cast<int>(value);
  total += rc;
  pCursor += rc;
  rc = FromBuffer(value, pCursor, bufferSize - total);
  if (rc == -1) {
    rc = -1;
    goto bail;
  }

  out.ai_protocol = static_cast<int>(value);
  total += rc;
  pCursor += rc;
  rc = FromBuffer(value, pCursor, bufferSize - total);
  if (rc == -1) {
    rc = -1;
    goto bail;
  }

  out.ai_addrlen = value;
  pCursor += rc;
  if (value == 0) {
    total += rc;
    rc = FromBuffer(value, pCursor, bufferSize - total);
    if (rc == -1 || value != 0) {
      rc = -1;
      goto bail;
    }

    out.ai_addr = nullptr;
  }
  else {
    switch (out.ai_family) {
      case static_cast<int>(Family::Af_Inet6):
        out.ai_addr = static_cast<sockaddr*>(
          detail::Alloc(sizeof(sockaddr_in6)));
        if (out.ai_addr == nullptr) {
          rc = -1;
          goto bail;
        }

        memset(out.ai_addr, 0, sizeof(sockaddr_in6));
        total += rc;
        rc = FromBuffer(*reinterpret_cast<sockaddr_in6*>(out.ai_addr),
          pCursor, bufferSize - total);
        if (rc == -1) {
          rc = -1;
          goto bail;
        }

        break;
      case static_cast<int>(Family::Af_Inet):
        out.ai_addr = static_cast<sockaddr*>(
          detail::Alloc(sizeof(sockaddr_in)));
        if (out.ai_addr == nullptr) {
          rc = -1;
          goto bail;
        }

        memset(out.ai_addr, 0, sizeof(sockaddr_in));
        total += rc;
        rc = FromBuffer(*reinterpret_cast<sockaddr_in*>(out.ai_addr),
          pCursor, bufferSize - total);
        if (rc == -1) {
          rc = -1;
          goto bail;
        }

        break;
      default:
        out.ai_addr = static_cast<sockaddr*>(detail::Alloc(value));
        if (out.ai_addr == nullptr) {
          rc = -1;
          goto bail;
        }

        // The original copies into the ai_addr field itself.
        memcpy(&out.ai_addr, pCursor, out.ai_addrlen);
        total += rc;
        rc = out.ai_addrlen;
        break;
    }
  }

  total += rc;
  pCursor += rc;
  rc = FromBuffer(out.ai_canonname, pCursor, bufferSize - total);
  if (rc == -1) {
    rc = -1;
    goto bail;
  }

  total += rc;
  pCursor += rc;
  rc = FromBuffer(value, pCursor, bufferSize - total);
  if (rc == -1) {
    rc = -1;
    goto bail;
  }

  if (value == AddrInfoMagic) {
    out.ai_next = static_cast<addrinfo*>(detail::Alloc(sizeof(addrinfo)));
    if (out.ai_next == nullptr) {
      rc = -1;
      goto bail;
    }

    memset(out.ai_next, 0, sizeof(addrinfo));
  }
  else if (value != 0) {
    rc = -1;
    goto bail;
  }
  else {
    out.ai_next = nullptr;
    pCursor += rc;
  }

  rc = pCursor - pBuffer;

bail:
  if (rc < 0) {
    FreeContents(out);
  }

  return rc;
}

template <>
ssize_t DNSSerializer::FromBuffer(addrinfo& out, const uint8_t* pBuffer,
  size_t bufferSize) {
  if (bufferSize < SizeOf(out)) {
    SetLastError(static_cast<Errno>(28));
    return -1;
  }

  const uint8_t* pCursor = pBuffer;
  for (addrinfo* pCurrent = &out; pCurrent != nullptr;
    pCurrent = pCurrent->ai_next) {
    ssize_t rc = FromBufferInternal(*pCurrent, pCursor,
      pBuffer + bufferSize - pCursor);
    if (rc == -1) {
      return -1;
    }

    pCursor += rc;
  }

  return pCursor - pBuffer;
}

}
