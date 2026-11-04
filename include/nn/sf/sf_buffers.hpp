#pragma once

#include <stddef.h>

namespace nn::sf {

class InBuffer {
public:
  InBuffer(const void* buffer, size_t size)
    : m_Buffer(static_cast<const char*>(buffer)), m_Size(size) {}

  const char* GetPointerUnsafe() const {
    return m_Buffer;
  }

  size_t GetSize() const {
    return m_Size;
  }

private:
  const char* m_Buffer;
  size_t m_Size;
};

class OutBuffer {
public:
  OutBuffer(void* buffer, size_t size)
    : m_Buffer(static_cast<char*>(buffer)), m_Size(size) {}

  char* GetPointerUnsafe() const {
    return m_Buffer;
  }

  size_t GetSize() const {
    return m_Size;
  }

private:
  char* m_Buffer;
  size_t m_Size;
};

template<class T>
class InArray {
public:
  InArray(const T* data, size_t count) : m_Data(data), m_Count(count) {}

  const T* GetData() const {
    return m_Data;
  }

  size_t GetLength() const {
    return m_Count;
  }

private:
  const T* m_Data;
  size_t m_Count;
};

}
