#include "nn/fs/fs_romfs_file_data_cache.hpp"

#include <new>

#include "nn/diag/diag_abort.hpp"
#include "nn/fs/fs_romfs_file_system.hpp"

namespace nn::fs {

RomFsFileDataCache::RomFsFileDataCache() : m_pFileDataCacheSystem(nullptr) {}

RomFsFileDataCache::~RomFsFileDataCache() {
  Finalize();
}

Result RomFsFileDataCache::Initialize(void* buffer, size_t bufferSize,
  ReplacementAlgorithm replacementAlgorithm,
  PrefetchAlgorithm prefetchAlgorithm) {
  uintptr_t bufferEnd = 0;
  NN_ABORT_UNLESS(!__builtin_add_overflow(reinterpret_cast<uintptr_t>(buffer),
    bufferSize, &bufferEnd));
  const uintptr_t systemAddress =
    (reinterpret_cast<uintptr_t>(buffer) + 7) & ~static_cast<uintptr_t>(7);
  const uintptr_t cacheAddress =
    systemAddress + sizeof(detail::FileDataCacheSystem);
  NN_FS_RESULT_THROW_UNLESS(cacheAddress <= bufferEnd,
    ResultFileDataCacheMemorySizeTooSmall());

  m_pFileDataCacheSystem = new (reinterpret_cast<void*>(systemAddress))
    detail::FileDataCacheSystem();
  const Result result = m_pFileDataCacheSystem->Initialize(
    reinterpret_cast<void*>(cacheAddress), bufferEnd - cacheAddress,
    replacementAlgorithm, prefetchAlgorithm);
  if (IsFailure(result)) {
    m_pFileDataCacheSystem->~FileDataCacheSystem();
    m_pFileDataCacheSystem = nullptr;
    return result;
  }
  return ResultSuccess();
}

Result RomFsFileDataCache::Initialize(void* buffer, size_t bufferSize) {
  return Initialize(buffer, bufferSize, ReplacementAlgorithm_Default,
    PrefetchAlgorithm_Default);
}

void RomFsFileDataCache::Finalize() {
  if (m_pFileDataCacheSystem != nullptr) {
    m_pFileDataCacheSystem->~FileDataCacheSystem();
    m_pFileDataCacheSystem = nullptr;
  }
}

Result RomFsFileDataCache::DoRead(fsa::IFile* file, size_t* outSize,
  int64_t offset, void* buffer, size_t size, const ReadOption& option,
  detail::FileDataCacheAccessResult* outResult) {
  static_cast<void>(option);
  int64_t fileSize = 0;
  NN_FS_RESULT_DO(file->GetSize(&fileSize));
  NN_FS_RESULT_THROW_UNLESS(offset <= fileSize, ResultOutOfRange());
  const size_t readSize = size < static_cast<size_t>(fileSize - offset)
    ? size : static_cast<size_t>(fileSize - offset);
  if (readSize == 0) {
    *outSize = 0;
    outResult->isReadSkipped = true;
    return ResultSuccess();
  }
  detail::RomFsFile* romFsFile = static_cast<detail::RomFsFile*>(file);
  const int64_t fileOffset = romFsFile->GetOffset();
  const int64_t romFsFileSize = romFsFile->GetSize();
  NN_FS_RESULT_DO(m_pFileDataCacheSystem->Read(romFsFile->GetStorage(),
    fileOffset + offset, buffer, readSize, fileOffset,
    fileOffset + romFsFileSize, outResult));
  *outSize = readSize;
  return ResultSuccess();
}

void RomFsFileDataCache::Purge(IStorage* storage) {
  m_pFileDataCacheSystem->Purge(storage);
}

}
