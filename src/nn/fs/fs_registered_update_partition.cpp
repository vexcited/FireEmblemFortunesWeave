#include <memory>

#include "nn/fs/detail/fs_file_system_accessor.hpp"
#include "nn/fs/detail/fs_file_system_proxy_service_object.hpp"
#include "nn/fs/detail/fs_file_system_service_object_adapter.hpp"
#include "nn/fs/detail/fs_log.hpp"
#include "nn/fs/detail/fs_newable.hpp"
#include "nn/fs/fsa/fs_registrar.hpp"
#include "nn/util/string_util.hpp"

namespace nn::fs {

namespace {

const char RegisteredUpdatePartitionMountName[] = "@RegUpdate";

class RegisteredUpdatePartitionCommonMountNameGenerator
  : public fsa::ICommonMountNameGenerator, public detail::Newable {
public:
  Result GenerateCommonMountName(char* name, size_t nameSize) override {
    util::SNPrintf(name, nameSize, "%s:", RegisteredUpdatePartitionMountName);
    return ResultSuccess();
  }
};

}

Result MountRegisteredUpdatePartition(const char* name) {
  auto mount = [&]() -> Result {
    NN_FS_RESULT_DO(detail::CheckMountNameAcceptingReservedMountName(name));
    auto fileSystemProxy = detail::GetFileSystemProxyServiceObject();
    nn::sf::SharedPointer<fssrv::sf::IFileSystem> fileSystem;
    NN_FS_RESULT_DO(fileSystemProxy->OpenRegisteredUpdatePartition(
      nn::sf::Out<nn::sf::SharedPointer<fssrv::sf::IFileSystem>>(
        &fileSystem)));
    std::unique_ptr<fsa::IFileSystem> adapter(
      new detail::FileSystemServiceObjectAdapter(std::move(fileSystem)));
    NN_FS_RESULT_THROW_UNLESS(adapter != nullptr,
      ResultAllocationMemoryFailedNew());
    std::unique_ptr<fsa::ICommonMountNameGenerator> generator(
      new RegisteredUpdatePartitionCommonMountNameGenerator());
    NN_FS_RESULT_THROW_UNLESS(generator != nullptr,
      ResultAllocationMemoryFailedNew());
    return fsa::Register(name, std::move(adapter), std::move(generator));
  };
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(mount());
  return ResultSuccess();
}

}
