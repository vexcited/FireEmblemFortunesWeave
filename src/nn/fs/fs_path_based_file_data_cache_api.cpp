#include "nn/diag/diag_abort.hpp"
#include "nn/fs/detail/fs_path_based_file_data_cache.hpp"

namespace nn::fs::detail {

namespace {

PathBasedFileDataCache& GetPathBasedFileDataCache() {
  static PathBasedFileDataCache s_Cache;
  return s_Cache;
}

}

Result GetFilePathHash(FilePathHash* outHash, const Path& path) {
  return GetPathBasedFileDataCache().CalculateHash(outHash,
    path.GetString());
}

void SetDefaultCalculateHashFunc() {
  GetPathBasedFileDataCache().SetDefaultCalculateHashFunc();
}

void SetCalculateHashFunc(CalculateFilePathHashFunction function) {
  GetPathBasedFileDataCache().SetCalculateHashFunc(function);
}

PathBasedFileDataCacheScopedLock LockPathBasedFileDataCacheEntries() {
  return GetPathBasedFileDataCache().Lock();
}

void InvalidatePathBasedFileDataCacheEntries(FileSystemAccessor* accessor) {
  GetPathBasedFileDataCache().Remove(accessor);
}

void InvalidatePathBasedFileDataCacheEntry(FileSystemAccessor* accessor,
  const FilePathHash& hash, int index) {
  GetPathBasedFileDataCache().Remove(accessor, hash, index);
}

void InvalidatePathBasedFileDataCacheEntry(FileSystemAccessor* accessor,
  const Path& path) {
  FilePathHash hash = {};
  NN_ABORT_UNLESS_RESULT_SUCCESS(GetPathBasedFileDataCache().CalculateHash(
    &hash, path.GetString()));
  GetPathBasedFileDataCache().Remove(accessor, hash, path);
}

bool FindPathBasedFileDataCacheEntry(FilePathHash* outHash, int* outIndex,
  FileSystemAccessor* accessor, const Path& path) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(GetPathBasedFileDataCache().CalculateHash(
    outHash, path.GetString()));
  return GetPathBasedFileDataCache().FindHashIndex(outIndex, accessor,
    *outHash, path);
}

Result ReadViaPathBasedFileDataCache(fsa::IFile* file, int openMode,
  FileSystemAccessor* accessor, const FilePathHash& hash, int index,
  size_t* outSize, int64_t offset, void* buffer, size_t size,
  const ReadOption& option, FileDataCacheAccessResult* outResult) {
  return GetPathBasedFileDataCache().Read(file, openMode, accessor, hash,
    index, outSize, offset, buffer, size, option, outResult);
}

Result WriteViaPathBasedFileDataCache(fsa::IFile* file, int openMode,
  FileSystemAccessor* accessor, const FilePathHash& hash, int index,
  int64_t offset, const void* buffer, size_t size,
  const WriteOption& option) {
  return GetPathBasedFileDataCache().Write(file, openMode, accessor, hash,
    index, offset, buffer, size, option);
}

}
