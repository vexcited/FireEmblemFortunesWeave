#include "rtld/diagnostics.hpp"

#include <stddef.h>
#include <stdint.h>

extern "C" size_t strlen(const char* message);
extern "C" uint32_t svcOutputDebugString(const char* message, size_t size);
extern "C" uint32_t svcBreak(uint32_t reason, uintptr_t address, uint64_t size);

namespace fw::rtld {

void LoaderWarning(const char* message) {
  svcOutputDebugString(message, strlen(message));
}

[[noreturn]] void LoaderError(const char* message) {
  LoaderWarning(message);
  svcBreak(0, 0, 0);
  asm volatile("udf #0x8002");
  __builtin_unreachable();
}

}
