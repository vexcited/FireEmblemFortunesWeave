#pragma once

#include "nn/os/synchronization.hpp"
#include "nn/result.hpp"

namespace nn::os {

struct ThreadType;

struct MutexType {
  uint8_t initialized;
  uint8_t recursive;
  uint8_t reserved02[2];
  int32_t lock_level;
  uint32_t count;
  uint32_t reserved0c;
  ThreadType* owner;
  detail::InternalCriticalSection lock;
  uint32_t reserved1c;
};

void InitializeMutex(MutexType* mutex, bool recursive, int lock_level);
void FinalizeMutex(MutexType* mutex);
void LockMutex(MutexType* mutex);
bool TryLockMutex(MutexType* mutex);
void UnlockMutex(MutexType* mutex);
bool IsMutexLockedByCurrentThread(const MutexType* mutex);
Result GetMutexOwnerThread(ThreadType** output, const MutexType* mutex);

namespace detail {

Result GetCriticalSectionOwner(const InternalCriticalSection* lock,
  uint32_t* output)
  asm("_ZNK2nn2os6detail23InternalCriticalSection8GetOwnerEPj");

}
}
