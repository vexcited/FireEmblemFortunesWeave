#pragma once

#include <stddef.h>
#include <stdint.h>

#include "nn/socket/socket_types.hpp"

namespace nn::socket::resolver::serializer {

class DNSSerializer {
public:
  ssize_t CheckToBufferArguments(const uint8_t* pBuffer, size_t bufferSize,
    size_t requiredSize, int line);

  uint32_t InternalHton(const uint32_t& value);
  uint16_t InternalHton(const uint16_t& value);
  uint32_t InternalNtoh(const uint32_t& value);
  uint16_t InternalNtoh(const uint16_t& value);

  template <typename T>
  size_t SizeOf(const T& in);

  template <typename T>
  size_t SizeOf(const T* pIn);

  template <typename T>
  size_t SizeOf(const T** pIn, uint32_t& countOut);

  template <typename T>
  size_t SizeOf(const T* pIn, size_t count);

  template <typename T>
  ssize_t ToBuffer(uint8_t* pBufferOut, size_t bufferSize, const T& in);

  template <typename T>
  ssize_t ToBuffer(uint8_t* pBufferOut, size_t bufferSize, T* pIn);

  template <typename T>
  ssize_t ToBuffer(uint8_t* pBufferOut, size_t bufferSize, T** pIn);

  template <typename T>
  ssize_t ToBuffer(uint8_t* pBufferOut, size_t bufferSize, const T* pIn,
    size_t count);

  template <typename T>
  ssize_t FromBuffer(T& out, const uint8_t* pBuffer, size_t bufferSize);

  template <typename T>
  ssize_t FromBuffer(T*& pOut, const uint8_t* pBuffer, size_t bufferSize);

  template <typename T>
  ssize_t FromBuffer(T**& pOut, const uint8_t* pBuffer, size_t bufferSize);

  template <typename T>
  ssize_t FromBuffer(T* pOut, size_t count, const uint8_t* pBuffer,
    size_t bufferSize, size_t optionCount);

  template <typename T>
  ssize_t ToBufferInternal(uint8_t* pBufferOut, size_t bufferSize,
    const T& in);

  template <typename T>
  ssize_t FromBufferInternal(T& out, const uint8_t* pBuffer,
    size_t bufferSize);
};

void FreeAddrinfoContents(addrinfo& addressInfo);
void FreeHostentContents(HostEnt& hostEntry);
void FreeHostentContents(hostent& hostEntry);

}
