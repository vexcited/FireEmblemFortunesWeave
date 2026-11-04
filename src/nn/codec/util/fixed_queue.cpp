#include "nn/codec/util/fixed_queue.hpp"

#include <stdint.h>
#include <string.h>

namespace nn::codec::util::detail {

FixedQueueImpl::FixedQueueImpl(void* buffer, size_t size)
  : m_Buffer(buffer), m_Size(size), m_ReadPosition(0), m_WritePosition(0) {
}

bool FixedQueueImpl::Push(const void* data, size_t size) {
  const size_t freeSize = m_Size - GetUsedSize() - 1;
  if (freeSize >= size) {
    WriteTo(data, size, m_WritePosition);

    size_t position = m_WritePosition + size;
    if (position >= m_Size) {
      position -= m_Size;
    }
    m_WritePosition = position;
  }
  return freeSize >= size;
}

void FixedQueueImpl::WriteTo(const void* data, size_t size,
  size_t position) {
  uint8_t* buffer = static_cast<uint8_t*>(m_Buffer);
  const uint8_t* input = static_cast<const uint8_t*>(data);
  if (position + size > m_Size) {
    const size_t firstSize = m_Size - position;
    memcpy(buffer + position, input, firstSize);
    memcpy(m_Buffer, input + firstSize, size - firstSize);
  }
  else {
    memcpy(buffer + position, input, size);
  }
}

bool FixedQueueImpl::Pop(void* buffer, size_t bufferSize, size_t size) {
  const bool canPop = bufferSize >= size && GetUsedSize() >= size;
  if (canPop) {
    ReadFrom(buffer, bufferSize, m_ReadPosition, size);
    Drop(size);
  }
  return canPop;
}

bool FixedQueueImpl::Peek(void* buffer, size_t bufferSize,
  size_t size) const {
  const bool canPeek = bufferSize >= size && GetUsedSize() >= size;
  if (canPeek) {
    ReadFrom(buffer, bufferSize, m_ReadPosition, size);
  }
  return canPeek;
}

bool FixedQueueImpl::Drop(size_t size) {
  const size_t usedSize = GetUsedSize();
  if (usedSize >= size) {
    size_t position = m_ReadPosition + size;
    if (position >= m_Size) {
      position -= m_Size;
    }
    m_ReadPosition = position;
  }
  return usedSize >= size;
}

void FixedQueueImpl::ReadFrom(void* buffer, size_t bufferSize,
  size_t position, size_t size) const {
  if (bufferSize < size) {
    return;
  }

  uint8_t* output = static_cast<uint8_t*>(buffer);
  const uint8_t* queue = static_cast<const uint8_t*>(m_Buffer);
  if (position + size > m_Size) {
    const size_t firstSize = m_Size - position;
    memcpy(output, queue + position, firstSize);
    memcpy(output + firstSize, m_Buffer, size - firstSize);
  }
  else {
    memcpy(output, queue + position, size);
  }
}

}
