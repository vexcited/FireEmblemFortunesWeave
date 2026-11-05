#include <string.h>

#include "nn/socket/resolver/serializer/dns_serializer.hpp"

namespace nn::socket::resolver::serializer {

template <>
ssize_t DNSSerializer::FromBuffer(uint16_t& out, const uint8_t* pBuffer,
  size_t bufferSize) {
  if (bufferSize < sizeof(out)) {
    return -1;
  }

  out = InternalNtoh(*reinterpret_cast<const uint16_t*>(pBuffer));
  return sizeof(out);
}

template <>
ssize_t DNSSerializer::ToBuffer(uint8_t* pBufferOut, size_t bufferSize,
  const uint16_t& in) {
  uint16_t value = InternalHton(in);
  // The original passes __LINE__ of its own source to every check.
  ssize_t rc = CheckToBufferArguments(pBufferOut, bufferSize, sizeof(value),
    53);
  if (rc != -1) {
    memcpy(pBufferOut, &value, sizeof(value));
    rc += sizeof(value);
  }

  return rc;
}

template <>
ssize_t DNSSerializer::FromBuffer(uint32_t& out, const uint8_t* pBuffer,
  size_t bufferSize) {
  if (bufferSize < sizeof(out)) {
    return -1;
  }

  out = InternalNtoh(*reinterpret_cast<const uint32_t*>(pBuffer));
  return sizeof(out);
}

template <>
ssize_t DNSSerializer::ToBuffer(uint8_t* pBufferOut, size_t bufferSize,
  const uint32_t& in) {
  uint32_t value = InternalHton(in);
  ssize_t rc = CheckToBufferArguments(pBufferOut, bufferSize, sizeof(value),
    96);
  if (rc != -1) {
    memcpy(pBufferOut, &value, sizeof(value));
    rc += sizeof(value);
  }

  return rc;
}

}
