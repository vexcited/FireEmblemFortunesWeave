#pragma once

#include <stddef.h>
#include <stdint.h>

#include "nn/fs/detail/fs_file_data_cache.hpp"

namespace nn::fs {

class RomFsFileDataCache : public detail::IFileDataCache {
public:
  RomFsFileDataCache();
  virtual ~RomFsFileDataCache() override;

  Result Initialize(void* buffer, size_t bufferSize,
    ReplacementAlgorithm replacementAlgorithm,
    PrefetchAlgorithm prefetchAlgorithm);
  Result Initialize(void* buffer, size_t bufferSize);

  virtual void Purge(IStorage* storage) override;
  virtual void Finalize() override;

private:
  virtual Result DoRead(fsa::IFile* file, size_t* outSize, int64_t offset,
    void* buffer, size_t size, const ReadOption& option,
    detail::FileDataCacheAccessResult* outResult) override;

  detail::FileDataCacheSystem* m_pFileDataCacheSystem;
};

}
