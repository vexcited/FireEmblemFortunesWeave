#include <cstring>
#include <memory>

#include "nn/fs/detail/fs_file_system_accessor.hpp"
#include "nn/fs/detail/fs_id_string.hpp"
#include "nn/fs/detail/fs_log.hpp"

namespace nn::fs {

namespace {

constexpr Result ResultRenameToOtherFileSystem() {
  return detail::MakeResult(6034);
}

#define NN_FS_PATH_FORMAT ", path: \"%s\""
#define NN_FS_RENAME_FORMAT ", path: \"%s\", new_path: \"%s\""

}

Result CreateFile(const char* path, int64_t size, int option);

Result CreateFile(const char* path, int64_t size) {
  return CreateFile(path, size, 0);
}

Result DeleteFile(const char* path) {
  detail::FileSystemAccessor* fileSystem = nullptr;
  const char* subPath = nullptr;
  Result result;
  NN_FS_ACCESS_LOG_UNLESS_SUCCESS(result,
    detail::FindFileSystem(&fileSystem, &subPath, path), NN_FS_PATH_FORMAT,
    path);
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(result);

  NN_FS_ACCESS_LOG_FILE_SYSTEM(result, fileSystem, nullptr,
    fileSystem->DeleteFile(subPath), NN_FS_PATH_FORMAT, path);
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(result);
  return ResultSuccess();
}

Result CreateDirectory(const char* path) {
  detail::FileSystemAccessor* fileSystem = nullptr;
  const char* subPath = nullptr;
  Result result;
  NN_FS_ACCESS_LOG_UNLESS_SUCCESS(result,
    detail::FindFileSystem(&fileSystem, &subPath, path), NN_FS_PATH_FORMAT,
    path);
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(result);

  NN_FS_ACCESS_LOG_FILE_SYSTEM(result, fileSystem, nullptr,
    fileSystem->CreateDirectory(subPath), NN_FS_PATH_FORMAT, path);
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(result);
  return ResultSuccess();
}

Result DeleteDirectory(const char* path) {
  detail::FileSystemAccessor* fileSystem = nullptr;
  const char* subPath = nullptr;
  Result result;
  NN_FS_ACCESS_LOG_UNLESS_SUCCESS(result,
    detail::FindFileSystem(&fileSystem, &subPath, path), NN_FS_PATH_FORMAT,
    path);
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(result);

  NN_FS_ACCESS_LOG_FILE_SYSTEM(result, fileSystem, nullptr,
    fileSystem->DeleteDirectory(subPath), NN_FS_PATH_FORMAT, path);
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(result);
  return ResultSuccess();
}

Result DeleteDirectoryRecursively(const char* path) {
  detail::FileSystemAccessor* fileSystem = nullptr;
  const char* subPath = nullptr;
  Result result;
  NN_FS_ACCESS_LOG_UNLESS_SUCCESS(result,
    detail::FindFileSystem(&fileSystem, &subPath, path), NN_FS_PATH_FORMAT,
    path);
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(result);

  NN_FS_ACCESS_LOG_FILE_SYSTEM(result, fileSystem, nullptr,
    fileSystem->DeleteDirectoryRecursively(subPath), NN_FS_PATH_FORMAT, path);
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(result);
  return ResultSuccess();
}

Result CleanDirectoryRecursively(const char* path) {
  detail::FileSystemAccessor* fileSystem = nullptr;
  const char* subPath = nullptr;
  Result result;
  NN_FS_ACCESS_LOG_UNLESS_SUCCESS(result,
    detail::FindFileSystem(&fileSystem, &subPath, path), NN_FS_PATH_FORMAT,
    path);
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(result);

  NN_FS_ACCESS_LOG_FILE_SYSTEM(result, fileSystem, nullptr,
    fileSystem->CleanDirectoryRecursively(subPath), NN_FS_PATH_FORMAT, path);
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(result);
  return ResultSuccess();
}

Result RenameFile(const char* path, const char* newPath) {
  detail::FileSystemAccessor* fileSystem = nullptr;
  const char* subPath = nullptr;
  detail::FileSystemAccessor* newFileSystem = nullptr;
  const char* newSubPath = nullptr;
  Result result;
  NN_FS_ACCESS_LOG_UNLESS_SUCCESS(result,
    detail::FindFileSystem(&fileSystem, &subPath, path), NN_FS_RENAME_FORMAT,
    path, newPath);
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(result);
  NN_FS_ACCESS_LOG_UNLESS_SUCCESS(result,
    detail::FindFileSystem(&newFileSystem, &newSubPath, newPath),
    NN_FS_RENAME_FORMAT, path, newPath);
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(result);

  auto rename = [=]() -> Result {
    NN_FS_RESULT_THROW_UNLESS(fileSystem == newFileSystem,
      ResultRenameToOtherFileSystem());
    return fileSystem->RenameFile(subPath, newSubPath);
  };
  NN_FS_ACCESS_LOG_FILE_SYSTEM(result, fileSystem, nullptr, rename(),
    NN_FS_RENAME_FORMAT, path, newPath);
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(result);
  return ResultSuccess();
}

Result RenameDirectory(const char* path, const char* newPath) {
  detail::FileSystemAccessor* fileSystem = nullptr;
  const char* subPath = nullptr;
  detail::FileSystemAccessor* newFileSystem = nullptr;
  const char* newSubPath = nullptr;
  Result result;
  NN_FS_ACCESS_LOG_UNLESS_SUCCESS(result,
    detail::FindFileSystem(&fileSystem, &subPath, path), NN_FS_RENAME_FORMAT,
    path, newPath);
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(result);
  NN_FS_ACCESS_LOG_UNLESS_SUCCESS(result,
    detail::FindFileSystem(&newFileSystem, &newSubPath, newPath),
    NN_FS_RENAME_FORMAT, path, newPath);
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(result);

  auto rename = [=]() -> Result {
    NN_FS_RESULT_THROW_UNLESS(fileSystem == newFileSystem,
      ResultRenameToOtherFileSystem());
    return fileSystem->RenameDirectory(subPath, newSubPath);
  };
  NN_FS_ACCESS_LOG_FILE_SYSTEM(result, fileSystem, nullptr, rename(),
    NN_FS_RENAME_FORMAT, path, newPath);
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(result);
  return ResultSuccess();
}

Result GetEntryType(DirectoryEntryType* outType, const char* path) {
  detail::FileSystemAccessor* fileSystem = nullptr;
  const char* subPath = nullptr;
  Result result;
  NN_FS_ACCESS_LOG_UNLESS_SUCCESS(result,
    detail::FindFileSystem(&fileSystem, &subPath, path),
    ", path: \"%s\", entry_type: %s", path,
    detail::IdString().ToString(
      outType != nullptr && IsSuccess(result) ? *outType :
        DirectoryEntryType_Directory));
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(result);

  NN_FS_ACCESS_LOG_FILE_SYSTEM(result, fileSystem, nullptr,
    fileSystem->GetEntryType(outType, subPath),
    ", path: \"%s\", entry_type: %s", path,
    detail::IdString().ToString(
      outType != nullptr && IsSuccess(result) ? *outType :
        DirectoryEntryType_Directory));
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(result);
  return ResultSuccess();
}

Result OpenFile(FileHandle* outHandle, const char* path, int mode) {
  detail::FileSystemAccessor* fileSystem = nullptr;
  const char* subPath = nullptr;
  Result result;
  NN_FS_ACCESS_LOG_UNLESS_SUCCESS(result,
    detail::FindFileSystem(&fileSystem, &subPath, path),
    ", path: \"%s\", open_mode: 0x%X", path, mode);
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(result);

  std::unique_ptr<detail::FileAccessor> file;
  auto open = [&]() -> Result {
    NN_FS_RESULT_THROW_UNLESS(outHandle != nullptr, ResultNullptrArgument());
    return fileSystem->OpenFile(&file, subPath,
      static_cast<OpenMode>(mode));
  };
  NN_FS_ACCESS_LOG_FILE_SYSTEM(result, fileSystem,
    static_cast<const void*>(file.get()), open(),
    ", path: \"%s\", open_mode: 0x%X", path, mode);
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(result);

  outHandle->handle = file.release();
  return ResultSuccess();
}

Result OpenDirectory(DirectoryHandle* outHandle, const char* path, int mode) {
  detail::FileSystemAccessor* fileSystem = nullptr;
  const char* subPath = nullptr;
  Result result;
  NN_FS_ACCESS_LOG_UNLESS_SUCCESS(result,
    detail::FindFileSystem(&fileSystem, &subPath, path),
    ", path: \"%s\", open_mode: 0x%X", path, mode);
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(result);

  std::unique_ptr<detail::DirectoryAccessor> directory;
  auto open = [&]() -> Result {
    NN_FS_RESULT_THROW_UNLESS(outHandle != nullptr, ResultNullptrArgument());
    return fileSystem->OpenDirectory(&directory, subPath,
      static_cast<OpenDirectoryMode>(mode));
  };
  NN_FS_ACCESS_LOG_FILE_SYSTEM(result, fileSystem,
    static_cast<const void*>(directory.get()), open(),
    ", path: \"%s\", open_mode: 0x%X", path, mode);
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(result);

  outHandle->handle = directory.release();
  return ResultSuccess();
}

Result GetFreeSpaceSize(int64_t* outSize, const char* path) {
  detail::FileSystemAccessor* fileSystem = nullptr;
  const char* subPath = nullptr;
  auto find = [&]() -> Result {
    NN_FS_RESULT_THROW_UNLESS(outSize != nullptr && path != nullptr,
      ResultNullptrArgument());
    if (detail::IsValidMountName(path)) {
      NN_FS_RESULT_DO(detail::Find(&fileSystem, path));
    }
    else {
      NN_FS_RESULT_DO(detail::FindFileSystem(&fileSystem, &subPath, path));
    }
    return ResultSuccess();
  };

  Result result;
  NN_FS_ACCESS_LOG_UNLESS_SUCCESS(result, find(),
    ", name: \"%s\", size: %ld", path,
    outSize != nullptr && IsSuccess(result) ? *outSize : 0);
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(result);

  auto get = [&]() -> Result {
    NN_FS_RESULT_THROW_UNLESS(
      subPath == nullptr || std::strcmp(subPath, "/") == 0,
      ResultInvalidMountName());
    return fileSystem->GetFreeSpaceSize(outSize, "/");
  };
  NN_FS_ACCESS_LOG_FILE_SYSTEM(result, fileSystem, nullptr, get(),
    ", name: \"%s\", size: %ld", path,
    outSize != nullptr && IsSuccess(result) ? *outSize : 0);
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(result);
  return ResultSuccess();
}

namespace {

// The access log names the public entry point, not this helper.
Result CommitImpl(const char* name, const char* function) {
  detail::FileSystemAccessor* fileSystem = nullptr;
  Result result;
  NN_FS_ACCESS_LOG_UNLESS_SUCCESS_NAMED(result, function,
    detail::Find(&fileSystem, name), ", name: \"%s\"", name);
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(result);

  NN_FS_ACCESS_LOG_FILE_SYSTEM_NAMED(result, function, fileSystem, nullptr,
    fileSystem->Commit(), ", name: \"%s\"", name);
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(result);
  return ResultSuccess();
}

}

Result Commit(const char* name) {
  return CommitImpl(name, "Commit");
}

Result CommitSaveData(const char* name) {
  return CommitImpl(name, "CommitSaveData");
}

}
