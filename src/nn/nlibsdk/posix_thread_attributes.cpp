#include "nn/nlibsdk/posix_thread_attributes.hpp"

#include "nn/os/thread_manager.hpp"

extern "C" void* memset(void* target, int value, size_t size);

namespace nn::init::detail {

struct PthreadDefaultState {
  uint32_t version;
  uint32_t reserved;
  uint64_t attributes[2][7];
};

extern PthreadDefaultState PthreadDefaults;
extern uint64_t PthreadDefaultCoreMask;

}

namespace nn::nlibsdk {

static_assert(sizeof(PosixThreadAttributes) == 56);
static_assert(offsetof(PosixThreadAttributes, stack) == 16);
static_assert(offsetof(PosixThreadAttributes, priority) == 36);
static_assert(offsetof(PosixThreadAttributes, affinity) == 40);

void detail::CopyDefaultPosixAttributes(PosixThreadAttributes* attributes) {
  auto& defaults = nn::init::detail::PthreadDefaults;
  uint64_t fields[7];
  uint32_t version;

  do {
    version = __atomic_load_n(&defaults.version, __ATOMIC_RELAXED);
    const uint64_t* source = defaults.attributes[version & 1];
    fields[4] = source[4];
    fields[5] = source[5];
    fields[6] = source[6];
    fields[0] = source[0];
    fields[1] = source[1];
    fields[2] = source[2];
    fields[3] = source[3];
    asm volatile("dmb ishld" : : : "memory");
  } while (version != __atomic_load_n(&defaults.version, __ATOMIC_RELAXED));

  attributes->policy = fields[4];
  attributes->priority = fields[4] >> 32;
  attributes->affinity = fields[5];
  attributes->reserved30 = fields[6];
  attributes->stack_size = fields[0];
  attributes->reserved08 = fields[1];
  attributes->stack = reinterpret_cast<void*>(fields[2]);
  attributes->detached = fields[3];
  attributes->inherit_schedule = fields[3] >> 32;
}

int InitializePosixThreadAttributes(PosixThreadAttributes* attributes) {
  *attributes = {};
  attributes->stack_size = 81920;
  attributes->priority = 20;
  attributes->affinity = nn::init::detail::PthreadDefaultCoreMask;
  return 0;
}

int DestroyPosixThreadAttributes(PosixThreadAttributes*) {
  return 0;
}

int GetPosixStackSize(const PosixThreadAttributes* attributes, size_t* size) {
  *size = attributes->stack_size;
  return 0;
}

int SetPosixStackSize(PosixThreadAttributes* attributes, size_t size) {
  if (size < 4096 || (size & 4095)) {
    return 22;
  }

  attributes->stack_size = size;
  return 0;
}

int GetPosixDetachState(const PosixThreadAttributes* attributes, int* state) {
  *state = attributes->detached;
  return 0;
}

int SetPosixDetachState(PosixThreadAttributes* attributes, int state) {
  if (uint32_t(state) > 1) {
    return 22;
  }

  attributes->detached = state;
  return 0;
}

int GetPosixStack(const PosixThreadAttributes* attributes, void** stack,
  size_t* size) {
  *size = attributes->stack_size;
  *stack = attributes->stack;
  return 0;
}

int SetPosixStack(PosixThreadAttributes* attributes, void* stack, size_t size) {
  if (size < 4096 || ((size | uintptr_t(stack)) & 4095)) {
    return 22;
  }

  attributes->stack = stack;
  attributes->stack_size = size;
  return 0;
}

int GetPosixScope(const PosixThreadAttributes*, int* scope) {
  *scope = 1;
  return 0;
}

int SetPosixScope(PosixThreadAttributes*, int scope) {
  return scope == 1 ? 0 : scope == 0 ? 95 : 22;
}

int GetPosixSchedulePolicy(const PosixThreadAttributes* attributes,
  int* policy) {
  *policy = attributes->policy;
  return 0;
}

int SetPosixSchedulePolicy(PosixThreadAttributes* attributes, int policy) {
  if (uint32_t(policy) > 1) {
    return 95;
  }

  attributes->policy = policy;
  return 0;
}

int GetPosixScheduleParameter(const PosixThreadAttributes* attributes,
  int* priority) {
  *priority = attributes->priority;
  return 0;
}

int SetPosixScheduleParameter(PosixThreadAttributes* attributes,
  const int* priority) {
  int value = *priority;

  if (uint32_t(value) - 5 > 31) {
    return 34;
  }

  attributes->priority = value;
  return 0;
}

int GetPosixInheritSchedule(const PosixThreadAttributes* attributes, int* mode) {
  *mode = attributes->inherit_schedule;
  return 0;
}

int SetPosixInheritSchedule(PosixThreadAttributes* attributes, int mode) {
  if (uint32_t(mode) > 1) {
    return 22;
  }

  attributes->inherit_schedule = mode;
  return 0;
}

int GetPosixAffinity(const PosixThreadAttributes* attributes, size_t size,
  uint64_t* mask) {
  if (size < 8) {
    return 22;
  }

  *mask = attributes->affinity;

  if (size >= 16) {
    memset(mask + 1, 0, (size & ~size_t(7)) - 8);
  }

  return 0;
}

int SetPosixAffinity(PosixThreadAttributes* attributes, size_t size,
  const uint64_t* mask) {
  if (size < 8) {
    return 22;
  }

  uint64_t first = mask[0];

  for (size_t index = 1; index < size / 8; ++index) {
    if (mask[index]) {
      return 22;
    }
  }

  if (!first || !(os::GetThreadAvailableCoreMask() & first)) {
    return 22;
  }

  attributes->affinity = first;
  return 0;
}

}
