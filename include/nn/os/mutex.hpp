#pragma once

#include "nn/os/synchronization.hpp"
#include "nn/result.hpp"

namespace nn::os {

struct ThreadType;

struct MutexType {
  uint8_t initialized;
  uint8_t recursive;
  int32_t lock_level;
  uint32_t count;
  ThreadType* owner;
  detail::InternalCriticalSection lock;
};

void InitializeMutex(MutexType* mutex, bool recursive, int lock_level);
void FinalizeMutex(MutexType* mutex);
void LockMutex(MutexType* mutex);
bool TryLockMutex(MutexType* mutex);
void UnlockMutex(MutexType* mutex);
bool IsMutexLockedByCurrentThread(const MutexType* mutex);
Result GetMutexOwnerThread(ThreadType** output, const MutexType* mutex);

class Mutex {
 public:
  explicit Mutex(bool recursive) : m_Mutex() {
    InitializeMutex(&m_Mutex, recursive, 0);
  }

  ~Mutex() {
    FinalizeMutex(&m_Mutex);
  }

  void Lock() {
    LockMutex(&m_Mutex);
  }

  void Unlock() {
    UnlockMutex(&m_Mutex);
  }

 private:
  MutexType m_Mutex;
};

namespace detail {

Result GetCriticalSectionOwner(const InternalCriticalSection* lock,
  uint32_t* output)
  asm("_ZNK2nn2os6detail23InternalCriticalSection8GetOwnerEPj");

}
}
