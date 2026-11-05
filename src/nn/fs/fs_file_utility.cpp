#include "nn/fs/detail/fs_file_system_accessor.hpp"
#include "nn/fs/detail/fs_log.hpp"
#include "nn/fs/fs_file.hpp"
#include "nn/fs/fs_file_time_stamp.hpp"
#include "nn/fs/fs_types.hpp"

namespace nn::fs {

Result CreateFile(const char* path, int64_t size);

namespace detail {

Result GetFileTimeStampRawForDebug(FileTimeStampRaw* outTimeStamp,
  const char* path);

}

Result CreateAndWriteFileAtOnce(const char* path, const void* buffer,
  size_t size) {
  NN_FS_RESULT_DO(CreateFile(path, size));
  FileHandle handle;
  NN_FS_RESULT_DO(OpenFile(&handle, path, OpenMode_Write));
  const Result result = WriteFile(handle, 0, buffer, size, WriteOption{1});
  CloseFile(handle);
  return result;
}

Result ReadFileAtOnce(const char* path, void* buffer, size_t size) {
  FileHandle handle;
  NN_FS_RESULT_DO(OpenFile(&handle, path, OpenMode_Read));
  Result result;
  int64_t fileSize = 0;
  result = GetFileSize(&fileSize, handle);
  if (IsSuccess(result)) {
    if (static_cast<size_t>(fileSize) != size) {
      result = ResultInvalidSize();
    }
    else {
      result = ReadFile(handle, 0, buffer, size, ReadOption{0});
    }
  }
  CloseFile(handle);
  return result;
}

Result GetFileTimeStampForDebug(FileTimeStamp* outTimeStamp,
  const char* path) {
  auto getTimeStamp = [&]() -> Result {
    NN_FS_RESULT_THROW_UNLESS(outTimeStamp != nullptr,
      ResultNullptrArgument());
    FileTimeStampRaw rawTimeStamp = {};
    NN_FS_RESULT_DO(detail::GetFileTimeStampRawForDebug(&rawTimeStamp, path));
    outTimeStamp->create.value = rawTimeStamp.create;
    outTimeStamp->modify.value = rawTimeStamp.modify;
    outTimeStamp->access.value = rawTimeStamp.access;
    outTimeStamp->isLocalTime = rawTimeStamp.isLocalTime;
    return ResultSuccess();
  };
  Result result;
  NN_FS_ACCESS_LOG_APPLICATION(result, getTimeStamp(), ", path: \"%s\"", path);
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(result);
  return ResultSuccess();
}

}
