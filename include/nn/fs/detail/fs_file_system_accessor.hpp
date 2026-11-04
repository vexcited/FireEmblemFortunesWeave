#pragma once

#include <stddef.h>
#include <stdint.h>

#include <memory>

#include "nn/fs/detail/fs_memory.hpp"
#include "nn/fs/fs_istorage.hpp"
#include "nn/fs/fs_result.hpp"
#include "nn/fs/fs_types.hpp"
#include "nn/os/reader_writer_lock.hpp"
#include "nn/os/synchronization.hpp"
#include "nn/util/intrusive_list.hpp"

namespace nn::fs {

namespace fsa {

class IFileSystem;
class IFile;
class IDirectory;
struct FileSystemAttribute;

enum class QueryId {
  SetConcatenationFileAttribute = 0,
  UpdateMac = 1,
  IsSignedSystemPartitionOnSdCardValid = 2,
  QueryUnpreparedFileInformation = 3,
};

}

struct FileHandle {
  void* handle;
};

struct DirectoryHandle {
  void* handle;
};

struct ReadOption {
  int32_t value;
};

struct WriteOption {
  int32_t flags;

  bool HasFlushFlag() const {
    return (flags & 1) != 0;
  }
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

class FileAccessor {
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
  Result OperateRange(void* outBuffer, size_t outBufferSize,
    OperationId operationId,
    int64_t offset, int64_t size, const void* inBuffer, size_t inBufferSize);

private:
  char m_Storage[64];
};

class DirectoryAccessor {
public:
  ~DirectoryAccessor();

  static void operator delete(void* pointer, size_t size) noexcept {
    Deallocate(pointer, size);
  }

  Result Read(int64_t* outCount, DirectoryEntry* entries, int64_t count);
  Result GetEntryCount(int64_t* outCount);

private:
  char m_Storage[32];
};

class FileSystemAccessor {
public:
  virtual ~FileSystemAccessor();

  const char* GetName() const {
    return m_Name;
  }

  fsa::IFileSystem* GetRawFileSystemUnsafe() {
    return m_Impl.get();
  }

  bool IsEnabledAccessLog() const {
    return m_IsAccessLogEnabled;
  }

  bool IsPathBasedFileDataCacheAttachable() const {
    return m_IsPathBasedFileDataCacheAttachable;
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

  static FileSystemAccessor* FromPoolNode(util::IntrusiveListNode* node) {
    return reinterpret_cast<FileSystemAccessor*>(
      reinterpret_cast<char*>(node) - PoolNodeOffset);
  }

  static const size_t PoolNodeOffset = 8;

  util::IntrusiveListNode m_PoolNode;

private:
  char m_Name[MountNameLengthMax + 1];
  std::unique_ptr<fsa::IFileSystem> m_Impl;
  char m_Reserved[0x68 - 0x30];
  bool m_IsAccessLogEnabled : 1;
  bool m_IsPathBasedFileDataCacheAttachable;
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
