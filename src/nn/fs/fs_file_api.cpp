#include <limits>

#include "nn/fs/detail/fs_file_system_accessor.hpp"
#include "nn/fs/detail/fs_log.hpp"

namespace nn::fs {

namespace {

detail::FileAccessor* Get(FileHandle handle) {
  __builtin_assume(handle.handle != nullptr);
  return static_cast<detail::FileAccessor*>(handle.handle);
}

}

void CloseFile(FileHandle handle) {
  Result result;
  NN_FS_ACCESS_LOG_HANDLE(result, handle,
    (delete Get(handle), ResultSuccess()), "");
  (void)result;
}

Result ReadFile(FileHandle handle, int64_t offset, void* buffer, size_t size,
  const ReadOption& option) {
  size_t readSize = 0;
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(Get(handle)->Read(&readSize, offset,
    buffer, size, option));
  if (readSize != size) {
    if (detail::IsEnabledAccessLog()) {
      detail::OutputAccessLogToOnlySdCard("Error: If the read range "
        "specification exceed the end of the file, use nn::fs::ReadFile("
        "size_t* outValue, FileHandle handle, int64_t offset, void* buffer, "
        "size_t size, const ReadOption& option)\n");
    }
    NN_FS_RESULT_THROW_UNLESS_WITH_ABORT_CHECK(false, ResultOutOfRange());
  }
  return ResultSuccess();
}

Result ReadFile(FileHandle handle, int64_t offset, void* buffer,
  size_t size) {
  size_t readSize = 0;
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(Get(handle)->Read(&readSize, offset,
    buffer, size, ReadOption()));
  if (readSize != size) {
    if (detail::IsEnabledAccessLog()) {
      detail::OutputAccessLogToOnlySdCard("Error: If the read range "
        "specification exceed the end of the file, use nn::fs::ReadFile("
        "size_t* outValue, FileHandle handle, int64_t offset, void* buffer, "
        "size_t size)\n");
    }
    NN_FS_RESULT_THROW_UNLESS_WITH_ABORT_CHECK(false, ResultOutOfRange());
  }
  return ResultSuccess();
}

Result ReadFile(size_t* outSize, FileHandle handle, int64_t offset,
  void* buffer, size_t size, const ReadOption& option) {
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(Get(handle)->Read(outSize, offset, buffer,
    size, option));
  return ResultSuccess();
}

Result ReadFile(size_t* outSize, FileHandle handle, int64_t offset,
  void* buffer, size_t size) {
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(Get(handle)->Read(outSize, offset, buffer,
    size, ReadOption()));
  return ResultSuccess();
}

Result WriteFile(FileHandle handle, int64_t offset, const void* buffer,
  size_t size, const WriteOption& option) {
  Result result;
  NN_FS_ACCESS_LOG_HANDLE(result, handle,
    Get(handle)->Write(offset, buffer, size, option),
    option.HasFlushFlag() ? ", offset: %ld, size: %zu, write_option: Flush" :
      ", offset: %ld, size: %zu", offset, size);
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(result);
  return ResultSuccess();
}

Result FlushFile(FileHandle handle) {
  Result result;
  NN_FS_ACCESS_LOG_HANDLE(result, handle, Get(handle)->Flush(), "");
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(result);
  return ResultSuccess();
}

Result SetFileSize(FileHandle handle, int64_t size) {
  Result result;
  NN_FS_ACCESS_LOG_HANDLE(result, handle, Get(handle)->SetSize(size),
    ", size: %ld", size);
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(result);
  return ResultSuccess();
}

Result GetFileSize(int64_t* outSize, FileHandle handle) {
  Result result;
  NN_FS_ACCESS_LOG_HANDLE(result, handle, Get(handle)->GetSize(outSize),
    ", size: %ld", outSize != nullptr && IsSuccess(result) ? *outSize : 0);
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(result);
  return ResultSuccess();
}

int GetFileOpenMode(FileHandle handle) {
  const int mode = Get(handle)->GetOpenMode();
  Result result;
  NN_FS_ACCESS_LOG_HANDLE(result, handle, ResultSuccess(),
    ", open_mode: 0x%X", mode);
  (void)result;
  return mode;
}

Result QueryRange(QueryRangeInfo* outInfo, FileHandle handle, int64_t offset,
  int64_t size) {
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(Get(handle)->OperateRange(outInfo,
    sizeof(*outInfo), OperationId_QueryRange, offset, size, nullptr, 0));
  return ResultSuccess();
}

Result InvalidateCache(FileHandle handle) {
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(Get(handle)->OperateRange(nullptr, 0,
    OperationId_Invalidate, 0, std::numeric_limits<int64_t>::max(), nullptr,
    0));
  return ResultSuccess();
}

Result QueryUnpreparedRange(Range* outRange, FileHandle handle) {
  UnpreparedRangeInfo info = {};
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(Get(handle)->OperateRange(&info,
    sizeof(info), OperationId_QueryUnpreparedRange, 0, 0, nullptr, 0));
  *outRange = info.range;
  return ResultSuccess();
}

Result QueryUnpreparedRangeDetail(UnpreparedRangeInfo* outInfo,
  FileHandle handle) {
  UnpreparedRangeInfo info = {};
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(Get(handle)->OperateRange(&info,
    sizeof(info), OperationId_QueryUnpreparedRange, 0, 0, nullptr, 0));
  *outInfo = info;
  return ResultSuccess();
}

Result QueryLazyLoadCompletionRate(int* outRate, FileHandle handle,
  int guideIndex) {
  UnpreparedRangeInfo info = {};
  LazyLoadArguments arguments = {};
  arguments.guideIndex = guideIndex;
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(Get(handle)->OperateRange(&info,
    sizeof(info), OperationId_QueryLazyLoadCompletionRate, 0, 0, &arguments,
    sizeof(arguments)));
  *outRate = info.completionRate;
  return ResultSuccess();
}

Result ReadyLazyLoadFileForciblyForDebug(FileHandle handle, int64_t offset,
  int64_t size) {
  UnpreparedRangeInfo info = {};
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(Get(handle)->OperateRange(&info,
    sizeof(info), OperationId_ReadyLazyLoadFile, offset, size, nullptr, 0));
  return ResultSuccess();
}

}
