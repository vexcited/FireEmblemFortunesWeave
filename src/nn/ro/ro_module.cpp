#include <stdint.h>

#include "nn/diag/diag_abort.hpp"
#include "nn/ro/detail/ro_module.hpp"

namespace nn::ro::detail {

using LookupGlobalAutoFunction = uintptr_t (*)(const char* pName);

extern LookupGlobalAutoFunction g_pLookupGlobalAutoFunctionPointer;

[[gnu::visibility("hidden")]] const Elf64Symbol* LookupModuleSymbolImpl(
  const RoModule* pModule, const char* pName);
uintptr_t LookupGlobalManual(const RoModule* pModule, const char* pName);

namespace {

constexpr uint8_t SymbolBindingMask = 0xf0;
constexpr uint8_t SymbolBindingWeak = 0x20;
constexpr uint8_t SymbolVisibilityMask = 0x3;

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

[[gnu::always_inline]] inline bool IsDataRelocation(uint32_t type) {
  return type == RelocationAbs64 || type == RelocationAbs32 ||
    type == RelocationGlobalData;
}

// Data still pointing into the other module is cleared before it unloads.
[[gnu::always_inline]] inline void RestoreVariablesImpl(RoModule* pModule,
  RoModule* pOther) {
  NN_ABORT_UNLESS(pModule->relCount >= pModule->relSize / RelEntrySize);
  for (size_t i = pModule->relativeCount;
    i < pModule->relocationsSize / sizeof(Elf64Rela); i++) {
    const Elf64Rela& relocation = pModule->pRelocations[i];
    if (!IsDataRelocation(static_cast<uint32_t>(relocation.info))) {
      continue;
    }

    auto* pSlot = reinterpret_cast<uintptr_t*>(pModule->baseAddress +
      relocation.offset);
    if (Contains(pOther, *pSlot)) {
      *pSlot = 0;
    }
  }
}

// Calls into the other module go back through the lazy binder.
[[gnu::always_inline]] inline void RestoreFunctionsImpl(RoModule* pModule,
  RoModule* pOther) {
  if (pModule->pltRelocationsSize == 0) {
    return;
  }

  NN_ABORT_UNLESS((pModule->flags & ModuleFlag_PltIsRela) != 0);
  for (size_t i = 0;
    i < pModule->pltRelocationsSize / sizeof(Elf64Rela); i++) {
    const Elf64Rela& relocation = pModule->pPltRelocations[i];
    if (static_cast<uint32_t>(relocation.info) != RelocationJumpSlot) {
      continue;
    }

    auto* pSlot = reinterpret_cast<uintptr_t*>(pModule->baseAddress +
      relocation.offset);
    if (Contains(pOther, *pSlot)) {
      *pSlot = pModule->lazyBindEntry;
    }
  }
}

}

void RoModule::RestoreVariables(RoModule* pOther) {
  RestoreVariablesImpl(this, pOther);
}

void RoModule::RestoreFunctions(RoModule* pOther,
  void (* /* log */)(const char* pText)) {
  RestoreFunctionsImpl(this, pOther);
}

void RoModule::RevertReference(RoModule* pOther,
  void (* /* log */)(const char* pText)) {
  RestoreVariablesImpl(this, pOther);
  RestoreFunctionsImpl(this, pOther);
}

// Data imports that resolve into the other module are bound to it. Hidden
// symbols resolve inside this module, weak ones may stay unresolved.
void RoModule::BindVariables(const RoModule* pOther) {
  NN_ABORT_UNLESS(relCount >= relSize / RelEntrySize);
  for (size_t i = relativeCount; i < relocationsSize / sizeof(Elf64Rela);
    i++) {
    const Elf64Rela& relocation = pRelocations[i];
    if (!IsDataRelocation(static_cast<uint32_t>(relocation.info))) {
      continue;
    }

    const Elf64Symbol& symbol = pSymbols[relocation.info >> 32];
    const Elf64Symbol* pOtherSymbol =
      LookupModuleSymbolImpl(pOther, pStrings + symbol.name);
    if (pOtherSymbol == nullptr) {
      continue;
    }

    const char* pName = pStrings + symbol.name;
    uintptr_t address = 0;
    if ((symbol.other & SymbolVisibilityMask) != 0) {
      const Elf64Symbol* pOwnSymbol = LookupModuleSymbolImpl(this, pName);
      if (pOwnSymbol != nullptr) {
        address = pOwnSymbol->value + baseAddress;
      }
    }
    else {
      address = g_pLookupGlobalAutoFunctionPointer(pName);
      if (address == 0) {
        address = LookupGlobalManual(this, pName);
      }
    }

    if (address == 0 &&
      (symbol.info & SymbolBindingMask) != SymbolBindingWeak) {
      continue;
    }

    if (address != pOtherSymbol->value + pOther->baseAddress) {
      continue;
    }

    NN_ABORT_UNLESS((pOther->flags & ModuleFlag_NotReferenced) == 0);
    *reinterpret_cast<uintptr_t*>(baseAddress + relocation.offset) =
      relocation.addend + address;
  }
}

}
