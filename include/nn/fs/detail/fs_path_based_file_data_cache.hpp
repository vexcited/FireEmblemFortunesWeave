#pragma once

#include <stddef.h>
#include <stdint.h>
#include <string.h>

#include "nn/fs/detail/fs_file_data_cache.hpp"
#include "nn/fs/detail/fs_newable.hpp"
#include "nn/fs/fs_file.hpp"
#include "nn/fs/fs_path.hpp"
#include "nn/os/reader_writer_lock.hpp"
#include "nn/result.hpp"
#include "nn/util/intrusive_list.hpp"

namespace nn::fs {

class Path;

namespace fsa {

class IFile;

}

}

namespace nn::fs::detail {

class FileSystemAccessor;

struct FilePathHash : public Newable {
  uint8_t data[4];
};

class PathBasedFileDataCacheScopedLock {
public:
  explicit PathBasedFileDataCacheScopedLock(os::ReaderWriterLockType* lock)
    : m_pLock(lock) {}

  PathBasedFileDataCacheScopedLock(PathBasedFileDataCacheScopedLock&& other)
    : m_pLock(other.m_pLock) {
    other.m_pLock = nullptr;
  }

  ~PathBasedFileDataCacheScopedLock() {
    if (m_pLock != nullptr) {
      os::ReleaseWriteLock(m_pLock);
    }
  }

private:
  os::ReaderWriterLockType* m_pLock;
};

PathBasedFileDataCacheScopedLock LockPathBasedFileDataCacheEntries();
void InvalidatePathBasedFileDataCacheEntries(FileSystemAccessor* accessor);
void InvalidatePathBasedFileDataCacheEntry(FileSystemAccessor* accessor,
  const Path& path);
void InvalidatePathBasedFileDataCacheEntry(FileSystemAccessor* accessor,
  const FilePathHash& hash, int index);
bool FindPathBasedFileDataCacheEntry(FilePathHash* outHash, int* outIndex,
  FileSystemAccessor* accessor, const Path& path);
Result ReadViaPathBasedFileDataCache(fsa::IFile* file, int openMode,
  FileSystemAccessor* accessor, const FilePathHash& hash, int index,
  size_t* outSize, int64_t offset, void* buffer, size_t size,
  const ReadOption& option, FileDataCacheAccessResult* outResult);
Result WriteViaPathBasedFileDataCache(fsa::IFile* file, int openMode,
  FileSystemAccessor* accessor, const FilePathHash& hash, int index,
  int64_t offset, const void* buffer, size_t size,
  const WriteOption& option);
bool IsGlobalFileDataCacheEnabled();

using CalculateFilePathHashFunction = Result (*)(FilePathHash* outHash,
  const char* path);

[[gnu::visibility("hidden")]] Result CalculateFilePathHashDefault(
  FilePathHash* outHash, const char* path);

class PathBasedFileDataCacheEntry
  : public util::IntrusiveListBaseNode<PathBasedFileDataCacheEntry>,
    public Newable {
public:
  ~PathBasedFileDataCacheEntry() {
    os::FinalizeReaderWriterLock(&m_Lock);
  }

  bool IsSameEntry(FileSystemAccessor* accessor, const FilePathHash& hash,
    int index) const {
    return memcmp(m_Hash.data, hash.data, sizeof(hash.data)) == 0 &&
      m_HashIndex == index && m_pAccessor == accessor;
  }

  FilePathHash m_Hash;
  int m_HashIndex;
  FileSystemAccessor* m_pAccessor;
  Path m_Path;
  char* m_pBuffer;
  int64_t m_Size;
  os::ReaderWriterLockType m_Lock;
};

class PathBasedFileDataCache {
public:
  using EntryList = util::IntrusiveList<PathBasedFileDataCacheEntry,
    util::IntrusiveListBaseNodeTraits<PathBasedFileDataCacheEntry>>;

  PathBasedFileDataCache();
  ~PathBasedFileDataCache();

  Result Read(fsa::IFile* file, int openMode, FileSystemAccessor* accessor,
    const FilePathHash& hash, int index, size_t* outSize, int64_t offset,
    void* buffer, size_t size, const ReadOption& option,
    FileDataCacheAccessResult* outResult);
  Result Write(fsa::IFile* file, int openMode, FileSystemAccessor* accessor,
    const FilePathHash& hash, int index, int64_t offset, const void* buffer,
    size_t size, const WriteOption& option);
  PathBasedFileDataCacheScopedLock Lock() {
    PathBasedFileDataCacheScopedLock lock(&m_Lock);
    os::AcquireWriteLock(&m_Lock);
    return lock;
  }

  bool Add(std::unique_ptr<PathBasedFileDataCacheEntry>&& entry);
  bool Remove(FileSystemAccessor* accessor, const FilePathHash& hash,
    int index);
  void Remove(FileSystemAccessor* accessor);
  bool Remove(FileSystemAccessor* accessor, const FilePathHash& hash,
    const Path& path);
  bool FindHashIndexOrNextImpl(int* outIndex, FileSystemAccessor* accessor,
    const FilePathHash& hash, const Path& path);
  bool FindHashIndexOrNext(int* outIndex, FileSystemAccessor* accessor,
    const FilePathHash& hash, const Path& path);
  bool FindHashIndex(int* outIndex, FileSystemAccessor* accessor,
    const FilePathHash& hash, const Path& path);

  void SetDefaultCalculateHashFunc() {
    m_CalculateHashFunction = CalculateFilePathHashDefault;
  }

  void SetCalculateHashFunc(CalculateFilePathHashFunction function) {
    m_CalculateHashFunction = function;
  }

  Result CalculateHash(FilePathHash* outHash, const char* path) const {
    return m_CalculateHashFunction(outHash, path);
  }

private:
  EntryList m_EntryList;
  os::ReaderWriterLockType m_Lock;
  CalculateFilePathHashFunction m_CalculateHashFunction;
};

Result GetFilePathHash(FilePathHash* outHash, const Path& path);
void SetDefaultCalculateHashFunc();
void SetCalculateHashFunc(CalculateFilePathHashFunction function);

}
