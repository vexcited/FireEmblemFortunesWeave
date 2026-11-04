#include "nn/fs/detail/fs_file_system_accessor.hpp"
#include "nn/fs/detail/fs_log.hpp"

namespace nn::fs {

namespace detail {

Result GetFileTimeStampRawForDebug(FileTimeStampRaw* outTimeStamp,
  const char* path) {
  FileSystemAccessor* fileSystem = nullptr;
  const char* subPath = nullptr;
  NN_FS_RESULT_DO(FindFileSystem(&fileSystem, &subPath, path));
  return fileSystem->GetFileTimeStampRaw(outTimeStamp, subPath);
}

}

Result GetFileTimeStampRawForDebug(FileTimeStampRaw* outTimeStamp,
  const char* path) {
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(detail::GetFileTimeStampRawForDebug(
    outTimeStamp, path));
  return ResultSuccess();
}

Result CreateFile(const char* path, int64_t size, int option) {
  detail::FileSystemAccessor* fileSystem = nullptr;
  const char* subPath = nullptr;
  Result result;
  NN_FS_ACCESS_LOG_UNLESS_SUCCESS(result,
    detail::FindFileSystem(&fileSystem, &subPath, path), ", path: \"%s\"",
    path);
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(result);

  NN_FS_ACCESS_LOG_FILE_SYSTEM(result, fileSystem, nullptr,
    fileSystem->CreateFile(subPath, size, option),
    ", path: \"%s\", size: %ld", path, size);
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(result);
  return ResultSuccess();
}

Result GetTotalSpaceSize(int64_t* outSize, const char* path) {
  detail::FileSystemAccessor* fileSystem = nullptr;
  const char* subPath = nullptr;
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(detail::FindFileSystem(&fileSystem,
    &subPath, path));
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(fileSystem->GetTotalSpaceSize(outSize,
    subPath));
  return ResultSuccess();
}

Result SetConcatenationFileAttribute(const char* path) {
  detail::FileSystemAccessor* fileSystem = nullptr;
  const char* subPath = nullptr;
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(detail::FindFileSystem(&fileSystem,
    &subPath, path));
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(fileSystem->QueryEntry(nullptr, 0,
    nullptr, 0, fsa::QueryId::SetConcatenationFileAttribute, subPath));
  return ResultSuccess();
}

Result QueryUnpreparedFileInformation(UnpreparedFileInformation* outInfo,
  const char* path) {
  detail::FileSystemAccessor* fileSystem = nullptr;
  const char* subPath = nullptr;
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(detail::FindFileSystem(&fileSystem,
    &subPath, path));
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(fileSystem->QueryEntry(
    reinterpret_cast<char*>(outInfo), sizeof(*outInfo), nullptr, 0,
    fsa::QueryId::QueryUnpreparedFileInformation, "/"));
  return ResultSuccess();
}

Result GetFileSystemAttributeForDebug(fsa::FileSystemAttribute* outAttribute,
  const char* path) {
  detail::FileSystemAccessor* fileSystem = nullptr;
  const char* subPath = nullptr;
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(detail::FindFileSystem(&fileSystem,
    &subPath, path));
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(fileSystem->GetFileSystemAttribute(
    outAttribute));
  return ResultSuccess();
}

}
