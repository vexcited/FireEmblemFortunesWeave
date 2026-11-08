#include <stdarg.h>
#include <stddef.h>
#include <stdint.h>

#include "nn/os/mutex.hpp"
#include "nn/os/startup_support.hpp"
#include "nn/os/tls.hpp"

namespace nn::diag {

struct SourceInfo {
  int lineNumber;
  const char* fileName;
  const char* functionName;
};

enum LogSeverity : int32_t {
  LogSeverity_Trace,
  LogSeverity_Info,
};

struct LogMetaData {
  SourceInfo sourceInfo;
  const char* moduleName;
  LogSeverity severity;
  int verbosity;
  bool useDefaultLocaleCharset;
  void* pAdditionalData;
  size_t additionalDataBytes;
};

namespace detail {

void VLogImpl(const LogMetaData& metaData, const char* format,
  va_list arguments);
[[noreturn]] void AbortImpl();

}

}

struct NvOsTlsState {
  uint64_t reserved00;
  uint32_t usedMask;
  nn::os::TlsSlot slot;
  uint8_t reserved10[0x48];
  void (*destructors[32])(void*);
};

struct NvOsDrvService {
  const uintptr_t* vtable;
};

struct NvOsDrvPath {
  const char* path;
  size_t length;
};

namespace nv {

void InitCheck();

}

extern "C" {

int vsnprintf(char* buffer, size_t size, const char* format,
  va_list arguments);
size_t strlen(const char* string);
void* memset(void* destination, int value, size_t size);
void NvOsFwrite(void* stream, const void* buffer, int64_t size);
void NvOsHosLog(int line, const char* file, const char* function,
  const char* format, ...);
void NvOsHosSdkLog(const char* module, int line, const char* file,
  const char* function, const char* format, ...);

}

[[gnu::visibility("hidden")]] extern nn::os::MutexType g_NvOsTlsMutex;
[[gnu::visibility("hidden")]] extern NvOsTlsState g_NvOsTls;
[[gnu::visibility("hidden")]] extern NvOsDrvService* g_NvOsDrvService;

[[gnu::visibility("hidden")]] void* NvOsDrvLockFd(int32_t fd);
[[gnu::visibility("hidden")]] void NvOsDrvUnlockFd(void* entry);
[[gnu::visibility("hidden")]] uint32_t NvOsDrvLockPath(const char* path,
  void** pOutEntry);
[[gnu::visibility("hidden")]] void NvOsDrvBindFd(void* entry, int32_t fd);

namespace {

const size_t NvOsPrintBufferSize = 256;
const size_t NvOsLogBufferSize = 1024;
const uint32_t NvOsDrvStatusFatal = 0x1000;

[[gnu::always_inline]] inline void VLog(const char* module,
  nn::diag::LogSeverity severity, int line, const char* file,
  const char* function, const char* format, va_list arguments) {
  nn::diag::LogMetaData metaData = {};
  metaData.sourceInfo.lineNumber = line;
  metaData.sourceInfo.fileName = file;
  metaData.sourceInfo.functionName = function;
  metaData.moduleName = module;
  metaData.severity = severity;
  metaData.useDefaultLocaleCharset = false;
  nn::diag::detail::VLogImpl(metaData, format, arguments);
}

}

extern "C" void NvOsFprintf(void* stream, const char* format, ...) {
  char buffer[NvOsPrintBufferSize] = {};
  va_list arguments;
  va_start(arguments, format);
  const int length = vsnprintf(buffer, sizeof(buffer), format, arguments);
  va_end(arguments);
  NvOsFwrite(stream, buffer, length);
}

extern "C" void NvOsVfprintf(void* stream, const char* format,
  va_list arguments) {
  char buffer[NvOsPrintBufferSize] = {};
  const int length = vsnprintf(buffer, sizeof(buffer), format, arguments);
  NvOsFwrite(stream, buffer, length);
}

extern "C" void NvOsHosVLog(int line, const char* file,
  const char* function, const char* format, va_list arguments) {
  VLog("", nn::diag::LogSeverity_Info, line, file, function, format,
    arguments);
}

extern "C" [[gnu::noinline]] void NvOsHosLog(int line, const char* file,
  const char* function, const char* format, ...) {
  va_list arguments;
  va_start(arguments, format);
  VLog("", nn::diag::LogSeverity_Info, line, file, function, format,
    arguments);
  va_end(arguments);
}

extern "C" int NvOsHosNLog(int line, const char* file, const char* function,
  const char* format, ...) {
  char buffer[NvOsLogBufferSize];
  memset(buffer, 0, sizeof(buffer));

  va_list arguments;
  va_start(arguments, format);
  const int length = vsnprintf(buffer, sizeof(buffer), format, arguments);
  va_end(arguments);

  NvOsHosLog(line, file, function, buffer);
  return length;
}

extern "C" void NvOsHosSdkVLog(const char* module, int line,
  const char* file, const char* function, const char* format,
  va_list arguments) {
  VLog(module, nn::diag::LogSeverity_Trace, line, file, function, format,
    arguments);
}

extern "C" [[gnu::noinline]] void NvOsHosSdkLog(const char* module,
  int line, const char* file, const char* function, const char* format,
  ...) {
  va_list arguments;
  va_start(arguments, format);
  VLog(module, nn::diag::LogSeverity_Trace, line, file, function, format,
    arguments);
  va_end(arguments);
}

extern "C" int NvOsHosSdkNLog(const char* module, int line, const char* file,
  const char* function, const char* format, ...) {
  char buffer[NvOsLogBufferSize];
  memset(buffer, 0, sizeof(buffer));

  va_list arguments;
  va_start(arguments, format);
  const int length = vsnprintf(buffer, sizeof(buffer), format, arguments);
  va_end(arguments);

  NvOsHosSdkLog(module, line, file, function, buffer);
  return length;
}

// The os slot is released with the last NvOs key.
extern "C" void NvOsTlsFree(uint32_t index) {
  nn::os::LockMutex(&g_NvOsTlsMutex);

  g_NvOsTls.usedMask &= ~(1u << index);
  g_NvOsTls.destructors[index] = nullptr;
  if (g_NvOsTls.usedMask == 0) {
    nn::os::FreeTlsSlot(g_NvOsTls.slot);
  }

  nn::os::UnlockMutex(&g_NvOsTlsMutex);
}

// A fatal driver status aborts, the host arguments are only touched first.
[[gnu::always_inline]] inline void CheckDrvStatus(uint32_t status) {
  if (status == NvOsDrvStatusFatal) {
    if (nn::os::GetHostArgc() >= 1) {
      nn::os::GetHostArgv();
    }

    nn::diag::detail::AbortImpl();
  }
}

extern "C" int32_t NvOsDrvOpen(const char* path) {
  int32_t fd = 0;
  const size_t length = strlen(path);
  void* entry = nullptr;
  nv::InitCheck();

  uint32_t status = NvOsDrvLockPath(path, &entry);
  if (status == 0) {
    NvOsDrvPath name = {path, length};
    using Open = uint32_t (*)(NvOsDrvService*, NvOsDrvPath*, int32_t*,
      uint32_t*);
    NvOsDrvService* service = g_NvOsDrvService;
    const uint32_t result = reinterpret_cast<Open>(service->vtable[4])(
      service, &name, &fd, &status);

    CheckDrvStatus(status);
    if ((status | result) == 0) {
      if (entry != nullptr) {
        NvOsDrvBindFd(entry, fd);
      }

      return fd;
    }
  }

  if (entry != nullptr) {
    NvOsDrvUnlockFd(entry);
  }

  return -1;
}

extern "C" void NvOsDrvClose(int32_t fd) {
  uint32_t status = 0;
  void* entry = NvOsDrvLockFd(fd);

  using Close = void (*)(NvOsDrvService*, int32_t, uint32_t*);
  NvOsDrvService* service = g_NvOsDrvService;
  reinterpret_cast<Close>(service->vtable[6])(service, fd, &status);

  CheckDrvStatus(status);

  if (entry != nullptr) {
    NvOsDrvUnlockFd(entry);
  }
}
