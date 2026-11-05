#pragma once

#include "nn/os/synchronization.hpp"

namespace nn::os {

class SdkMutex {
public:
  constexpr SdkMutex() : m_Mutex{} {}

  void lock() {
    m_Mutex.Lock();
  }

  void unlock() {
    m_Mutex.Unlock();
  }

  bool try_lock() {
    return m_Mutex.TryLock();
  }

private:
  SdkMutexType m_Mutex;
};

}
