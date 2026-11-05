#include "nn/fs/detail/fs_file_data_cache.hpp"

namespace nn::fs::detail {

FileDataCacheAccessor::FileDataCacheAccessor(IFileDataCache* cache)
  : m_pCache(cache) {}

Result FileDataCacheAccessor::Read(fsa::IFile* file, size_t* outSize,
  int64_t offset, void* buffer, size_t size, const ReadOption& option,
  FileDataCacheAccessResult* outResult) {
  NN_FS_RESULT_THROW_UNLESS(outSize != nullptr, ResultNullptrArgument());
  if (size == 0) {
    *outSize = 0;
    outResult->isReadSkipped = true;
    return ResultSuccess();
  }
  NN_FS_RESULT_THROW_UNLESS(buffer != nullptr, ResultNullptrArgument());
  NN_FS_RESULT_THROW_UNLESS(offset >= 0, ResultInvalidOffset());
  NN_FS_RESULT_THROW_UNLESS(static_cast<int64_t>(size) >= 0,
    ResultInvalidSize());
  NN_FS_RESULT_THROW_UNLESS(
    static_cast<size_t>(INT64_MAX - offset) >= size, ResultOutOfRange());
  return m_pCache->Read(file, outSize, offset, buffer, size, option,
    outResult);
}

void FileDataCacheAccessor::Purge(IStorage* storage) {
  m_pCache->Purge(storage);
}

}
