#include <stdarg.h>
#include <stddef.h>
#include <stdint.h>

#include "nn/nlibsdk/nlib_globals.hpp"
#include "nn/os/managers.hpp"
#include "nn/os/memory_permission.hpp"
#include "nn/os/memory_queries.hpp"
#include "nn/os/tls.hpp"
#include "nn/os/virtual_address_allocation.hpp"
#include "nn/os/virtual_memory_pages.hpp"
#include "nn/result.hpp"

extern "C" {

void nnmem_nlib_debug_break();
int pthread_once(int* once, void (*function)());
int pthread_mutex_lock(void* mutex);
int pthread_mutex_unlock(void* mutex);
int pthread_join(unsigned long thread, void** pOutValue);

}

namespace nn::os {

Result AllocateTlsSlot(TlsSlot* slot, void (*destructor)(uintptr_t));
Result AllocateMemoryBlock(uintptr_t* pOutAddress, size_t size);
void FreeMemoryBlock(uintptr_t address, size_t size);
void SetMemoryPermission(uintptr_t address, size_t size,
  MemoryPermission permission);

}

namespace nn::nlibsdk {

int WriteLog(int priority, const char* prefix, const char* format,
  va_list arguments);

namespace heap {

void DoubleFreeError(const void*) {
  nnmem_nlib_debug_break();
}

void NotNMallocPtrError(const void*) {
  nnmem_nlib_debug_break();
}

void DataCorruptionError(const void*) {
  nnmem_nlib_debug_break();
}

}
}

namespace {

constexpr int EPerm = 1;
constexpr int ENoEnt = 2;
constexpr int EIo = 5;
constexpr int EBadF = 9;
constexpr int EAgain = 11;
constexpr int ENoMem = 12;
constexpr int EAccess = 13;
constexpr int EFault = 14;
constexpr int EBusy = 16;
constexpr int EExist = 17;
constexpr int EInval = 22;
constexpr int ENFile = 23;
constexpr int EMFile = 24;
constexpr int ENoSpc = 28;
constexpr int ERange = 34;
constexpr int EDeadLock = 35;
constexpr int ENotEmpty = 39;
constexpr int EBadRqc = 56;
constexpr int EOverflow = 75;
constexpr int EOpNotSupp = 95;
constexpr int ETimedOut = 110;
constexpr uintptr_t PageMask = 0xfff;
constexpr uintptr_t BlockMask = 0x1fffff;

// Kept together like the merged globals of the original.
struct {
  uint8_t isVirtualAddressMemoryEnabled;
  int errorSlotOnce;
  int memoryModeOnce;
} g_State;

nn::os::TlsSlot g_ErrorSlot = {0xffffffff};
uint32_t g_ThreadMutex[2] = {1, 0};

void InitializeErrorSlot() {
  nn::os::AllocateTlsSlot(&g_ErrorSlot, nullptr);
}

void InitializeMemoryMode() {
  g_State.isVirtualAddressMemoryEnabled =
    nn::os::IsVirtualAddressMemoryEnabled();
}

bool IsVirtualAddressMemoryEnabled() {
  pthread_once(&g_State.memoryModeOnce, InitializeMemoryMode);
  return g_State.isVirtualAddressMemoryEnabled == 1;
}

int ToErrno(nn::Result result) {
  switch (result.GetInnerValueForDebug()) {
    case 0x803:
      return EAgain;
    case 0xe03:
      return EInval;
    case 0x1203:
      return ENoMem;
    default:
      return EIo;
  }
}

// Read access is needed for any other than write only.
int GetPermission(int protection) {
  return protection & ((protection & 1) != 0 ? 3 : 2);
}

// File system results are 2 in the low 9 bits with the description above.
int ConvertResultToErrno(nn::Result result) {
  uint32_t code = result.GetInnerValueForDebug();
  bool isFileSystem = (result.value & 0x1ff) == 2;
  uint32_t description = (result.value >> 9) & 0x1fff;
  switch (code) {
    case 0x202:
      return ENoEnt;
    case 0x402:
      return EExist;
    case 0x1002:
      return ENotEmpty;
  }
  if (isFileSystem && description - 30 < 16) {
    return ENoSpc;
  }
  switch (code) {
    case 0x7d202:
    case 0x7d402:
      return ENoEnt;
    case 0x6402:
      return EOpNotSupp;
    case 0x7802:
      return EExist;
  }
  if (isFileSystem && description - 2000 < 1000) {
    return EPerm;
  }
  switch (code) {
    case 0x177202:
    case 0x177402:
      return EOpNotSupp;
    case 0x177602:
      return EExist;
    case 0x177a02:
      return ERange;
  }
  if (isFileSystem && description - 3200 < 300) {
    return ENoMem;
  }
  if (isFileSystem && description - 3500 < 500) {
    return EPerm;
  }
  switch (code) {
    case 0x74:
    case 0xe03:
    case 0x2f5a02:
    case 0x2f5c02:
      return EInval;
    case 0x203:
    case 0x274:
      return EPerm;
    case 0x403:
      return EAccess;
    case 0x603:
      return EBadRqc;
    case 0x803:
      return EBusy;
    case 0xa03:
      return EDeadLock;
    case 0xc03:
      return EFault;
    case 0xe02:
      return EAgain;
    case 0x1003:
    case 0x1203:
    case 0x3f403:
    case 0x64274:
      return ENoMem;
    case 0x1403:
      return EOverflow;
    case 0x1603:
      return ETimedOut;
    case 0x1803:
    case 0x1a03:
      return EOpNotSupp;
    case 0x3e803:
      return EMFile;
    case 0x3ea03:
      return EBadF;
    case 0x3f203:
      return ENFile;
    case 0x177802:
      return EExist;
  }
  if (code - 0x3c02 < 16) {
    return ENoSpc;
  }
  return EIo;
}

// One bit per priority level, set through the log attributes.
bool IsLogLevelEnabled(int priority) {
  return ((nn::nlibsdk::detail::g_LogTimerState.logLevelMask >>
    (priority & 7)) & 1) != 0;
}

}

extern "C" {

int nnmem_nlib_get_native_last_error() {
  pthread_once(&g_State.errorSlotOnce, InitializeErrorSlot);
  return static_cast<int>(nn::os::GetTlsValue(g_ErrorSlot));
}

// Threads are joined, after waiting for any thread being created.
int nnmem_nlib_thread_detach(unsigned long thread) {
  pthread_mutex_lock(g_ThreadMutex);
  pthread_mutex_unlock(g_ThreadMutex);
  void* value = nullptr;
  return pthread_join(thread, &value);
}

int nnmem_nlib_log_vprint(int priority, const char* prefix,
  const char* format, va_list arguments) {
  if (!IsLogLevelEnabled(priority)) {
    return 0;
  }
  return nn::nlibsdk::WriteLog(priority, prefix, format, arguments);
}

int nnmem_nlib_log_print(int priority, const char* prefix,
  const char* format, ...) {
  if (!IsLogLevelEnabled(priority)) {
    return 0;
  }
  va_list arguments;
  va_start(arguments, format);
  int result = nn::nlibsdk::WriteLog(priority, prefix, format, arguments);
  va_end(arguments);
  return result;
}

// Without virtual address memory, blocks are freed in 2 MB units.
int nnmem_nlib_virtual_free(void* address, size_t size) {
  if (size == 0) {
    return EInval;
  }
  uintptr_t begin = reinterpret_cast<uintptr_t>(address);
  if (IsVirtualAddressMemoryEnabled()) {
    nn::Result result = nn::os::FreeAddressRegion(begin);
    return result.IsFailure() ? ToErrno(result) : 0;
  }
  nn::os::FreeMemoryBlock(begin, (size + BlockMask) & ~BlockMask);
  return 0;
}

// Pages are committed with virtual address memory, read write pages keep
// their permission. Otherwise only the permission is set.
int nnmem_nlib_physical_alloc(void* address, size_t size, int protection) {
  uintptr_t begin = reinterpret_cast<uintptr_t>(address) & ~PageMask;
  uintptr_t end = (reinterpret_cast<uintptr_t>(address) + size + PageMask) &
    ~PageMask;
  int permission = GetPermission(protection);
  bool isReadWrite = (protection & 3) == 3;
  if (end <= begin) {
    return 0;
  }
  if (IsVirtualAddressMemoryEnabled()) {
    nn::Result result = nn::os::AllocateMemoryPages(begin, end - begin);
    if (result.IsFailure()) {
      switch (result.GetInnerValueForDebug()) {
        case 0xe03:
          return EInval;
        case 0x1003:
        case 0x1203:
          return ENoMem;
        default:
          return EIo;
      }
    }
    if (isReadWrite) {
      return 0;
    }
  }
  nn::os::SetMemoryPermission(begin, end - begin,
    static_cast<nn::os::MemoryPermission>(permission));
  return 0;
}

int nnmem_nlib_physical_free(void* address, size_t size) {
  uintptr_t end = (reinterpret_cast<uintptr_t>(address) + size) & ~PageMask;
  uintptr_t begin = (reinterpret_cast<uintptr_t>(address) + PageMask) &
    ~PageMask;
  if (end <= begin) {
    return 0;
  }
  if (IsVirtualAddressMemoryEnabled()) {
    nn::Result result = nn::os::FreeMemoryPages(begin, end - begin);
    return result.IsFailure() ? ToErrno(result) : 0;
  }
  nn::os::SetMemoryPermission(begin, end - begin,
    nn::os::MemoryPermission_None);
  return 0;
}

// The result of a failed block allocation is kept as the native error.
int nnmem_nlib_virtual_alloc(void** pOutAddress, size_t size) {
  if (static_cast<ptrdiff_t>(size) < 0) {
    return EInval;
  }
  uintptr_t address = 0;
  if (IsVirtualAddressMemoryEnabled()) {
    if (nn::os::AllocateAddressRegion(&address, (size + PageMask) &
      ~PageMask).IsFailure()) {
      return ENoMem;
    }
    *pOutAddress = reinterpret_cast<void*>(address);
    return 0;
  }
  size_t blockSize = (size + BlockMask) & ~BlockMask;
  nn::Result result = nn::os::AllocateMemoryBlock(&address, blockSize);
  if (result.IsFailure()) {
    pthread_once(&g_State.errorSlotOnce, InitializeErrorSlot);
    nn::os::SetTlsValue(g_ErrorSlot, result.GetInnerValueForDebug());
    return ConvertResultToErrno(result);
  }
  nn::os::SetMemoryPermission(address, blockSize,
    nn::os::MemoryPermission_None);
  *pOutAddress = reinterpret_cast<void*>(address);
  return 0;
}

}
