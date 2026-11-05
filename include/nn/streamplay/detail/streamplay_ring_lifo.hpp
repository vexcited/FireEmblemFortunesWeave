#pragma once

#include <algorithm>
#include <atomic>
#include <stdint.h>

namespace nn::streamplay::detail {

template <typename T>
struct AtomicStorage {
  std::atomic<int64_t> samplingNumber;
  T state;
};

template <typename T>
inline int64_t GetSamplingNumber(const T& value) {
  return value.state.samplingNumber;
}

template <typename T>
inline void ConvertState(T* pOutValue, const T& value) {
  *pOutValue = value;
}

inline void FenceMemoryStoreStore() {
  __builtin_arm_dmb(10);
}

// The writer marks an entry as busy by setting the low bit of its sampling
// number, so readers retry until both reads of the number match.
template <typename T, int Capacity>
class RingLifo {
 public:
  template <typename U>
  int Read(U* pOutValues, int count) const {
    const int available =
      static_cast<int>(m_Count.load(std::memory_order_acquire));
    int readCount = available < 0 ? 0 : std::min(count, available);
    while (readCount > 0) {
      const int tail = static_cast<int>(m_Tail.load(std::memory_order_acquire));
      bool isValid = true;
      for (int i = readCount - 1; i >= 0; --i) {
        const AtomicStorage<T>& entry = m_Buffer[(tail - i + Capacity) %
          Capacity];
        const int64_t samplingNumber =
          entry.samplingNumber.load(std::memory_order_acquire);
        if ((samplingNumber & 1) != 0) {
          isValid = false;
          break;
        }
        ConvertState(&pOutValues[i], entry.state);
        std::atomic_thread_fence(std::memory_order_acquire);
        if (samplingNumber != entry.samplingNumber.load(
          std::memory_order_relaxed)) {
          isValid = false;
          break;
        }
        if (i < readCount - 1 && GetSamplingNumber(pOutValues[i]) -
          GetSamplingNumber(pOutValues[i + 1]) != 1) {
          isValid = false;
          break;
        }
      }
      if (isValid) {
        break;
      }
      const int latest =
        static_cast<int>(m_Count.load(std::memory_order_acquire));
      if (readCount > latest) {
        readCount = std::min(count, latest);
      }
    }
    return readCount;
  }

  void Append(const T& value) {
    const int tail = static_cast<int>(m_Tail.load(std::memory_order_relaxed));
    const int64_t next = tail < Capacity - 1 ? tail + 1 : 0;
    AtomicStorage<T>& entry = m_Buffer[next];
    const int64_t samplingNumber = GetSamplingNumber(value) * 2;
    entry.samplingNumber.store(samplingNumber | 1, std::memory_order_relaxed);
    FenceMemoryStoreStore();
    entry.state = value;
    entry.samplingNumber.store(samplingNumber, std::memory_order_release);
    m_Tail.store(next, std::memory_order_release);
    if (m_Count.load(std::memory_order_relaxed) < Capacity - 1) {
      m_Count.fetch_add(1, std::memory_order_release);
    }
  }

  void Clear() {
    m_Count.store(0, std::memory_order_release);
  }

 private:
  std::atomic<int64_t> m_Tail;
  std::atomic<int64_t> m_Count;
  AtomicStorage<T> m_Buffer[Capacity];
};

}
