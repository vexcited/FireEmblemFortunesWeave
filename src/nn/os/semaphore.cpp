#include "nn/os/semaphore.hpp"

#include <stddef.h>

namespace nn::os::detail {

extern const uintptr_t SemaphoreHolderVtable[] asm(
  "_ZTVN2nn2os6detail26MultiWaitHolderOfSemaphoreE");

static_assert(sizeof(SemaphoreType) == 40);
static_assert(offsetof(SemaphoreType, count) == 20);
static_assert(offsetof(SemaphoreType, lock) == 28);
static_assert(offsetof(SemaphoreType, condition) == 32);
static_assert(sizeof(MultiWaitHolderOfSemaphore) == 64);

int MultiWaitHolderOfSemaphore::IsSignaled() const {
  SemaphoreType* locked = semaphore;
  locked->lock.Enter();
  int result = semaphore->count > 0;
  locked->lock.Leave();
  return result;
}

int MultiWaitHolderOfSemaphore::AddToObjectList() {
  SemaphoreType* locked = semaphore;
  locked->lock.Enter();
  auto* end = &semaphore->waiters;
  auto* original = object_node.next;
  object_node.next = end->next;
  original->previous = end;
  end->next->previous = &object_node;
  end->next = original;
  int result = semaphore->count > 0;
  locked->lock.Leave();
  return result;
}

void MultiWaitHolderOfSemaphore::RemoveFromObjectList() {
  SemaphoreType* locked = semaphore;
  locked->lock.Enter();

  if (&object_node != &semaphore->waiters) {
    auto* next = object_node.next;
    auto* previous = object_node.previous;
    auto* previous_next = previous->next;
    next->previous = previous;
    previous->next = object_node.next;
    previous_next->previous = &object_node;
    object_node.next = previous_next;
  }

  locked->lock.Leave();
}

static uint64_t SemaphoreTick() {
  uint64_t ticks;
  asm volatile("mrs %0, cntpct_el0" : "=r"(ticks) : : "memory");
  return ticks;
}

static TimeoutHelper SemaphoreTimeout(TimeSpan time) {
  if (!time.nanoseconds) {
    return {0};
  }

  uint64_t ticks = SemaphoreTick();
  uint64_t end = ticks + uint64_t(ConvertToTick(time).value) + 1;
  return {end >= uint64_t(INT64_MAX) ? INT64_MAX : int64_t(end)};
}

static void NotifySemaphoreWaiters(SemaphoreType* semaphore) {
  for (auto* node = semaphore->waiters.previous; node != &semaphore->waiters;
       node = node->previous) {
    auto* holder = reinterpret_cast<MultiWaitHolderBase*>(
      reinterpret_cast<uint8_t*>(node) - 24);
    holder->owner->NotifyAndWakeupThread(holder);
  }
}

}

namespace nn::os {

void InitializeSemaphore(SemaphoreType* semaphore, int count, int maximum) {
  semaphore->lock.Initialize();
  semaphore->condition.Initialize();
  semaphore->waiters.next = &semaphore->waiters;
  semaphore->waiters.previous = &semaphore->waiters;
  semaphore->count = count;
  semaphore->maximum_count = maximum;
  semaphore->initialized = 1;
}

void FinalizeSemaphore(SemaphoreType* semaphore) {
  semaphore->initialized = 0;
  semaphore->lock.Finalize();
}

void AcquireSemaphore(SemaphoreType* semaphore) {
  semaphore->lock.Enter();

  while (!semaphore->count) {
    semaphore->condition.Wait(&semaphore->lock.state);
  }

  semaphore->count = int32_t(uint32_t(semaphore->count) - 1);
  semaphore->lock.Leave();
}

bool TryAcquireSemaphore(SemaphoreType* semaphore) {
  semaphore->lock.Enter();
  bool result = semaphore->count != 0;

  if (result) {
    semaphore->count = int32_t(uint32_t(semaphore->count) - 1);
  }

  semaphore->lock.Leave();
  return result;
}

bool TimedAcquireSemaphore(SemaphoreType* semaphore, TimeSpan time) {
  auto timeout = detail::SemaphoreTimeout(time);
  semaphore->lock.Enter();

  while (!semaphore->count) {
    if (!timeout.deadline ||
        int64_t(detail::SemaphoreTick()) >= timeout.deadline) {
      semaphore->lock.Leave();
      return false;
    }

    semaphore->condition.TimedWait(&semaphore->lock.state, timeout);
  }

  semaphore->count = int32_t(uint32_t(semaphore->count) - 1);
  semaphore->lock.Leave();
  return true;
}

void ReleaseSemaphore(SemaphoreType* semaphore) {
  semaphore->lock.Enter();
  semaphore->count = int32_t(uint32_t(semaphore->count) + 1);
  semaphore->condition.Signal();
  detail::NotifySemaphoreWaiters(semaphore);
  semaphore->lock.Leave();
}

void ReleaseSemaphore(SemaphoreType* semaphore, int count) {
  semaphore->lock.Enter();
  semaphore->count = int32_t(uint32_t(semaphore->count) + uint32_t(count));
  semaphore->condition.Broadcast();
  detail::NotifySemaphoreWaiters(semaphore);
  semaphore->lock.Leave();
}

int GetCurrentSemaphoreCount(const SemaphoreType* semaphore) {
  return semaphore->count;
}

void InitializeMultiWaitHolder(MultiWaitHolderType* storage,
                               SemaphoreType* semaphore) {
  auto* holder = reinterpret_cast<detail::MultiWaitHolderOfSemaphore*>(storage);
  holder->multi_wait_node.next = &holder->multi_wait_node;
  holder->multi_wait_node.previous = &holder->multi_wait_node;
  holder->object_node.next = &holder->object_node;
  holder->object_node.previous = &holder->object_node;
  holder->owner = nullptr;
  holder->semaphore = semaphore;
  holder->user_data = 0;
  holder->dispatch = reinterpret_cast<const detail::MultiWaitHolderDispatch*>(
    detail::SemaphoreHolderVtable + 2);
}

}
