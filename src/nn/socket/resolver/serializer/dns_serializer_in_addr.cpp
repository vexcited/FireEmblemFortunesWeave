#include <string.h>

#include "nn/socket/detail/socket_api.hpp"
#include "nn/socket/resolver/serializer/dns_serializer.hpp"

namespace nn::socket::resolver::serializer {

template <>
size_t DNSSerializer::SizeOf(const InAddr& in) {
  return sizeof(in.S_addr);
}

template <>
size_t DNSSerializer::SizeOf(const in_addr& in) {
  return sizeof(in.s_addr);
}

template <>
size_t DNSSerializer::SizeOf(const InAddr** pIn, uint32_t& countOut) {
  size_t rc = sizeof(uint32_t);
  countOut = 0;
  if (pIn != nullptr) {
    for (const InAddr** pCurrent = pIn; *pCurrent != nullptr; ++pCurrent) {
      ++countOut;
      rc += sizeof(InAddr);
    }
  }

  return rc;
}

template <>
size_t DNSSerializer::SizeOf(const in_addr** pIn, uint32_t& countOut) {
  size_t rc = sizeof(uint32_t);
  countOut = 0;
  if (pIn != nullptr) {
    for (const in_addr** pCurrent = pIn; *pCurrent != nullptr; ++pCurrent) {
      ++countOut;
      rc += sizeof(in_addr);
    }
  }

  return rc;
}

template <>
ssize_t DNSSerializer::ToBuffer(uint8_t* pBufferOut, size_t bufferSize,
  const InAddr& in) {
  uint32_t value = InternalHton(in.S_addr);
  ssize_t rc = CheckToBufferArguments(pBufferOut, bufferSize, sizeof(value),
    99);
  if (rc != -1) {
    memcpy(pBufferOut, &value, sizeof(value));
    rc += sizeof(value);
  }

  return rc;
}

template <>
ssize_t DNSSerializer::ToBuffer(uint8_t* pBufferOut, size_t bufferSize,
  const in_addr& in) {
  uint32_t address = in.s_addr;
  uint32_t value = InternalHton(address);
  ssize_t rc = CheckToBufferArguments(pBufferOut, bufferSize, sizeof(value),
    124);
  if (rc != -1) {
    memcpy(pBufferOut, &value, sizeof(value));
    rc += sizeof(value);
  }

  return rc;
}

template <>
ssize_t DNSSerializer::FromBuffer(InAddr& out, const uint8_t* pBuffer,
  size_t bufferSize) {
  if (bufferSize < sizeof(out.S_addr)) {
    return -1;
  }

  memset(&out, 0, sizeof(out));
  out.S_addr = InternalNtoh(*reinterpret_cast<const uint32_t*>(pBuffer));
  return sizeof(out.S_addr);
}

template <>
ssize_t DNSSerializer::FromBuffer(in_addr& out, const uint8_t* pBuffer,
  size_t bufferSize) {
  if (bufferSize < sizeof(out.s_addr)) {
    return -1;
  }

  memset(&out, 0, sizeof(out));
  out.s_addr = InternalNtoh(*reinterpret_cast<const uint32_t*>(pBuffer));
  return sizeof(out.s_addr);
}

template <>
ssize_t DNSSerializer::ToBuffer(uint8_t* pBufferOut, size_t bufferSize,
  InAddr** pIn) {
  uint32_t zero = 0;
  InAddr address;
  if (bufferSize < sizeof(uint32_t) && pIn == nullptr) {
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
    sizeof(uint32_t) * (count + 1), 221) == -1) {
    return -1;
  }

  ssize_t rc = ToBuffer(pBufferOut, bufferSize, count);
  if (rc == -1) {
    return -1;
  }

  uint8_t* pCursor = pBufferOut + rc;
  for (InAddr** pCurrent = pIn; *pCurrent != nullptr; ++pCurrent) {
    address = **pCurrent;
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
ssize_t DNSSerializer::ToBuffer(uint8_t* pBufferOut, size_t bufferSize,
  in_addr** pIn) {
  uint32_t zero = 0;
  in_addr address;
  if (bufferSize < sizeof(uint32_t) && pIn == nullptr) {
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
    sizeof(uint32_t) * (count + 1), 301) == -1) {
    return -1;
  }

  ssize_t rc = ToBuffer(pBufferOut, bufferSize, count);
  if (rc == -1) {
    return -1;
  }

  uint8_t* pCursor = pBufferOut + rc;
  for (in_addr** pCurrent = pIn; *pCurrent != nullptr; ++pCurrent) {
    address = **pCurrent;
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
ssize_t DNSSerializer::FromBuffer(InAddr**& pOut, const uint8_t* pBuffer,
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

    pOut = static_cast<InAddr**>(
      detail::Alloc(sizeof(InAddr*) * (count + 1)));
    if (pOut == nullptr) {
      rc = -1;
    }
    else {
      pCursor += rc;
      memset(pOut, 0, sizeof(InAddr*) * (count + 1));
      uint32_t index = 0;
      for (; index < count; ++index) {
        uint32_t value = 0;
        pOut[index] = static_cast<InAddr*>(detail::Alloc(sizeof(InAddr)));
        if (pOut[index] == nullptr) {
          rc = -1;
          break;
        }

        rc = FromBuffer(value, pCursor, pBuffer + bufferSize - pCursor);
        if (rc == -1) {
          break;
        }

        pCursor += rc;
        pOut[index]->S_addr = value;
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
ssize_t DNSSerializer::FromBuffer(in_addr**& pOut, const uint8_t* pBuffer,
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

    pOut = static_cast<in_addr**>(
      detail::Alloc(sizeof(in_addr*) * (count + 1)));
    if (pOut == nullptr) {
      rc = -1;
    }
    else {
      pCursor += rc;
      memset(pOut, 0, sizeof(in_addr*) * (count + 1));
      uint32_t index = 0;
      for (; index < count; ++index) {
        uint32_t value = 0;
        pOut[index] = static_cast<in_addr*>(detail::Alloc(sizeof(in_addr)));
        if (pOut[index] == nullptr) {
          rc = -1;
          break;
        }

        rc = FromBuffer(value, pCursor, pBuffer + bufferSize - pCursor);
        if (rc == -1) {
          break;
        }

        pCursor += rc;
        pOut[index]->s_addr = value;
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
