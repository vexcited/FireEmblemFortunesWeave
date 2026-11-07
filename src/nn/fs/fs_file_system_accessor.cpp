#include "nn/fs/detail/fs_file_system_accessor.hpp"

#include <string.h>

#include <mutex>

#include "nn/fs/detail/fs_file_data_cache.hpp"
#include "nn/fs/detail/fs_log.hpp"
#include "nn/fs/detail/fs_path_based_file_data_cache.hpp"
#include "nn/fs/fs_path.hpp"
#include "nn/fs/fsa/fs_icommon_mount_name_generator.hpp"
#include "nn/fs/fsa/fs_ifile_system.hpp"
#include "nn/fs/fsa/fs_imulti_commit_target.hpp"
#include "nn/fs/fsa/fs_isave_data_attribute_getter.hpp"
#include "nn/util/string_util.hpp"

namespace nn::fs::detail {

namespace {

constexpr Result ResultPreconditionViolationInAccessor() {
  return MakeResult(6000);
}

constexpr Result ResultFileNotClosed() {
  return MakeResult(6455);
}

constexpr Result ResultDirectoryNotClosed() {
  return MakeResult(6456);
}

constexpr Result ResultWriteModeFileNotClosed() {
  return MakeResult(6457);
}

constexpr Result ResultAllocationMemoryFailedInFileSystemAccessorA() {
  return MakeResult(3211);
}

constexpr Result ResultAllocationMemoryFailedInFileSystemAccessorB() {
  return MakeResult(3212);
}

#define NN_FS_ACCESSOR_ABORT_UNLESS(condition, result, ...) \
  do { \
    if (!(condition)) { \
      const ::nn::Result fsAbortResult_ = (result); \
      ::nn::fs::detail::LogErrorMessage(fsAbortResult_, __VA_ARGS__); \
      ::nn::diag::detail::AbortImpl(&fsAbortResult_); \
    } \
  } while (0)

#define NN_FS_ACCESSOR_LOG_TO_SD_CARD(...) \
  do { \
    if (::nn::fs::detail::IsEnabledAccessLog()) { \
      ::nn::fs::detail::OutputAccessLogToOnlySdCard(__VA_ARGS__); \
    } \
  } while (0)

template<typename List>
int CountEntries(List& list) {
  int count = 0;
  for (auto it = list.begin(); it != list.end(); ++it) {
    ++count;
  }
  return count;
}

}

FileSystemAccessor::FileSystemAccessor(const char* name,
  fsa::IMultiCommitTarget* multiCommitTarget,
  std::unique_ptr<fsa::IFileSystem>&& fileSystem,
  std::unique_ptr<fsa::ICommonMountNameGenerator>&& generator,
  std::unique_ptr<fsa::ISaveDataAttributeGetter>&& attributeGetter)
  : m_PoolNode(), m_Impl(std::move(fileSystem)), m_OpenFiles(),
    m_OpenDirectories(), m_OpenListLock(), m_FileSystemAttributeLock(),
    m_MountNameGenerator(std::move(generator)),
    m_SaveDataAttributeGetter(std::move(attributeGetter)),
    m_Flags(), m_pMultiCommitTarget(multiCommitTarget), m_PathFlags(),
    m_FileSystemAttributeCache() {
  NN_FS_ACCESSOR_ABORT_UNLESS(name[0] != '\0', ResultInvalidMountName(),
    "Error: Mount failed because the mount name was empty.\n");
  NN_FS_ACCESSOR_ABORT_UNLESS(
    util::Strlcpy(m_Name, name, sizeof(m_Name)) <
      static_cast<int>(sizeof(m_Name)),
    ResultInvalidMountName(),
    "Error: Mount failed because the mount name was too long. "
    "The mount name was \"%s\".\n", name);
  if (strcmp(m_Name, "@Host") == 0) {
    m_PathFlags.AllowWindowsPath();
  }
}

FileSystemAccessor::~FileSystemAccessor() {
  std::lock_guard<os::SdkMutex> lock(m_OpenListLock);
  DumpUnclosedAccessorList(
    OpenMode_Read | OpenMode_Write | OpenMode_AllowAppend,
    OpenDirectoryMode_All);
  NN_FS_ACCESSOR_ABORT_UNLESS(m_OpenFiles.empty(), ResultFileNotClosed(),
    "Error: Unmount failed because not all files were closed.\n");
  NN_FS_ACCESSOR_ABORT_UNLESS(m_OpenDirectories.empty(),
    ResultDirectoryNotClosed(),
    "Error: Unmount failed because not all directories were closed.\n");
  if (m_Flags.isPathBasedFileDataCacheAttached) {
    auto cacheLock = LockPathBasedFileDataCacheEntries();
    InvalidatePathBasedFileDataCacheEntries(this);
  }
}

void FileSystemAccessor::DumpUnclosedAccessorList(int fileOpenModeMask,
  int directoryMask) {
  if (fileOpenModeMask != 0) {
    int count = 0;
    for (auto it = m_OpenFiles.begin(); it != m_OpenFiles.end(); ++it) {
      if ((it->GetOpenMode() & fileOpenModeMask) != 0) {
        ++count;
      }
    }
    if (count != 0) {
      NN_FS_ACCESSOR_LOG_TO_SD_CARD(
        "Error: File not closed (mount_name: \"%s\", count: %d)\n", m_Name,
        count);
      for (auto it = m_OpenFiles.begin(); it != m_OpenFiles.end(); ++it) {
        const int openMode = it->GetOpenMode();
        if ((openMode & fileOpenModeMask) == 0) {
          continue;
        }

        int64_t size = 0;
        if (IsFailure(it->GetSize(&size))) {
          size = -1;
        }

        char openModeString[64] = {};
        int length = util::SNPrintf(openModeString, sizeof(openModeString),
          "%s", (openMode & OpenMode_Read) != 0 ? "OpenMode_Read" : "");
        if ((openMode & OpenMode_Write) != 0) {
          length += util::SNPrintf(openModeString + length,
            sizeof(openModeString) - length, "%s",
            length > 0 ? " | OpenMode_Write" : "OpenMode_Write");
        }
        if ((openMode & OpenMode_AllowAppend) != 0) {
          util::SNPrintf(openModeString + length,
            sizeof(openModeString) - length, "%s",
            length > 0 ? " | OpenMode_AllowAppend" : "OpenMode_AllowAppend");
        }
        NN_FS_ACCESSOR_LOG_TO_SD_CARD(
          "     handle: 0x%p, open_mode: %s, size: %ld\n", &*it,
          openModeString, size);
      }
    }
  }

  if (directoryMask != 0 && !m_OpenDirectories.empty()) {
    NN_FS_ACCESSOR_LOG_TO_SD_CARD(
      "Error: Directory not closed (mount_name: \"%s\", count: %d)\n",
      m_Name, CountEntries(m_OpenDirectories));
    for (auto it = m_OpenDirectories.begin(); it != m_OpenDirectories.end();
      ++it) {
      NN_FS_ACCESSOR_LOG_TO_SD_CARD("     handle: 0x%p\n", &*it);
    }
  }
}

Result FileSystemAccessor::SetUpPath(Path* outPath, const char* path) {
  bool isNormalized = false;
  size_t length = 0;
  if (IsSuccess(PathFormatter::IsNormalized(&isNormalized, &length, path,
    m_PathFlags)) && isNormalized) {
    NN_FS_RESULT_DO(outPath->SetShallowBuffer(path));
  }
  else {
    if (m_PathFlags.IsWindowsPathAllowed()) {
      NN_FS_RESULT_DO(outPath->InitializeWithReplaceForwardSlashes(path));
    }
    else {
      NN_FS_RESULT_DO(outPath->InitializeWithReplaceBackslash(path));
    }
    NN_FS_RESULT_DO(outPath->Normalize(m_PathFlags));
  }
  NN_FS_RESULT_THROW_UNLESS(strlen(outPath->GetString()) <= 0x300,
    ResultTooLongPath());
  return ResultSuccess();
}

Result FileSystemAccessor::CreateFile(const char* path, int64_t size,
  int option) {
  Path normalizedPath;
  NN_FS_RESULT_DO(SetUpPath(&normalizedPath, path));
  if (m_Flags.isPathBasedFileDataCacheAttached) {
    auto cacheLock = LockPathBasedFileDataCacheEntries();
    NN_FS_RESULT_DO(m_Impl->CreateFile(normalizedPath, size, option));
    InvalidatePathBasedFileDataCacheEntry(this, normalizedPath);
  }
  else {
    NN_FS_RESULT_DO(m_Impl->CreateFile(normalizedPath, size, option));
  }
  return ResultSuccess();
}

Result FileSystemAccessor::DeleteFile(const char* path) {
  Path normalizedPath;
  NN_FS_RESULT_DO(SetUpPath(&normalizedPath, path));
  return m_Impl->DeleteFile(normalizedPath);
}

Result FileSystemAccessor::CreateDirectory(const char* path) {
  Path normalizedPath;
  NN_FS_RESULT_DO(SetUpPath(&normalizedPath, path));
  return m_Impl->CreateDirectory(normalizedPath);
}

Result FileSystemAccessor::DeleteDirectory(const char* path) {
  Path normalizedPath;
  NN_FS_RESULT_DO(SetUpPath(&normalizedPath, path));
  return m_Impl->DeleteDirectory(normalizedPath);
}

Result FileSystemAccessor::DeleteDirectoryRecursively(const char* path) {
  Path normalizedPath;
  NN_FS_RESULT_DO(SetUpPath(&normalizedPath, path));
  return m_Impl->DeleteDirectoryRecursively(normalizedPath);
}

Result FileSystemAccessor::CleanDirectoryRecursively(const char* path) {
  Path normalizedPath;
  NN_FS_RESULT_DO(SetUpPath(&normalizedPath, path));
  return m_Impl->CleanDirectoryRecursively(normalizedPath);
}

Result FileSystemAccessor::RenameFile(const char* path,
  const char* newPath) {
  Path normalizedPath;
  NN_FS_RESULT_DO(SetUpPath(&normalizedPath, path));
  Path normalizedNewPath;
  NN_FS_RESULT_DO(SetUpPath(&normalizedNewPath, newPath));
  if (m_Flags.isPathBasedFileDataCacheAttached) {
    auto cacheLock = LockPathBasedFileDataCacheEntries();
    NN_FS_RESULT_DO(m_Impl->RenameFile(normalizedPath, normalizedNewPath));
    InvalidatePathBasedFileDataCacheEntry(this, normalizedNewPath);
  }
  else {
    NN_FS_RESULT_DO(m_Impl->RenameFile(normalizedPath, normalizedNewPath));
  }
  return ResultSuccess();
}

Result FileSystemAccessor::RenameDirectory(const char* path,
  const char* newPath) {
  Path normalizedPath;
  NN_FS_RESULT_DO(SetUpPath(&normalizedPath, path));
  Path normalizedNewPath;
  NN_FS_RESULT_DO(SetUpPath(&normalizedNewPath, newPath));
  if (m_Flags.isPathBasedFileDataCacheAttached) {
    auto cacheLock = LockPathBasedFileDataCacheEntries();
    NN_FS_RESULT_DO(
      m_Impl->RenameDirectory(normalizedPath, normalizedNewPath));
    InvalidatePathBasedFileDataCacheEntries(this);
  }
  else {
    NN_FS_RESULT_DO(
      m_Impl->RenameDirectory(normalizedPath, normalizedNewPath));
  }
  return ResultSuccess();
}

Result FileSystemAccessor::GetEntryType(DirectoryEntryType* outType,
  const char* path) {
  Path normalizedPath;
  NN_FS_RESULT_DO(SetUpPath(&normalizedPath, path));
  return m_Impl->GetEntryType(outType, normalizedPath);
}

Result FileSystemAccessor::GetFreeSpaceSize(int64_t* outSize,
  const char* path) {
  Path normalizedPath;
  NN_FS_RESULT_DO(SetUpPath(&normalizedPath, path));
  return m_Impl->GetFreeSpaceSize(outSize, normalizedPath);
}

Result FileSystemAccessor::GetTotalSpaceSize(int64_t* outSize,
  const char* path) {
  Path normalizedPath;
  NN_FS_RESULT_DO(SetUpPath(&normalizedPath, path));
  return m_Impl->GetTotalSpaceSize(outSize, normalizedPath);
}

Result FileSystemAccessor::OpenFile(std::unique_ptr<FileAccessor>* outFile,
  const char* path, OpenMode mode) {
  Path normalizedPath;
  NN_FS_RESULT_DO(SetUpPath(&normalizedPath, path));

  std::unique_ptr<fsa::IFile> file;
  NN_FS_RESULT_DO(m_Impl->OpenFile(&file, normalizedPath, mode));

  FileAccessor* accessor = new FileAccessor(std::move(file), this, mode);
  NN_FS_RESULT_THROW_UNLESS(accessor != nullptr,
    ResultAllocationMemoryFailedInFileSystemAccessorA());
  {
    std::lock_guard<os::SdkMutex> lock(m_OpenListLock);
    m_OpenFiles.push_back(*accessor);
  }

  if (m_Flags.isPathBasedFileDataCacheAttached) {
    if ((mode & OpenMode_AllowAppend) != 0) {
      auto cacheLock = LockPathBasedFileDataCacheEntries();
      InvalidatePathBasedFileDataCacheEntry(this, normalizedPath);
    }
    else {
      std::unique_ptr<FilePathHash> hash(new FilePathHash());
      NN_FS_RESULT_THROW_UNLESS(hash != nullptr,
        ResultAllocationMemoryFailedInFileSystemAccessorA());
      int index = 0;
      if (FindPathBasedFileDataCacheEntry(hash.get(), &index, this,
        normalizedPath)) {
        accessor->SetFilePathHash(std::move(hash), index);
      }
    }
  }

  outFile->reset(accessor);
  return ResultSuccess();
}

Result FileSystemAccessor::OpenDirectory(
  std::unique_ptr<DirectoryAccessor>* outDirectory, const char* path,
  OpenDirectoryMode mode) {
  Path normalizedPath;
  NN_FS_RESULT_DO(SetUpPath(&normalizedPath, path));

  std::unique_ptr<fsa::IDirectory> directory;
  NN_FS_RESULT_DO(m_Impl->OpenDirectory(&directory, normalizedPath, mode));

  DirectoryAccessor* accessor =
    new DirectoryAccessor(std::move(directory), *this);
  NN_FS_RESULT_THROW_UNLESS(accessor != nullptr,
    ResultAllocationMemoryFailedInFileSystemAccessorB());
  {
    std::lock_guard<os::SdkMutex> lock(m_OpenListLock);
    m_OpenDirectories.push_back(*accessor);
  }

  outDirectory->reset(accessor);
  return ResultSuccess();
}

Result FileSystemAccessor::Commit() {
  {
    std::lock_guard<os::SdkMutex> lock(m_OpenListLock);
    DumpUnclosedAccessorList(OpenMode_Write, 0);
    for (auto it = m_OpenFiles.begin(); it != m_OpenFiles.end(); ++it) {
      NN_FS_RESULT_THROW_UNLESS((it->GetOpenMode() & OpenMode_Write) == 0,
        ResultWriteModeFileNotClosed());
    }
  }
  return m_Impl->Commit();
}

Result FileSystemAccessor::GetFileTimeStampRaw(FileTimeStampRaw* outTimeStamp,
  const char* path) {
  Path normalizedPath;
  NN_FS_RESULT_DO(SetUpPath(&normalizedPath, path));
  return m_Impl->GetFileTimeStampRaw(outTimeStamp, normalizedPath);
}

Result FileSystemAccessor::GetFileSystemAttribute(
  fsa::FileSystemAttribute* outAttribute) {
  std::lock_guard<os::SdkMutex> lock(m_FileSystemAttributeLock);
  if (m_FileSystemAttributeCache.isCached) {
    *outAttribute = m_FileSystemAttributeCache.attribute;
    return ResultSuccess();
  }
  NN_FS_RESULT_DO(m_Impl->GetFileSystemAttribute(outAttribute));
  m_FileSystemAttributeCache.attribute = *outAttribute;
  m_FileSystemAttributeCache.isCached = true;
  return ResultSuccess();
}

Result FileSystemAccessor::QueryEntry(char* outBuffer, size_t outBufferSize,
  const char* inBuffer, size_t inBufferSize, fsa::QueryId queryId,
  const char* path) {
  Path normalizedPath;
  NN_FS_RESULT_DO(SetUpPath(&normalizedPath, path));
  return m_Impl->QueryEntry(outBuffer, outBufferSize, inBuffer, inBufferSize,
    queryId, normalizedPath);
}

void FileSystemAccessor::PurgeFileDataCache(FileDataCacheAccessor* accessor) {
  accessor->Purge(m_pStorageForPurgeFileDataCache);
}

void FileSystemAccessor::NotifyCloseFile(FileAccessor* file) {
  std::lock_guard<os::SdkMutex> lock(m_OpenListLock);
  for (auto it = m_OpenFiles.begin(); it != m_OpenFiles.end(); ++it) {
    if (&*it == file) {
      util::IntrusiveListBaseNodeTraits<FileAccessor>::GetNode(file)->Unlink();
      break;
    }
  }
}

void FileSystemAccessor::NotifyCloseDirectory(DirectoryAccessor* directory) {
  std::lock_guard<os::SdkMutex> lock(m_OpenListLock);
  for (auto it = m_OpenDirectories.begin(); it != m_OpenDirectories.end();
    ++it) {
    if (&*it == directory) {
      util::IntrusiveListBaseNodeTraits<DirectoryAccessor>::GetNode(directory)
        ->Unlink();
      break;
    }
  }
}

Result FileSystemAccessor::GetCommonMountName(char* name,
  size_t nameSize) const {
  NN_FS_RESULT_THROW_UNLESS(m_MountNameGenerator != nullptr,
    ResultPreconditionViolationInAccessor());
  return m_MountNameGenerator->GenerateCommonMountName(name, nameSize);
}

Result FileSystemAccessor::GetSaveDataAttribute(
  SaveDataAttribute* outAttribute) const {
  NN_FS_RESULT_THROW_UNLESS(m_SaveDataAttributeGetter != nullptr,
    ResultPreconditionViolationInAccessor());
  return m_SaveDataAttributeGetter->GetSaveDataAttribute(outAttribute);
}

nn::sf::SharedPointer<fssrv::sf::IFileSystem>
FileSystemAccessor::GetMultiCommitTarget() {
  if (m_pMultiCommitTarget != nullptr) {
    return m_pMultiCommitTarget->GetMultiCommitTarget();
  }
  return nn::sf::SharedPointer<fssrv::sf::IFileSystem>();
}

}
