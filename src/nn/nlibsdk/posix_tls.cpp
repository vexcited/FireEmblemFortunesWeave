#include "nn/nlibsdk/posix_tls.hpp"

#include <stddef.h>

#include "libc/cxx_guard.hpp"
#include "posix_tls_internal.hpp"
#include "rtld/crt_registration.hpp"

extern "C" void* malloc(size_t size);
extern "C" void free(void* address);
extern "C" void* memset(void* address, int value, size_t size);

namespace nn::nlibsdk::detail {

[[noreturn]] void AbortTlsState() asm("_ZN2nn4diag6detail9AbortImplEv");
[[noreturn]] void AbortTlsResult(const nn::Result* result)
  asm("_ZN2nn4diag6detail9AbortImplEPKNS_6ResultE");
void RetirePosixThread(void* thread);

static_assert(sizeof(KeyRegistry) == 2056);
static_assert(offsetof(KeyRegistry, keys) == 8);
static_assert(sizeof(PosixThreadStorage) == 2064);
static_assert(offsetof(PosixThreadStorage, keys) == 16);

static PosixThreadStorage*& CurrentStorage() {
  uintptr_t tls;
  asm volatile("mrs %0, tpidrro_el0" : "=r"(tls));
  return *reinterpret_cast<PosixThreadStorage**>(tls + 0x1e0);
}

static PosixThreadStorage* RetiredStorage() {
  return reinterpret_cast<PosixThreadStorage*>(&PosixRetiredStorage);
}

void DefaultKeyDestructor(void*) {
}

void InvokeKeyDestructors(PosixThreadStorage* storage) {
  uint8_t dirty = storage->dirty;
  PosixKeyRegistry.mutex.Lock();

  if (dirty == 1) {
    for (unsigned pass = 0; pass < 4; ++pass) {
      bool invoked = false;

      for (unsigned index = 0; index < 128; ++index) {
        auto& entry = storage->keys[index];
        const void* value = entry.value;

        if (value && (entry.generation & 1) &&
            entry.generation == PosixKeyRegistry.keys[index].generation) {
          entry.value = nullptr;
          PosixKeyRegistry.keys[index].destructor(const_cast<void*>(value));
          invoked = true;
        }
      }

      if (!invoked) {
        break;
      }
    }
  }

  PosixKeyRegistry.mutex.Unlock();
}

void AllocateTlsSlotOrAbort(os::TlsSlot* slot,
  void (*destructor)(uintptr_t)) {
  nn::Result result = os::SdkAllocateTlsSlot(slot, destructor);

  if (result.value) {
    AbortTlsResult(&result);
  }
}

void DestroyTlsSlot(void* slot) {
  os::FreeTlsSlot(*static_cast<os::TlsSlot*>(slot));
}

uint32_t GetLazyTlsSlot() {
  auto* flag = reinterpret_cast<uint8_t*>(&PosixTlsSlotGuard);

  if ((__atomic_load_n(flag, __ATOMIC_ACQUIRE) & 1) == 0 &&
      __cxa_guard_acquire(&PosixTlsSlotGuard)) {
    AllocateTlsSlotOrAbort(&PosixTlsSlot, DestroyThreadTlsStorage);
    fw::rtld::RegisterCrtDestructor(DestroyTlsSlot, &PosixTlsSlot,
      reinterpret_cast<uintptr_t>(&SdkDsoHandle));
    __cxa_guard_release(&PosixTlsSlotGuard);
  }

  return PosixTlsSlot.value;
}

void DestroyThreadTlsStorage(uintptr_t address) {
  auto* storage = reinterpret_cast<PosixThreadStorage*>(address);

  if (storage) {
    InvokeKeyDestructors(storage);
    uint8_t expected = 1;
    __atomic_compare_exchange_n(&storage->state, &expected, uint8_t(4),
      false, __ATOMIC_RELAXED, __ATOMIC_RELAXED);

    if (expected == 2 || expected == 3) {
      uint8_t previous = expected;
      uint8_t replacement = expected + 3;

      if (!__atomic_compare_exchange_n(&storage->state, &previous,
          replacement, false, __ATOMIC_RELAXED, __ATOMIC_RELAXED)) {
        AbortTlsState();
      }

      if (expected == 3) {
        uintptr_t thread = reinterpret_cast<uintptr_t>(os::GetCurrentThread());
        RetirePosixThread(reinterpret_cast<void*>(thread & ~uintptr_t(7)));
      }
    }
    else if (expected != 1) {
      AbortTlsState();
    }

    if (storage->kind != 72) {
      return;
    }
  }

  CurrentStorage() = RetiredStorage();
  os::SetTlsValue({GetLazyTlsSlot()},
    reinterpret_cast<uintptr_t>(RetiredStorage()));

  if (storage) {
    free(storage);
  }
}

}

namespace nn::nlibsdk {

__attribute__((noinline))
int CreatePosixKey(uint32_t* output, PosixKeyDestructor destructor) {
  // The verified 48-byte frame places this at incoming SP minus 24.
  uintptr_t seed = reinterpret_cast<uintptr_t>(__builtin_frame_address(0));
  unsigned start = ((seed + 24) >> 2) & 0x7e;
  PosixKeyDestructor selected = destructor ? destructor :
    detail::DefaultKeyDestructor;
  PosixKeyRegistry.mutex.Lock();
  unsigned index = start;
  int result = 11;

  do {
    PosixKeyDestructor expected = nullptr;

    if (__atomic_compare_exchange_n(&PosixKeyRegistry.keys[index].destructor,
        &expected, selected, false, __ATOMIC_RELAXED, __ATOMIC_RELAXED)) {
      ++PosixKeyRegistry.keys[index].generation;
      *output = index;
      result = 0;
      break;
    }

    index = (index + 1) & 127;
  } while (index != start);

  PosixKeyRegistry.mutex.Unlock();
  return result;
}

int DeletePosixKey(uint32_t key) {
  if (key > 127) {
    return 22;
  }

  PosixKeyRegistry.mutex.Lock();
  auto& record = PosixKeyRegistry.keys[key];
  int result = 22;

  if (record.destructor) {
    record.destructor = nullptr;
    ++record.generation;
    result = 0;
  }

  PosixKeyRegistry.mutex.Unlock();
  return result;
}

void* GetPosixSpecific(uint32_t key) {
  if (key > 127) {
    return nullptr;
  }

  auto* storage = detail::CurrentStorage();

  if (!storage || storage == detail::RetiredStorage()) {
    return nullptr;
  }

  auto& entry = storage->keys[key];

  if (!(entry.generation & 1) ||
      entry.generation != PosixKeyRegistry.keys[key].generation) {
    return nullptr;
  }

  return const_cast<void*>(entry.value);
}

int SetPosixSpecific(uint32_t key, const void* value) {
  if (key > 127 || !PosixKeyRegistry.keys[key].destructor) {
    return 22;
  }

  auto* storage = detail::CurrentStorage();

  if (!storage) {
    storage = static_cast<detail::PosixThreadStorage*>(malloc(2064));

    if (!storage) {
      return 12;
    }

    storage->dirty = 0;
    memset(storage->keys, 0, sizeof(storage->keys));
    storage->kind = 72;
    storage->state = 1;
    storage->reserved02 = 0;
    detail::CurrentStorage() = storage;
    os::SetTlsValue({detail::GetLazyTlsSlot()},
      reinterpret_cast<uintptr_t>(storage));
  }
  else if (storage == detail::RetiredStorage()) {
    return 11;
  }

  auto& entry = storage->keys[key];
  uint64_t generation = PosixKeyRegistry.keys[key].generation;

  if (entry.value != value || entry.generation != generation) {
    entry.value = value;
    entry.generation = generation;
    storage->dirty = 1;
  }

  return 0;
}

int NotifyThreadPool(int kind, int waiting) {
  if (kind != 1) {
    return 22;
  }

  if (ThreadPoolNotificationKey != UINT32_MAX) {
    auto* record = static_cast<uint8_t*>(
      GetPosixSpecific(ThreadPoolNotificationKey));

    if (record) {
      *reinterpret_cast<uint32_t*>(record + 36) = waiting != 0;
    }
  }

  return 0;
}

}
