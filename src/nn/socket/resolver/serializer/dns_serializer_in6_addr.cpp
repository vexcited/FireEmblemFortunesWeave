#include <stdio.h>
#include <string.h>

#include "nn/socket/detail/socket_api.hpp"
#include "nn/socket/resolver/serializer/dns_serializer.hpp"

namespace nn::socket::resolver::serializer {

template <>
size_t DNSSerializer::SizeOf(const In6Addr& in) {
  return sizeof(in.S6_addr);
}

template <>
size_t DNSSerializer::SizeOf(const In6Addr** pIn, uint32_t& countOut) {
  size_t rc = 0;
  countOut = 0;
  if (pIn != nullptr) {
    for (const In6Addr** pCurrent = pIn; *pCurrent != nullptr; ++pCurrent) {
      ++countOut;
      rc += sizeof(In6Addr);
    }
  }

  return rc;
}

template <>
ssize_t DNSSerializer::ToBuffer(uint8_t* pBufferOut, size_t bufferSize,
  const In6Addr& in) {
  ssize_t rc = CheckToBufferArguments(pBufferOut, bufferSize,
    sizeof(in.S6_addr), 90);
  if (rc != -1) {
    memcpy(pBufferOut, in.S6_addr, sizeof(in.S6_addr));
    rc += sizeof(in.S6_addr);
  }

  return rc;
}

template <>
ssize_t DNSSerializer::FromBuffer(In6Addr& inAddrOut,
  const uint8_t* pBuffer, size_t bufferSize) {
  if (bufferSize < sizeof(inAddrOut.S6_addr)) {
    printf("bufferSize is: %zu while sizeof(inAddrOut.S6_addr) is :%zu\n",
      bufferSize, sizeof(inAddrOut.S6_addr));
    return -1;
  }

  memset(&inAddrOut, 0, sizeof(inAddrOut));
  memcpy(inAddrOut.S6_addr, pBuffer, sizeof(inAddrOut.S6_addr));
  return sizeof(inAddrOut.S6_addr);
}

template <>
ssize_t DNSSerializer::ToBuffer(uint8_t* pBufferOut, size_t bufferSize,
  In6Addr** pIn) {
  uint32_t zero = 0;
  if (bufferSize < sizeof(In6Addr) && pIn == nullptr) {
    return -1;
  }

  if (pIn == nullptr) {
    return ToBuffer(pBufferOut, bufferSize, zero);
  }

  uint32_t count = 0;
  while (pIn[count] != nullptr) {
    ++count;
  }

  if (CheckToBufferArguments(pBufferOut, bufferSize,
    sizeof(In6Addr) * (count + 1), 211) == -1) {
    return -1;
  }

  ssize_t rc = ToBuffer(pBufferOut, bufferSize, count);
  if (rc == -1) {
    return -1;
  }

  uint8_t* pCursor = pBufferOut + rc;
  for (In6Addr** pCurrent = pIn; *pCurrent != nullptr; ++pCurrent) {
    In6Addr address = **pCurrent;
    rc = ToBuffer(pCursor, bufferSize - (pCursor - pBufferOut), address);
    if (rc == -1) {
      return -1;
    }

    pCursor += rc;
    bufferSize -= rc;
  }

  return pCursor - pBufferOut;
}

template <>
ssize_t DNSSerializer::FromBuffer(In6Addr**& pOut, const uint8_t* pBuffer,
  size_t bufferSize) {
  ssize_t rc = 0;
  uint32_t count = 0;
  pOut = nullptr;
  if (pBuffer == nullptr || bufferSize == 0) {
    return rc;
  }

  const uint8_t* pCursor = pBuffer;
  rc = FromBuffer(count, pCursor, bufferSize);
  if (rc != -1) {
    if (count == 0) {
      return rc;
    }

    pOut = static_cast<In6Addr**>(
      detail::Alloc(sizeof(In6Addr*) * (count + 1)));
    if (pOut == nullptr) {
      rc = -1;
    }
    else {
      pCursor += rc;
      memset(pOut, 0, sizeof(In6Addr*) * (count + 1));
      uint32_t index = 0;
      for (; index < count; ++index) {
        pOut[index] = static_cast<In6Addr*>(
          detail::Alloc(sizeof(In6Addr)));
        if (pOut[index] == nullptr) {
          rc = -1;
          break;
        }

        rc = FromBuffer(*pOut[index], pCursor,
          pBuffer + bufferSize - pCursor);
        if (rc == -1) {
          break;
        }

        pCursor += rc;
      }

      if (rc != -1) {
        pOut[index] = nullptr;
        rc = pCursor - pBuffer;
      }
    }
  }

  if (rc == -1 && pOut != nullptr) {
    for (uint32_t index = 0; pOut[index] != nullptr; ++index) {
      detail::Free(pOut[index]);
      pOut[index] = nullptr;
    }

    detail::Free(pOut);
    pOut = nullptr;
  }

  return rc;
}

template <>
size_t DNSSerializer::SizeOf(const in6_addr& in) {
  return sizeof(in.s6_addr);
}

template <>
size_t DNSSerializer::SizeOf(const in6_addr** pIn, uint32_t& countOut) {
  size_t rc = 0;
  countOut = 0;
  if (pIn != nullptr) {
    for (const in6_addr** pCurrent = pIn; *pCurrent != nullptr;
      ++pCurrent) {
      ++countOut;
      rc += sizeof(in6_addr);
    }
  }

  return rc;
}

template <>
ssize_t DNSSerializer::ToBuffer(uint8_t* pBufferOut, size_t bufferSize,
  const in6_addr& in) {
  ssize_t rc = CheckToBufferArguments(pBufferOut, bufferSize,
    sizeof(in.s6_addr), 114);
  if (rc != -1) {
    memcpy(pBufferOut, in.s6_addr, sizeof(in.s6_addr));
    rc += sizeof(in.s6_addr);
  }

  return rc;
}

template <>
ssize_t DNSSerializer::FromBuffer(in6_addr& inAddrOut,
  const uint8_t* pBuffer, size_t bufferSize) {
  if (bufferSize < sizeof(inAddrOut.s6_addr)) {
    return -1;
  }

  memset(&inAddrOut, 0, sizeof(inAddrOut));
  memcpy(inAddrOut.s6_addr, pBuffer, sizeof(inAddrOut.s6_addr));
  return sizeof(inAddrOut.s6_addr);
}

template <>
ssize_t DNSSerializer::ToBuffer(uint8_t* pBufferOut, size_t bufferSize,
  in6_addr** pIn) {
  uint32_t zero = 0;
  if (bufferSize < sizeof(in6_addr) && pIn == nullptr) {
    return -1;
  }

  if (pIn == nullptr) {
    return ToBuffer(pBufferOut, bufferSize, zero);
  }

  uint32_t count = 0;
  while (pIn[count] != nullptr) {
    ++count;
  }

  if (CheckToBufferArguments(pBufferOut, bufferSize,
    sizeof(in6_addr) * (count + 1), 286) == -1) {
    return -1;
  }

  ssize_t rc = ToBuffer(pBufferOut, bufferSize, count);
  if (rc == -1) {
    return -1;
  }

  uint8_t* pCursor = pBufferOut + rc;
  for (in6_addr** pCurrent = pIn; *pCurrent != nullptr; ++pCurrent) {
    in6_addr address = **pCurrent;
    rc = ToBuffer(pCursor, bufferSize - (pCursor - pBufferOut), address);
    if (rc == -1) {
      return -1;
    }

    pCursor += rc;
    bufferSize -= rc;
  }

  return pCursor - pBufferOut;
}

template <>
ssize_t DNSSerializer::FromBuffer(in6_addr**& pOut, const uint8_t* pBuffer,
  size_t bufferSize) {
  ssize_t rc = 0;
  uint32_t count = 0;
  pOut = nullptr;
  if (pBuffer == nullptr || bufferSize == 0) {
    return rc;
  }

  const uint8_t* pCursor = pBuffer;
  rc = FromBuffer(count, pCursor, bufferSize);
  if (rc != -1) {
    if (count == 0) {
      return rc;
    }

    pOut = static_cast<in6_addr**>(
      detail::Alloc(sizeof(in6_addr*) * (count + 1)));
    if (pOut == nullptr) {
      rc = -1;
    }
    else {
      pCursor += rc;
      memset(pOut, 0, sizeof(in6_addr*) * (count + 1));
      uint32_t index = 0;
      for (; index < count; ++index) {
        pOut[index] = static_cast<in6_addr*>(
          detail::Alloc(sizeof(in6_addr)));
        if (pOut[index] == nullptr) {
          rc = -1;
          break;
        }

        rc = FromBuffer(*pOut[index], pCursor,
          pBuffer + bufferSize - pCursor);
        if (rc == -1) {
          break;
        }

        pCursor += rc;
      }

      if (rc != -1) {
        pOut[index] = nullptr;
        rc = pCursor - pBuffer;
      }
    }
  }

  if (rc == -1 && pOut != nullptr) {
    for (uint32_t index = 0; pOut[index] != nullptr; ++index) {
      detail::Free(pOut[index]);
      pOut[index] = nullptr;
    }

    detail::Free(pOut);
    pOut = nullptr;
  }

  return rc;
}

}
