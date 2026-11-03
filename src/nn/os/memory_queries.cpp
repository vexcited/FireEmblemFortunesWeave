#include "nn/os/memory_queries.hpp"

#include "nn/os/managers.hpp"
#include "nn/os/startup.hpp"

extern "C" uint32_t svcGetInfo(uint64_t* output, uint32_t type, uint32_t handle,
                               uint64_t subtype);

namespace nn::os::detail {

[[noreturn]] void AbortMemoryQuery(const uint32_t* result) asm(
  "_ZN2nn4diag6detail9AbortImplEPKNS_6ResultE");

MemoryUsagePair QueryVirtualAddressMemoryResourceUsage(VammManager*) {
  uint64_t value = 0;
  uint32_t result = svcGetInfo(&value, 16, 0xffff8001, 0);
  uint64_t first = result ? 0 : value;
  value = 0;
  result = svcGetInfo(&value, 17, 0xffff8001, 0);
  uint64_t second = result ? 0x80000 : value + 0x80000;
  return {first, second < first ? second : first};
}

}

namespace nn::os {

static_assert(sizeof(MemoryUsagePair) == 16);

uintptr_t GetMemoryHeapAddress() {
  uintptr_t value;
  __builtin_memcpy(&value, detail::g_OsResourceManagerStorage + 0x420,
                   sizeof(value));
  return value;
}

size_t GetMemoryHeapSize() {
  size_t value;
  __builtin_memcpy(&value, detail::g_OsResourceManagerStorage + 0x428,
                   sizeof(value));
  return value;
}

MemoryUsagePair GetVirtualAddressMemoryResourceUsage() {
  auto* manager = reinterpret_cast<detail::VammManager*>(
    detail::g_OsResourceManagerStorage + 1104);
  return detail::QueryVirtualAddressMemoryResourceUsage(manager);
}

bool IsVirtualAddressMemoryEnabled() {
  auto* manager = reinterpret_cast<detail::VammManager*>(
    detail::g_OsResourceManagerStorage + 1104);
  return manager->IsVirtualAddressMemoryEnabled();
}

MemoryUsagePair GetRemoteMemoryUsage() {
  uint64_t value = 0;
  uint32_t result = svcGetInfo(&value, 31, 0xffff8001, 0);

  if (result) {
    detail::AbortMemoryQuery(&result);
  }

  uint64_t first = value;
  result = svcGetInfo(&value, 32, 0xffff8001, 0);

  if (result) {
    detail::AbortMemoryQuery(&result);
  }

  return {first, value};
}

}
