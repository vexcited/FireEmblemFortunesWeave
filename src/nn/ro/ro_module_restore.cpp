#include <stdint.h>

#include "nn/diag/diag_abort.hpp"
#include "nn/ro/detail/ro_module.hpp"

namespace nn::ro::detail {

namespace {

constexpr uint32_t RelocationAbs64 = 0x101;
constexpr uint32_t RelocationAbs32 = 0x102;
constexpr uint32_t RelocationGlobalData = 0x401;
constexpr uint32_t RelocationJumpSlot = 0x402;
constexpr size_t RelEntrySize = 0x10;

[[gnu::always_inline]] inline bool Contains(const RoModule* pModule,
  uintptr_t address) {
  return pModule->baseAddress <= address &&
    address < pModule->baseAddress + pModule->size;
}

}

// Data still pointing into the other module is cleared before it unloads.
void RoModule::RestoreVariables(RoModule* pOther) {
  NN_ABORT_UNLESS(relCount >= relSize / RelEntrySize);
  for (size_t i = relativeCount; i < relocationsSize / sizeof(Elf64Rela);
    i++) {
    const Elf64Rela& relocation = pRelocations[i];
    const uint32_t type = static_cast<uint32_t>(relocation.info);
    if (type != RelocationAbs64 && type != RelocationAbs32 &&
      type != RelocationGlobalData) {
      continue;
    }

    auto* pSlot =
      reinterpret_cast<uintptr_t*>(baseAddress + relocation.offset);
    if (Contains(pOther, *pSlot)) {
      *pSlot = 0;
    }
  }
}

// Calls into the other module go back through the lazy binder.
void RoModule::RestoreFunctions(RoModule* pOther,
  void (* /* log */)(const char* pText)) {
  if (pltRelocationsSize == 0) {
    return;
  }

  NN_ABORT_UNLESS((flags & ModuleFlag_PltIsRela) != 0);
  for (size_t i = 0; i < pltRelocationsSize / sizeof(Elf64Rela); i++) {
    const Elf64Rela& relocation = pPltRelocations[i];
    if (static_cast<uint32_t>(relocation.info) != RelocationJumpSlot) {
      continue;
    }

    auto* pSlot =
      reinterpret_cast<uintptr_t*>(baseAddress + relocation.offset);
    if (Contains(pOther, *pSlot)) {
      *pSlot = lazyBindEntry;
    }
  }
}

}
