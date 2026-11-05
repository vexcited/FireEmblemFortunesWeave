#include <string.h>

#include "nn/socket/resolver/serializer/dns_serializer.hpp"

namespace nn::socket::resolver::serializer {

template <>
size_t DNSSerializer::SizeOf(const HostEnt& in) {
  uint32_t count = 0;
  size_t rc = SizeOf(static_cast<const char*>(in.h_name));
  rc += SizeOf(const_cast<const char**>(in.h_aliases), count);
  rc += sizeof(uint16_t) + sizeof(uint16_t) + sizeof(uint32_t);
  switch (in.h_addrtype) {
    case Family::Af_Inet:
      rc += SizeOf(const_cast<const InAddr**>(
        reinterpret_cast<InAddr**>(in.h_addr_list)), count);
      break;
    case Family::Af_Inet6:
      rc += SizeOf(const_cast<const In6Addr**>(
        reinterpret_cast<In6Addr**>(in.h_addr_list)), count);
      break;
    default:
      break;
  }

  return rc;
}

template <>
ssize_t DNSSerializer::FromBuffer(HostEnt& out, const uint8_t* pBuffer,
  size_t bufferSize) {
  uint16_t value = 0;
  InAddr** pAddresses = nullptr;
  In6Addr** pAddresses6 = nullptr;
  memset(&out, 0, sizeof(out));

  ssize_t rc = FromBuffer(out.h_name, pBuffer, bufferSize);
  if (rc == -1) {
    FreeHostentContents(out);
    return -1;
  }

  size_t total = rc;
  rc = FromBuffer(out.h_aliases, pBuffer + total, bufferSize - total);
  if (rc == -1) {
    FreeHostentContents(out);
    return -1;
  }

  total += rc;
  rc = FromBuffer(value, pBuffer + total, bufferSize - total);
  if (rc == -1) {
    FreeHostentContents(out);
    return -1;
  }

  out.h_addrtype = static_cast<Family>(value);
  total += rc;
  rc = FromBuffer(value, pBuffer + total, bufferSize - total);
  if (rc == -1) {
    FreeHostentContents(out);
    return -1;
  }

  out.h_length = value;
  total += rc;
  switch (out.h_addrtype) {
    case Family::Af_Inet:
      rc = FromBuffer(pAddresses, pBuffer + total, bufferSize - total);
      if (rc == -1) {
        FreeHostentContents(out);
        return -1;
      }

      out.h_addr_list = reinterpret_cast<char**>(pAddresses);
      break;
    case Family::Af_Inet6:
      rc = FromBuffer(pAddresses6, pBuffer + total, bufferSize - total);
      if (rc == -1) {
        FreeHostentContents(out);
        return -1;
      }

      out.h_addr_list = reinterpret_cast<char**>(pAddresses6);
      break;
    default:
      FreeHostentContents(out);
      return -1;
  }

  rc += total;
  if (rc < 0) {
    FreeHostentContents(out);
  }

  return rc;
}

template <>
ssize_t DNSSerializer::ToBuffer(uint8_t* pBufferOut, size_t bufferSize,
  const HostEnt& in) {
  uint32_t zero = 0;
  if (CheckToBufferArguments(pBufferOut, bufferSize, SizeOf(in), 459) ==
    -1) {
    return -1;
  }

  ssize_t rc = ToBuffer(pBufferOut, bufferSize, in.h_name);
  if (rc == -1) {
    return -1;
  }

  size_t total = rc;
  uint8_t* pCursor = pBufferOut + rc;
  rc = ToBuffer(pCursor, bufferSize - total, in.h_aliases);
  if (rc == -1) {
    return -1;
  }

  total += rc;
  pCursor += rc;
  uint16_t value = static_cast<uint16_t>(in.h_addrtype);
  rc = ToBuffer(pCursor, bufferSize - total, value);
  if (rc == -1) {
    return -1;
  }

  total += rc;
  pCursor += rc;
  value = static_cast<uint16_t>(in.h_length);
  rc = ToBuffer(pCursor, bufferSize - total, value);
  if (rc == -1) {
    return -1;
  }

  switch (in.h_addrtype) {
    case Family::Af_Inet:
      total += rc;
      pCursor += rc;
      rc = ToBuffer(pCursor, bufferSize - total,
        reinterpret_cast<InAddr**>(in.h_addr_list));
      break;
    case Family::Af_Inet6:
      total += rc;
      pCursor += rc;
      rc = ToBuffer(pCursor, bufferSize - total,
        reinterpret_cast<In6Addr**>(in.h_addr_list));
      break;
    default:
      total += rc;
      pCursor += rc;
      rc = ToBuffer(pCursor, bufferSize - total, zero);
      break;
  }

  if (rc == -1) {
    return -1;
  }

  return total + rc;
}

template <>
size_t DNSSerializer::SizeOf(const hostent& in) {
  uint32_t count = 0;
  size_t rc = SizeOf(static_cast<const char*>(in.h_name));
  rc += SizeOf(const_cast<const char**>(in.h_aliases), count);
  rc += sizeof(uint16_t) + sizeof(uint16_t) + sizeof(uint32_t);
  switch (in.h_addrtype) {
    case static_cast<int>(Family::Af_Inet):
      rc += SizeOf(const_cast<const in_addr**>(
        reinterpret_cast<in_addr**>(in.h_addr_list)), count);
      break;
    case static_cast<int>(Family::Af_Inet6):
      rc += SizeOf(const_cast<const in6_addr**>(
        reinterpret_cast<in6_addr**>(in.h_addr_list)), count);
      break;
    default:
      break;
  }

  return rc;
}

template <>
ssize_t DNSSerializer::FromBuffer(hostent& out, const uint8_t* pBuffer,
  size_t bufferSize) {
  uint16_t value = 0;
  in_addr** pAddresses = nullptr;
  in6_addr** pAddresses6 = nullptr;
  memset(&out, 0, sizeof(out));

  ssize_t rc = FromBuffer(out.h_name, pBuffer, bufferSize);
  if (rc == -1) {
    FreeHostentContents(out);
    return -1;
  }

  size_t total = rc;
  rc = FromBuffer(out.h_aliases, pBuffer + total, bufferSize - total);
  if (rc == -1) {
    FreeHostentContents(out);
    return -1;
  }

  total += rc;
  rc = FromBuffer(value, pBuffer + total, bufferSize - total);
  if (rc == -1) {
    FreeHostentContents(out);
    return -1;
  }

  out.h_addrtype = static_cast<int>(value);
  total += rc;
  rc = FromBuffer(value, pBuffer + total, bufferSize - total);
  if (rc == -1) {
    FreeHostentContents(out);
    return -1;
  }

  out.h_length = value;
  total += rc;
  switch (out.h_addrtype) {
    case static_cast<int>(Family::Af_Inet):
      rc = FromBuffer(pAddresses, pBuffer + total, bufferSize - total);
      if (rc == -1) {
        FreeHostentContents(out);
        return -1;
      }

      out.h_addr_list = reinterpret_cast<char**>(pAddresses);
      break;
    case static_cast<int>(Family::Af_Inet6):
      rc = FromBuffer(pAddresses6, pBuffer + total, bufferSize - total);
      if (rc == -1) {
        FreeHostentContents(out);
        return -1;
      }

      out.h_addr_list = reinterpret_cast<char**>(pAddresses6);
      break;
    default:
      FreeHostentContents(out);
      return -1;
  }

  rc += total;
  if (rc < 0) {
    FreeHostentContents(out);
  }

  return rc;
}

template <>
ssize_t DNSSerializer::ToBuffer(uint8_t* pBufferOut, size_t bufferSize,
  const hostent& in) {
  uint32_t zero = 0;
  if (CheckToBufferArguments(pBufferOut, bufferSize, SizeOf(in), 569) ==
    -1) {
    return -1;
  }

  ssize_t rc = ToBuffer(pBufferOut, bufferSize, in.h_name);
  if (rc == -1) {
    return -1;
  }

  size_t total = rc;
  uint8_t* pCursor = pBufferOut + rc;
  rc = ToBuffer(pCursor, bufferSize - total, in.h_aliases);
  if (rc == -1) {
    return -1;
  }

  total += rc;
  pCursor += rc;
  uint16_t value = static_cast<uint16_t>(in.h_addrtype);
  rc = ToBuffer(pCursor, bufferSize - total, value);
  if (rc == -1) {
    return -1;
  }

  total += rc;
  pCursor += rc;
  value = static_cast<uint16_t>(in.h_length);
  rc = ToBuffer(pCursor, bufferSize - total, value);
  if (rc == -1) {
    return -1;
  }

  switch (in.h_addrtype) {
    case static_cast<int>(Family::Af_Inet):
      total += rc;
      pCursor += rc;
      rc = ToBuffer(pCursor, bufferSize - total,
        reinterpret_cast<in_addr**>(in.h_addr_list));
      break;
    case static_cast<int>(Family::Af_Inet6):
      total += rc;
      pCursor += rc;
      rc = ToBuffer(pCursor, bufferSize - total,
        reinterpret_cast<in6_addr**>(in.h_addr_list));
      break;
    default:
      total += rc;
      pCursor += rc;
      rc = ToBuffer(pCursor, bufferSize - total, zero);
      break;
  }

  if (rc == -1) {
    return -1;
  }

  return total + rc;
}

}
