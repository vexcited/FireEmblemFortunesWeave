#include "nn/diag/abort_observer.hpp"

#include "libc/cxx_guard.hpp"
#include "nn/am/interfaces.hpp"
#include "nn/os/reader_writer_lock.hpp"
#include "rtld/crt_registration.hpp"

#include <stddef.h>

extern "C" {
extern uint64_t AbortObserverGuard;
extern uint64_t SdkAbortObserverGuard;
extern unsigned char AbortObserverManagerStorage[];
extern unsigned char SdkAbortObserverManagerStorage[];
extern nn::diag::SdkAbortObserverHolder ApplicationAbortObserverHolder;
extern unsigned char SdkCrtHandle[];
}

namespace nn::diag::detail {

uint8_t g_EnableDefaultAbortObserver = 1;

template <class Holder> struct ObserverManager {
  Holder* head;
  Holder** tail;
  os::ReaderWriterLockType lock;
};

static_assert(sizeof(AbortObserverHolder) == 24);
static_assert(offsetof(AbortObserverHolder, registered) == 16);
static_assert(sizeof(SdkAbortObserverHolder) == 24);
static_assert(sizeof(ObserverManager<AbortObserverHolder>) == 64);

template <class Holder>
static ObserverManager<Holder>* AccessManager(uint64_t& guard,
                                              unsigned char* storage) {
  auto* manager = reinterpret_cast<ObserverManager<Holder>*>(storage);
  auto* initialized = reinterpret_cast<uint8_t*>(&guard);

  if (!(__atomic_load_n(initialized, __ATOMIC_ACQUIRE) & 1)) {
    if (__cxa_guard_acquire(&guard)) {
      manager->head = nullptr;
      manager->tail = &manager->head;
      os::InitializeReaderWriterLock(&manager->lock);
      fw::rtld::RegisterCrtDestructor(
        DestroyAbortObserverManager, manager,
        reinterpret_cast<uintptr_t>(SdkCrtHandle));
      __cxa_guard_release(&guard);
    }
  }

  return manager;
}

ObserverManager<AbortObserverHolder>* GetAbortObserverManager() {
  return AccessManager<AbortObserverHolder>(AbortObserverGuard,
                                            AbortObserverManagerStorage);
}

ObserverManager<SdkAbortObserverHolder>* GetSdkAbortObserverManager() {
  return AccessManager<SdkAbortObserverHolder>(SdkAbortObserverGuard,
                                               SdkAbortObserverManagerStorage);
}

template <class Holder>
static void Register(ObserverManager<Holder>* manager, Holder* holder) {
  os::AcquireWriteLock(&manager->lock);
  *manager->tail = holder;
  manager->tail = &holder->next;
  holder->next = nullptr;
  holder->registered = 1;
  os::ReleaseWriteLock(&manager->lock);
}

template <class Holder>
static void Unregister(ObserverManager<Holder>* manager, Holder* holder) {
  os::AcquireWriteLock(&manager->lock);
  Holder** link = &manager->head;

  while (*link && *link != holder) {
    link = &(*link)->next;
  }

  if (*link) {
    *link = holder->next;

    if (manager->tail == &holder->next) {
      manager->tail = link;
    }
  }

  holder->registered = 0;
  os::ReleaseWriteLock(&manager->lock);
}

void DestroyAbortObserverManager(void* pointer) {
  struct __attribute__((may_alias)) Node {
    uintptr_t callback;
    Node* next;
    uint8_t registered;
    uint8_t reserved[7];
  };

  struct __attribute__((may_alias)) Manager {
    Node* head;
    Node** tail;
    os::ReaderWriterLockType lock;
  };

  auto* manager = static_cast<Manager*>(pointer);
  os::AcquireWriteLock(&manager->lock);

  for (Node* node = manager->head; node; node = node->next) {
    node->registered = 0;
  }

  manager->head = nullptr;
  manager->tail = &manager->head;
  os::ReleaseWriteLock(&manager->lock);
  os::FinalizeReaderWriterLock(&manager->lock);
}

void DefaultAbortObserver(const AbortInfo&) {
}

void InvokeAbortObserver(const AbortInfo& info) {
  if (g_EnableDefaultAbortObserver == 1) {
    DefaultAbortObserver(info);
  }

  auto* manager = GetAbortObserverManager();
  os::AcquireReadLock(&manager->lock);

  for (auto* node = manager->head; node; node = node->next) {
    node->callback(info);
  }

  os::ReleaseReadLock(&manager->lock);
}

void InvokeSdkAbortObserver(const SdkAbortInfo& info) {
  auto* manager = GetSdkAbortObserverManager();
  os::AcquireReadLock(&manager->lock);

  for (auto* node = manager->head; node; node = node->next) {
    node->callback(info);
  }

  os::ReleaseReadLock(&manager->lock);
}

void ApplicationAbortCallback(const SdkAbortInfo& info) {
  auto* bytes = reinterpret_cast<const unsigned char*>(&info);
  uint32_t result = *reinterpret_cast<const uint32_t*>(bytes + 48);

  if (!result) {
    result = 0x2a2;
  }

  am::Interface* object = am::GetApplicationFunctions();
  using Function = void (*)(am::Interface*, uint32_t);
  reinterpret_cast<Function>(object->vtable[13])(object, result);
}

}

namespace nn::diag {

void InitializeAbortObserverHolder(AbortObserverHolder* holder,
                                   void (*callback)(const AbortInfo&)) {
  holder->callback = callback;
  holder->next = nullptr;
  holder->registered = 0;
}

void RegisterAbortObserver(AbortObserverHolder* holder) {
  detail::Register(detail::GetAbortObserverManager(), holder);
}

void UnregisterAbortObserver(AbortObserverHolder* holder) {
  detail::Unregister(detail::GetAbortObserverManager(), holder);
}

void EnableDefaultAbortObserver(bool enabled) {
  detail::g_EnableDefaultAbortObserver = enabled;
}

void InitializeSdkAbortObserverHolder(SdkAbortObserverHolder* holder,
                                      void (*callback)(const SdkAbortInfo&)) {
  holder->callback = callback;
  holder->next = nullptr;
  holder->registered = 0;
}

void RegisterSdkAbortObserver(SdkAbortObserverHolder* holder) {
  detail::Register(detail::GetSdkAbortObserverManager(), holder);
}

void UnregisterSdkAbortObserver(SdkAbortObserverHolder* holder) {
  detail::Unregister(detail::GetSdkAbortObserverManager(), holder);
}

void InitializeApplicationAbortObserver() {
  InitializeSdkAbortObserverHolder(&ApplicationAbortObserverHolder,
                                   detail::ApplicationAbortCallback);
  RegisterSdkAbortObserver(&ApplicationAbortObserverHolder);
}

}
