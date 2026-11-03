#pragma once

#include "nn/os/multi_wait.hpp"

namespace nn::os {

struct SemaphoreType {
  detail::MultiWaitListNode waiters;
  uint8_t initialized;
  uint8_t reserved[3];
  int32_t count;
  int32_t maximum_count;
  detail::InternalCriticalSection lock;
  detail::InternalConditionVariableImplByHorizon condition;
};

void InitializeSemaphore(SemaphoreType* semaphore, int count, int maximum);
void FinalizeSemaphore(SemaphoreType* semaphore);
void AcquireSemaphore(SemaphoreType* semaphore);
bool TryAcquireSemaphore(SemaphoreType* semaphore);
bool TimedAcquireSemaphore(SemaphoreType* semaphore, TimeSpan time);
void ReleaseSemaphore(SemaphoreType* semaphore);
void ReleaseSemaphore(SemaphoreType* semaphore, int count);
int GetCurrentSemaphoreCount(const SemaphoreType* semaphore);
void InitializeMultiWaitHolder(MultiWaitHolderType* holder,
                               SemaphoreType* semaphore);

namespace detail {

struct MultiWaitHolderOfSemaphore : MultiWaitHolderBase {
  SemaphoreType* semaphore;
  uintptr_t user_data;

  int IsSignaled() const;
  int AddToObjectList();
  void RemoveFromObjectList();
};

}
}
