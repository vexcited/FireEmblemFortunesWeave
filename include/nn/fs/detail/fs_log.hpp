#pragma once

#include "nn/fs/detail/fs_file_system_accessor.hpp"
#include "nn/fs/fs_result.hpp"
#include "nn/os/time.hpp"

namespace nn::os {

Tick GetSystemTick();

}

namespace nn::diag::detail {

[[noreturn]] void AbortImpl(const Result* result);

}

namespace nn::fs::detail {

struct IdentifyAccessLogHandle {
  const void* handle;

  static IdentifyAccessLogHandle MakeValue(const void* handle) {
    return IdentifyAccessLogHandle{handle};
  }
};

void LogErrorMessage(Result result, const char* format, ...);
void LogResultErrorMessage(Result result, const char* function);
bool IsAbortNeeded(Result result);

bool IsEnabledAccessLog();
bool IsEnabledAccessLog(uint32_t target);
bool IsEnabledFileSystemAccessorAccessLog(const char* name);
void OutputAccessLog(Result result, os::Tick start, os::Tick end,
  const char* function, const void* handle, const char* format, ...);
void OutputAccessLog(Result result, os::Tick start, os::Tick end,
  const char* function, FileHandle handle, const char* format, ...);
void OutputAccessLog(Result result, os::Tick start, os::Tick end,
  const char* function, DirectoryHandle handle, const char* format, ...);
void OutputAccessLogUnlessResultSuccess(Result result, os::Tick start,
  os::Tick end, const char* function, const void* handle,
  const char* format, ...);
void OutputAccessLogToOnlySdCard(const char* format, ...);
bool IsEnabledHandleAccessLog(FileHandle handle);
bool IsEnabledHandleAccessLog(DirectoryHandle handle);
bool IsEnabledHandleAccessLog(const void* handle);
bool IsEnabledHandleAccessLog(IdentifyAccessLogHandle handle);
void OutputAccessLog(Result result, os::Tick start, os::Tick end,
  const char* function, IdentifyAccessLogHandle handle, const char* format,
  ...);

}

#define NN_FS_ABORT_UNLESS_RESULT_SUCCESS(expression) \
  do { \
    const ::nn::Result fsAbortResult_ = (expression); \
    if (::nn::fs::IsFailure(fsAbortResult_)) { \
      ::nn::diag::detail::AbortImpl(&fsAbortResult_); \
    } \
  } while (0)

#define NN_FS_DETAIL_CHECK_ABORT(result, force) \
  do { \
    if (::nn::fs::detail::IsAbortNeeded(result) || (force)) { \
      ::nn::fs::detail::LogResultErrorMessage(result, __FUNCTION__); \
      NN_FS_ABORT_UNLESS_RESULT_SUCCESS(result); \
    } \
  } while (0)

#define NN_FS_RESULT_DO_WITH_ABORT_CHECK(expression) \
  do { \
    const ::nn::Result fsCheckedResult_ = (expression); \
    NN_FS_DETAIL_CHECK_ABORT(fsCheckedResult_, false); \
    if (::nn::fs::IsFailure(fsCheckedResult_)) { \
      return fsCheckedResult_; \
    } \
  } while (0)

#define NN_FS_RESULT_THROW_UNLESS_WITH_ABORT_CHECK(condition, result) \
  do { \
    if (!(condition)) { \
      const ::nn::Result fsCheckedResult_ = (result); \
      NN_FS_DETAIL_CHECK_ABORT(fsCheckedResult_, false); \
      return fsCheckedResult_; \
    } \
  } while (0)

#define NN_FS_ABORT_UNLESS_RESULT_SUCCESS_WITH_LOG(expression) \
  do { \
    const ::nn::Result fsCheckedResult_ = (expression); \
    NN_FS_DETAIL_CHECK_ABORT(fsCheckedResult_, true); \
  } while (0)

#define NN_FS_ACCESS_LOG_FILE_SYSTEM_ACCESSOR(result, expression, name, ...) \
  do { \
    if (::nn::fs::detail::IsEnabledAccessLog() && \
      ::nn::fs::detail::IsEnabledFileSystemAccessorAccessLog(name)) { \
      const ::nn::os::Tick fsStart_ = ::nn::os::GetSystemTick(); \
      result = (expression); \
      const ::nn::os::Tick fsEnd_ = ::nn::os::GetSystemTick(); \
      ::nn::fs::detail::OutputAccessLog(result, fsStart_, fsEnd_, \
        __FUNCTION__, nullptr, __VA_ARGS__); \
    } \
    else { \
      result = (expression); \
    } \
  } while (0)

#define NN_FS_ACCESS_LOG_UNLESS_SUCCESS(result, expression, ...) \
  do { \
    if (::nn::fs::detail::IsEnabledAccessLog()) { \
      const ::nn::os::Tick fsStart_ = ::nn::os::GetSystemTick(); \
      result = (expression); \
      const ::nn::os::Tick fsEnd_ = ::nn::os::GetSystemTick(); \
      ::nn::fs::detail::OutputAccessLogUnlessResultSuccess(result, fsStart_, \
        fsEnd_, __FUNCTION__, nullptr, __VA_ARGS__); \
    } \
    else { \
      result = (expression); \
    } \
  } while (0)

#define NN_FS_ACCESS_LOG_FILE_SYSTEM(result, accessor, handle, expression, \
  ...) \
  do { \
    if (::nn::fs::detail::IsEnabledAccessLog() && \
      (accessor)->IsEnabledAccessLog()) { \
      const ::nn::os::Tick fsStart_ = ::nn::os::GetSystemTick(); \
      result = (expression); \
      const ::nn::os::Tick fsEnd_ = ::nn::os::GetSystemTick(); \
      ::nn::fs::detail::OutputAccessLog(result, fsStart_, fsEnd_, \
        __FUNCTION__, handle, __VA_ARGS__); \
    } \
    else { \
      result = (expression); \
    } \
  } while (0)

#define NN_FS_ACCESS_LOG_HANDLE(result, handle, expression, ...) \
  do { \
    if (::nn::fs::detail::IsEnabledAccessLog() && \
      ::nn::fs::detail::IsEnabledHandleAccessLog(handle)) { \
      const ::nn::os::Tick fsStart_ = ::nn::os::GetSystemTick(); \
      result = (expression); \
      const ::nn::os::Tick fsEnd_ = ::nn::os::GetSystemTick(); \
      ::nn::fs::detail::OutputAccessLog(result, fsStart_, fsEnd_, \
        __FUNCTION__, handle, __VA_ARGS__); \
    } \
    else { \
      result = (expression); \
    } \
  } while (0)

#define NN_FS_ACCESS_LOG_TARGET_SYSTEM 2u

#define NN_FS_ACCESS_LOG_SYSTEM(result, expression, ...) \
  do { \
    if (::nn::fs::detail::IsEnabledAccessLog( \
      NN_FS_ACCESS_LOG_TARGET_SYSTEM) && \
      ::nn::fs::detail::IsEnabledHandleAccessLog( \
        static_cast<const void*>(nullptr))) { \
      const ::nn::os::Tick fsStart_ = ::nn::os::GetSystemTick(); \
      result = (expression); \
      const ::nn::os::Tick fsEnd_ = ::nn::os::GetSystemTick(); \
      ::nn::fs::detail::OutputAccessLog(result, fsStart_, fsEnd_, \
        __FUNCTION__, nullptr, __VA_ARGS__); \
    } \
    else { \
      result = (expression); \
    } \
  } while (0)

#define NN_FS_ACCESS_LOG_APPLICATION(result, expression, ...) \
  NN_FS_ACCESS_LOG_HANDLE(result, static_cast<const void*>(nullptr), \
    expression, __VA_ARGS__)
