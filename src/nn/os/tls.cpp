#include "nn/os/tls.hpp"

#include "nn/os/startup.hpp"
#include "nn/os/thread_manager.hpp"

namespace nn::os {

ThreadType* GetCurrentThread() {
  uintptr_t tls;
  asm volatile("mrs %0, tpidrro_el0" : "=r"(tls));
  return *reinterpret_cast<ThreadType**>(tls + 0x1f8);
}

Result SdkAllocateTlsSlot(TlsSlot* output, void (*destructor)(uintptr_t)) {
  auto* manager = reinterpret_cast<detail::TlsManager*>(
    detail::g_OsResourceManagerStorage + 0x310);
  return {manager->AllocateTlsSlot(output, destructor, true) ? 0U : 4611U};
}

void FreeTlsSlot(TlsSlot slot) {
  auto* manager = reinterpret_cast<detail::TlsManager*>(
    detail::g_OsResourceManagerStorage + 0x310);
  manager->FreeTlsSlot(slot);
}

uintptr_t GetTlsValue(TlsSlot slot) {
  return GetCurrentThread()->tls_values[slot.value];
}

void SetTlsValue(TlsSlot slot, uintptr_t value) {
  GetCurrentThread()->tls_values[slot.value] = value;
}

}
