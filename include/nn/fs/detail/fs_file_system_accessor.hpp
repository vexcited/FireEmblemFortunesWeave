#pragma once

#include <stddef.h>
#include <stdint.h>

#include <memory>

#include "nn/fs/fs_result.hpp"
#include "nn/os/reader_writer_lock.hpp"
#include "nn/os/synchronization.hpp"
#include "nn/util/intrusive_list.hpp"

namespace nn::fs {

namespace fsa {

class IFileSystem;

}

namespace detail {

const size_t MountNameLengthMax = 15;

class FileDataCacheAccessor;

class FileSystemAccessor {
public:
  virtual ~FileSystemAccessor();

  const char* GetName() const {
    return m_Name;
  }

  fsa::IFileSystem* GetRawFileSystemUnsafe() {
    return m_Impl.get();
  }

  bool IsPathBasedFileDataCacheAttachable() const {
    return m_IsPathBasedFileDataCacheAttachable;
  }

  void PurgeFileDataCache(FileDataCacheAccessor* accessor);
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
