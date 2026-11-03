#include "nn/sm/initialization.hpp"

#include "libc/cxx_guard.hpp"
#include "nn/os/mutex.hpp"
#include "nn/os/sleep_thread.hpp"
#include "rtld/crt_registration.hpp"

extern "C" {
uint32_t svcConnectToNamedPort(uint32_t* output, const char* name);
uint32_t svcSendSyncRequest(uint32_t handle);
uint32_t svcCloseHandle(uint32_t handle);
extern nn::os::MutexType SmMutex;
extern uint32_t SmReferences;
extern nn::sm::detail::Session SmSession;
extern nn::sm::detail::Session* SmSessionPointer;
extern uint64_t SmSessionGuard;
extern uint8_t SdkCrtHandle[];
}

namespace nn::sm::detail {

[[noreturn]] void AbortSession()
  asm("_ZN2nn4diag6detail9AbortImplEv");
[[noreturn]] void AbortSessionResult(const uint32_t*)
  asm("_ZN2nn4diag6detail9AbortImplEPKNS_6ResultE");

static uint8_t* MessageBuffer() {
  uint8_t* buffer;
  asm volatile("mrs %0, tpidrro_el0" : "=r"(buffer));
  return buffer;
}

template <typename T>
static T Read(const void* address) {
  T value;
  __builtin_memcpy(&value, address, sizeof(value));
  return value;
}

template <typename T>
static void Write(void* address, T value) {
  __builtin_memcpy(address, &value, sizeof(value));
}

uint32_t SendSessionRequest(Session* session) {
  return svcSendSyncRequest(session->handle);
}

void CloseSession(Session* session) {
  if (!session->handle) {
    return;
  }

  Write<uint64_t>(MessageBuffer(), 15);
  uint32_t result = svcSendSyncRequest(session->handle);

  if ((result & 0x3fffff) != 0xf601) {
    AbortSession();
  }

  result = svcCloseHandle(session->handle);

  if (result) {
    AbortSessionResult(&result);
  }
}

void DestroySession(void* session) {
  CloseSession(static_cast<Session*>(session));
}

}

namespace nn::sm {

uint32_t Initialize() {
  os::LockMutex(&SmMutex);

  if (int32_t(SmReferences) >= 1) {
    ++SmReferences;
    os::UnlockMutex(&SmMutex);
    return 0;
  }

  uint32_t handle = 0;
  uint32_t result = svcConnectToNamedPort(&handle, "sm:");

  while ((result & 0x3fffff) == 0xf201) {
    os::SleepThread({50000000});
    result = svcConnectToNamedPort(&handle, "sm:");
  }

  if (result) {
    os::UnlockMutex(&SmMutex);
    return result;
  }

  auto* guard = reinterpret_cast<uint8_t*>(&SmSessionGuard);

  if (!(__atomic_load_n(guard, __ATOMIC_ACQUIRE) & 1) &&
      __cxa_guard_acquire(&SmSessionGuard)) {
    SmSession.handle = handle;
    fw::rtld::RegisterCrtDestructor(detail::DestroySession, &SmSession,
      reinterpret_cast<uintptr_t>(SdkCrtHandle));
    __cxa_guard_release(&SmSessionGuard);
  }

  SmSessionPointer = &SmSession;
  uint8_t* buffer = detail::MessageBuffer();
  detail::Write<uint64_t>(buffer + 12, 0);
  detail::Write<uint64_t>(buffer, 0x8000000000000010ULL);
  detail::Write<uint32_t>(buffer + 8, 1);

  if (detail::SendSessionRequest(&SmSession)) {
    detail::AbortSession();
  }

  detail::Write<uint64_t>(buffer, 0x100000010ULL);

  if (detail::Read<uint32_t>(buffer + 8)) {
    detail::AbortSession();
  }

  SmReferences = 1;
  os::UnlockMutex(&SmMutex);
  return 0;
}

uint32_t Finalize() {
  return 0;
}

uint32_t GetServiceHandle(uint32_t* output, const char* name, size_t length) {
  auto* session = SmSessionPointer;
  uint64_t service = 0;

  for (size_t i = 0; i < length && i < 8; ++i) {
    service |= uint64_t(uint8_t(name[i])) << (8 * i);
  }

  uint8_t* buffer = detail::MessageBuffer();
  detail::Write<uint64_t>(buffer, 0x200000011ULL);
  detail::Write<uint64_t>(buffer + 8, service);
  uint32_t result = detail::SendSessionRequest(session);

  if (result) {
    *output = 0;
    return result;
  }

  detail::Write<uint64_t>(buffer, 0x8000000100000011ULL);
  detail::Write<uint32_t>(buffer + 8, 32);
  uint32_t handle = detail::Read<uint32_t>(buffer + 12);
  result = detail::Read<uint32_t>(buffer + 16);
  *output = handle;
  return result;
}

}
