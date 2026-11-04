#include "nn/fs/detail/fs_file_system_accessor.hpp"
#include "nn/fs/detail/fs_file_system_proxy_service_object.hpp"
#include "nn/fs/detail/fs_file_system_service_object_adapter.hpp"
#include "nn/fs/detail/fs_log.hpp"
#include "nn/fs/fsa/fs_registrar.hpp"

namespace nn::fs {

Result MountImageDirectory(const char* name, ImageDirectoryId id) {
  auto mount = [&]() -> Result {
    NN_FS_RESULT_DO(detail::CheckMountName(name));
    auto fileSystemProxy = detail::GetFileSystemProxyServiceObject();
    nn::sf::SharedPointer<fssrv::sf::IFileSystem> fileSystem;
    NN_FS_RESULT_DO(fileSystemProxy->OpenImageDirectoryFileSystem(
      nn::sf::Out<nn::sf::SharedPointer<fssrv::sf::IFileSystem>>(&fileSystem),
      static_cast<uint32_t>(id)));
    std::unique_ptr<detail::FileSystemServiceObjectAdapter> adapter(
      new detail::FileSystemServiceObjectAdapter(std::move(fileSystem)));
    NN_FS_RESULT_THROW_UNLESS(adapter != nullptr,
      ResultAllocationMemoryFailedInImageDirectoryA());
    return fsa::Register(name, std::move(adapter));
  };
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(mount());
  return ResultSuccess();
}

}
