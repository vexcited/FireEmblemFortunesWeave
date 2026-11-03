#pragma once

#include "nn/os/synchronization.hpp"
#include "nn/result.hpp"

namespace nn::os {

struct ThreadType;

struct SlimMutexType {
  detail::InternalCriticalSection lock;
};

void InitializeSlimMutex(SlimMutexType* mutex);
void LockSlimMutex(SlimMutexType* mutex);
bool TryLockSlimMutex(SlimMutexType* mutex);
void UnlockSlimMutex(SlimMutexType* mutex);
bool IsSlimMutexLockedByCurrentThread(const SlimMutexType* mutex);
Result GetSlimMutexOwnerThread(ThreadType** output, const SlimMutexType* mutex);

}
