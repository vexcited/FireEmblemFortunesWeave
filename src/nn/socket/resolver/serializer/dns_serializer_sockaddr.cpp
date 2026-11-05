#include <string.h>

#include "nn/socket/resolver/serializer/dns_serializer.hpp"

namespace nn::socket::resolver::serializer {

template <>
size_t DNSSerializer::SizeOf(const SockAddrIn& in) {
  return SizeOf(in.sin_addr) + sizeof(uint16_t) + sizeof(in.sin_port) +
    sizeof(in.sin_zero);
}

template <>
ssize_t DNSSerializer::ToBuffer(uint8_t* pBufferOut, size_t bufferSize,
  const SockAddrIn& in) {
  if (CheckToBufferArguments(pBufferOut, bufferSize, sizeof(in), 60) ==
    -1) {
    return -1;
  }

  uint16_t family = static_cast<uint16_t>(in.sin_family);
  ssize_t rc = ToBuffer(pBufferOut, bufferSize, family);
  if (rc == -1) {
    return -1;
  }

  size_t total = rc;
  uint16_t port = in.sin_port;
  rc = ToBuffer(pBufferOut + total, bufferSize - total, port);
  if (rc == -1) {
    return -1;
  }

  total += rc;
  uint32_t address = in.sin_addr.S_addr;
  rc = ToBuffer(pBufferOut + total, bufferSize - total, address);
  if (rc == -1) {
    return -1;
  }

  total += rc;
  if (bufferSize - total < sizeof(in.sin_zero)) {
    return -1;
  }

  memcpy(pBufferOut + total, in.sin_zero, sizeof(in.sin_zero));
  return total + sizeof(in.sin_zero);
}

template <>
ssize_t DNSSerializer::FromBuffer(SockAddrIn& out, const uint8_t* pBuffer,
  size_t bufferSize) {
  uint16_t value16 = 0;
  uint32_t value32 = 0;
  ssize_t rc = FromBuffer(value16, pBuffer, bufferSize);
  if (rc == -1) {
    return -1;
  }

  out.sin_family = static_cast<Family>(value16);
  size_t total = rc;
  rc = FromBuffer(value16, pBuffer + total, bufferSize - total);
  if (rc == -1) {
    return -1;
  }

  out.sin_port = value16;
  total += rc;
  rc = FromBuffer(value32, pBuffer + total, bufferSize - total);
  if (rc == -1) {
    return -1;
  }

  out.sin_addr.S_addr = value32;
  total += rc;
  if (bufferSize - total < sizeof(out.sin_zero)) {
    return -1;
  }

  memcpy(out.sin_zero, pBuffer + total, sizeof(out.sin_zero));
  return total + sizeof(out.sin_zero);
}

template <>
size_t DNSSerializer::SizeOf(const sockaddr_in& in) {
  return SizeOf(in.sin_addr) + sizeof(uint16_t) + sizeof(in.sin_port) +
    sizeof(in.sin_zero);
}

template <>
ssize_t DNSSerializer::ToBuffer(uint8_t* pBufferOut, size_t bufferSize,
  const sockaddr_in& in) {
  if (CheckToBufferArguments(pBufferOut, bufferSize, sizeof(in), 126) ==
    -1) {
    return -1;
  }

  uint16_t family = static_cast<uint16_t>(in.sin_family);
  ssize_t rc = ToBuffer(pBufferOut, bufferSize, family);
  if (rc == -1) {
    return -1;
  }

  size_t total = rc;
  uint16_t port = in.sin_port;
  rc = ToBuffer(pBufferOut + total, bufferSize - total, port);
  if (rc == -1) {
    return -1;
  }

  total += rc;
  uint32_t address = in.sin_addr.s_addr;
  rc = ToBuffer(pBufferOut + total, bufferSize - total, address);
  if (rc == -1) {
    return -1;
  }

  total += rc;
  if (bufferSize - total < sizeof(in.sin_zero)) {
    return -1;
  }

  memcpy(pBufferOut + total, in.sin_zero, sizeof(in.sin_zero));
  return total + sizeof(in.sin_zero);
}

template <>
ssize_t DNSSerializer::FromBuffer(sockaddr_in& out, const uint8_t* pBuffer,
  size_t bufferSize) {
  uint16_t value16 = 0;
  uint32_t value32 = 0;
  ssize_t rc = FromBuffer(value16, pBuffer, bufferSize);
  if (rc == -1) {
    return -1;
  }

  out.sin_family = static_cast<uint8_t>(value16);
  size_t total = rc;
  rc = FromBuffer(value16, pBuffer + total, bufferSize - total);
  if (rc == -1) {
    return -1;
  }

  out.sin_port = value16;
  total += rc;
  rc = FromBuffer(value32, pBuffer + total, bufferSize - total);
  if (rc == -1) {
    return -1;
  }

  out.sin_addr.s_addr = value32;
  total += rc;
  if (bufferSize - total < sizeof(out.sin_zero)) {
    return -1;
  }

  memcpy(out.sin_zero, pBuffer + total, sizeof(out.sin_zero));
  return total + sizeof(out.sin_zero);
}

template <>
size_t DNSSerializer::SizeOf(const sockaddr_in6& in) {
  return sizeof(in);
}

template <>
ssize_t DNSSerializer::ToBuffer(uint8_t* pBufferOut, size_t bufferSize,
  const sockaddr_in6& in) {
  if (CheckToBufferArguments(pBufferOut, bufferSize, sizeof(in), 50) == -1) {
    return -1;
  }

  uint16_t family = in.sin6_family;
  ssize_t rc = ToBuffer(pBufferOut, bufferSize, family);
  if (rc == -1) {
    return -1;
  }

  size_t total = rc;
  uint16_t port = in.sin6_port;
  rc = ToBuffer(pBufferOut + total, bufferSize - total, port);
  if (rc == -1) {
    return -1;
  }

  total += rc;
  uint32_t value = in.sin6_flowinfo;
  rc = ToBuffer(pBufferOut + total, bufferSize - total, value);
  if (rc == -1) {
    return -1;
  }

  total += rc;
  memcpy(pBufferOut + total, &in.sin6_addr, sizeof(in.sin6_addr));
  total += sizeof(in.sin6_addr);
  value = in.sin6_scope_id;
  rc = ToBuffer(pBufferOut + total, bufferSize - total, value);
  if (rc == -1) {
    return -1;
  }

  return total + rc;
}

template <>
ssize_t DNSSerializer::FromBuffer(sockaddr_in6& out, const uint8_t* pBuffer,
  size_t bufferSize) {
  uint16_t value16 = 0;
  uint32_t value32 = 0;
  ssize_t rc = FromBuffer(value16, pBuffer, bufferSize);
  if (rc == -1) {
    return -1;
  }

  out.sin6_family = static_cast<uint8_t>(value16);
  size_t total = rc;
  rc = FromBuffer(value16, pBuffer + total, bufferSize - total);
  if (rc == -1) {
    return -1;
  }

  out.sin6_port = value16;
  total += rc;
  rc = FromBuffer(value32, pBuffer + total, bufferSize - total);
  if (rc == -1) {
    return -1;
  }

  out.sin6_flowinfo = value32;
  total += rc;
  memcpy(&out.sin6_addr, pBuffer + total, sizeof(out.sin6_addr));
  total += sizeof(out.sin6_addr);
  rc = FromBuffer(value32, pBuffer + total, bufferSize - total);
  if (rc == -1) {
    return -1;
  }

  out.sin6_scope_id = value32;
  return total + rc;
}

}
