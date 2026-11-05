#pragma once

#include <stddef.h>
#include <stdint.h>

#include "nn/os/native_handle.hpp"

namespace nn::tipc {

struct SessionHandle {
  uint32_t handle;
};

uint32_t SendSyncRequest(const SessionHandle* session);
void CloseSession(SessionHandle* session);

struct ClientSession : SessionHandle {
  ~ClientSession() {
    CloseSession(this);
  }
};

class UniqueHandle {
public:
  UniqueHandle() = default;

  explicit UniqueHandle(uint32_t handle) : m_Handle(handle) {}

  UniqueHandle& operator=(UniqueHandle&& other) {
    os::CloseNativeHandle(m_Handle);
    m_Handle = other.m_Handle;
    other.m_Handle = 0;
    return *this;
  }

  ~UniqueHandle() {
    os::CloseNativeHandle(m_Handle);
  }

  uint32_t Release() {
    const uint32_t handle = m_Handle;
    m_Handle = 0;
    return handle;
  }

private:
  uint32_t m_Handle = 0;
};

inline uint8_t* GetMessageBuffer() {
  uint8_t* buffer;
  asm volatile("mrs %0, tpidrro_el0" : "=r"(buffer));
  return buffer;
}

template <typename T>
inline T ReadMessage(const uint8_t* buffer, size_t offset) {
  T value;
  __builtin_memcpy(&value, buffer + offset, sizeof(value));
  return value;
}

template <typename T>
inline void WriteMessage(uint8_t* buffer, size_t offset, T value) {
  __builtin_memcpy(buffer + offset, &value, sizeof(value));
}

// Buffer descriptors pack the upper address and size bits in a third word.
inline void WriteBufferDescriptor(uint8_t* buffer, size_t offset,
  const void* pointer, size_t size) {
  const uintptr_t address = reinterpret_cast<uintptr_t>(pointer);
  uint32_t high = uint32_t(size >> 8) & 0x0f000000;
  high |= uint32_t(address >> 4) & 0xf0000000;
  high |= uint32_t(address >> 34) & 0x3ffffffc;
  WriteMessage<uint32_t>(buffer, offset, uint32_t(size));
  WriteMessage<uint32_t>(buffer, offset + 4, uint32_t(address));
  WriteMessage<uint32_t>(buffer, offset + 8, high);
}

// Replies carry the result in the first data word, and the proxy rewrites
// the header with the reply layout once the request succeeded.
inline uint32_t Invoke(const SessionHandle* session, uint8_t* buffer,
  uint64_t replyHeader) {
  uint32_t result = SendSyncRequest(session);

  if (result != 0) {
    return result;
  }

  result = ReadMessage<uint32_t>(buffer, 8);
  WriteMessage<uint64_t>(buffer, 0, replyHeader);
  return result;
}

}
