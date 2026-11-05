#include "nn/friends/detail/friends_async_memory_allocator.hpp"

#include <string.h>

namespace nn::friends::detail {

AsyncMemoryAllocator::AsyncMemoryAllocator() {
  memset(this, 0, sizeof(*this));
}

AsyncMemoryAllocator::AsyncMemoryAllocator(AsyncMemoryAllocator&& other) {
  MoveFrom(other);
}

AsyncMemoryAllocator::~AsyncMemoryAllocator() {
  Deallocate();
}

AsyncMemoryAllocator& AsyncMemoryAllocator::operator=(
  AsyncMemoryAllocator&& other) {
  if (&other != this) {
    MoveFrom(other);
  }
  return *this;
}

void AsyncMemoryAllocator::MoveFrom(AsyncMemoryAllocator& other) {
  m_Buffer = other.m_Buffer;
  m_ThreadStack = other.m_ThreadStack;
  m_BufferSize = other.m_BufferSize;
  m_ThreadStackSize = other.m_ThreadStackSize;
  m_ContextBuffer = other.m_ContextBuffer;
  m_FunctionBuffer = other.m_FunctionBuffer;
  m_ThreadStackBuffer = other.m_ThreadStackBuffer;
  m_Free = other.m_Free;
  memset(&other, 0, sizeof(other));
}

void AsyncMemoryAllocator::Deallocate() {
  if (m_Buffer != nullptr) {
    m_Free(m_Buffer, m_BufferSize);
    m_Buffer = nullptr;
    m_BufferSize = 0;
  }
  if (m_ThreadStack != nullptr) {
    m_Free(m_ThreadStack, m_ThreadStackSize);
    m_ThreadStack = nullptr;
    m_ThreadStackSize = 0;
  }
  m_ContextBuffer = nullptr;
  m_FunctionBuffer = nullptr;
  m_ThreadStackBuffer = nullptr;
  m_Free = nullptr;
}

void* AsyncMemoryAllocator::GetContextBuffer() {
  return m_ContextBuffer;
}

void* AsyncMemoryAllocator::GetFunctionBuffer() {
  return m_FunctionBuffer;
}

void* AsyncMemoryAllocator::GetThreadStackBuffer() {
  return m_ThreadStackBuffer;
}

}
