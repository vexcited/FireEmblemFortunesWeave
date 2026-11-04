#include "nn/fs/detail/fs_file_system_accessor.hpp"
#include "nn/fs/detail/fs_file_system_proxy_service_object.hpp"
#include "nn/fs/detail/fs_file_system_service_object_adapter.hpp"
#include "nn/fs/detail/fs_log.hpp"
#include "nn/fs/fsa/fs_registrar.hpp"

namespace nn::fs {

namespace {

const uint32_t BaseFileSystemIdCalibrationHtml = 6;

}

Result MountBaseFileSystem(const char* name, BaseFileSystemId id) {
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(detail::CheckMountName(name));
  nn::sf::SharedPointer<fssrv::sf::IFileSystem> fileSystem;
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(
    detail::GetFileSystemProxyServiceObject()->OpenBaseFileSystem(
      nn::sf::Out<nn::sf::SharedPointer<fssrv::sf::IFileSystem>>(&fileSystem),
      static_cast<uint32_t>(id)));
  std::unique_ptr<detail::FileSystemServiceObjectAdapter> adapter(
    new detail::FileSystemServiceObjectAdapter(std::move(fileSystem)));
  NN_FS_RESULT_THROW_UNLESS_WITH_ABORT_CHECK(adapter != nullptr,
    ResultAllocationMemoryFailedNew());
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(fsa::Register(name, std::move(adapter)));
  return ResultSuccess();
}

Result MountCalibrationHtmlStorage(const char* name) {
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(detail::CheckMountName(name));
  nn::sf::SharedPointer<fssrv::sf::IFileSystem> fileSystem;
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(
    detail::GetFileSystemProxyServiceObject()->OpenBaseFileSystem(
      nn::sf::Out<nn::sf::SharedPointer<fssrv::sf::IFileSystem>>(&fileSystem),
      BaseFileSystemIdCalibrationHtml));
  std::unique_ptr<detail::FileSystemServiceObjectAdapter> adapter(
    new detail::FileSystemServiceObjectAdapter(std::move(fileSystem)));
  NN_FS_RESULT_THROW_UNLESS_WITH_ABORT_CHECK(adapter != nullptr,
    ResultAllocationMemoryFailedNew());
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(fsa::Register(name, std::move(adapter)));
  return ResultSuccess();
}

}
