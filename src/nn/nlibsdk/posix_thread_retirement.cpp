#include "nn/nlibsdk/posix_thread_retirement.hpp"

#include <stddef.h>

extern "C" void* memcpy(void* output, const void* input, size_t size);

namespace nn::nlibsdk::detail {

void* AllocateRetirementStorage(size_t size) asm("_Znwm");
void FreeRetirementStorage(void* storage, size_t size) asm("_ZdlPvm");
[[noreturn]] void ThrowRetirementLengthError();
[[noreturn]] void ThrowRetirementAllocationError();

static_assert(sizeof(PosixRetirementQueue) == 48);
static_assert(offsetof(PosixRetirementQueue, mutex) == 4);
static_assert(offsetof(PosixRetirementQueue, condition) == 8);
static_assert(offsetof(PosixRetirementQueue, begin) == 24);

void RetirePosixThread(void* thread) {
  auto& queue = RetirementQueue;
  queue.mutex.Lock();
  uintptr_t end = reinterpret_cast<uintptr_t>(queue.end);
  uintptr_t capacity_end = reinterpret_cast<uintptr_t>(queue.capacity_end);

  if (end < capacity_end) {
    *queue.end = thread;
    end += sizeof(void*);
  }
  else {
    void** previous = queue.begin;
    uintptr_t begin = reinterpret_cast<uintptr_t>(previous);
    size_t used = end - begin;
    size_t count = static_cast<intptr_t>(used) >> 3;

    if ((count + 1) >> 61) {
      ThrowRetirementLengthError();
    }

    size_t previous_size = capacity_end - begin;
    size_t capacity = static_cast<intptr_t>(previous_size) >> 2;

    if (capacity <= count + 1) {
      capacity = count + 1;
    }

    if (previous_size >= 0x7ffffffffffffff8ULL) {
      capacity = 0x1fffffffffffffffULL;
    }

    if (capacity >> 61) {
      ThrowRetirementAllocationError();
    }

    uintptr_t storage = reinterpret_cast<uintptr_t>(
      AllocateRetirementStorage(capacity * sizeof(void*)));
    uintptr_t next = storage + used;
    auto* replacement = reinterpret_cast<void**>(next - count * sizeof(void*));
    *reinterpret_cast<void**>(next) = thread;
    end = next + sizeof(void*);
    memcpy(replacement, previous, used);
    queue.begin = replacement;
    queue.end = reinterpret_cast<void**>(end);
    queue.capacity_end = reinterpret_cast<void**>(
      storage + capacity * sizeof(void*));

    if (previous) {
      FreeRetirementStorage(previous, previous_size);
    }
  }

  queue.end = reinterpret_cast<void**>(end);
  queue.condition.Signal();
  queue.mutex.Unlock();
}

}
