#pragma once

#include <stddef.h>
#include <stdint.h>

#include <memory>

#include "nn/fs/fs_result.hpp"
#include "nn/fs/fs_types.hpp"
#include "nn/fs/fsa/fs_idirectory.hpp"
#include "nn/fs/fsa/fs_ifile.hpp"

namespace nn::fs {

class Path;
struct FileTimeStampRaw;

}

namespace nn::fs::fsa {

enum class QueryId;
struct FileSystemAttribute;

constexpr Result ResultInvalidOpenMode() {
  return fs::detail::MakeResult(6072);
}

constexpr Result ResultInvalidOpenDirectoryMode() {
  return fs::detail::MakeResult(6074);
}

class IFileSystem {
public:
  virtual ~IFileSystem() {}

  Result CreateFile(const Path& path, int64_t size, int option) {
    NN_FS_RESULT_THROW_UNLESS(size >= 0, ResultInvalidSize());
    return DoCreateFile(path, size, option);
  }

  Result CreateFile(const Path& path, int64_t size) {
    return CreateFile(path, size, 0);
  }

  Result DeleteFile(const Path& path) {
    return DoDeleteFile(path);
  }

  Result CreateDirectory(const Path& path) {
    return DoCreateDirectory(path);
  }

  Result DeleteDirectory(const Path& path) {
    return DoDeleteDirectory(path);
  }

  Result DeleteDirectoryRecursively(const Path& path) {
    return DoDeleteDirectoryRecursively(path);
  }

  Result CleanDirectoryRecursively(const Path& path) {
    return DoCleanDirectoryRecursively(path);
  }

  Result RenameFile(const Path& currentPath, const Path& newPath) {
    return DoRenameFile(currentPath, newPath);
  }

  Result RenameDirectory(const Path& currentPath, const Path& newPath) {
    return DoRenameDirectory(currentPath, newPath);
  }

  Result GetEntryType(DirectoryEntryType* outType, const Path& path) {
    NN_FS_RESULT_THROW_UNLESS(outType != nullptr, ResultNullptrArgument());
    return DoGetEntryType(outType, path);
  }

  Result GetFreeSpaceSize(int64_t* outSize, const Path& path) {
    NN_FS_RESULT_THROW_UNLESS(outSize != nullptr, ResultNullptrArgument());
    return DoGetFreeSpaceSize(outSize, path);
  }

  Result GetTotalSpaceSize(int64_t* outSize, const Path& path) {
    NN_FS_RESULT_THROW_UNLESS(outSize != nullptr, ResultNullptrArgument());
    return DoGetTotalSpaceSize(outSize, path);
  }

  Result OpenFile(std::unique_ptr<IFile>* outFile, const Path& path,
    OpenMode mode) {
    NN_FS_RESULT_THROW_UNLESS(outFile != nullptr, ResultNullptrArgument());
    NN_FS_RESULT_THROW_UNLESS(
      (mode & (OpenMode_Read | OpenMode_Write)) != 0 &&
        (mode & ~(OpenMode_Read | OpenMode_Write | OpenMode_AllowAppend)) ==
          0,
      ResultInvalidOpenMode());
    return DoOpenFile(outFile, path, mode);
  }

  Result OpenDirectory(std::unique_ptr<IDirectory>* outDirectory,
    const Path& path, OpenDirectoryMode mode) {
    const uint32_t flagMask = 3u << 30;
    const uint32_t value = static_cast<uint32_t>(mode);
    NN_FS_RESULT_THROW_UNLESS(outDirectory != nullptr,
      ResultNullptrArgument());
    NN_FS_RESULT_THROW_UNLESS((value & OpenDirectoryMode_All) != 0 &&
        (value & ~(OpenDirectoryMode_All | flagMask)) == 0 &&
        (value & flagMask) != flagMask,
      ResultInvalidOpenDirectoryMode());
    return DoOpenDirectory(outDirectory, path, mode);
  }

  Result Commit() {
    return DoCommit();
  }

  Result CommitProvisionally(int64_t counter) {
    return DoCommitProvisionally(counter);
  }

  Result Rollback() {
    return DoRollback();
  }

  Result Flush() {
    return DoFlush();
  }

  Result GetFileTimeStampRaw(FileTimeStampRaw* outTimeStamp,
    const Path& path) {
    NN_FS_RESULT_THROW_UNLESS(outTimeStamp != nullptr,
      ResultNullptrArgument());
    return DoGetFileTimeStampRaw(outTimeStamp, path);
  }

  Result QueryEntry(char* outBuffer, size_t outBufferSize,
    const char* inBuffer, size_t inBufferSize, QueryId queryId,
    const Path& path) {
    return DoQueryEntry(outBuffer, outBufferSize, inBuffer, inBufferSize,
      queryId, path);
  }

  Result GetFileSystemAttribute(FileSystemAttribute* outAttribute) {
    NN_FS_RESULT_THROW_UNLESS(outAttribute != nullptr,
      ResultNullptrArgument());
    return DoGetFileSystemAttribute(outAttribute);
  }

private:
  virtual Result DoCreateFile(const Path& path, int64_t size, int option) = 0;
  virtual Result DoDeleteFile(const Path& path) = 0;
  virtual Result DoCreateDirectory(const Path& path) = 0;
  virtual Result DoDeleteDirectory(const Path& path) = 0;
  virtual Result DoDeleteDirectoryRecursively(const Path& path) = 0;
  virtual Result DoCleanDirectoryRecursively(const Path& path) = 0;
  virtual Result DoRenameFile(const Path& currentPath,
    const Path& newPath) = 0;
  virtual Result DoRenameDirectory(const Path& currentPath,
    const Path& newPath) = 0;
  virtual Result DoGetEntryType(DirectoryEntryType* outType,
    const Path& path) = 0;
  virtual Result DoGetFreeSpaceSize(int64_t* outSize, const Path& path) = 0;
  virtual Result DoGetTotalSpaceSize(int64_t* outSize, const Path& path) = 0;
  virtual Result DoOpenFile(std::unique_ptr<IFile>* outFile,
    const Path& path, OpenMode mode) = 0;
  virtual Result DoOpenDirectory(std::unique_ptr<IDirectory>* outDirectory,
    const Path& path, OpenDirectoryMode mode) = 0;
  virtual Result DoCommit() = 0;

  virtual Result DoCommitProvisionally(int64_t counter) {
    static_cast<void>(counter);
    return ResultNotImplemented();
  }

  virtual Result DoRollback() {
    return ResultNotImplemented();
  }

  virtual Result DoFlush() {
    return ResultNotImplemented();
  }

  virtual Result DoGetFileTimeStampRaw(FileTimeStampRaw* outTimeStamp,
    const Path& path) {
    static_cast<void>(outTimeStamp);
    static_cast<void>(path);
    return ResultNotImplemented();
  }

  virtual Result DoQueryEntry(char* outBuffer, size_t outBufferSize,
    const char* inBuffer, size_t inBufferSize, QueryId queryId,
    const Path& path) {
    static_cast<void>(outBuffer);
    static_cast<void>(outBufferSize);
    static_cast<void>(inBuffer);
    static_cast<void>(inBufferSize);
    static_cast<void>(queryId);
    static_cast<void>(path);
    return ResultNotImplemented();
  }

  virtual Result DoGetFileSystemAttribute(FileSystemAttribute* outAttribute) {
    static_cast<void>(outAttribute);
    return ResultNotImplemented();
  }
};

}
