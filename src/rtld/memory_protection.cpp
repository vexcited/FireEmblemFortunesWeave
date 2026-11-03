#include "rtld/memory_protection.hpp"

extern "C" {
uint32_t svcGetInfo(uint64_t* value, uint32_t type, uint32_t handle,
  uint64_t subtype);
uint32_t svcSetMemoryPermission(uintptr_t address, uint64_t size,
  uint32_t permission);
uint32_t svcSetMemoryAttribute(uintptr_t address, uint64_t size,
  uint32_t mask, uint32_t value);
uint32_t svcBreak(uint32_t reason, uintptr_t address, uint64_t size);
}

namespace fw::rtld {

void ProtectModuleMemory(uintptr_t start, uintptr_t boundary, uintptr_t end,
  const Module* module) {
  if (module->reserved32) {
    return;
  }

  uint64_t pageSize = 0;

  if (svcGetInfo(&pageSize, 33, 0xFFFF8001, 0)) {
    svcBreak(0, 0, 0);
  }

  if ((pageSize - 1) & module->base) {
    svcBreak(0, 0, 0);
  }

  if ((pageSize - 1) & end) {
    svcBreak(0, 0, 0);
  }

  uint8_t flags = module->flags;
  uintptr_t protectedEnd = flags & 4 ? end : boundary;

  if ((flags & 12) != 8 && protectedEnd != start) {
    uint64_t size = protectedEnd - start;

    if (svcSetMemoryPermission(start, size, 1)) {
      svcBreak(0, 0, 0);
    }

    if (svcSetMemoryAttribute(start, size, 16, 16)) {
      svcBreak(0, 0, 0);
    }
  }

  flags = module->flags;

  if (!(flags & 4)) {
    uintptr_t remaining = flags & 8 ? start : boundary;

    if (end != remaining &&
      svcSetMemoryAttribute(remaining, end - remaining, 16, 16)) {
      svcBreak(0, 0, 0);
    }
  }
}

}
