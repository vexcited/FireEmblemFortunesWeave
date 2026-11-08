#include <stdint.h>

#include "nn/diag/diag_abort.hpp"
#include "nn/ro/detail/ro_module.hpp"

namespace nn::ro::detail {

extern uint32_t g_RoBusyMutex;
extern RoModule* g_pManualLoadList;

[[gnu::visibility("hidden")]] const Elf64Symbol* LookupModuleSymbolImpl(
  const RoModule* pModule, const char* pName);
[[gnu::visibility("hidden")]] void LockBusyMutexImpl(uint32_t* pMutex);
[[gnu::visibility("hidden")]] void UnlockBusyMutexImpl(uint32_t* pMutex);

namespace {

constexpr uint8_t SymbolBindingShift = 4;

}

// Only global symbols resolve. A module loaded without references may only
// resolve its own imports.
uintptr_t LookupGlobalManual(const RoModule* pRequester, const char* pName) {
  LockBusyMutexImpl(&g_RoBusyMutex);
  uintptr_t address = 0;
  for (RoModule* pModule = g_pManualLoadList->pNext;
    pModule != g_pManualLoadList; pModule = pModule->pNext) {
    const Elf64Symbol* pSymbol = LookupModuleSymbolImpl(pModule, pName);
    if (pSymbol == nullptr || (pSymbol->info >> SymbolBindingShift) == 0) {
      continue;
    }

    address = pSymbol->value + pModule->baseAddress;
    if (pModule != pRequester &&
      (pModule->flags & ModuleFlag_NotReferenced) != 0) {
      diag::detail::AbortImpl();
    }

    break;
  }

  UnlockBusyMutexImpl(&g_RoBusyMutex);
  return address;
}

}
