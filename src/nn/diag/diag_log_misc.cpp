#include <stdarg.h>
#include <stddef.h>
#include <stdint.h>
#include <string.h>

#include "nn/diag/detail/diag_module_parser.hpp"
#include "nn/result.hpp"

namespace nn::os {

struct FiberType;

}

namespace nn::svc {

[[gnu::visibility("hidden")]] Result Break(uint32_t reason, uintptr_t argument,
  size_t size);
[[gnu::visibility("hidden")]] void SynchronizePreemptionState();

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
  bool isRegistered;
  void* pArgument;
};

struct ModuleInfo;

void PrintModules();
void PrintBacktraceItem(uintptr_t address, bool isEnabled);
uintptr_t GetModulePath(char* pOutPath, size_t size, uintptr_t address);
bool GetReadOnlyDataSectionRange(uintptr_t* pOutAddress, size_t* pOutSize,
  uintptr_t address);
bool IsSystemSymbol(uintptr_t address);
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
  void Initialize(uintptr_t framePointer, uintptr_t stackPointer,
    uintptr_t returnAddress);
  void Initialize(const os::FiberType* pFiber);
  uintptr_t GetStackPointer() const;
  uintptr_t GetReturnAddress() const;
  void SetStackInfo(uintptr_t framePointer, uintptr_t stackPointer);

 private:
  uint8_t m_Reserved[0x28];
  const uintptr_t* m_pContext;
  uint8_t m_Reserved30[0x10];
  uintptr_t m_StackRange[2];
  uintptr_t m_FramePointer;
  uint8_t m_Reserved58[8];
  uintptr_t m_ReturnAddress;
};

}

void InitializeLogObserverHolder(LogObserverHolder* pHolder,
  LogObserver observer, void* pArgument) {
  pHolder->observer = observer;
  pHolder->pNext = nullptr;
  pHolder->isRegistered = false;
  pHolder->pArgument = pArgument;
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

bool IsSystemSymbol(uintptr_t address) {
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

}

void PrintModules() {
  detail::ModuleParser parser;
  while (parser.MoveNext(nullptr, 0)) {
    parser.GetInfo();
  }
}

void PrintBacktraceItem(uintptr_t address, bool isEnabled) {
  LookUpBacktraceItem(address, isEnabled);
}

namespace detail {

void PrintBacktraceItemImpl(uintptr_t address, bool isEnabled) {
  LookUpBacktraceItem(address, isEnabled);
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

void Backtrace::Initialize(uintptr_t framePointer, uintptr_t stackPointer,
  uintptr_t returnAddress) {
  m_ReturnAddress = returnAddress;
  SetStackInfo(framePointer, stackPointer);
}

// The fiber keeps its context behind a pointer, the frame pointer and the
// return address saved in it.
void Backtrace::Initialize(const os::FiberType* pFiber) {
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

uintptr_t Backtrace::GetReturnAddress() const {
  return m_ReturnAddress;
}

}

}

extern "C" void nndiagStartup() {
  nn::lm::Initialize();
}
