#include "nn/fs/detail/fs_file_system_accessor.hpp"
#include "nn/fs/detail/fs_file_system_proxy_service_object.hpp"
#include "nn/fs/detail/fs_file_system_service_object_adapter.hpp"
#include "nn/fs/detail/fs_log.hpp"
#include "nn/fs/fs_path_utility.hpp"
#include "nn/fs/fsa/fs_registrar.hpp"

namespace nn::fs {

Result MountApplicationPackage(const char* name, const char* path) {
  auto mount = [&]() -> Result {
    NN_FS_RESULT_DO(detail::CheckMountName(name));
    NN_FS_RESULT_THROW_UNLESS(path != nullptr, ResultNullptrArgument());
    fssrv::sf::FspPath fspPath = {};
    NN_FS_RESULT_DO(ConvertToFspPath(&fspPath, path));
    auto fileSystemProxy = detail::GetFileSystemProxyServiceObject();
    nn::sf::SharedPointer<fssrv::sf::IFileSystem> fileSystem;
    NN_FS_RESULT_DO(fileSystemProxy->OpenFileSystemWithId(
      nn::sf::Out<nn::sf::SharedPointer<fssrv::sf::IFileSystem>>(&fileSystem),
      fspPath, ContentAttributes_None, 0,
      static_cast<uint32_t>(detail::FileSystemProxyType::Package)));
    std::unique_ptr<detail::FileSystemServiceObjectAdapter> adapter(
      new detail::FileSystemServiceObjectAdapter(std::move(fileSystem)));
    NN_FS_RESULT_THROW_UNLESS(adapter != nullptr,
      ResultAllocationMemoryFailedInApplicationA());
    return fsa::Register(name, std::move(adapter));
  };
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(mount());
  return ResultSuccess();
}

}
