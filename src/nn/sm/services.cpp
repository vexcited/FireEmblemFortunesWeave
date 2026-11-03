#include "nn/sm/services.hpp"

#include "libc/cxx_guard.hpp"
#include "rtld/crt_registration.hpp"
#include "rtld/string.hpp"

extern "C" {
extern nn::sm::detail::Session* SmSessionPointer;
extern uint32_t SmManagerHandle;
extern nn::sm::detail::Session SmManagerSession;
extern nn::sm::detail::Session* SmManagerSessionPointer;
extern uint64_t SmManagerSessionGuard;
extern uint8_t SdkCrtHandle[];
}

namespace nn::sm::detail {

[[noreturn]] void AbortSession()
  asm("_ZN2nn4diag6detail9AbortImplEv");
[[noreturn]] void AbortSessionResult(const uint32_t*)
  asm("_ZN2nn4diag6detail9AbortImplEPKNS_6ResultE");

static uint8_t* Buffer() {
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

static uint64_t ServiceName(const char* name, size_t length) {
  uint64_t value = 0;

  for (size_t i = 0; i < length && i < 8; ++i) {
    value |= uint64_t(uint8_t(name[i])) << (8 * i);
  }

  return value;
}

static uint32_t ReceiveResult(Session* session, uint8_t* buffer,
  uint32_t command) {
  uint32_t result = SendSessionRequest(session);

  if (result) {
    return result;
  }

  result = Read<uint32_t>(buffer + 8);
  Write<uint64_t>(buffer, uint64_t(command) | 0x100000000ULL);
  return result;
}

static void DescribeBuffer(uint8_t* output, const void* pointer, size_t size) {
  uintptr_t address = reinterpret_cast<uintptr_t>(pointer);
  uint32_t high = uint32_t(size >> 8) & 0x0f000000;
  high |= uint32_t(address >> 4) & 0xf0000000;
  high |= uint32_t(address >> 34) & 0x3ffffffc;
  Write<uint32_t>(output, uint32_t(size));
  Write<uint32_t>(output + 4, uint32_t(address));
  Write<uint32_t>(output + 8, high);
}

uint32_t OpenServiceSession(uint32_t* output, const char* name) {
  uint32_t result = Initialize();

  if (result) {
    AbortSessionResult(&result);
  }

  uint32_t handle = 0;
  result = GetServiceHandle(&handle, name, strlen(name));

  if (!result) {
    *output = handle;
  }

  return result;
}

}

namespace nn::sm {

uint32_t RegisterService(uint32_t* output, uint32_t spaces, const char* name,
  size_t length, int maximum_sessions, bool light) {
  uint64_t service = detail::ServiceName(name, length);
  auto* session = SmSessionPointer;
  uint8_t* buffer = detail::Buffer();
  detail::Write<uint64_t>(buffer + 12, service);
  detail::Write<uint32_t>(buffer + 8, spaces);
  detail::Write<uint32_t>(buffer + 20, uint32_t(maximum_sessions));
  buffer[24] = light;
  detail::Write<uint64_t>(buffer, 0x500000012ULL);
  uint32_t result = detail::SendSessionRequest(session);

  if (result) {
    *output = 0;
    return result;
  }

  detail::Write<uint64_t>(buffer, 0x8000000100000012ULL);
  detail::Write<uint32_t>(buffer + 8, 32);
  uint32_t handle = detail::Read<uint32_t>(buffer + 12);
  result = detail::Read<uint32_t>(buffer + 16);
  *output = handle;
  return result;
}

uint32_t UnregisterService(uint32_t spaces, const char* name, size_t length) {
  auto* session = SmSessionPointer;
  uint64_t service = detail::ServiceName(name, length);
  uint8_t* buffer = detail::Buffer();
  detail::Write<uint32_t>(buffer + 8, spaces);
  detail::Write<uint64_t>(buffer + 12, service);
  detail::Write<uint64_t>(buffer, 0x300000013ULL);
  return detail::ReceiveResult(session, buffer, 19);
}

uint32_t InitializeForManager() {
  uint32_t result = detail::OpenServiceSession(&SmManagerHandle, "sm:m");

  if (result) {
    return result;
  }

  uint32_t handle = SmManagerHandle;
  auto* guard = reinterpret_cast<uint8_t*>(&SmManagerSessionGuard);

  if (!(__atomic_load_n(guard, __ATOMIC_ACQUIRE) & 1) &&
      __cxa_guard_acquire(&SmManagerSessionGuard)) {
    SmManagerSession.handle = handle;
    fw::rtld::RegisterCrtDestructor(detail::DestroySession, &SmManagerSession,
      reinterpret_cast<uintptr_t>(SdkCrtHandle));
    __cxa_guard_release(&SmManagerSessionGuard);
  }

  SmManagerSessionPointer = &SmManagerSession;
  return 0;
}

[[noreturn]] void FinalizeForManager() {
  detail::AbortSession();
}

uint32_t RegisterProcess(uint64_t process, const void* access_control,
  size_t access_control_size, const void* services, size_t services_size) {
  auto* session = SmManagerSessionPointer;
  uint8_t* buffer = detail::Buffer();
  detail::DescribeBuffer(buffer + 8, access_control, access_control_size);
  detail::DescribeBuffer(buffer + 20, services, services_size);
  detail::Write<uint64_t>(buffer + 32, process);
  detail::Write<uint64_t>(buffer, 0x200200010ULL);
  return detail::ReceiveResult(session, buffer, 16);
}

uint32_t RegisterProcess2(uint64_t process, const void* access_control,
  size_t access_control_size, const void* services, size_t services_size,
  uint32_t space) {
  auto* session = SmManagerSessionPointer;
  uint8_t* buffer = detail::Buffer();
  detail::DescribeBuffer(buffer + 8, access_control, access_control_size);
  detail::DescribeBuffer(buffer + 20, services, services_size);
  detail::Write<uint64_t>(buffer + 32, process);
  buffer[40] = uint8_t(space);
  detail::Write<uint64_t>(buffer, 0x300200012ULL);
  return detail::ReceiveResult(session, buffer, 18);
}

uint32_t EnableServiceSpaceNxDebug() {
  auto* session = SmManagerSessionPointer;
  uint8_t* buffer = detail::Buffer();
  detail::Write<uint64_t>(buffer, 19);
  return detail::ReceiveResult(session, buffer, 19);
}

uint32_t UnregisterProcess(uint64_t process) {
  auto* session = SmManagerSessionPointer;
  uint8_t* buffer = detail::Buffer();
  detail::Write<uint64_t>(buffer, 0x200000011ULL);
  detail::Write<uint64_t>(buffer + 8, process);
  return detail::ReceiveResult(session, buffer, 17);
}

}
