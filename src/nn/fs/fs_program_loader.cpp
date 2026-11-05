#include "nn/fs/detail/fs_log.hpp"
#include "nn/fs/detail/fs_program_registry_service_object.hpp"
#include "nn/fs/fs_program.hpp"

namespace nn::fs {

Result IsArchivedProgram(bool* outValue, os::ProcessId processId) {
  auto fileSystemProxy = detail::GetFileSystemProxyForLoaderServiceObject();
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(fileSystemProxy->IsArchivedProgram(
    nn::sf::Out<bool>(outValue), processId.value));
  return ResultSuccess();
}

}
