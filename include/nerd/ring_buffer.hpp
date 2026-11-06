#pragma once

#include <stddef.h>

namespace nerd {

// A ring buffer with a runtime capacity bounded by its storage, the end
// index is the next write slot.
template<typename T, size_t Storage>
class RingBuffer {
public:
  RingBuffer() : m_size(0), m_capacity(Storage), m_end(0) {}

  RingBuffer(RingBuffer&& other) : m_size(0), m_capacity(0), m_end(0) {
    m_capacity = other.m_capacity;
    CopyElements(other);
  }

  ~RingBuffer() {
    Clear();
  }

  RingBuffer& operator=(const RingBuffer& other) {
    Clear();
    SetCapacity(other.m_capacity);
    CopyElements(other);
    return *this;
  }

  RingBuffer& operator=(RingBuffer&& other) {
    Clear();
    m_capacity = other.m_capacity;
    CopyElements(other);
    return *this;
  }

  size_t Size() const {
    return m_size;
  }

  size_t Capacity() const {
    return m_capacity;
  }

  bool IsFull() const {
    return m_size == m_capacity;
  }

  void Clear() {
    m_size = 0;
    m_end = 0;
  }

  const T& operator[](size_t index) const {
    size_t first = (m_size > m_end ? m_capacity : 0) + m_end - m_size;
    size_t slot = first + index;

    if (slot >= m_capacity) {
      slot -= m_capacity;
    }

    return m_data[slot];
  }

  void PushBack(const T& value) {
    if (m_size == m_capacity) {
      --m_size;
    }

    m_data[m_end] = value;
    ++m_size;
    m_end = m_end + 1 == m_capacity ? 0 : m_end + 1;
  }

  void SetCapacity(size_t capacity);

private:
  // Copies store the elements from the first slot but keep the end index,
  // so a partially filled copy reads back from the wrong slots.
  void CopyElements(const RingBuffer& other) {
    for (size_t i = 0; i < other.m_size; ++i) {
      m_data[i] = other[i];
    }

    m_size = other.m_size;
  }

  T m_data[Storage];
  size_t m_size;
  size_t m_capacity;
  size_t m_end;
};

template<typename T, size_t Storage>
void RingBuffer<T, Storage>::SetCapacity(size_t capacity) {
  if (m_size == 0) {
    m_capacity = capacity;
    return;
  }

  if (capacity == m_capacity) {
    return;
  }

  RingBuffer resized;
  resized.m_capacity = capacity;
  resized.CopyElements(*this);
  *this = resized;
}

}
