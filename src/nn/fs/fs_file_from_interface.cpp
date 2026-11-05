#include "nn/fs/detail/fs_file_system_accessor.hpp"
#include "nn/fs/detail/fs_log.hpp"
#include "nn/fs/fs_file.hpp"
#include "nn/fs/fsa/fs_ifile.hpp"

namespace nn::fs {

Result OpenFile(FileHandle* outHandle, std::unique_ptr<fsa::IFile>&& file,
  int mode) {
  NN_FS_RESULT_THROW_UNLESS_WITH_ABORT_CHECK(outHandle != nullptr,
    ResultNullptrArgument());

  auto accessor = new detail::FileAccessor(std::move(file), nullptr, mode);
  NN_FS_RESULT_THROW_UNLESS_WITH_ABORT_CHECK(accessor != nullptr,
    ResultAllocationMemoryFailedNew());
  outHandle->handle = accessor;
  return ResultSuccess();
}

}
