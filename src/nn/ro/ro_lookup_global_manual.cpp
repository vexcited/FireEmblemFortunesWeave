#include <stdint.h>

#include "nn/diag/diag_abort.hpp"

namespace nn::ro::detail {

struct Elf64Symbol {
  uint32_t name;
  uint8_t info;
  uint8_t other;
  uint16_t sectionIndex;
  uint64_t value;
  uint64_t size;
};

struct RoModule {
  RoModule* pPrevious;
  RoModule* pNext;
  uint8_t reserved10[0x18];
  uintptr_t baseAddress;
  uint8_t reserved30[0x93];
  uint8_t flags;
};

static_assert(__builtin_offsetof(RoModule, flags) == 0xc3);

extern uint32_t g_RoBusyMutex;
extern RoModule* g_pManualLoadList;

[[gnu::visibility("hidden")]] const Elf64Symbol* LookupModuleSymbolImpl(
  const RoModule* pModule, const char* pName);
[[gnu::visibility("hidden")]] void LockBusyMutexImpl(uint32_t* pMutex);
[[gnu::visibility("hidden")]] void UnlockBusyMutexImpl(uint32_t* pMutex);

namespace {

constexpr uint8_t SymbolBindingShift = 4;
constexpr uint8_t ModuleFlagNotReferenced = 1;

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
      (pModule->flags & ModuleFlagNotReferenced) != 0) {
      diag::detail::AbortImpl();
    }

    break;
  }

  UnlockBusyMutexImpl(&g_RoBusyMutex);
  return address;
}

}
