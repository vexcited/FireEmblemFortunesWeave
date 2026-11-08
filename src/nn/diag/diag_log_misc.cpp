#include <stdarg.h>
#include <stddef.h>
#include <stdint.h>
#include <string.h>

#include "libc/cxx_guard.hpp"
#include "nn/diag/detail/diag_module_parser.hpp"
#include "nn/os/reader_writer_lock.hpp"
#include "nn/result.hpp"
#include "nn/svc/svc_api.hpp"
#include "rtld/crt_registration.hpp"

namespace nn::os {

struct FiberType;
struct ThreadType;

FiberType* GetCurrentFiber();
ThreadType* GetCurrentThread();
void GetThreadStackInfo(uintptr_t* pOutAddress, size_t* pOutSize,
  const ThreadType* pThread);
void GetCurrentStackInfo(uintptr_t* pOutAddress, size_t* pOutSize);

}

namespace nn::svc {

[[gnu::visibility("hidden")]] Result Break(uint32_t reason, uintptr_t argument,
  size_t size);
[[gnu::visibility("hidden")]] void SynchronizePreemptionState();
[[gnu::visibility("hidden")]] Result GetInfo(uint64_t* pOutValue,
  uint32_t infoType, uint32_t handle, uint64_t subType);

}

namespace nn::util {

void VFormatString(void (*output)(uintptr_t argument, const char* string,
  int length), uintptr_t argument, const char* format, va_list arguments);

}

namespace nn::lm {

void Initialize();

}

namespace nn::ro {

Result GetUpperBoundSymbol(uintptr_t* pOutAddress, uintptr_t* pOutSize,
  char* pOutName, size_t nameSize, uintptr_t address);

}

namespace nn::diag {

struct LogMetaData;

struct LogBody {
  const char* pText;
  size_t length;
  bool isHead;
  bool isTail;
};

using LogObserver = void (*)(const LogMetaData& metaData, const LogBody& body,
  void* pArgument);

struct LogObserverHolder {
  LogObserver observer;
  LogObserverHolder* pNext;
  uint8_t isRegistered;
  void* pArgument;
};

void RegisterLogObserver(LogObserverHolder* pHolder);
void UnregisterLogObserver(LogObserverHolder* pHolder);
void EnableDefaultLogObserver(bool isEnabled);

struct ModuleInfo;

void PrintModules();
void PrintBacktraceItem(uintptr_t address, bool isEnabled);
uintptr_t GetModulePath(char* pOutPath, size_t size, uintptr_t address);
bool GetReadOnlyDataSectionRange(uintptr_t* pOutAddress, size_t* pOutSize,
  uintptr_t address);
bool IsSystemSymbol(uintptr_t address);
int GetBacktrace(uintptr_t* pOutArray, int arrayCountMax);
uintptr_t GetSymbolName(char* pOutName, size_t size, uintptr_t address);
size_t GetSymbolSize(uintptr_t address);

void InitializeLogObserverHolder(LogObserverHolder* pHolder,
  LogObserver observer, void* pArgument);
int GetAllModuleInfo(ModuleInfo** ppOutInfos, void* pBuffer,
  size_t bufferSize);
size_t GetRequiredBufferSizeForGetAllModuleInfo();

namespace detail {

void CallAllLogObserver(const LogMetaData& metaData, const LogBody& body);
void PutImpl(const LogMetaData& metaData, const char* pText, size_t length);
void PrintDebugString(const char* pText, size_t length);
void PrintDebugString(const char* pText);
void PrintBacktraceItemImpl(uintptr_t address, bool isEnabled);
uintptr_t GetModulePathImpl(char* pOutPath, size_t size, uintptr_t address);
bool GetReadOnlyDataSectionRangeImpl(uintptr_t* pOutAddress,
  size_t* pOutSize, uintptr_t address);
bool IsSystemSymbolImpl(uintptr_t address);
uintptr_t GetSymbolNameImpl(char* pOutName, size_t size, uintptr_t address);
size_t GetSymbolSizeImpl(uintptr_t address);
[[noreturn]] void Abort(const Result* pResult);
void PrepareAbort();
int GetAllModuleInfoImpl(size_t* pOutSize, void* pBuffer, size_t bufferSize,
  bool isSizeQuery);

struct LogObserverManager {
  LogObserverHolder* pHead;
  LogObserverHolder** ppTail;
  os::ReaderWriterLockType lock;
};

void PrintDebugStringLogObserver(const LogMetaData& metaData,
  const LogBody& body, void* pArgument);
void ResetDefaultLogObserver();
LogObserver ReplaceDefaultLogObserver(LogObserver observer);
void DestroyAbortObserverManager(void* pManager);

// Builds the manager and registers the default observer, out of line in the
// original.
[[gnu::visibility("hidden")]] void ConstructLogObserverManager();

// The guard, the default holder and the manager sit next to each other and
// the original addresses them through one base.
struct LogObserverState {
  uint64_t guard;
  LogObserverHolder defaultHolder;
  LogObserverManager manager;
};

[[gnu::visibility("hidden")]] extern LogObserverState g_LogObserverState;
[[gnu::visibility("hidden")]] extern unsigned char g_SdkCrtHandle[];

// Formatted text gathers in a small buffer, each flush sends one piece and
// clears isHead.
struct LogBuffer {
  char* pBegin;
  char* pEnd;
  char* pCurrent;
  uint64_t reserved;
  const LogMetaData* pMetaData;
  bool isHead;
};

[[gnu::visibility("hidden")]] void FlushLogBuffer(uintptr_t argument,
  const char* string, int length);

// Walks the frame chain from the saved frame pointer, or from the context
// when no frame pointer was given.
class Backtrace {
 public:
  Backtrace();

  void Initialize();
  void Initialize(uintptr_t framePointer, uintptr_t stackPointer,
    uintptr_t returnAddress);
  void Initialize(const os::FiberType* pFiber);
  bool Step();
  uintptr_t GetStackPointer() const;
  uintptr_t GetReturnAddress() const;
  void SetStackInfo(uintptr_t framePointer, uintptr_t stackPointer);

 private:
  svc::MemoryInfo* GetMemoryInfo();

  svc::MemoryInfo m_MemoryInfo;
  const uintptr_t* m_pContext;
  uintptr_t m_ExceptionStackRange[2];
  uintptr_t m_StackRange[2];
  uintptr_t m_FramePointer;
  uintptr_t m_PreviousFramePointer;
  uintptr_t m_ReturnAddress;
};

[[noreturn]] void AbortImpl(const Result* pResult);

extern uintptr_t g_AbortImplReturnAddress;

}

class Backtrace {
 public:
  Backtrace();
  Backtrace(uintptr_t framePointer, uintptr_t stackPointer,
    uintptr_t returnAddress);
  explicit Backtrace(const os::FiberType* pFiber);

  bool Step();
  uintptr_t GetReturnAddress() const;

 private:
  detail::Backtrace m_Impl;
};

namespace detail {

size_t GetAllBacktrace(uintptr_t* pOutArray, size_t arrayCountMax,
  diag::Backtrace* pBacktrace);

}

void InitializeLogObserverHolder(LogObserverHolder* pHolder,
  LogObserver observer, void* pArgument) {
  pHolder->observer = observer;
  pHolder->pNext = nullptr;
  pHolder->isRegistered = 0;
  pHolder->pArgument = pArgument;
}

namespace {

[[gnu::always_inline]] inline detail::LogObserverManager* GetManager() {
  auto* pInitialized =
    reinterpret_cast<uint8_t*>(&detail::g_LogObserverState.guard);
  if (!(__atomic_load_n(pInitialized, __ATOMIC_ACQUIRE) & 1) &&
    __cxa_guard_acquire(&detail::g_LogObserverState.guard)) {
    detail::ConstructLogObserverManager();
    fw::rtld::RegisterCrtDestructor(detail::DestroyAbortObserverManager,
      &detail::g_LogObserverState.manager,
      reinterpret_cast<uintptr_t>(detail::g_SdkCrtHandle));
    __cxa_guard_release(&detail::g_LogObserverState.guard);
  }

  return &detail::g_LogObserverState.manager;
}

[[gnu::always_inline]] inline void Register(LogObserverHolder* pHolder) {
  detail::LogObserverManager* pManager = GetManager();
  os::AcquireWriteLock(&pManager->lock);
  *pManager->ppTail = pHolder;
  pManager->ppTail = &pHolder->pNext;
  pHolder->pNext = nullptr;
  pHolder->isRegistered = 1;
  os::ReleaseWriteLock(&pManager->lock);
}

}

void RegisterLogObserver(LogObserverHolder* pHolder) {
  Register(pHolder);
}

[[gnu::noinline]] void UnregisterLogObserver(LogObserverHolder* pHolder) {
  detail::LogObserverManager* pManager = GetManager();
  os::AcquireWriteLock(&pManager->lock);
  if (pManager->pHead == pHolder) {
    pManager->pHead = pHolder->pNext;
    if (pManager->ppTail == &pHolder->pNext) {
      pManager->ppTail = &pManager->pHead;
    }
  }
  else {
    for (LogObserverHolder* pPrevious = pManager->pHead;
      pPrevious != nullptr; pPrevious = pPrevious->pNext) {
      if (pPrevious->pNext == pHolder) {
        pPrevious->pNext = pHolder->pNext;
        if (pManager->ppTail == &pHolder->pNext) {
          pManager->ppTail = &pPrevious->pNext;
        }

        break;
      }
    }
  }

  pHolder->isRegistered = 0;
  os::ReleaseWriteLock(&pManager->lock);
}

void EnableDefaultLogObserver(bool isEnabled) {
  LogObserverHolder* pHolder = &detail::g_LogObserverState.defaultHolder;
  if (isEnabled) {
    if (pHolder->isRegistered & 1) {
      return;
    }

    Register(pHolder);
    return;
  }

  if (pHolder->isRegistered == 0) {
    return;
  }

  UnregisterLogObserver(pHolder);
}

uintptr_t GetModulePath(char* pOutPath, size_t size, uintptr_t address) {
  return detail::GetModulePathImpl(pOutPath, size, address);
}

int GetAllModuleInfo(ModuleInfo** ppOutInfos, void* pBuffer,
  size_t bufferSize) {
  *ppOutInfos = static_cast<ModuleInfo*>(pBuffer);
  size_t size = 0;
  return detail::GetAllModuleInfoImpl(&size, pBuffer, bufferSize, false);
}

size_t GetRequiredBufferSizeForGetAllModuleInfo() {
  size_t size = 0;
  if (detail::GetAllModuleInfoImpl(&size, nullptr, 0, true) == 0) {
    return 0;
  }
  return size;
}

bool GetReadOnlyDataSectionRange(uintptr_t* pOutAddress, size_t* pOutSize,
  uintptr_t address) {
  return detail::GetReadOnlyDataSectionRangeImpl(pOutAddress, pOutSize,
    address);
}

[[gnu::noinline]] bool IsSystemSymbol(uintptr_t address) {
  return detail::IsSystemSymbolImpl(address);
}

uintptr_t GetSymbolName(char* pOutName, size_t size, uintptr_t address) {
  return detail::GetSymbolNameImpl(pOutName, size, address);
}

size_t GetSymbolSize(uintptr_t address) {
  return detail::GetSymbolSizeImpl(address);
}

namespace detail {

// The kernel takes the result as the break argument.
void Abort(const Result* pResult) {
  svc::Break(0, reinterpret_cast<uintptr_t>(pResult), sizeof(*pResult));
  for (;;) {
  }
}

// Clears the thread's disable count and gives back a pending preemption.
void PrepareAbort() {
  uint8_t* pTls;
  asm volatile("mrs %0, tpidrro_el0" : "=r"(pTls));
  *reinterpret_cast<volatile uint16_t*>(pTls + 0x100) = 0;
  asm volatile("mrs %0, tpidrro_el0" : "=r"(pTls));
  if (*reinterpret_cast<volatile uint16_t*>(pTls + 0x102) != 0) {
    svc::SynchronizePreemptionState();
  }
}

}

namespace {

constexpr size_t SymbolNameSize = 0x100;
constexpr int DumpBacktraceCount = 32;

// Release builds only look the symbol up, nothing is printed.
[[gnu::always_inline]] void LookUpBacktraceItem(uintptr_t address,
  bool isEnabled) {
  if (!isEnabled) {
    return;
  }
  uintptr_t symbolSize = 0;
  uintptr_t symbolAddress = 0;
  char name[SymbolNameSize] = {};
  ro::GetUpperBoundSymbol(&symbolSize, &symbolAddress, name, sizeof(name),
    address - 1);
}

[[gnu::always_inline]] inline void WalkModules() {
  detail::ModuleParser parser;
  while (parser.MoveNext(nullptr, 0)) {
    parser.GetInfo();
  }
}

}

void PrintModules() {
  WalkModules();
}

void PrintBacktraceItem(uintptr_t address, bool isEnabled) {
  LookUpBacktraceItem(address, isEnabled);
}

namespace detail {

void PrintBacktraceItemImpl(uintptr_t address, bool isEnabled) {
  LookUpBacktraceItem(address, isEnabled);
}

// User frames are shown with the system frame right before each of them.
void TentativeDumpStackTrace() {
  uintptr_t addresses[DumpBacktraceCount] = {};
  const int count = GetBacktrace(addresses, DumpBacktraceCount);
  if (count > 0) {
    bool isUser = !IsSystemSymbol(addresses[0]);
    for (int i = 0; i < count; i++) {
      const bool isNextUser =
        i + 1 < count ? !IsSystemSymbol(addresses[i + 1]) : false;
      LookUpBacktraceItem(addresses[i], isUser || isNextUser);
      isUser = isNextUser;
    }
  }

  WalkModules();
}

namespace {

constexpr size_t LogBufferSize = 0x80;

[[gnu::always_inline]] inline void VLog(const LogMetaData& metaData,
  const char* format, va_list arguments) {
  char buffer[LogBufferSize] = {};
  LogBuffer state = {buffer, buffer + LogBufferSize - 1, buffer, 0,
    &metaData, true};

  util::VFormatString(FlushLogBuffer, reinterpret_cast<uintptr_t>(&state),
    format, arguments);
  *state.pCurrent = '\0';

  const LogBody body = {state.pBegin,
    static_cast<size_t>(static_cast<int>(state.pCurrent - state.pBegin)),
    state.isHead, true};
  CallAllLogObserver(*state.pMetaData, body);
}

}

[[gnu::noinline]] void CallAllLogObserver(const LogMetaData& metaData,
  const LogBody& body) {
  LogObserverManager* pManager = GetManager();
  os::AcquireReadLock(&pManager->lock);
  for (LogObserverHolder* pHolder = pManager->pHead; pHolder != nullptr;
    pHolder = pHolder->pNext) {
    pHolder->observer(metaData, body, pHolder->pArgument);
  }

  os::ReleaseReadLock(&pManager->lock);
}

void ResetDefaultLogObserver() {
  LogObserverHolder* pHolder = &g_LogObserverState.defaultHolder;
  UnregisterLogObserver(pHolder);
  pHolder->observer = PrintDebugStringLogObserver;
  pHolder->pNext = nullptr;
  pHolder->isRegistered = 0;
  pHolder->pArgument = nullptr;
  Register(pHolder);
}

LogObserver ReplaceDefaultLogObserver(LogObserver observer) {
  LogObserverHolder* pHolder = &g_LogObserverState.defaultHolder;
  const LogObserver previous = pHolder->observer;
  UnregisterLogObserver(pHolder);
  pHolder->observer = observer;
  pHolder->pNext = nullptr;
  pHolder->isRegistered = 0;
  pHolder->pArgument = nullptr;
  Register(pHolder);
  return previous;
}

void VLogImpl(const LogMetaData& metaData, const char* format,
  va_list arguments) {
  VLog(metaData, format, arguments);
}

void LogImpl(const LogMetaData& metaData, const char* format, ...) {
  va_list arguments;
  va_start(arguments, format);
  VLog(metaData, format, arguments);
  va_end(arguments);
}

// A single piece is both the head and the tail of its message.
void PutImpl(const LogMetaData& metaData, const char* pText, size_t length) {
  const LogBody body = {pText, length, true, true};
  CallAllLogObserver(metaData, body);
}

void PrintDebugString(const char* pText) {
  PrintDebugString(pText, strlen(pText));
}

// The original keeps these helpers out of line.
[[gnu::noinline, clang::optnone]] Backtrace::Backtrace() {
  m_MemoryInfo = {};
  m_pContext = nullptr;
  m_ExceptionStackRange[0] = 0;
  m_ExceptionStackRange[1] = 0;
  m_StackRange[0] = 0;
  m_StackRange[1] = 0;
  m_FramePointer = 0;
  m_PreviousFramePointer = 0;
  m_ReturnAddress = 0;
}

[[gnu::noinline, clang::optnone]] svc::MemoryInfo* Backtrace::GetMemoryInfo() {
  return &m_MemoryInfo;
}

[[gnu::noinline, clang::optnone]] uintptr_t ReadPointer(uintptr_t address) {
  if (address == 0 || (address & 7) != 0) {
    return 0;
  }

  return *reinterpret_cast<const uintptr_t*>(address);
}

// The cached region is queried again only when the address leaves it.
[[gnu::noinline, clang::optnone]] bool IsValidCodeAddress(uintptr_t address,
  svc::MemoryInfo* pInfo) {
  if (address < pInfo->baseAddress ||
    address >= pInfo->baseAddress + pInfo->size) {
    uint32_t pageInfo;
    if (svc::QueryMemory(pInfo, &pageInfo, address).IsFailure()) {
      return false;
    }
  }

  if (address == 0 || (address & 3) != 0) {
    return false;
  }

  return (pInfo->permission & 4) != 0;
}

[[gnu::noinline, clang::optnone]] void GetCurrentStackRange(
  uintptr_t* pOutRange) {
  const os::FiberType* pFiber = os::GetCurrentFiber();
  if (pFiber != nullptr) {
    const uint8_t* pBytes = reinterpret_cast<const uint8_t*>(pFiber);
    const uintptr_t address =
      *reinterpret_cast<const uintptr_t*>(pBytes + 0x40);
    pOutRange[0] = address;
    pOutRange[1] = address + *reinterpret_cast<const size_t*>(pBytes + 0x48);
    return;
  }

  uintptr_t address = 0;
  size_t size = 0;
  os::GetThreadStackInfo(&address, &size, os::GetCurrentThread());
  pOutRange[0] = address;
  pOutRange[1] = address + size;
}

// Only a stack other than the thread's own, holding the stack pointer, is
// an exception stack.
[[gnu::noinline, clang::optnone]] bool GetExceptionStackRange(
  uintptr_t* pOutRange, uintptr_t stackPointer) {
  uintptr_t address = 0;
  size_t size = 0;
  os::GetCurrentStackInfo(&address, &size);

  uintptr_t threadAddress = 0;
  size_t threadSize = 0;
  os::GetThreadStackInfo(&threadAddress, &threadSize, os::GetCurrentThread());
  if (address == threadAddress) {
    return false;
  }

  const uintptr_t end = address + size;
  if (address > stackPointer || stackPointer >= end) {
    return false;
  }

  pOutRange[0] = address;
  pOutRange[1] = end;
  return true;
}

[[gnu::noinline]] void Backtrace::SetStackInfo(uintptr_t framePointer,
  uintptr_t stackPointer) {
  GetCurrentStackRange(m_StackRange);

  uintptr_t range[2] = {};
  if (GetExceptionStackRange(range, stackPointer)) {
    m_ExceptionStackRange[0] = range[0];
    m_ExceptionStackRange[1] = range[1];
    m_pContext = m_ExceptionStackRange;
  }
  else {
    m_pContext = m_StackRange;
  }

  m_FramePointer = framePointer;
}

// Each frame record holds the caller's frame pointer and the signed return
// address, frames only move up the stack.
[[gnu::noinline]] bool Backtrace::Step() {
  if (m_FramePointer == 0 || (m_FramePointer & 7) != 0) {
    return false;
  }

  if (m_pContext[0] <= m_FramePointer && m_FramePointer < m_pContext[1]) {
    if (m_FramePointer <= m_PreviousFramePointer) {
      return false;
    }
  }
  else if (m_pContext == m_ExceptionStackRange &&
    m_StackRange[0] <= m_FramePointer && m_FramePointer < m_StackRange[1]) {
    m_pContext = m_StackRange;
  }
  else {
    return false;
  }

  m_PreviousFramePointer = m_FramePointer;
  m_ReturnAddress = ReadPointer(m_FramePointer + 8);
  m_FramePointer = ReadPointer(m_FramePointer);
  asm(".arch_extension pauth\n\txpaci %0" : "+r"(m_ReturnAddress));
  if (!IsValidCodeAddress(m_ReturnAddress, GetMemoryInfo())) {
    m_ReturnAddress = 0;
    return false;
  }

  return true;
}

// The frames below the abort handler are dropped.
[[gnu::noinline]] size_t GetAllBacktrace(uintptr_t* pOutArray,
  size_t arrayCountMax, diag::Backtrace* pBacktrace) {
  size_t count = 0;
  while (count < arrayCountMax) {
    if (pBacktrace->GetReturnAddress() == g_AbortImplReturnAddress) {
      count = 0;
    }

    pOutArray[count++] = pBacktrace->GetReturnAddress();
    if (!pBacktrace->Step()) {
      break;
    }
  }

  return count;
}

[[gnu::noinline]] void Backtrace::Initialize(uintptr_t framePointer,
  uintptr_t stackPointer, uintptr_t returnAddress) {
  m_ReturnAddress = returnAddress;
  SetStackInfo(framePointer, stackPointer);
}

// The fiber keeps its context behind a pointer, the frame pointer and the
// return address saved in it.
[[gnu::noinline]] void Backtrace::Initialize(
  const os::FiberType* pFiber) {
  const uint8_t* pBytes = reinterpret_cast<const uint8_t*>(pFiber);
  const uintptr_t* pContext =
    *reinterpret_cast<const uintptr_t* const*>(pBytes + 0x50);
  m_FramePointer = pContext[11];
  m_ReturnAddress = pContext[12];
  m_StackRange[0] = *reinterpret_cast<const uintptr_t*>(pBytes + 0x40);
  m_StackRange[1] = m_StackRange[0] +
    *reinterpret_cast<const uintptr_t*>(pBytes + 0x48);
  m_pContext = m_StackRange;
}

uintptr_t Backtrace::GetStackPointer() const {
  if (m_FramePointer != 0) {
    return m_FramePointer - sizeof(uintptr_t);
  }
  return m_pContext[1] - sizeof(uintptr_t);
}

[[gnu::noinline]] uintptr_t Backtrace::GetReturnAddress() const {
  return m_ReturnAddress;
}

}

}

namespace nn::diag {

[[gnu::noinline]] Backtrace::Backtrace() {
  m_Impl.Initialize();
  m_Impl.Step();
}

[[gnu::noinline, clang::optnone]] Backtrace::Backtrace(uintptr_t framePointer,
  uintptr_t stackPointer, uintptr_t returnAddress) {
  m_Impl.Initialize(framePointer, stackPointer, returnAddress);
}

[[gnu::noinline, clang::optnone]] Backtrace::Backtrace(
  const os::FiberType* pFiber) {
  m_Impl.Initialize(pFiber);
}

[[gnu::noinline, clang::optnone]] bool Backtrace::Step() {
  return m_Impl.Step();
}

[[gnu::noinline, clang::optnone]] uintptr_t
  Backtrace::GetReturnAddress() const {
  return m_Impl.GetReturnAddress();
}

[[gnu::noinline]] int GetBacktrace(uintptr_t* pOutArray, int arrayCountMax) {
  Backtrace backtrace;
  backtrace.Step();
  return detail::GetAllBacktrace(pOutArray, arrayCountMax, &backtrace);
}

size_t GetBacktrace(uintptr_t* pOutArray, size_t arrayCountMax) {
  Backtrace backtrace;
  backtrace.Step();
  return detail::GetAllBacktrace(pOutArray, arrayCountMax, &backtrace);
}

int GetBacktrace(uintptr_t* pOutArray, int arrayCountMax,
  uintptr_t framePointer, uintptr_t stackPointer, uintptr_t returnAddress) {
  Backtrace backtrace(framePointer, stackPointer, returnAddress);
  return detail::GetAllBacktrace(pOutArray, arrayCountMax, &backtrace);
}

int GetBacktrace(uintptr_t* pOutArray, int arrayCountMax,
  const os::FiberType* pFiber) {
  Backtrace backtrace(pFiber);
  return detail::GetAllBacktrace(pOutArray, arrayCountMax, &backtrace);
}

bool IsDebuggerAttached() {
  uint64_t isAttached = 0;
  const Result result = svc::GetInfo(&isAttached, 8, 0, 0);
  if (result.IsFailure()) {
    detail::AbortImpl(&result);
  }

  return isAttached != 0;
}

}

extern "C" void nndiagStartup() {
  nn::lm::Initialize();
}
