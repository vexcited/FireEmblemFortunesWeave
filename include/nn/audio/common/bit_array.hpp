#pragma once

#include <stddef.h>
#include <stdint.h>
#include <string.h>

namespace nn::audio::common {

template <typename T>
class BitArray {
public:
  static constexpr uint32_t BitsPerWord = sizeof(T) * 8;

  static size_t GetWorkBufferSize(int count) {
    return (static_cast<uint32_t>(count) / BitsPerWord +
      (count % BitsPerWord != 0 ? 1 : 0)) * sizeof(T);
  }

  BitArray(void* buffer, size_t size) {
    memset(buffer, 0, size);
    m_pBuffer = static_cast<T*>(buffer);
    m_WordCount = static_cast<int>(size / sizeof(T));
  }

  virtual ~BitArray() {
    m_pBuffer = nullptr;
    m_WordCount = 0;
  }

  bool Test(int index) const {
    uint32_t bit = static_cast<uint32_t>(index);
    return (m_pBuffer[bit / BitsPerWord] & (T{1} << bit % BitsPerWord)) != 0;
  }

  void Set(int index) {
    uint32_t bit = static_cast<uint32_t>(index);
    m_pBuffer[bit / BitsPerWord] |= T{1} << bit % BitsPerWord;
  }

  void Reset(int index) {
    uint32_t bit = static_cast<uint32_t>(index);
    m_pBuffer[bit / BitsPerWord] &= ~(T{1} << bit % BitsPerWord);
  }

private:
  T* m_pBuffer;
  int m_WordCount;
};

}
