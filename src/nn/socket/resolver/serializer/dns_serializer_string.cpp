#include <string.h>

#include "nn/socket/detail/socket_api.hpp"
#include "nn/socket/resolver/serializer/dns_serializer.hpp"

namespace nn::socket::resolver::serializer {

template <>
size_t DNSSerializer::SizeOf(const char* pIn) {
  if (pIn == nullptr) {
    return 1;
  }

  return strlen(pIn) + 1;
}

template <>
size_t DNSSerializer::SizeOf(const char** pIn, uint32_t& countOut) {
  size_t rc = sizeof(uint32_t);
  countOut = 0;
  if (pIn != nullptr) {
    for (const char** pCurrent = pIn; *pCurrent != nullptr; ++pCurrent) {
      ++countOut;
      rc += SizeOf(*pCurrent);
    }
  }

  return rc;
}

template <>
ssize_t DNSSerializer::ToBuffer(uint8_t* pBufferOut, size_t bufferSize,
  char* pIn) {
  ssize_t rc = -1;
  size_t length = 0;
  if (bufferSize == 0 && pIn == nullptr) {
    return rc;
  }

  if (pIn == nullptr || (length = strlen(pIn) + 1) == 0) {
    *pBufferOut = '\0';
    return 1;
  }

  rc = CheckToBufferArguments(pBufferOut, bufferSize, length + 1, 82);
  if (rc == -1) {
    return rc;
  }

  memmove(pBufferOut, pIn, length);
  return length;
}

template <>
ssize_t DNSSerializer::FromBuffer(char*& pOut, const uint8_t* pBuffer,
  size_t bufferSize) {
  if (pBuffer == nullptr || bufferSize == 0) {
    return 0;
  }

  const char* pString = reinterpret_cast<const char*>(pBuffer);
  size_t length = strlen(pString) + 1;
  if (bufferSize < length || *pString == '\0') {
    return 1;
  }

  pOut = static_cast<char*>(detail::Alloc(length));
  if (pOut == nullptr) {
    return -1;
  }

  memmove(pOut, pString, length);
  return length;
}

template <>
ssize_t DNSSerializer::ToBuffer(uint8_t* pBufferOut, size_t bufferSize,
  char** pIn) {
  if (bufferSize == 0) {
    return -1;
  }

  uint32_t count = 0;
  if (pIn != nullptr) {
    for (char** pCurrent = pIn; *pCurrent != nullptr; ++pCurrent) {
      ++count;
    }
  }

  if (CheckToBufferArguments(pBufferOut, bufferSize, sizeof(count), 164) ==
    -1) {
    return -1;
  }

  ssize_t rc = ToBuffer(pBufferOut, bufferSize, count);
  if (rc == -1) {
    return -1;
  }

  uint8_t* pCursor = pBufferOut + rc;
  if (pIn != nullptr) {
    for (char** pCurrent = pIn; *pCurrent != nullptr; ++pCurrent) {
      rc = ToBuffer(pCursor, bufferSize, *pCurrent);
      if (rc == -1) {
        return -1;
      }

      pCursor += rc;
      bufferSize -= rc;
    }
  }

  return pCursor - pBufferOut;
}

template <>
ssize_t DNSSerializer::FromBuffer(char**& pOut, const uint8_t* pBuffer,
  size_t bufferSize) {
  ssize_t rc = 0;
  uint32_t count = 0;
  pOut = nullptr;
  if (pBuffer == nullptr || bufferSize == 0) {
    return rc;
  }

  rc = FromBuffer(count, pBuffer, bufferSize);
  if (rc != -1) {
    pOut = static_cast<char**>(detail::Alloc(sizeof(char*) * (count + 1)));
    if (pOut == nullptr) {
      rc = -1;
    }
    else {
      const char* pCursor = reinterpret_cast<const char*>(pBuffer + rc);
      memset(pOut, 0, sizeof(char*) * (count + 1));
      uint32_t index = 0;
      for (; index < count; ++index) {
        size_t length = strlen(pCursor) + 1;
        pOut[index] = static_cast<char*>(detail::Alloc(length));
        if (pOut[index] == nullptr) {
          rc = -1;
          break;
        }

        memmove(pOut[index], pCursor, length);
        pCursor += length;
      }

      if (rc != -1) {
        pOut[index] = nullptr;
        rc = reinterpret_cast<const uint8_t*>(pCursor) - pBuffer;
      }
    }
  }

  if (rc < 0 && pOut != nullptr) {
    for (uint32_t index = 0; pOut[index] != nullptr; ++index) {
      detail::Free(pOut[index]);
    }

    detail::Free(pOut);
    pOut = nullptr;
  }

  return rc;
}

}
