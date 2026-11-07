#include <stddef.h>
#include <stdint.h>
#include <string.h>

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
int GetAllModuleInfoImpl(size_t* pOutSize, void* pBuffer, size_t bufferSize,
  bool isSizeQuery);

// Walks the frame chain from the saved frame pointer, or from the context
// when no frame pointer was given.
class Backtrace {
 public:
  void Initialize(uintptr_t framePointer, uintptr_t stackPointer,
    uintptr_t returnAddress);
  uintptr_t GetStackPointer() const;
  uintptr_t GetReturnAddress() const;
  void SetStackInfo(uintptr_t framePointer, uintptr_t stackPointer);

 private:
  uint8_t m_Reserved[0x28];
  const uintptr_t* m_pContext;
  uint8_t m_Reserved30[0x20];
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

namespace detail {

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
