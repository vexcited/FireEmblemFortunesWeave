#include "nn/friends/detail/friends_async_memory_allocator.hpp"

#include <stdint.h>
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

// The thread stack is page aligned inside one buffer. The context and the
// function go to the larger slack around it, or to a second buffer.
bool AsyncMemoryAllocator::Allocate(size_t contextSize, size_t functionSize,
  size_t threadStackSize, AllocateFunction allocate, FreeFunction free) {
  m_Free = free;
  m_BufferSize = threadStackSize + 0x1000;
  m_Buffer = allocate(m_BufferSize);
  if (m_Buffer == nullptr) {
    return false;
  }
  uintptr_t buffer = reinterpret_cast<uintptr_t>(m_Buffer);
  uintptr_t stack = (buffer + 0xfff) & ~uintptr_t(0xfff);
  size_t headSize = stack - buffer;
  m_ThreadStackBuffer = reinterpret_cast<void*>(stack);
  size_t tailSize = m_BufferSize - threadStackSize - headSize;
  uintptr_t slack = headSize < tailSize ? stack + threadStackSize : buffer;
  size_t slackSize = headSize > tailSize ? headSize : tailSize;
  size_t contextAligned = (contextSize + 15) & ~size_t(15);
  size_t functionAligned = (functionSize + 15) & ~size_t(15);
  if (contextAligned + functionAligned <= slackSize) {
    m_ContextBuffer = reinterpret_cast<void*>(slack);
    m_FunctionBuffer = reinterpret_cast<void*>(slack + contextAligned);
  }
  else if (contextAligned <= slackSize) {
    m_ContextBuffer = reinterpret_cast<void*>(slack);
  }
  else if (functionAligned <= slackSize) {
    m_FunctionBuffer = reinterpret_cast<void*>(slack);
  }
  m_ThreadStackSize = (m_ContextBuffer == nullptr ? contextAligned : 0) +
    (m_FunctionBuffer == nullptr ? functionAligned : 0);
  if (m_ThreadStackSize == 0) {
    return true;
  }
  m_ThreadStack = allocate(m_ThreadStackSize);
  if (m_ThreadStack == nullptr) {
    Deallocate();
    return false;
  }
  uintptr_t extra = reinterpret_cast<uintptr_t>(m_ThreadStack);
  if (m_ContextBuffer == nullptr) {
    m_ContextBuffer = reinterpret_cast<void*>(extra);
    extra += contextAligned;
  }
  if (m_FunctionBuffer == nullptr) {
    m_FunctionBuffer = reinterpret_cast<void*>(extra);
  }
  return true;
}

FreeFunction AsyncMemoryAllocator::GetDeallocateFunction() const {
  return m_Free;
}

}
