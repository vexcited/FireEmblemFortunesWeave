#include "nn/fs/detail/fs_file_system_proxy_service_object.hpp"
#include "nn/fs/detail/fs_log.hpp"

namespace nn::fs {

Result GetAndClearFileSystemProxyErrorInfo(
  FileSystemProxyErrorInfo* outErrorInfo) {
  NN_FS_RESULT_THROW_UNLESS_WITH_ABORT_CHECK(outErrorInfo != nullptr,
    ResultNullptrArgument());
  auto fileSystemProxy = detail::GetFileSystemProxyServiceObject();
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(fileSystemProxy->GetAndClearErrorInfo(
    nn::sf::Out<FileSystemProxyErrorInfo>(outErrorInfo)));
  return ResultSuccess();
}

}
