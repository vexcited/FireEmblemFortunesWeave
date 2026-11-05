#include <stdarg.h>
#include <stdlib.h>

#include <atomic>

#include "nn/fs/detail/fs_access_log.hpp"
#include "nn/fs/detail/fs_file_system_proxy_service_object.hpp"
#include "nn/fs/detail/fs_memory.hpp"
#include "nn/os/synchronization.hpp"
#include "nn/util/string_builder.hpp"
#include "nn/util/string_util.hpp"

namespace nn::diag::detail {

[[noreturn]] void AbortImpl();

}

namespace nn::fs {

namespace detail {

// The original shares one unit with IdString and its name tables.
[[gnu::visibility("hidden")]] extern const char* const PriorityNames[];
[[gnu::visibility("hidden")]] extern const char* const PriorityRawNames[];

class StartAccessLogPrinterCallbackHolder {
public:
  StartAccessLogPrinterCallbackHolder() : m_Callback(nullptr) {}

  StartAccessLogPrinterCallback m_Callback;
};

StartAccessLogPrinterCallbackHolder& GetStartAccessLogPrinterCallback() {
  static StartAccessLogPrinterCallbackHolder s_Holder;
  return s_Holder;
}

}

namespace {

using detail::GetStartAccessLogPrinterCallback;

enum AccessLogMode : uint32_t {
  AccessLogMode_None = 0,
  AccessLogMode_Log = 1 << 0,
  AccessLogMode_SdCard = 1 << 1,
};

uint8_t g_IsLocalAccessLogEnabled = false;
std::atomic<bool> g_IsGlobalAccessLogModeInitialized(false);
os::SdkMutexType g_GlobalAccessLogModeMutex = {};
uint32_t g_GlobalAccessLogMode = AccessLogMode_None;
os::SdkMutexType g_AccessLogGeneratedCallbackMutex = {};
AccessLogGeneratedCallback g_AccessLogGeneratedCallback = nullptr;
void* g_AccessLogGeneratedCallbackArgument = nullptr;

[[gnu::noinline]] void OutputAccessLogString(const char* log, size_t size,
  os::Tick start, os::Tick end) {
  if ((g_GlobalAccessLogMode & AccessLogMode_SdCard) != 0) {
    auto fileSystemProxy = detail::GetFileSystemProxyServiceObject();
    fileSystemProxy->OutputAccessLogToSdCard(
      nn::sf::InBuffer(log, size - 1));
  }
  g_AccessLogGeneratedCallbackMutex.Lock();
  if (g_AccessLogGeneratedCallback != nullptr) {
    g_AccessLogGeneratedCallback(g_AccessLogGeneratedCallbackArgument, start,
      end, log, size);
  }
  g_AccessLogGeneratedCallbackMutex.Unlock();
}

bool IsAccessLogGeneratedCallbackRegistered() {
  g_AccessLogGeneratedCallbackMutex.Lock();
  const bool isRegistered = g_AccessLogGeneratedCallback != nullptr;
  g_AccessLogGeneratedCallbackMutex.Unlock();
  return isRegistered;
}

[[gnu::noinline]] void OutputSdkVersionAccessLog() {
  int32_t programIndex = 0;
  uint32_t programCount = 0;
  {
    auto fileSystemProxy = detail::GetFileSystemProxyServiceObject();
    NN_FS_ABORT_UNLESS_RESULT_SUCCESS(
      fileSystemProxy->GetProgramIndexForAccessLog(
        nn::sf::Out<int32_t>(&programIndex),
        nn::sf::Out<uint32_t>(&programCount)));
  }
  if (programCount < 2) {
    static const char Log[] =
      "FS_ACCESS: { sdk_version: 22.2.0, spec: Ounce }\n";
    const os::Tick tick = os::GetSystemTick();
    OutputAccessLogString(Log, sizeof(Log), tick, tick);
  }
  else {
    char log[128] = {};
    const uint32_t size = util::SNPrintf(log, sizeof(log),
      "FS_ACCESS: { sdk_version: 22.2.0, spec: Ounce, program_index: %d }\n",
      programIndex) + 1;
    if (size > sizeof(log)) {
      return;
    }
    const os::Tick tick = os::GetSystemTick();
    OutputAccessLogString(log, size, tick, tick);
  }
}

inline Result GetGlobalAccessLogModeImpl(uint32_t* outMode) {
  auto fileSystemProxy = detail::GetFileSystemProxyServiceObject();
  const Result result = fileSystemProxy->GetGlobalAccessLogMode(
    nn::sf::Out<uint32_t>(outMode));
  // The original inlines the exported GetGlobalAccessLogMode here.
  if (detail::IsAbortNeeded(result)) {
    detail::LogResultErrorMessage(result, "GetGlobalAccessLogMode");
    NN_FS_ABORT_UNLESS_RESULT_SUCCESS(result);
  }
  NN_FS_RESULT_DO(result);
  return ResultSuccess();
}

[[gnu::noinline]] void OutputAllocationFailureAccessLog() {
  char log[] = "Error: FS Access Log failed to allocate memory.\n";
  if ((g_GlobalAccessLogMode & AccessLogMode_SdCard) != 0) {
    auto fileSystemProxy = detail::GetFileSystemProxyServiceObject();
    fileSystemProxy->OutputAccessLogToSdCard(
      nn::sf::InBuffer(log, sizeof(log) - 1));
  }
  const Result result = ResultAllocationMemoryFailedMakeUnique();
  if (detail::IsAbortNeeded(result)) {
    {
      auto fileSystemProxy = detail::GetFileSystemProxyServiceObject();
      fileSystemProxy->FlushAccessLogOnSdCard();
    }
    diag::detail::AbortImpl(&result);
  }
}

void OutputSdCardAllocationFailureAccessLog() {
  char log[] = "Error: FS Access Log to SD Card failed to allocate memory.\n";
  {
    auto fileSystemProxy = detail::GetFileSystemProxyServiceObject();
    fileSystemProxy->OutputAccessLogToSdCard(
      nn::sf::InBuffer(log, sizeof(log) - 1));
  }
  const Result result = ResultAllocationMemoryFailedMakeUnique();
  if (detail::IsAbortNeeded(result)) {
    {
      auto fileSystemProxy = detail::GetFileSystemProxyServiceObject();
      fileSystemProxy->FlushAccessLogOnSdCard();
    }
    diag::detail::AbortImpl(&result);
  }
}

using LogBuffer = std::unique_ptr<char[], detail::Deleter>;

inline bool TryOutputAccessLog(Result result, const char* priority,
  os::Tick start, os::Tick end, const char* function, const void* handle,
  const char* format, va_list args) {
  int argumentSize = 1024;
  LogBuffer argument = detail::MakeUnique<char[]>(argumentSize);
  if (argument == nullptr) {
    return false;
  }
  while (true) {
    va_list copy;
    va_copy(copy, args);
    const int length = util::VSNPrintf(argument.get(),
      static_cast<uint32_t>(argumentSize), format, copy);
    va_end(copy);
    if (length < argumentSize) {
      break;
    }
    argumentSize = length + 1;
    argument = detail::MakeUnique<char[]>(static_cast<uint32_t>(argumentSize));
    if (argument == nullptr) {
      return false;
    }
  }

  const TimeSpan startTime = os::ConvertToTimeSpan(start);
  const int64_t startMilliSeconds = startTime.nanoseconds / 1000000;
  const int startMicroSeconds =
    abs(static_cast<int>(startTime.nanoseconds / 1000 % 1000));
  const TimeSpan endTime = os::ConvertToTimeSpan(end);
  const int64_t endMilliSeconds = endTime.nanoseconds / 1000000;
  const int endMicroSeconds =
    abs(static_cast<int>(endTime.nanoseconds / 1000 % 1000));

  LogBuffer log;
  int logSize = argumentSize + 367 > 1024 ? argumentSize + 367 : 1024;
  while (true) {
    log = detail::MakeUnique<char[]>(logSize);
    if (log == nullptr) {
      return false;
    }
    const int length = util::SNPrintf(log.get(), logSize,
      "FS_ACCESS: { start: %9ld.%03d, end: %9ld.%03d, result: 0x%08X, "
      "handle: 0x%p, priority: %s, function: \"%s\"%s }\n",
      startMilliSeconds, startMicroSeconds, endMilliSeconds,
      endMicroSeconds, result.GetInnerValueForDebug(), handle, priority,
      function, argument.get());
    if (length < logSize) {
      OutputAccessLogString(log.get(), length + 1, start, end);
      return true;
    }
    logSize = length + 1;
  }
}

void OutputAccessLogImpl(Result result, const char* priority,
  os::Tick start, os::Tick end, const char* function, const void* handle,
  const char* format, va_list args) {
  if (!TryOutputAccessLog(result, priority, start, end, function, handle,
    format, args)) {
    OutputAllocationFailureAccessLog();
  }
}

inline void OutputAccessLogToOnlySdCardImpl(const char* format,
  va_list args) {
  if ((g_GlobalAccessLogMode & AccessLogMode_SdCard) == 0) {
    return;
  }
  int size = 1024;
  LogBuffer log = detail::MakeUnique<char[]>(size);
  while (log != nullptr) {
    va_list copy;
    va_copy(copy, args);
    const int length = util::VSNPrintf(log.get(), size, format, copy);
    va_end(copy);
    if (length < size) {
      auto fileSystemProxy = detail::GetFileSystemProxyServiceObject();
      fileSystemProxy->OutputAccessLogToSdCard(
        nn::sf::InBuffer(log.get(), length));
      return;
    }
    size = length + 1;
    log = detail::MakeUnique<char[]>(size);
  }
  OutputSdCardAllocationFailureAccessLog();
}

inline void OutputAccessLogWithCurrentPriority(Result result,
  os::Tick start, os::Tick end, const char* function, const void* handle,
  const char* format, va_list args) {
  char buffer[32] = {};
  const uint32_t priority = GetPriorityRawOnCurrentThreadForInternalUse();
  const char* priorityName;
  if (priority < 4) {
    priorityName = detail::PriorityRawNames[priority];
  }
  else {
    util::SNPrintf(buffer, sizeof(buffer), "%d", priority);
    priorityName = buffer;
  }
  OutputAccessLogImpl(result, priorityName, start, end, function, handle,
    format, args);
}

}

void SetLocalAccessLog(bool isEnabled) {
  g_IsLocalAccessLogEnabled = isEnabled;
}

void SetLocalApplicationAccessLog(bool isEnabled) {
  g_IsLocalAccessLogEnabled = isEnabled;
}

namespace detail {

bool IsEnabledAccessLog(uint32_t target) {
  if ((target & AccessLogTarget_Application) == 0 ||
    g_IsLocalAccessLogEnabled == 0) {
    return false;
  }

  if (!g_IsGlobalAccessLogModeInitialized.load(std::memory_order_relaxed)) {
    g_GlobalAccessLogModeMutex.Lock();
    if (!g_IsGlobalAccessLogModeInitialized.load(
      std::memory_order_relaxed)) {
      NN_FS_ABORT_UNLESS_RESULT_SUCCESS_WITH_LOG(
        GetGlobalAccessLogModeImpl(&g_GlobalAccessLogMode));
      if (g_GlobalAccessLogMode != AccessLogMode_None) {
        OutputSdkVersionAccessLog();
        if (GetStartAccessLogPrinterCallback().m_Callback != nullptr) {
          char log[128] = {};
          const uint32_t size =
            GetStartAccessLogPrinterCallback().m_Callback(log, sizeof(log)) +
            1;
          if (size <= sizeof(log)) {
            const os::Tick tick = os::GetSystemTick();
            OutputAccessLogString(log, size, tick, tick);
          }
        }
      }
      g_IsGlobalAccessLogModeInitialized.store(true,
        std::memory_order_release);
    }
    g_GlobalAccessLogModeMutex.Unlock();
  }

  if (g_GlobalAccessLogMode != AccessLogMode_None) {
    return true;
  }
  return IsAccessLogGeneratedCallbackRegistered();
}

bool IsEnabledAccessLog() {
  return IsEnabledAccessLog(AccessLogTarget_Application |
    AccessLogTarget_System);
}

void OutputAccessLog(Result result, Priority priority, os::Tick start,
  os::Tick end, const char* function, const void* handle, const char* format,
  ...) {
  va_list args;
  va_start(args, format);
  char buffer[32] = {};
  const char* priorityName;
  if (static_cast<uint32_t>(priority) < 3) {
    priorityName = detail::PriorityNames[priority];
  }
  else {
    util::SNPrintf(buffer, sizeof(buffer), "%d", priority);
    priorityName = buffer;
  }
  OutputAccessLogImpl(result, priorityName, start, end, function, handle,
    format, args);
  va_end(args);
}

void OutputAccessLog(Result result, PriorityRaw priority, os::Tick start,
  os::Tick end, const char* function, const void* handle, const char* format,
  ...) {
  va_list args;
  va_start(args, format);
  char buffer[32] = {};
  const char* priorityName;
  if (static_cast<uint32_t>(priority) < 4) {
    priorityName = detail::PriorityRawNames[priority];
  }
  else {
    util::SNPrintf(buffer, sizeof(buffer), "%d", priority);
    priorityName = buffer;
  }
  OutputAccessLogImpl(result, priorityName, start, end, function, handle,
    format, args);
  va_end(args);
}

void OutputAccessLog(Result result, os::Tick start, os::Tick end,
  const char* function, FileHandle handle, const char* format, ...) {
  va_list args;
  va_start(args, format);
  OutputAccessLogWithCurrentPriority(result, start, end, function,
    handle.handle, format, args);
  va_end(args);
}

void OutputAccessLog(Result result, os::Tick start, os::Tick end,
  const char* function, DirectoryHandle handle, const char* format, ...) {
  va_list args;
  va_start(args, format);
  OutputAccessLogWithCurrentPriority(result, start, end, function,
    handle.handle, format, args);
  va_end(args);
}

void OutputAccessLog(Result result, os::Tick start, os::Tick end,
  const char* function, IdentifyAccessLogHandle handle, const char* format,
  ...) {
  va_list args;
  va_start(args, format);
  OutputAccessLogWithCurrentPriority(result, start, end, function,
    handle.handle, format, args);
  va_end(args);
}

void OutputAccessLog(Result result, os::Tick start, os::Tick end,
  const char* function, const void* handle, const char* format, ...) {
  va_list args;
  va_start(args, format);
  OutputAccessLogWithCurrentPriority(result, start, end, function, handle,
    format, args);
  va_end(args);
}

void OutputAccessLogToOnlySdCard(const char* format, ...) {
  va_list args;
  va_start(args, format);
  OutputAccessLogToOnlySdCardImpl(format, args);
  va_end(args);
}

void OutputAccessLogToOnlySdCardWithLength(const char* log, size_t length) {
  if ((g_GlobalAccessLogMode & AccessLogMode_SdCard) != 0) {
    auto fileSystemProxy = GetFileSystemProxyServiceObject();
    fileSystemProxy->OutputAccessLogToSdCard(nn::sf::InBuffer(log, length));
  }
}

void FlushAccessLogOnSdCard() {
  if ((g_GlobalAccessLogMode & AccessLogMode_SdCard) != 0) {
    auto fileSystemProxy = GetFileSystemProxyServiceObject();
    fileSystemProxy->FlushAccessLogOnSdCard();
  }
}

void OutputAccessLogUnlessResultSuccess(Result result, os::Tick start,
  os::Tick end, const char* function, FileHandle handle, const char* format,
  ...) {
  if (result.IsSuccess()) {
    return;
  }
  va_list args;
  va_start(args, format);
  OutputAccessLogWithCurrentPriority(result, start, end, function,
    handle.handle, format, args);
  va_end(args);
}

void OutputAccessLogUnlessResultSuccess(Result result, os::Tick start,
  os::Tick end, const char* function, DirectoryHandle handle,
  const char* format, ...) {
  if (result.IsSuccess()) {
    return;
  }
  va_list args;
  va_start(args, format);
  OutputAccessLogWithCurrentPriority(result, start, end, function,
    handle.handle, format, args);
  va_end(args);
}

void OutputAccessLogUnlessResultSuccess(Result result, os::Tick start,
  os::Tick end, const char* function, const void* handle,
  const char* format, ...) {
  if (result.IsSuccess()) {
    return;
  }
  va_list args;
  va_start(args, format);
  OutputAccessLogWithCurrentPriority(result, start, end, function, handle,
    format, args);
  va_end(args);
}

bool IsEnabledHandleAccessLog(FileHandle handle) {
  if (handle.handle == nullptr) {
    return true;
  }
  FileSystemAccessor* parent =
    static_cast<FileAccessor*>(handle.handle)->GetParent();
  if (parent == nullptr) {
    return false;
  }
  return parent->IsEnabledAccessLog();
}

bool IsEnabledHandleAccessLog(DirectoryHandle handle) {
  if (handle.handle == nullptr) {
    return true;
  }
  return static_cast<DirectoryAccessor*>(handle.handle)->GetParent()
    .IsEnabledAccessLog();
}

bool IsEnabledHandleAccessLog(IdentifyAccessLogHandle) {
  return true;
}

bool IsEnabledHandleAccessLog(const void* handle) {
  return handle == nullptr;
}

bool IsEnabledFileSystemAccessorAccessLog(const char* name) {
  FileSystemAccessor* accessor = nullptr;
  if (Find(&accessor, name).IsFailure()) {
    return true;
  }
  return accessor->IsEnabledAccessLog();
}

void EnableFileSystemAccessorAccessLog(const char* name) {
  FileSystemAccessor* accessor = nullptr;
  NN_FS_ABORT_UNLESS_RESULT_SUCCESS_WITH_LOG(Find(&accessor, name));
  accessor->SetAccessLog(true);
}

void RegisterStartAccessLogPrinterCallback(
  StartAccessLogPrinterCallback callback) {
  GetStartAccessLogPrinterCallback().m_Callback = callback;
}

void FlushAccessLog() {}

}

void RegisterAccessLogGeneratedCallback(AccessLogGeneratedCallback callback,
  void* argument) {
  g_AccessLogGeneratedCallbackMutex.Lock();
  if (g_AccessLogGeneratedCallback != nullptr) {
    diag::detail::AbortImpl();
  }
  g_AccessLogGeneratedCallback = callback;
  g_AccessLogGeneratedCallbackArgument = argument;
  g_AccessLogGeneratedCallbackMutex.Unlock();
}

void UnregisterAccessLogGeneratedCallback(AccessLogGeneratedCallback callback,
  void* argument) {
  g_AccessLogGeneratedCallbackMutex.Lock();
  if (g_AccessLogGeneratedCallback == nullptr) {
    diag::detail::AbortImpl();
  }
  if (g_AccessLogGeneratedCallback != callback ||
    g_AccessLogGeneratedCallbackArgument != argument) {
    diag::detail::AbortImpl();
  }
  g_AccessLogGeneratedCallback = nullptr;
  g_AccessLogGeneratedCallbackArgument = nullptr;
  g_AccessLogGeneratedCallbackMutex.Unlock();
}

}
