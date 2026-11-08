#include <stdarg.h>
#include <stddef.h>
#include <stdint.h>

#include "nn/diag/diag_abort.hpp"
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

struct NvOsDrvBuffer {
  void* data;
  uint64_t size;
};

using NvOsDrvPreHook = uint32_t (*)(void* context, int32_t fd,
  uint32_t request, void* argument, uint64_t size, uint8_t* pProceed);
using NvOsDrvPostHook = uint32_t (*)(void* context, int32_t fd,
  uint32_t request, void* argument, uint64_t size);
using NvOsDrvPreHook2 = uint32_t (*)(void* context, int32_t fd,
  uint32_t request, void* argument, uint64_t size, void* extra,
  uint64_t extraSize, uint8_t* pProceed);
using NvOsDrvPostHook2 = uint32_t (*)(void* context, int32_t fd,
  uint32_t request, void* argument, uint64_t size, void* extra,
  uint64_t extraSize);

// Interposers can watch every ioctl of an fd, a pre hook may also swallow
// the call.
struct NvOsDrvHooks {
  uint8_t reserved[0x20];
  NvOsDrvPreHook preIoctl;
  NvOsDrvPostHook postIoctl;
  NvOsDrvPreHook2 preIoctl2;
  NvOsDrvPostHook2 postIoctl2;
  NvOsDrvPreHook2 preIoctl3;
  NvOsDrvPostHook2 postIoctl3;
};

struct NvOsDrvEntry {
  uint64_t reserved;
  const NvOsDrvHooks* hooks;
  void* context;
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
[[gnu::visibility("hidden")]] extern NvOsDrvService* g_NvOsDrvServices[4];

[[gnu::visibility("hidden")]] NvOsDrvEntry* NvOsDrvFindFd(int32_t fd);
[[gnu::visibility("hidden")]] void NvOsDrvRemoveEntry(NvOsDrvEntry* entry);
[[gnu::visibility("hidden")]] uint32_t NvOsDrvCreateEntry(const char* path,
  NvOsDrvEntry** pOutEntry);
[[gnu::visibility("hidden")]] void NvOsDrvBindFd(NvOsDrvEntry* entry,
  int32_t fd);

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
  NvOsDrvEntry* entry = nullptr;
  nv::InitCheck();

  uint32_t status = NvOsDrvCreateEntry(path, &entry);
  if (status == 0) {
    NvOsDrvPath name = {path, length};
    using Open = uint32_t (*)(NvOsDrvService*, NvOsDrvPath*, int32_t*,
      uint32_t*);
    NvOsDrvService* service = g_NvOsDrvServices[2];
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
    NvOsDrvRemoveEntry(entry);
  }

  return -1;
}

extern "C" void NvOsDrvClose(int32_t fd) {
  uint32_t status = 0;
  NvOsDrvEntry* entry = NvOsDrvFindFd(fd);

  using Close = void (*)(NvOsDrvService*, int32_t, uint32_t*);
  NvOsDrvService* service = g_NvOsDrvServices[2];
  reinterpret_cast<Close>(service->vtable[6])(service, fd, &status);

  CheckDrvStatus(status);

  if (entry != nullptr) {
    NvOsDrvRemoveEntry(entry);
  }
}

// Host1x and gpu control requests go to the second service.
[[gnu::always_inline]] inline NvOsDrvService* SelectDrvService(
  uint32_t request) {
  const uint32_t masked = request & 0xc000ffff;
  if (masked == 0xc0004402 || masked == 0xc000471c || masked == 0xc0004808 ||
    request == 0xc004001c || request == 0xc010001e ||
    request == 0xc018481b || request == 0x400c060e ||
    masked - 0xc0000024 < 3 || request == 0xd278020f) {
    return g_NvOsDrvServices[3];
  }

  return g_NvOsDrvServices[2];
}

// The size bits of the request say how much is copied in and out.
[[gnu::always_inline]] inline uint64_t DrvSize(uint32_t request,
  uint32_t direction) {
  return (request & direction) != 0 ? (request >> 16) & 0x3fff : 0;
}

extern "C" uint32_t NvOsDrvIoctl(int32_t fd, uint32_t request,
  void* argument, uint64_t size) {
  uint32_t status = 0;
  uint8_t proceed = 1;
  NvOsDrvBuffer input = {argument, DrvSize(request, 1u << 30)};
  NvOsDrvBuffer output = {argument, DrvSize(request, 1u << 31)};

  NvOsDrvEntry* entry = NvOsDrvFindFd(fd);
  NvOsDrvPostHook post = nullptr;
  if (entry != nullptr && entry->hooks != nullptr) {
    NvOsDrvPreHook pre = entry->hooks->preIoctl;
    post = entry->hooks->postIoctl;
    if (pre != nullptr) {
      status = pre(entry->context, fd, request, argument, size, &proceed);
      if (status != 0 || proceed == 0) {
        return status;
      }
    }
  }

  using Ioctl = nn::Result (*)(NvOsDrvService*, int32_t, uint32_t,
    NvOsDrvBuffer*, NvOsDrvBuffer*, uint32_t*);
  NvOsDrvService* service = SelectDrvService(request);
  const nn::Result result = reinterpret_cast<Ioctl>(service->vtable[5])(
    service, fd, request, &input, &output, &status);

  CheckDrvStatus(status);
  NN_ABORT_UNLESS_RESULT_SUCCESS(result);

  if (post != nullptr) {
    status = post(entry->context, fd, request, argument, size);
  }

  return status;
}

[[gnu::always_inline]] inline uint32_t DrvIoctlExtra(int32_t fd,
  uint32_t request, void* argument, uint64_t size, void* extra,
  uint64_t extraSize, size_t hookSlot, size_t serviceSlot) {
  uint32_t status = 0;
  NvOsDrvBuffer extraBuffer = {extra, extraSize};
  uint8_t proceed = 1;
  NvOsDrvBuffer input = {argument, DrvSize(request, 1u << 30)};
  NvOsDrvBuffer output = {argument, DrvSize(request, 1u << 31)};

  NvOsDrvEntry* entry = NvOsDrvFindFd(fd);
  NvOsDrvPostHook2 post = nullptr;
  if (entry != nullptr && entry->hooks != nullptr) {
    NvOsDrvPreHook2 pre = hookSlot == 2 ? entry->hooks->preIoctl2 :
      entry->hooks->preIoctl3;
    post = hookSlot == 2 ? entry->hooks->postIoctl2 :
      entry->hooks->postIoctl3;
    if (pre != nullptr) {
      status = pre(entry->context, fd, request, argument, size, extra,
        extraSize, &proceed);
      if (status != 0 || proceed == 0) {
        return status;
      }
    }
  }

  using Ioctl = nn::Result (*)(NvOsDrvService*, int32_t, uint32_t,
    NvOsDrvBuffer*, NvOsDrvBuffer*, NvOsDrvBuffer*, uint32_t*);
  NvOsDrvService* service = SelectDrvService(request);
  const nn::Result result = reinterpret_cast<Ioctl>(
    service->vtable[serviceSlot])(service, fd, request, &input, &output,
    &extraBuffer, &status);

  CheckDrvStatus(status);
  NN_ABORT_UNLESS_RESULT_SUCCESS(result);

  if (post != nullptr) {
    status = post(entry->context, fd, request, argument, size, extra,
      extraSize);
  }

  return status;
}

extern "C" uint32_t NvOsDrvIoctl2(int32_t fd, uint32_t request,
  void* argument, uint64_t size, void* extra, uint64_t extraSize) {
  return DrvIoctlExtra(fd, request, argument, size, extra, extraSize, 2,
    10);
}

extern "C" uint32_t NvOsDrvIoctl3(int32_t fd, uint32_t request,
  void* argument, uint64_t size, void* extra, uint64_t extraSize) {
  return DrvIoctlExtra(fd, request, argument, size, extra, extraSize, 3,
    11);
}
