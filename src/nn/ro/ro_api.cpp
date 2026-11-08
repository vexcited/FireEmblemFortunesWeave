#include <stddef.h>
#include <stdint.h>

#include "nn/os/synchronization.hpp"
#include "nn/result.hpp"

namespace nn::ro {

namespace detail {

struct Elf64Symbol {
  uint32_t name;
  uint8_t info;
  uint8_t other;
  uint16_t sectionIndex;
  uint64_t value;
  uint64_t size;
};

struct RoModule {
  uint8_t reserved00[0x28];
  uintptr_t baseAddress;
};

struct RuntimeState {
  uint8_t isInitialized;
  uint8_t reserved01[15];
  os::ReaderWriterLockType lock;
};

using LookupGlobalFunction = const Elf64Symbol* (*)(const RoModule* pModule,
  const char* pName);

const Elf64Symbol* LookupGlobalManual(const RoModule* pModule,
  const char* pName);

extern uint32_t g_RoBusyMutex;
extern LookupGlobalFunction* g_pLookupGlobalManualFunctionPointer;

[[gnu::visibility("hidden")]] extern RuntimeState g_RuntimeState;

[[gnu::visibility("hidden")]] const Elf64Symbol* LookupModuleSymbolImpl(
  const RoModule* pModule, const char* pName);
[[gnu::visibility("hidden")]] void InitializeBusyMutexImpl(uint32_t* pMutex);

}

struct Module {
  detail::RoModule* pRoModule;
};

namespace {

constexpr Result ResultNotFound = {0xa16};

}

// The loader asks the runtime for lookups it cannot do alone.
void InitializeForRuntime() {
  if (__atomic_load_n(&detail::g_RuntimeState.isInitialized,
    __ATOMIC_SEQ_CST)) {
    return;
  }

  os::InitializeReaderWriterLock(&detail::g_RuntimeState.lock);
  detail::InitializeBusyMutexImpl(&detail::g_RoBusyMutex);
  __atomic_thread_fence(__ATOMIC_SEQ_CST);
  __atomic_store_n(&detail::g_RuntimeState.isInitialized, 1,
    __ATOMIC_RELEASE);
  *detail::g_pLookupGlobalManualFunctionPointer = detail::LookupGlobalManual;
}

Result LookupModuleSymbol(uintptr_t* pOutAddress, const Module* pModule,
  const char* pName) {
  const detail::Elf64Symbol* pSymbol =
    detail::LookupModuleSymbolImpl(pModule->pRoModule, pName);
  if (pSymbol == nullptr) {
    return ResultNotFound;
  }

  *pOutAddress = pSymbol->value + pModule->pRoModule->baseAddress;
  return {0};
}

Result InitializeWithPortName(const char* name);

[[gnu::visibility("hidden")]] Result LoadModuleImpl(Module* pOutModule,
  const void* image, void* buffer, size_t bufferSize, int flag,
  bool isNotReferenced);
[[gnu::visibility("hidden")]] Result LookupSymbolImpl(uintptr_t* pOutAddress,
  const char* name, uintptr_t caller);

Result Initialize() {
  return InitializeWithPortName("ldr:ro");
}

Result LoadModule(Module* pOutModule, const void* image, void* buffer,
  size_t bufferSize, int flag) {
  return LoadModuleImpl(pOutModule, image, buffer, bufferSize, flag, false);
}

Result LoadModule(Module* pOutModule, const void* image, void* buffer,
  size_t bufferSize, int flag, bool isNotReferenced) {
  return LoadModuleImpl(pOutModule, image, buffer, bufferSize, flag,
    isNotReferenced);
}

Result LookupSymbol(uintptr_t* pOutAddress, const char* name) {
  return LookupSymbolImpl(pOutAddress, name, 0);
}

// The next symbol is searched after the module of the caller.
Result LookupNextSymbol(uintptr_t* pOutAddress, const char* name) {
  return LookupSymbolImpl(pOutAddress, name,
    reinterpret_cast<uintptr_t>(__builtin_return_address(0)));
}

}

extern "C" {

[[gnu::visibility("hidden")]] extern const uint8_t g_RoDataStart[];
[[gnu::visibility("hidden")]] extern const uint8_t g_RoDataEnd[];

const void* nndetailRoGetRoDataStart() {
  return g_RoDataStart;
}

const void* nndetailRoGetRoDataEnd() {
  return g_RoDataEnd;
}

}
