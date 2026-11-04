#include "nn/fs/detail/fs_file_system_accessor.hpp"
#include "nn/fs/detail/fs_log.hpp"

namespace nn::fs {

namespace {

detail::DirectoryAccessor* Get(DirectoryHandle handle) {
  __builtin_assume(handle.handle != nullptr);
  return static_cast<detail::DirectoryAccessor*>(handle.handle);
}

}

void CloseDirectory(DirectoryHandle handle) {
  Result result;
  NN_FS_ACCESS_LOG_HANDLE(result, handle,
    (delete Get(handle), ResultSuccess()), "");
  (void)result;
}

Result ReadDirectory(int64_t* outCount, DirectoryEntry* entries,
  DirectoryHandle handle, int64_t count) {
  Result result;
  NN_FS_ACCESS_LOG_HANDLE(result, handle,
    Get(handle)->Read(outCount, entries, count),
    ", entry_buffer_count: %ld, entry_count: %ld", count,
    outCount != nullptr && IsSuccess(result) ? *outCount : 0);
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(result);
  return ResultSuccess();
}

Result GetDirectoryEntryCount(int64_t* outCount, DirectoryHandle handle) {
  Result result;
  NN_FS_ACCESS_LOG_HANDLE(result, handle, Get(handle)->GetEntryCount(outCount),
    ", entry_count: %ld",
    outCount != nullptr && IsSuccess(result) ? *outCount : 0);
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(result);
  return ResultSuccess();
}

}
