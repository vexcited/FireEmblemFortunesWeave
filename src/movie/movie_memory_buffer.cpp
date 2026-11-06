#include <cstring>
#include <new>

#include "movie/movie_memory_buffer.hpp"

namespace movie {

MemoryBuffer::MemoryBuffer(IAllocator* allocator, size_t capacity)
  : MovieRefBase(allocator), m_Size(0), m_IsResizable(true) {
  m_Memory.Allocate(allocator, capacity);
}

MemoryBuffer::MemoryBuffer(IAllocator* allocator, size_t capacity,
  bool isResizable)
  : MovieRefBase(allocator), m_Size(0), m_IsResizable(isResizable) {
  m_Memory.Allocate(allocator, capacity);
}

MemoryBuffer::~MemoryBuffer() {
}

MovieResult MemoryBuffer::Initialize() {
  return m_Memory.pData != nullptr ? MovieResult_Success
    : MovieResult_OutOfMemory;
}

size_t MemoryBuffer::GetCapacity() const {
  return m_Memory.size;
}

size_t MemoryBuffer::GetSize() const {
  return m_Size;
}

MovieResult MemoryBuffer::SetSize(size_t size) {
  if (size > GetCapacity()) {
    return MovieResult_InvalidArgument;
  }

  m_Size = size;
  return MovieResult_Success;
}

uint8_t* MemoryBuffer::GetBuffer() const {
  return static_cast<uint8_t*>(m_Memory.pData);
}

MovieResult MemoryBuffer::Grow(size_t capacity) {
  if (!m_IsResizable) {
    return static_cast<MovieResult>(7);
  }

  if (capacity <= GetCapacity()) {
    return MovieResult_Success;
  }

  return m_Memory.Resize(capacity);
}

MovieResult MemoryBuffer::Shrink() {
  if (!m_IsResizable) {
    return static_cast<MovieResult>(7);
  }

  if (m_Size == GetCapacity()) {
    return MovieResult_Success;
  }

  return m_Memory.Resize(m_Size);
}

bool MemoryBuffer::IsResizable() const {
  return m_IsResizable;
}

int MemoryBuffer::Compare(IBuffer* other) const {
  if (m_Size == other->GetSize()) {
    return std::memcmp(m_Memory.pData, other->GetBuffer(), m_Size);
  }

  return m_Size < other->GetSize() ? -1 : 1;
}

namespace {

template <typename... Args>
MovieResult CreateBuffer(MemoryBuffer** ppOutBuffer, IAllocator* allocator,
  Args... args) {
  void* storage = allocator->Allocate(sizeof(MemoryBuffer));
  if (storage == nullptr) {
    return MovieResult_OutOfMemory;
  }

  MemoryBuffer* buffer = new (storage) MemoryBuffer(allocator, args...);
  buffer->AddRef();
  if (buffer->Initialize() != MovieResult_Success) {
    buffer->Release();
    return MovieResult_OutOfMemory;
  }

  *ppOutBuffer = buffer;
  return MovieResult_Success;
}

MovieResult CreateCopy(IBuffer** ppOutBuffer, const uint8_t* data,
  size_t size, bool isResizable, IAllocator* allocator) {
  *ppOutBuffer = nullptr;
  if (size == 0) {
    return MovieResult_InvalidArgument;
  }

  MemoryBuffer* buffer;
  MovieResult result = CreateBuffer(&buffer, allocator, size, isResizable);
  if (result != MovieResult_Success) {
    return result;
  }

  std::memcpy(buffer->GetBuffer(), data, size);
  buffer->SetSize(size);
  *ppOutBuffer = buffer;
  return MovieResult_Success;
}

}

MovieResult CreateMemoryBuffer(IBuffer** ppOutBuffer, size_t capacity,
  IAllocator* allocator) {
  *ppOutBuffer = nullptr;
  if (capacity == 0) {
    return MovieResult_InvalidArgument;
  }

  MemoryBuffer* buffer;
  MovieResult result = CreateBuffer(&buffer, allocator, capacity);
  if (result == MovieResult_Success) {
    *ppOutBuffer = buffer;
  }

  return result;
}

MovieResult CreateMemoryBuffer(IBuffer** ppOutBuffer, size_t capacity,
  bool isResizable, IAllocator* allocator) {
  *ppOutBuffer = nullptr;
  if (capacity == 0) {
    return MovieResult_InvalidArgument;
  }

  MemoryBuffer* buffer;
  MovieResult result = CreateBuffer(&buffer, allocator, capacity,
    isResizable);
  if (result == MovieResult_Success) {
    *ppOutBuffer = buffer;
  }

  return result;
}

MovieResult CreateMemoryBufferAsCopy(IBuffer** ppOutBuffer,
  const uint8_t* data, size_t size, IAllocator* allocator) {
  return CreateCopy(ppOutBuffer, data, size, false, allocator);
}

MovieResult CreateMemoryBufferAsResizableCopy(IBuffer** ppOutBuffer,
  const uint8_t* data, size_t size, IAllocator* allocator) {
  return CreateCopy(ppOutBuffer, data, size, true, allocator);
}

}
