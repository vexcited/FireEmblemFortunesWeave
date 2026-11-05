#include <string.h>

#include "nn/diag/diag_hashed_trace_context.hpp"
#include "nn/fs/detail/fs_path_based_file_data_cache.hpp"
#include "nn/fs/fs_types.hpp"

namespace nn::fs::detail {

Result UpdateResult(Result result, diag::HashedTraceContextImpl context);

namespace {

constexpr Result ResultReadNotPermitted() {
  return MakeResult(6202);
}

constexpr Result ResultWriteNotPermitted() {
  return MakeResult(6203);
}

const diag::HashedTraceContextImpl ReadOutOfRangeTraceContext = {
  0xAAA92CF773D61BF7
};

const diag::HashedTraceContextImpl WriteNotPermittedTraceContext = {
  0xE0CA5A74AD20A5F3
};

const diag::HashedTraceContextImpl WriteOffsetOutOfRangeTraceContext = {
  0xF301B503C669B353
};

const diag::HashedTraceContextImpl WriteSizeOutOfRangeTraceContext = {
  0x09F9B6C9F32E47C9
};

const size_t FilePathHashLengthMax = 769;
const uint32_t FilePathHashSeed = 5381;

void DeleteEntry(PathBasedFileDataCacheEntry* entry) {
  delete entry;
}

void RemoveEntry(PathBasedFileDataCacheEntry& entry) {
  PathBasedFileDataCache::EntryList::erase(entry);
  // Waits until no reader holds the entry before releasing it.
  os::AcquireWriteLock(&entry.m_Lock);
  os::ReleaseWriteLock(&entry.m_Lock);
  DeleteEntry(&entry);
}

}

Result CalculateFilePathHashDefault(FilePathHash* outHash,
  const char* path) {
  *reinterpret_cast<uint32_t*>(outHash->data) = 0;
  uint32_t hash = FilePathHashSeed;
  for (size_t i = 0; path[i] != '\0'; ++i) {
    hash = (hash * 33) ^ static_cast<uint8_t>(path[i]);
    if (i >= FilePathHashLengthMax - 1) {
      break;
    }
  }
  *reinterpret_cast<uint32_t*>(outHash->data) = hash;
  return ResultSuccess();
}

PathBasedFileDataCache::PathBasedFileDataCache() {
  os::InitializeReaderWriterLock(&m_Lock);
  SetDefaultCalculateHashFunc();
}

PathBasedFileDataCache::~PathBasedFileDataCache() {
  os::AcquireWriteLock(&m_Lock);
  while (!m_EntryList.empty()) {
    auto it = m_EntryList.end();
    --it;
    if (it != m_EntryList.end()) {
      EntryList::erase(*it);
    }
    DeleteEntry(&*it);
  }
  os::ReleaseWriteLock(&m_Lock);
  os::FinalizeReaderWriterLock(&m_Lock);
}

bool PathBasedFileDataCache::Remove(FileSystemAccessor* accessor,
  const FilePathHash& hash, int index) {
  for (auto& entry : m_EntryList) {
    if (entry.IsSameEntry(accessor, hash, index)) {
      RemoveEntry(entry);
      return true;
    }
  }
  return false;
}

bool PathBasedFileDataCache::Add(
  std::unique_ptr<PathBasedFileDataCacheEntry>&& entry) {
  os::AcquireWriteLock(&m_Lock);
  bool isAdded = true;
  for (auto& other : m_EntryList) {
    if (other.IsSameEntry(entry->m_pAccessor, entry->m_Hash,
      entry->m_HashIndex)) {
      isAdded = false;
      break;
    }
  }
  if (isAdded) {
    m_EntryList.push_back(*entry.release());
  }
  os::ReleaseWriteLock(&m_Lock);
  return isAdded;
}

void PathBasedFileDataCache::Remove(FileSystemAccessor* accessor) {
  for (auto it = m_EntryList.begin(); it != m_EntryList.end();) {
    auto& entry = *it;
    ++it;
    if (entry.m_pAccessor == accessor) {
      RemoveEntry(entry);
    }
  }
}

bool PathBasedFileDataCache::Remove(FileSystemAccessor* accessor,
  const FilePathHash& hash, const Path& path) {
  for (auto& entry : m_EntryList) {
    if (memcmp(entry.m_Hash.data, hash.data, sizeof(hash.data)) == 0 &&
      entry.m_pAccessor == accessor &&
      strcmp(path.GetString(), entry.m_Path.GetString()) == 0) {
      RemoveEntry(entry);
      return true;
    }
  }
  return false;
}

bool PathBasedFileDataCache::FindHashIndexOrNextImpl(int* outIndex,
  FileSystemAccessor* accessor, const FilePathHash& hash, const Path& path) {
  int maxIndex = 0;
  for (auto& entry : m_EntryList) {
    if (memcmp(entry.m_Hash.data, hash.data, sizeof(hash.data)) == 0 &&
      entry.m_pAccessor == accessor) {
      if (strcmp(path.GetString(), entry.m_Path.GetString()) == 0) {
        *outIndex = entry.m_HashIndex;
        return true;
      }
      if (entry.m_HashIndex > maxIndex) {
        maxIndex = entry.m_HashIndex;
      }
    }
  }
  *outIndex = maxIndex + 1;
  return false;
}

bool PathBasedFileDataCache::FindHashIndexOrNext(int* outIndex,
  FileSystemAccessor* accessor, const FilePathHash& hash, const Path& path) {
  os::AcquireWriteLock(&m_Lock);
  const bool isFound = FindHashIndexOrNextImpl(outIndex, accessor, hash,
    path);
  os::ReleaseWriteLock(&m_Lock);
  return isFound;
}

bool PathBasedFileDataCache::FindHashIndex(int* outIndex,
  FileSystemAccessor* accessor, const FilePathHash& hash, const Path& path) {
  os::AcquireReadLock(&m_Lock);
  const bool isFound = FindHashIndexOrNextImpl(outIndex, accessor, hash,
    path);
  os::ReleaseReadLock(&m_Lock);
  return isFound;
}

Result PathBasedFileDataCache::Read(fsa::IFile* file, int openMode,
  FileSystemAccessor* accessor, const FilePathHash& hash, int index,
  size_t* outSize, int64_t offset, void* buffer, size_t size,
  const ReadOption& option, FileDataCacheAccessResult* outResult) {
  NN_FS_RESULT_THROW_UNLESS(outSize != nullptr, ResultNullptrArgument());
  if (size == 0) {
    *outSize = 0;
    return ResultSuccess();
  }
  NN_FS_RESULT_THROW_UNLESS(buffer != nullptr, ResultNullptrArgument());
  NN_FS_RESULT_THROW_UNLESS(offset >= 0, ResultInvalidOffset());
  NN_FS_RESULT_THROW_UNLESS(static_cast<int64_t>(size) >= 0,
    ResultInvalidSize());
  NN_FS_RESULT_THROW_UNLESS(static_cast<int64_t>(size) <= INT64_MAX - offset,
    ResultOutOfRange());
  NN_FS_RESULT_THROW_UNLESS((openMode & OpenMode_Read) != 0,
    ResultReadNotPermitted());

  os::AcquireReadLock(&m_Lock);
  for (auto& entry : m_EntryList) {
    if (!entry.IsSameEntry(accessor, hash, index)) {
      continue;
    }
    const int64_t entrySize = entry.m_Size;
    if (entrySize < offset) {
      const Result result = UpdateResult(ResultOutOfRange(),
        ReadOutOfRangeTraceContext);
      os::ReleaseReadLock(&m_Lock);
      return result;
    }
    const char* entryBuffer = entry.m_pBuffer;
    if (os::TryAcquireReadLock(&entry.m_Lock)) {
      const int64_t restSize = entrySize - offset;
      const size_t readSize = restSize < static_cast<int64_t>(size)
        ? static_cast<size_t>(restSize) : size;
      memcpy(buffer, entryBuffer + offset, readSize);
      *outSize = readSize;
      outResult->isReadSkipped = true;
      os::ReleaseReadLock(&entry.m_Lock);
      os::ReleaseReadLock(&m_Lock);
      return ResultSuccess();
    }
    break;
  }
  os::ReleaseReadLock(&m_Lock);
  outResult->isReadSkipped = false;
  return file->Read(outSize, offset, buffer, size, option);
}

Result PathBasedFileDataCache::Write(fsa::IFile* file, int openMode,
  FileSystemAccessor* accessor, const FilePathHash& hash, int index,
  int64_t offset, const void* buffer, size_t size,
  const WriteOption& option) {
  const Result result = [&]() -> Result {
    if (size == 0) {
      if (option.HasFlushFlag()) {
        NN_FS_RESULT_DO(file->Flush());
      }
      return ResultSuccess();
    }
    NN_FS_RESULT_DO(file->Write(offset, buffer, size, option));
    if ((openMode & OpenMode_Write) == 0) {
      return UpdateResult(ResultWriteNotPermitted(),
        WriteNotPermittedTraceContext);
    }

    os::AcquireReadLock(&m_Lock);
    for (auto& entry : m_EntryList) {
      if (!entry.IsSameEntry(accessor, hash, index)) {
        continue;
      }
      const int64_t entrySize = entry.m_Size;
      Result updateResult;
      if (offset > entrySize) {
        updateResult = UpdateResult(ResultOutOfRange(),
          WriteOffsetOutOfRangeTraceContext);
      }
      else if (offset + static_cast<int64_t>(size) <= entrySize) {
        char* entryBuffer = entry.m_pBuffer;
        os::AcquireWriteLock(&entry.m_Lock);
        memcpy(entryBuffer + offset, buffer, size);
        os::ReleaseWriteLock(&entry.m_Lock);
        break;
      }
      else {
        updateResult = UpdateResult(ResultOutOfRange(),
          WriteSizeOutOfRangeTraceContext);
      }
      os::ReleaseReadLock(&m_Lock);
      return updateResult;
    }
    os::ReleaseReadLock(&m_Lock);
    return ResultSuccess();
  }();
  if (IsFailure(result)) {
    os::AcquireWriteLock(&m_Lock);
    Remove(accessor, hash, index);
    os::ReleaseWriteLock(&m_Lock);
  }
  return result;
}

}
