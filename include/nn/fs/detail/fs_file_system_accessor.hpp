#pragma once

#include <stddef.h>
#include <stdint.h>

#include <memory>

#include "nn/fs/detail/fs_memory.hpp"
#include "nn/fs/fs_file.hpp"
#include "nn/fs/fs_istorage.hpp"
#include "nn/fs/fs_result.hpp"
#include "nn/fs/fs_path_utility.hpp"
#include "nn/fs/fs_types.hpp"
#include "nn/fs/fsa/fs_file_system_attribute.hpp"
#include "nn/fssrv/sf/fssrv_sf_ifile_system.hpp"
#include "nn/os/reader_writer_lock.hpp"
#include "nn/os/sdk_mutex.hpp"
#include "nn/os/synchronization.hpp"
#include "nn/sf/shared_pointer.hpp"
#include "nn/util/intrusive_list.hpp"

namespace nn::fs {

namespace fsa {

class IFileSystem;
class IFile;
class IDirectory;
class ICommonMountNameGenerator;
class IMultiCommitTarget;
class ISaveDataAttributeGetter;

enum class QueryId {
  SetConcatenationFileAttribute = 0,
  UpdateMac = 1,
  IsSignedSystemPartitionOnSdCardValid = 2,
  QueryUnpreparedFileInformation = 3,
};

}

struct SaveDataAttribute;
class Path;

struct FileHandle {
  void* handle;
};

struct DirectoryHandle {
  void* handle;
};

struct DirectoryEntry;
struct FileTimeStampRaw;

struct UnpreparedFileInformation {
  char path[769];
};
struct Range {
  int64_t offset;
  int64_t size;
};

struct UnpreparedRangeInfo {
  Range range;
  int64_t factor;
  int64_t fileSize;
  int64_t preparedRangeSize;
  int32_t completionRate;
  char reserved[20];
};

struct LazyLoadArguments {
  int32_t guideIndex;
  char reserved[60];
};

namespace detail {

const size_t MountNameLengthMax = 15;

class FileDataCacheAccessor;
class FileSystemAccessor;
struct FilePathHash;

enum WriteState {
  WriteState_None,
  WriteState_NeedsFlush,
  WriteState_Failed,
};

class FileAccessor : public util::IntrusiveListBaseNode<FileAccessor> {
public:
  FileAccessor(std::unique_ptr<fsa::IFile>&& file,
    FileSystemAccessor* parent, int mode);
  ~FileAccessor();

  static void* operator new(size_t size) noexcept {
    return Allocate(size);
  }

  static void operator delete(void* pointer, size_t size) noexcept {
    Deallocate(pointer, size);
  }

  Result Read(size_t* outSize, int64_t offset, void* buffer, size_t size,
    const ReadOption& option);
  Result Write(int64_t offset, const void* buffer, size_t size,
    const WriteOption& option);
  Result Flush();
  Result SetSize(int64_t size);
  Result GetSize(int64_t* outSize);
  int GetOpenMode() const;
  WriteState GetWriteState();
  Result OperateRange(void* outBuffer, size_t outBufferSize,
    OperationId operationId,
    int64_t offset, int64_t size, const void* inBuffer, size_t inBufferSize);
  void SetFilePathHash(std::unique_ptr<FilePathHash>&& filePathHash,
    int index);
  Result ReadWithoutCacheAccessLog(size_t* outSize, int64_t offset,
    void* buffer, size_t size, const ReadOption& option);

  FileSystemAccessor* GetParent() const {
    return m_pParent;
  }

private:
  Result ReadWithCacheAccessLog(size_t* outSize, int64_t offset,
    void* buffer, size_t size, const ReadOption& option, bool usePathCache,
    bool useDataCache);
  Result UpdateLastResult(Result result);

  std::unique_ptr<fsa::IFile> m_Impl;
  FileSystemAccessor* const m_pParent;
  WriteState m_WriteState;
  Result m_LastResult;
  const int m_OpenMode;
  std::unique_ptr<FilePathHash> m_FilePathHash;
  int m_PathHashIndex;
};

class DirectoryAccessor
  : public util::IntrusiveListBaseNode<DirectoryAccessor> {
public:
  DirectoryAccessor(std::unique_ptr<fsa::IDirectory>&& directory,
    FileSystemAccessor& parent);
  ~DirectoryAccessor();

  static void* operator new(size_t size) noexcept {
    return Allocate(size);
  }

  static void operator delete(void* pointer, size_t size) noexcept {
    Deallocate(pointer, size);
  }

  Result Read(int64_t* outCount, DirectoryEntry* entries, int64_t count);
  Result GetEntryCount(int64_t* outCount);

  FileSystemAccessor& GetParent() const {
    return m_Parent;
  }

private:
  std::unique_ptr<fsa::IDirectory> m_Impl;
  FileSystemAccessor& m_Parent;
};

class FileSystemAccessor {
public:
  FileSystemAccessor(const char* name,
    fsa::IMultiCommitTarget* multiCommitTarget,
    std::unique_ptr<fsa::IFileSystem>&& fileSystem,
    std::unique_ptr<fsa::ICommonMountNameGenerator>&& generator,
    std::unique_ptr<fsa::ISaveDataAttributeGetter>&& attributeGetter);
  virtual ~FileSystemAccessor();

  static void* operator new(size_t size) noexcept {
    return Allocate(size);
  }

  static void operator delete(void* pointer, size_t size) noexcept {
    Deallocate(pointer, size);
  }

  const char* GetName() const {
    return m_Name;
  }

  fsa::IFileSystem* GetRawFileSystemUnsafe() {
    return m_Impl.get();
  }

  bool IsEnabledAccessLog() const {
    return m_Flags.isAccessLogEnabled;
  }

  void SetAccessLog(bool isEnabled) {
    m_Flags.isAccessLogEnabled = isEnabled;
  }

  bool IsFileDataCacheAttachable() const {
    return m_Flags.isFileDataCacheAttachable;
  }

  void SetFileDataCacheAttachable(bool isAttachable,
    IStorage* storageForPurge) {
    m_pStorageForPurgeFileDataCache = storageForPurge;
    m_Flags.isFileDataCacheAttachable = isAttachable;
  }

  void SetPathBasedFileDataCacheAttachable(bool isAttachable) {
    m_Flags.isPathBasedFileDataCacheAttachable = isAttachable;
  }

  void PurgeFileDataCache(FileDataCacheAccessor* accessor);

  Result CreateFile(const char* path, int64_t size, int option);
  Result DeleteFile(const char* path);
  Result CreateDirectory(const char* path);
  Result DeleteDirectory(const char* path);
  Result DeleteDirectoryRecursively(const char* path);
  Result CleanDirectoryRecursively(const char* path);
  Result RenameFile(const char* path, const char* newPath);
  Result RenameDirectory(const char* path, const char* newPath);
  Result GetEntryType(DirectoryEntryType* outType, const char* path);
  Result GetFreeSpaceSize(int64_t* outSize, const char* path);
  Result GetTotalSpaceSize(int64_t* outSize, const char* path);
  Result OpenFile(std::unique_ptr<FileAccessor>* outFile, const char* path,
    OpenMode mode);
  Result OpenDirectory(std::unique_ptr<DirectoryAccessor>* outDirectory,
    const char* path, OpenDirectoryMode mode);
  Result Commit();
  Result GetFileTimeStampRaw(FileTimeStampRaw* outTimeStamp,
    const char* path);
  Result GetFileSystemAttribute(fsa::FileSystemAttribute* outAttribute);
  Result QueryEntry(char* outBuffer, size_t outBufferSize,
    const char* inBuffer, size_t inBufferSize, fsa::QueryId queryId,
    const char* path);
  Result GetCommonMountName(char* name, size_t nameSize) const;
  Result GetSaveDataAttribute(SaveDataAttribute* outAttribute) const;
  nn::sf::SharedPointer<fssrv::sf::IFileSystem> GetMultiCommitTarget();

  void NotifyCloseFile(FileAccessor* file);
  void NotifyCloseDirectory(DirectoryAccessor* directory);

  static FileSystemAccessor* FromPoolNode(util::IntrusiveListNode* node) {
    return reinterpret_cast<FileSystemAccessor*>(
      reinterpret_cast<char*>(node) - PoolNodeOffset);
  }

  static const size_t PoolNodeOffset = 8;

  util::IntrusiveListNode m_PoolNode;

private:
  typedef util::IntrusiveList<FileAccessor,
    util::IntrusiveListBaseNodeTraits<FileAccessor>> FileList;
  typedef util::IntrusiveList<DirectoryAccessor,
    util::IntrusiveListBaseNodeTraits<DirectoryAccessor>> DirectoryList;

  struct Flags {
    bool isAccessLogEnabled : 1;
    bool isFileDataCacheAttachable;
    bool isPathBasedFileDataCacheAttachable;
    bool isPathBasedFileDataCacheAttached;
  };

  struct FileSystemAttributeCache {
    bool isCached : 1;
    fsa::FileSystemAttribute attribute;
  };

  Result SetUpPath(Path* outPath, const char* path);
  void DumpUnclosedAccessorList(int fileOpenModeMask, int directoryMask);

  char m_Name[MountNameLengthMax + 1];
  std::unique_ptr<fsa::IFileSystem> m_Impl;
  FileList m_OpenFiles;
  DirectoryList m_OpenDirectories;
  os::SdkMutex m_OpenListLock;
  os::SdkMutex m_FileSystemAttributeLock;
  std::unique_ptr<fsa::ICommonMountNameGenerator> m_MountNameGenerator;
  std::unique_ptr<fsa::ISaveDataAttributeGetter> m_SaveDataAttributeGetter;
  Flags m_Flags;
  fsa::IMultiCommitTarget* m_pMultiCommitTarget;
  PathFlags m_PathFlags;
  FileSystemAttributeCache m_FileSystemAttributeCache;
  IStorage* m_pStorageForPurgeFileDataCache;
};

class GlobalFileDataCacheAccessorReadableScopedPointer {
public:
  GlobalFileDataCacheAccessorReadableScopedPointer()
    : m_Pointer(nullptr), m_pLock(nullptr) {}

  ~GlobalFileDataCacheAccessorReadableScopedPointer() {
    if (m_pLock != nullptr) {
      os::ReleaseReadLock(m_pLock);
    }
  }

  FileDataCacheAccessor* Get() const {
    return m_Pointer;
  }

  void Set(FileDataCacheAccessor* pointer, os::ReaderWriterLockType* lock) {
    if (m_pLock != nullptr && m_pLock != lock) {
      os::ReleaseReadLock(m_pLock);
    }
    m_Pointer = pointer;
    m_pLock = lock;
  }

private:
  FileDataCacheAccessor* m_Pointer;
  os::ReaderWriterLockType* m_pLock;
};

bool TryGetGlobalFileDataCacheAccessor(
  GlobalFileDataCacheAccessorReadableScopedPointer* out);

class MountTable {
public:
  MountTable();

  Result Mount(std::unique_ptr<FileSystemAccessor>&& accessor);
  Result Find(FileSystemAccessor** out, const char* name);
  void Unmount(const char* name);
  bool CanAcceptMountName(const char* name);

private:
  util::IntrusiveListNode m_FileSystemList;
  os::SdkMutexType m_Mutex;
};

Result Register(std::unique_ptr<FileSystemAccessor>&& accessor);
Result Find(FileSystemAccessor** out, const char* name);
void Unregister(const char* name);

bool IsValidMountName(const char* name);
bool IsUsedReservedMountName(const char* name);
Result FindFileSystem(FileSystemAccessor** out, const char** outSubPath,
  const char* path);
fsa::IFileSystem* GetFileSystemImpl(const char* path);
Result CheckMountName(const char* name);
Result CheckMountNameAcceptingReservedMountName(const char* name);
Result Unmount(const char* name);
Result IsMounted(bool* out, const char* name);

}

}
