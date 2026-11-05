#include <stddef.h>
#include <stdint.h>

#include "nn/diag/diag_abort.hpp"

namespace nn::os {

void FlushDataCache(const void* address, size_t size) {
  if (size == 0) {
    return;
  }

  uint64_t cacheType;
  asm volatile("mrs %0, ctr_el0" : "=r"(cacheType));
  const uintptr_t lineSize = uintptr_t{4} << ((cacheType >> 16) & 0xf);
  const uintptr_t end = reinterpret_cast<uintptr_t>(address) + size;

  uintptr_t tls;
  asm("mrs %0, tpidrro_el0" : "=r"(tls));
  auto* isCacheMaintenance = reinterpret_cast<volatile bool*>(tls + 0x104);
  *isCacheMaintenance = true;

  for (uintptr_t line = reinterpret_cast<uintptr_t>(address) & -lineSize;
    line < end; line += lineSize) {
    asm volatile("dc civac, %0" : : "r"(line) : "memory");
  }

  __builtin_arm_dsb(0xf);
  *isCacheMaintenance = false;
}

void FlushEntireDataCache() {
  NN_ABORT_UNLESS(false);
}

}
