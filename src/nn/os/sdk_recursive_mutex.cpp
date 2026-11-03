#include "nn/os/synchronization.hpp"

namespace nn::os {

[[noreturn]] void AbortRecursiveMutex() asm(
  "_ZN2nn4diag6detail9AbortImplEv");

void SdkRecursiveMutexType::Initialize() {
  lock.Initialize();
  count = 0;
}

void SdkRecursiveMutexType::Lock() {
  if (!lock.IsLockedByCurrentThread()) {
    lock.Enter();
  }

  if (++count == 0) {
    AbortRecursiveMutex();
  }
}

bool SdkRecursiveMutexType::TryLock() {
  if (!lock.IsLockedByCurrentThread() && !lock.TryEnter()) {
    return false;
  }

  if (++count == 0) {
    AbortRecursiveMutex();
  }

  return true;
}

void SdkRecursiveMutexType::Unlock() {
  if (!lock.IsLockedByCurrentThread()) {
    AbortRecursiveMutex();
  }

  if (--count == 0) {
    lock.Leave();
  }
}

}
