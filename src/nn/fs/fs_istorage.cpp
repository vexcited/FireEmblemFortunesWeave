#include "nn/fs/fs_istorage.hpp"

#include <limits>

namespace nn::fs {

Result IStorage::CheckAccessRange(int64_t offset, int64_t size,
  int64_t totalSize) {
  NN_FS_RESULT_THROW_UNLESS(offset >= 0, ResultInvalidOffset());
  NN_FS_RESULT_THROW_UNLESS(size >= 0, ResultInvalidSize());
  NN_FS_RESULT_THROW_UNLESS(
    offset <= std::numeric_limits<int64_t>::max() - size, ResultOutOfRange());
  NN_FS_RESULT_THROW_UNLESS(offset + size <= totalSize, ResultOutOfRange());
  return ResultSuccess();
}

Result IStorage::CheckOffsetAndSize(int64_t offset, int64_t size) {
  NN_FS_RESULT_THROW_UNLESS(offset >= 0, ResultInvalidOffset());
  NN_FS_RESULT_THROW_UNLESS(size >= 0, ResultInvalidSize());
  NN_FS_RESULT_THROW_UNLESS(
    offset <= std::numeric_limits<int64_t>::max() - size, ResultOutOfRange());
  return ResultSuccess();
}

}
