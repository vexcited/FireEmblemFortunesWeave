#pragma once

#include "nn/nlibsdk/posix_tls.hpp"
#include "nn/os/tls.hpp"

namespace nn::nlibsdk::detail {

struct __attribute__((may_alias)) KeyRecord {
  PosixKeyDestructor destructor;
  uint64_t generation;
};

struct KeyRegistry {
  os::SdkRecursiveMutexType mutex;
  KeyRecord keys[128];
};

struct ThreadKeyValue {
  const void* value;
  uint64_t generation;
};

struct PosixThreadStorage {
  uint8_t state;
  uint8_t kind;
  uint8_t reserved02;
  uint8_t reserved03[5];
  uint8_t dirty;
  uint8_t reserved09[7];
  ThreadKeyValue keys[128];
};

void DefaultKeyDestructor(void* value);
void InvokeKeyDestructors(PosixThreadStorage* storage);
uint32_t GetLazyTlsSlot();
void DestroyThreadTlsStorage(uintptr_t storage);
void AllocateTlsSlotOrAbort(os::TlsSlot* slot, void (*destructor)(uintptr_t));
void DestroyTlsSlot(void* slot);

}

extern "C" {
extern nn::nlibsdk::detail::KeyRegistry PosixKeyRegistry;
extern nn::os::TlsSlot PosixTlsSlot;
extern uint64_t PosixTlsSlotGuard;
extern uint32_t ThreadPoolNotificationKey;
extern unsigned char PosixRetiredStorage;
extern unsigned char SdkDsoHandle;
}
