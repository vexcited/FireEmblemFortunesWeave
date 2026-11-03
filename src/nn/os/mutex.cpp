#include "nn/os/mutex.hpp"

#include <stddef.h>

#include "nn/os/thread_manager.hpp"

namespace nn::os::detail {

extern unsigned char g_OsResourceManagerStorage[];

Result GetCriticalSectionOwner(const InternalCriticalSection* lock,
  uint32_t* output) {
  uint32_t owner = lock->state.value & ~0x40000000U;
  *output = owner;
  return {owner ? 0U : 0x1c03U};
}

}

namespace nn::os {

static_assert(sizeof(MutexType) == 32);
static_assert(offsetof(MutexType, count) == 8);
static_assert(offsetof(MutexType, owner) == 16);
static_assert(offsetof(MutexType, lock) == 24);

void InitializeMutex(MutexType* mutex, bool recursive, int lock_level) {
  mutex->lock.Initialize();
  mutex->recursive = recursive;
  mutex->lock_level = lock_level;
  mutex->count = 0;
  mutex->initialized = 1;
}

void FinalizeMutex(MutexType* mutex) {
  mutex->initialized = 0;
  mutex->lock.Finalize();
}

void LockMutex(MutexType* mutex) {
  if (mutex->recursive != 1 || !mutex->lock.IsLockedByCurrentThread()) {
    mutex->lock.Enter();
  }

  ++mutex->count;
}

bool TryLockMutex(MutexType* mutex) {
  if (!((mutex->recursive & 1) && mutex->lock.IsLockedByCurrentThread()) &&
      !mutex->lock.TryEnter()) {
    return false;
  }

  ++mutex->count;
  return true;
}

void UnlockMutex(MutexType* mutex) {
  if (--mutex->count == 0) {
    mutex->lock.Leave();
  }
}

bool IsMutexLockedByCurrentThread(const MutexType* mutex) {
  return mutex->lock.IsLockedByCurrentThread();
}

Result GetMutexOwnerThread(ThreadType** output, const MutexType* mutex) {
  uint32_t handle = 0;
  Result result = detail::GetCriticalSectionOwner(&mutex->lock, &handle);

  if (result.value) {
    return result;
  }

  auto* manager = reinterpret_cast<detail::ThreadManager*>(
    detail::g_OsResourceManagerStorage + 288);
  auto* lock = reinterpret_cast<detail::InternalCriticalSection*>(
    &manager->critical_section);
  lock->Enter();
  auto* node = manager->threads.previous;

  while (node != &manager->threads) {
    auto* thread = reinterpret_cast<ThreadType*>(node);

    if (thread->handle == handle) {
      *output = thread;
      break;
    }

    node = node->previous;
  }

  result.value = node == &manager->threads ? 0x1e03 : 0;
  lock->Leave();
  return result;
}

}
