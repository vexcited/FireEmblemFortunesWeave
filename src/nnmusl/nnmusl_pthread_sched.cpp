#include <errno.h>
#include <pthread.h>
#include <sched.h>
#include <stdint.h>
#include <string.h>

namespace nn::os {

struct ThreadType;

int GetThreadPriority(const ThreadType* thread);
int ChangeThreadPriority(ThreadType* thread, int priority);
void GetThreadCoreMask(int* pOutIdealCore, uint64_t* pOutMask,
  const ThreadType* thread);
uint64_t GetThreadAvailableCoreMask();
void SetThreadCoreMask(ThreadType* thread, int idealCore, uint64_t mask);

}

namespace {

constexpr int PriorityBase = 36;

// Thread handles keep a tag in their low bits, the tag 7 marks a handle
// whose thread must still be alive.
[[gnu::always_inline]] inline nn::os::ThreadType* GetThread(
  pthread_t thread) {
  const auto handle = reinterpret_cast<uintptr_t>(thread);
  if (handle < 8) {
    return nullptr;
  }

  const uintptr_t tag = handle & 7;
  auto* object = reinterpret_cast<uint8_t*>(handle & ~uintptr_t{7});
  if (tag == 7) {
    if (static_cast<unsigned int>(object[0x310] - 1) > 1) {
      return nullptr;
    }
  }
  else if (tag != 0) {
    return nullptr;
  }

  return reinterpret_cast<nn::os::ThreadType*>(object);
}

}

extern "C" {

int pthread_getschedparam(pthread_t thread, int* pOutPolicy,
  struct sched_param* pOutParameter) {
  nn::os::ThreadType* object = GetThread(thread);
  if (object == nullptr) {
    return ESRCH;
  }

  int priority = nn::os::GetThreadPriority(object);
  priority = priority < 0 ? 0 : priority;
  priority = priority < 31 ? priority : 31;
  *pOutPolicy = SCHED_OTHER;
  pOutParameter->sched_priority = PriorityBase - priority;
  return 0;
}

int pthread_setschedparam(pthread_t thread, int policy,
  const struct sched_param* parameter) {
  if (static_cast<unsigned int>(policy) > 1) {
    return ENOTSUP;
  }

  const int priority = parameter->sched_priority;
  if (static_cast<unsigned int>(priority - 5) > 31) {
    return ERANGE;
  }

  nn::os::ThreadType* object = GetThread(thread);
  if (object == nullptr) {
    return ESRCH;
  }

  nn::os::ChangeThreadPriority(object, PriorityBase - priority);
  return 0;
}

int pthread_getaffinity_np(pthread_t thread, size_t size, cpu_set_t* set) {
  if (size < sizeof(uint64_t)) {
    return EINVAL;
  }

  nn::os::ThreadType* object = GetThread(thread);
  if (object == nullptr) {
    return ESRCH;
  }

  uint64_t mask = 0;
  nn::os::GetThreadCoreMask(nullptr, &mask, object);
  auto* words = reinterpret_cast<uint64_t*>(set);
  words[0] = mask;
  if (size >= 2 * sizeof(uint64_t)) {
    memset(words + 1, 0, (size & ~size_t{7}) - sizeof(uint64_t));
  }

  return 0;
}

// Only the first word may hold cores.
int pthread_setaffinity_np(pthread_t thread, size_t size,
  const cpu_set_t* set) {
  const auto* words = reinterpret_cast<const uint64_t*>(set);
  uint64_t mask = 0;
  if (size >= sizeof(uint64_t)) {
    mask = words[0];
    for (size_t i = 1; i < size / sizeof(uint64_t); ++i) {
      if (words[i] != 0) {
        return EINVAL;
      }
    }
  }

  const uint64_t available = nn::os::GetThreadAvailableCoreMask() & mask;
  if (available == 0) {
    return EINVAL;
  }

  nn::os::ThreadType* object = GetThread(thread);
  if (object == nullptr) {
    return ESRCH;
  }

  nn::os::SetThreadCoreMask(object, -1, available);
  return 0;
}

}
