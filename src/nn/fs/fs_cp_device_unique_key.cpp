#include "nn/fs/detail/fs_file_system_proxy_service_object.hpp"
#include "nn/fs/detail/fs_log.hpp"
#include "nn/fs/fs_rights_id.hpp"

namespace nn::fs {

Result RegisterCpDeviceUniqueKey(const spl::WrappedKey256* key) {
  NN_FS_RESULT_THROW_UNLESS_WITH_ABORT_CHECK(key != nullptr,
    ResultNullptrArgument());
  auto fileSystemProxy = detail::GetFileSystemProxyServiceObject();
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(fileSystemProxy->RegisterCpDeviceUniqueKey(
    nn::sf::InBuffer(key, sizeof(*key))));
  return ResultSuccess();
}

}
