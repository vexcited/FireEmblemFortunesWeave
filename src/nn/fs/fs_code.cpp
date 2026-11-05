#include "nn/fs/fs_code.hpp"

#include <memory>

#include "nn/fs/detail/fs_file_system_accessor.hpp"
#include "nn/fs/detail/fs_file_system_service_object_adapter.hpp"
#include "nn/fs/detail/fs_log.hpp"
#include "nn/fs/detail/fs_program_registry_service_object.hpp"
#include "nn/fs/fsa/fs_registrar.hpp"

namespace nn::fs {

Result MountCode(CodeVerificationData* outVerificationData, const char* name,
  ContentAttributes attributes, ncm::ProgramId programId,
  ncm::StorageId storageId) {
  auto mount = [&]() -> Result {
    NN_FS_RESULT_DO(detail::CheckMountName(name));
    auto fileSystemProxy = detail::GetFileSystemProxyForLoaderServiceObject();
    NN_FS_RESULT_DO(fileSystemProxy->SetCurrentProcess(0));
    nn::sf::SharedPointer<fssrv::sf::IFileSystem> fileSystem;
    NN_FS_RESULT_DO(fileSystemProxy->OpenCodeFileSystem(
      nn::sf::Out<nn::sf::SharedPointer<fssrv::sf::IFileSystem>>(&fileSystem),
      nn::sf::OutBuffer(outVerificationData, sizeof(CodeVerificationData)),
      attributes, programId, storageId));
    std::unique_ptr<fsa::IFileSystem> adapter(
      new detail::FileSystemServiceObjectAdapter(std::move(fileSystem)));
    NN_FS_RESULT_THROW_UNLESS(adapter != nullptr,
      ResultAllocationMemoryFailedInCodeA());
    return fsa::Register(name, std::move(adapter));
  };
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(mount());
  return ResultSuccess();
}

}
