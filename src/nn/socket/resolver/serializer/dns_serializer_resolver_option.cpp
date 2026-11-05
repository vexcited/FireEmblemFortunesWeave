#include <string.h>

#include "nn/socket/resolver/serializer/dns_serializer.hpp"

namespace nn::socket::resolver::serializer {

namespace {

const size_t OptionHeaderSize =
  sizeof(uint32_t) * 3 + sizeof(ResolverOption::data);

}

template <>
size_t DNSSerializer::SizeOf(const ResolverOption& in) {
  if (in.type == ResolverOptionType::Pointer) {
    return in.size + OptionHeaderSize;
  }

  return OptionHeaderSize;
}

template <>
size_t DNSSerializer::SizeOf(const ResolverOption* pIn, size_t count) {
  size_t rc = 0;
  if (pIn == nullptr || count == 0) {
    return rc;
  }

  for (uint32_t index = 0; index < count; ++index) {
    rc += SizeOf(pIn[index]);
  }

  return rc;
}

template <>
ssize_t DNSSerializer::ToBuffer(uint8_t* pBufferOut, size_t bufferSize,
  const ResolverOption& in) {
  if (CheckToBufferArguments(pBufferOut, bufferSize, SizeOf(in), 130) ==
    -1) {
    return -1;
  }

  uint32_t key = static_cast<uint32_t>(in.key);
  ssize_t rc = ToBuffer(pBufferOut, bufferSize, key);
  if (rc == -1) {
    return -1;
  }

  size_t total = rc;
  uint8_t* pCursor = pBufferOut + rc;
  uint32_t type = static_cast<uint32_t>(in.type);
  rc = ToBuffer(pCursor, bufferSize - total, type);
  if (rc == -1) {
    return -1;
  }

  total += rc;
  pCursor += rc;
  uint32_t size = static_cast<uint32_t>(in.size);
  rc = ToBuffer(pCursor, bufferSize - total, size);
  if (rc == -1) {
    return -1;
  }

  pCursor += rc;
  memcpy(pCursor, &in.data, sizeof(in.data));
  pCursor += sizeof(in.data);
  if (in.type == ResolverOptionType::Pointer) {
    memcpy(pCursor, in.data.pointerValue, in.size);
    pCursor += in.size;
  }

  return pCursor - pBufferOut;
}

template <>
ssize_t DNSSerializer::FromBuffer(ResolverOption& out,
  const uint8_t* pBuffer, size_t bufferSize) {
  uint32_t key = 0;
  ssize_t rc = FromBuffer(key, pBuffer, bufferSize);
  if (rc == -1) {
    return -1;
  }

  out.key = static_cast<ResolverOptionKey>(key);
  size_t total = rc;
  const uint8_t* pCursor = pBuffer + rc;
  uint32_t type = 0;
  rc = FromBuffer(type, pCursor, bufferSize - total);
  if (rc == -1) {
    return -1;
  }

  out.type = static_cast<ResolverOptionType>(type);
  total += rc;
  pCursor += rc;
  uint32_t size = 0;
  rc = FromBuffer(size, pCursor, bufferSize - total);
  if (rc == -1) {
    return -1;
  }

  out.size = size;
  pCursor += rc;
  memcpy(&out.data, pCursor, sizeof(out.data));
  pCursor += sizeof(out.data);
  if (out.type == ResolverOptionType::Pointer) {
    out.data.pointerValue = reinterpret_cast<const char*>(pCursor);
    pCursor += size;
  }

  return pCursor - pBuffer;
}

template <>
ssize_t DNSSerializer::ToBuffer(uint8_t* pBufferOut, size_t bufferSize,
  const ResolverOption* pIn, size_t count) {
  if (pIn == nullptr) {
    return 0;
  }

  uint8_t* pCursor = pBufferOut;
  for (uint32_t index = 0; index < count; ++index) {
    ssize_t rc = ToBuffer(pCursor, pBufferOut + bufferSize - pCursor,
      pIn[index]);
    if (rc == -1) {
      return -1;
    }

    pCursor += rc;
  }

  return pCursor - pBufferOut;
}

template <>
ssize_t DNSSerializer::FromBuffer(ResolverOption* pOut, size_t count,
  const uint8_t* pBuffer, size_t bufferSize, size_t optionCount) {
  const uint8_t* pCursor = pBuffer;
  for (uint32_t index = 0; index < optionCount; ++index) {
    ssize_t rc = FromBuffer(pOut[index], pCursor,
      pBuffer + bufferSize - pCursor);
    if (rc == -1) {
      return -1;
    }

    pCursor += rc;
  }

  return pCursor - pBuffer;
}

}
