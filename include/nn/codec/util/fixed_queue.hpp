#pragma once

#include <stddef.h>

namespace nn::codec::util::detail {

class FixedQueueImpl {
public:
  FixedQueueImpl(void* buffer, size_t size);

  bool Push(const void* data, size_t size);
  bool Pop(void* buffer, size_t bufferSize, size_t size);
  bool Peek(void* buffer, size_t bufferSize, size_t size) const;
  bool Drop(size_t size);

private:
  void WriteTo(const void* data, size_t size, size_t position);
  void ReadFrom(void* buffer, size_t bufferSize, size_t position,
    size_t size) const;

  size_t GetUsedSize() const {
    return m_WritePosition - m_ReadPosition
      + (m_WritePosition < m_ReadPosition ? m_Size : 0);
  }

  void* m_Buffer;
  size_t m_Size;
  // The positions are written by different threads and live on separate
  // cache lines.
  alignas(64) size_t m_ReadPosition;
  alignas(64) size_t m_WritePosition;
};

}
