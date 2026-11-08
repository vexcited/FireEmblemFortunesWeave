#include <stddef.h>
#include <stdint.h>
#include <string.h>

#include "nn/diag/diag_abort.hpp"
#include "nn/os/mutex.hpp"
#include "nn/os/reader_writer_lock.hpp"
#include "nn/os/synchronization.hpp"
#include "nn/result.hpp"
#include "nn/sf/shared_pointer.hpp"

namespace nn::svc {

struct PageInfo;

namespace lp64 {

struct MemoryInfo;

}

namespace aarch64::lp64 {

Result QueryMemory(svc::lp64::MemoryInfo* pOutInfo, PageInfo* pOutPageInfo,
  uintptr_t address);

}

}

namespace nn::rocrt {

struct ModuleHeader {
  uint32_t magic;
  uint32_t dynamicOffset;
};

}

namespace nn::ro {

namespace detail {

struct ModuleVersion {
  uint64_t value[2];
};

template<Result (*Query)(svc::lp64::MemoryInfo*, svc::PageInfo*, uintptr_t)>
bool FindModuleHeader(const rocrt::ModuleHeader** ppOutHeader,
  ModuleVersion* pOutVersion, uintptr_t baseAddress);

struct Elf64Symbol {
  uint32_t name;
  uint8_t info;
  uint8_t other;
  uint16_t sectionIndex;
  uint64_t value;
  uint64_t size;
};

// Modules sit on circular lists whose head is a node of its own.
struct RoModule {
  RoModule* pPrevious;
  RoModule* pNext;
  uint8_t reserved10[0x18];
  uintptr_t baseAddress;
  uint8_t reserved30[0x88];
  size_t size;
};

class IRoInterface : public sf::IServiceObject {
public:
  virtual void Reserved2() = 0;
  virtual void Reserved3() = 0;
  virtual Result LoadModule() = 0;
  virtual Result UnloadModule() = 0;
  virtual Result RegisterModuleInfo() = 0;
  virtual Result UnregisterModuleInfo(uint64_t processIdPlaceholder,
    uintptr_t nrrAddress) = 0;
};

struct RuntimeState {
  uint8_t isInitialized;
  uint8_t reserved01[7];
  IRoInterface* pService;
  os::ReaderWriterLockType lock;
};

struct ListNode {
  ListNode* pNext;
  ListNode* pPrevious;
};

struct RegistrationList {
  ListNode head;
  os::MutexType mutex;
};

using LookupGlobalFunction = uintptr_t (*)(const RoModule* pModule,
  const char* pName);

uintptr_t LookupGlobalManual(const RoModule* pModule, const char* pName);

extern uint32_t g_RoBusyMutex;
extern RoModule* g_pAutoLoadList;
extern RoModule* g_pManualLoadList;

// The module holding this library, used before the loader runs.
[[gnu::visibility("hidden")]] extern RoModule g_SelfModule;
extern LookupGlobalFunction* g_pLookupGlobalManualFunctionPointer;

[[gnu::visibility("hidden")]] extern RuntimeState g_RuntimeState;
[[gnu::visibility("hidden")]] extern RegistrationList g_RegistrationList;

[[gnu::visibility("hidden")]] const Elf64Symbol* LookupModuleSymbolImpl(
  const RoModule* pModule, const char* pName);
[[gnu::visibility("hidden")]] void InitializeBusyMutexImpl(uint32_t* pMutex);

}

struct Module {
  detail::RoModule* pRoModule;
};

struct ModuleId {
  uint8_t value[0x20];
  size_t size;
};

struct RegistrationInfo {
  uint32_t state;
  uint32_t reserved04;
  uintptr_t nrrAddress;
  detail::ListNode node;
};

namespace detail {

[[gnu::visibility("hidden")]] void ProtectFullRelro(RoModule* pModule);
[[gnu::visibility("hidden")]] Result GetUpperBoundSymbolImpl(
  uintptr_t* pOutAddress, size_t* pOutSize, char* pOutName,
  uintptr_t baseAddress, size_t nameSize, uintptr_t address);
[[gnu::visibility("hidden")]] Result GetModuleIdImpl(ModuleId* pOutModuleId,
  uintptr_t baseAddress);
[[gnu::visibility("hidden")]] Result GetModuleNamePointerImpl(
  const char** ppOutName, size_t* pOutLength, uintptr_t baseAddress);

}

namespace {

constexpr Result ResultNotFound = {0xa16};

[[gnu::always_inline]] inline bool IsRuntimeInitialized() {
  return __atomic_load_n(&detail::g_RuntimeState.isInitialized,
    __ATOMIC_ACQUIRE) == 1;
}

constexpr Result ResultModuleNotLoaded = {0x1a16};
constexpr Result ResultNameTruncated = {0x1816};

// Runs the query when a module starts at the address, under the lock for the
// manual ones.
template<typename T, typename Query>
[[gnu::always_inline]] inline T QueryLoadedModule(uintptr_t baseAddress,
  T notLoaded, Query query) {
  detail::RoModule* pAutoLoadList = detail::g_pAutoLoadList;
  if (pAutoLoadList == nullptr) {
    if (detail::g_SelfModule.baseAddress != baseAddress) {
      return notLoaded;
    }

    return query();
  }

  for (detail::RoModule* pModule = pAutoLoadList->pNext;
    pModule != pAutoLoadList; pModule = pModule->pNext) {
    if (pModule->baseAddress == baseAddress) {
      return query();
    }
  }

  if (__atomic_load_n(&detail::g_RuntimeState.isInitialized,
    __ATOMIC_ACQUIRE) != 1) {
    return notLoaded;
  }

  os::AcquireReadLock(&detail::g_RuntimeState.lock);
  T result = notLoaded;
  detail::RoModule* pManualLoadList = detail::g_pManualLoadList;
  for (detail::RoModule* pModule = pManualLoadList->pNext;
    pModule != pManualLoadList; pModule = pModule->pNext) {
    if (pModule->baseAddress == baseAddress) {
      result = query();
      break;
    }
  }

  os::ReleaseReadLock(&detail::g_RuntimeState.lock);
  return result;
}

[[gnu::always_inline]] inline bool Contains(const detail::RoModule* pModule,
  uintptr_t address) {
  return pModule->baseAddress <= address &&
    address < pModule->baseAddress + pModule->size;
}

}

// The node is left linked to itself once out of the list.
void UnregisterModuleInfo(RegistrationInfo* pInfo) {
  os::LockMutex(&detail::g_RegistrationList.mutex);
  detail::ListNode* pNode = &pInfo->node;
  if (pNode != &detail::g_RegistrationList.head) {
    detail::ListNode* pSelf = pNode->pPrevious->pNext;
    pNode->pNext->pPrevious = pNode->pPrevious;
    pNode->pPrevious->pNext = pNode->pNext;
    pSelf->pPrevious = pNode;
    pNode->pNext = pSelf;
  }

  os::UnlockMutex(&detail::g_RegistrationList.mutex);
  const Result result = detail::g_RuntimeState.pService->UnregisterModuleInfo(
    0, pInfo->nrrAddress);
  NN_ABORT_UNLESS_RESULT_SUCCESS(result);
  pInfo->state = 0;
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

// Modules loaded at startup are searched first, then the manual ones.
Result LookupModuleSymbol(uintptr_t* pOutAddress, uintptr_t baseAddress,
  const char* pName) {
  detail::RoModule* pAutoLoadList = detail::g_pAutoLoadList;
  if (pAutoLoadList == nullptr) {
    if (detail::g_SelfModule.baseAddress != baseAddress) {
      return ResultNotFound;
    }

    const detail::Elf64Symbol* pSymbol =
      detail::LookupModuleSymbolImpl(&detail::g_SelfModule, pName);
    if (pSymbol == nullptr) {
      return ResultNotFound;
    }

    *pOutAddress = pSymbol->value + baseAddress;
    return {0};
  }

  for (detail::RoModule* pModule = pAutoLoadList->pNext;
    pModule != pAutoLoadList; pModule = pModule->pNext) {
    if (pModule->baseAddress == baseAddress) {
      const detail::Elf64Symbol* pSymbol =
        detail::LookupModuleSymbolImpl(pModule, pName);
      if (pSymbol == nullptr) {
        return ResultNotFound;
      }

      *pOutAddress = pSymbol->value + baseAddress;
      return {0};
    }
  }

  if (!IsRuntimeInitialized()) {
    return ResultNotFound;
  }

  os::AcquireReadLock(&detail::g_RuntimeState.lock);
  Result result = ResultNotFound;
  detail::RoModule* pManualLoadList = detail::g_pManualLoadList;
  for (detail::RoModule* pModule = pManualLoadList->pNext;
    pModule != pManualLoadList; pModule = pModule->pNext) {
    if (pModule->baseAddress == baseAddress) {
      const detail::Elf64Symbol* pSymbol =
        detail::LookupModuleSymbolImpl(pModule, pName);
      if (pSymbol != nullptr) {
        *pOutAddress = pSymbol->value + baseAddress;
        result = {0};
      }

      break;
    }
  }

  os::ReleaseReadLock(&detail::g_RuntimeState.lock);
  return result;
}

bool GetModuleAddressRange(uintptr_t* pOutAddress, size_t* pOutSize,
  uintptr_t address) {
  detail::RoModule* pAutoLoadList = detail::g_pAutoLoadList;
  if (pAutoLoadList == nullptr) {
    if (!Contains(&detail::g_SelfModule, address)) {
      return false;
    }

    *pOutAddress = detail::g_SelfModule.baseAddress;
    *pOutSize = detail::g_SelfModule.size;
    return true;
  }

  for (detail::RoModule* pModule = pAutoLoadList->pNext;
    pModule != pAutoLoadList; pModule = pModule->pNext) {
    if (Contains(pModule, address)) {
      *pOutAddress = pModule->baseAddress;
      *pOutSize = pModule->size;
      return true;
    }
  }

  if (!IsRuntimeInitialized()) {
    return false;
  }

  os::AcquireReadLock(&detail::g_RuntimeState.lock);
  bool isFound = false;
  detail::RoModule* pManualLoadList = detail::g_pManualLoadList;
  for (detail::RoModule* pModule = pManualLoadList->pNext;
    pModule != pManualLoadList; pModule = pModule->pNext) {
    if (Contains(pModule, address)) {
      *pOutAddress = pModule->baseAddress;
      *pOutSize = pModule->size;
      isFound = true;
      break;
    }
  }

  os::ReleaseReadLock(&detail::g_RuntimeState.lock);
  return isFound;
}

Result GetModuleId(ModuleId* pOutModuleId, uintptr_t baseAddress) {
  return QueryLoadedModule(baseAddress, ResultModuleNotLoaded, [&] {
    return detail::GetModuleIdImpl(pOutModuleId, baseAddress);
  });
}

Result GetModuleNamePointer(const char** ppOutName, size_t* pOutLength,
  uintptr_t baseAddress) {
  return QueryLoadedModule(baseAddress, ResultModuleNotLoaded, [&] {
    return detail::GetModuleNamePointerImpl(ppOutName, pOutLength,
      baseAddress);
  });
}

// The closest symbol at or below the address, inside its module.
Result GetUpperBoundSymbol(uintptr_t* pOutAddress, size_t* pOutSize,
  char* pOutName, size_t nameSize, uintptr_t address) {
  const auto query = [&](const detail::RoModule* pModule) {
    return detail::GetUpperBoundSymbolImpl(pOutAddress, pOutSize, pOutName,
      pModule->baseAddress, nameSize, address);
  };

  detail::RoModule* pAutoLoadList = detail::g_pAutoLoadList;
  if (pAutoLoadList == nullptr) {
    if (!Contains(&detail::g_SelfModule, address)) {
      return ResultNotFound;
    }

    return query(&detail::g_SelfModule);
  }

  for (detail::RoModule* pModule = pAutoLoadList->pNext;
    pModule != pAutoLoadList; pModule = pModule->pNext) {
    if (Contains(pModule, address)) {
      return query(pModule);
    }
  }

  if (!IsRuntimeInitialized()) {
    return ResultNotFound;
  }

  os::AcquireReadLock(&detail::g_RuntimeState.lock);
  Result result = ResultNotFound;
  detail::RoModule* pManualLoadList = detail::g_pManualLoadList;
  for (detail::RoModule* pModule = pManualLoadList->pNext;
    pModule != pManualLoadList; pModule = pModule->pNext) {
    if (Contains(pModule, address)) {
      result = query(pModule);
      break;
    }
  }

  os::ReleaseReadLock(&detail::g_RuntimeState.lock);
  return result;
}

// A name too long for the buffer is cut and reported as truncated.
Result GetModuleName(char* pOutName, size_t size, uintptr_t baseAddress) {
  return QueryLoadedModule(baseAddress, ResultModuleNotLoaded, [&] {
    const char* pName = nullptr;
    size_t length = 0;
    const Result result =
      detail::GetModuleNamePointerImpl(&pName, &length, baseAddress);
    if (result.IsFailure() || length == 0) {
      pOutName[0] = '\0';
      return result;
    }

    if (size > length) {
      memcpy(pOutName, pName, length);
      pOutName[length] = '\0';
      return Result{0};
    }

    memcpy(pOutName, pName, size - 1);
    pOutName[size - 1] = '\0';
    return ResultNameTruncated;
  });
}

// The module header points at the dynamic section relative to itself.
uintptr_t FindDynamicSegment(uintptr_t baseAddress) {
  return QueryLoadedModule(baseAddress, uintptr_t(0), [&]() -> uintptr_t {
    const rocrt::ModuleHeader* pHeader = nullptr;
    detail::ModuleVersion version = {};
    if (!detail::FindModuleHeader<&svc::aarch64::lp64::QueryMemory>(&pHeader,
      &version, baseAddress)) {
      return 0;
    }

    return reinterpret_cast<uintptr_t>(pHeader) + pHeader->dynamicOffset;
  });
}

void ProtectFullRelroForAllModules() {
  os::AcquireReadLock(&detail::g_RuntimeState.lock);
  detail::RoModule* pAutoLoadList = detail::g_pAutoLoadList;
  for (detail::RoModule* pModule = pAutoLoadList->pNext;
    pModule != pAutoLoadList; pModule = pModule->pNext) {
    detail::ProtectFullRelro(pModule);
  }

  detail::RoModule* pManualLoadList = detail::g_pManualLoadList;
  for (detail::RoModule* pModule = pManualLoadList->pNext;
    pModule != pManualLoadList; pModule = pModule->pNext) {
    detail::ProtectFullRelro(pModule);
  }

  os::ReleaseReadLock(&detail::g_RuntimeState.lock);
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
