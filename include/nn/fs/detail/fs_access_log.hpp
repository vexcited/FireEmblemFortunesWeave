#pragma once

#include <stddef.h>
#include <stdint.h>

#include "nn/fs/detail/fs_log.hpp"
#include "nn/fs/fs_types.hpp"

namespace nn::fs {

using AccessLogGeneratedCallback = void (*)(void* argument, os::Tick start,
  os::Tick end, const char* log, size_t size);

void SetLocalAccessLog(bool isEnabled);
void SetLocalApplicationAccessLog(bool isEnabled);
void RegisterAccessLogGeneratedCallback(AccessLogGeneratedCallback callback,
  void* argument);
void UnregisterAccessLogGeneratedCallback(AccessLogGeneratedCallback callback,
  void* argument);

PriorityRaw GetPriorityRawOnCurrentThreadForInternalUse();

}

namespace nn::fs::detail {

enum AccessLogTarget : uint32_t {
  AccessLogTarget_None = 0,
  AccessLogTarget_Application = 1 << 0,
  AccessLogTarget_System = 1 << 1,
};

using StartAccessLogPrinterCallback = int (*)(char* buffer, size_t size);

void OutputAccessLog(Result result, Priority priority, os::Tick start,
  os::Tick end, const char* function, const void* handle, const char* format,
  ...);
void OutputAccessLog(Result result, PriorityRaw priority, os::Tick start,
  os::Tick end, const char* function, const void* handle, const char* format,
  ...);
void OutputAccessLogUnlessResultSuccess(Result result, os::Tick start,
  os::Tick end, const char* function, FileHandle handle, const char* format,
  ...);
void OutputAccessLogUnlessResultSuccess(Result result, os::Tick start,
  os::Tick end, const char* function, DirectoryHandle handle,
  const char* format, ...);
void OutputAccessLogToOnlySdCardWithLength(const char* log, size_t length);
void FlushAccessLogOnSdCard();
void FlushAccessLog();
void EnableFileSystemAccessorAccessLog(const char* name);
void RegisterStartAccessLogPrinterCallback(
  StartAccessLogPrinterCallback callback);

}
