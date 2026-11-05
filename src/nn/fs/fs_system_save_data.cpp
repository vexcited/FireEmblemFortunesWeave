#include "nn/fs/detail/fs_file_system_proxy_service_object.hpp"
#include "nn/fs/detail/fs_file_system_service_object_adapter.hpp"
#include "nn/fs/detail/fs_log.hpp"
#include "nn/fs/fs_save_data.hpp"
#include "nn/fs/fsa/fs_registrar.hpp"

namespace nn::fs {

Result MountSystemSaveData(const char* name, uint64_t saveDataId) {
  return MountSystemSaveData(name, SaveDataSpaceId::System, saveDataId,
    UserId{});
}

Result MountSystemSaveData(const char* name, uint64_t saveDataId,
  UserId userId) {
  return MountSystemSaveData(name, SaveDataSpaceId::System, saveDataId,
    userId);
}

Result MountSystemSaveData(const char* name, SaveDataSpaceId spaceId,
  uint64_t saveDataId) {
  return MountSystemSaveData(name, spaceId, saveDataId, UserId{});
}

Result MountSystemSaveData(const char* name, SaveDataSpaceId spaceId,
  uint64_t saveDataId, UserId userId) {
  auto mount = [&]() -> Result {
    NN_FS_RESULT_DO(detail::CheckMountName(name));
    auto fileSystemProxy = detail::GetFileSystemProxyServiceObject();
    SaveDataAttribute attribute = {};
    NN_FS_RESULT_DO(SaveDataAttribute::Make(&attribute,
      SaveDataReferenceId{0}, SaveDataType::System, userId, saveDataId));
    nn::sf::SharedPointer<fssrv::sf::IFileSystem> fileSystem;
    NN_FS_RESULT_DO(fileSystemProxy->OpenSaveDataFileSystemBySystemSaveDataId(
      nn::sf::Out<nn::sf::SharedPointer<fssrv::sf::IFileSystem>>(&fileSystem),
      spaceId, attribute));
    std::unique_ptr<detail::FileSystemServiceObjectAdapter> adapter(
      new detail::FileSystemServiceObjectAdapter(std::move(fileSystem)));
    NN_FS_RESULT_THROW_UNLESS(adapter != nullptr,
      ResultAllocationMemoryFailedInSystemSaveDataA());
    // Only the system space joins multi commits.
    if (spaceId == SaveDataSpaceId::System) {
      fsa::IMultiCommitTarget* multiCommitTarget = adapter.get();
      return fsa::Register(name, multiCommitTarget, std::move(adapter),
        nullptr, false, nullptr, false);
    }
    return fsa::Register(name, std::move(adapter));
  };
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(mount());
  return ResultSuccess();
}

}
