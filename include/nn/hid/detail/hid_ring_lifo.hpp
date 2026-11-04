#pragma once

#include <algorithm>
#include <atomic>
#include <new>
#include <stdint.h>

#include "nn/os/synchronization.hpp"

namespace nn::hid::utility {

template <typename T, typename Tag = void>
class StaticObject {
 public:
  template <typename... Arguments>
  static T& Get(Arguments... arguments) {
    alignas(T) static uint8_t s_Storage[sizeof(T)];
    static std::atomic<bool> s_IsInitialized;
    static os::SdkMutexType s_Mutex;
    if (!s_IsInitialized.load(std::memory_order_acquire)) {
      s_Mutex.Lock();
      if (!s_IsInitialized.load(std::memory_order_relaxed)) {
        new (s_Storage) T(arguments...);
        s_IsInitialized.store(true, std::memory_order_release);
      }
      s_Mutex.Unlock();
    }
    return *reinterpret_cast<T*>(s_Storage);
  }
};

}

namespace nn::hid::detail {

template <typename T>
struct AtomicStorage {
  std::atomic<int64_t> samplingNumber;
  T state;
};

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
        if (i < readCount - 1 && pOutValues[i].samplingNumber -
          pOutValues[i + 1].samplingNumber != 1) {
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

 private:
  int64_t m_Reserved[2];
  std::atomic<int64_t> m_Tail;
  std::atomic<int64_t> m_Count;
  AtomicStorage<T> m_Buffer[Capacity];
};

}
