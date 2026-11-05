#include "nn/fs/detail/fs_file_system_accessor.hpp"
#include "nn/fs/detail/fs_file_system_proxy_service_object.hpp"
#include "nn/fs/detail/fs_file_system_service_object_adapter.hpp"
#include "nn/fs/detail/fs_log.hpp"
#include "nn/fs/fs_path_utility.hpp"
#include "nn/fs/fsa/fs_registrar.hpp"
#include "nn/ncm/ncm_ids.hpp"

namespace nn::detail {

[[noreturn]] void UnexpectedDefaultImpl();

}

namespace nn::fs {

namespace {

detail::FileSystemProxyType ConvertToFileSystemProxyType(
  ContentType contentType) {
  switch (contentType) {
    case ContentType::Meta:
      return detail::FileSystemProxyType::Meta;
    case ContentType::Control:
      return detail::FileSystemProxyType::Control;
    case ContentType::Manual:
      return detail::FileSystemProxyType::Manual;
    case ContentType::Data:
      return detail::FileSystemProxyType::Data;
    default:
      nn::detail::UnexpectedDefaultImpl();
  }
}

[[gnu::noinline]] Result MountContentImpl(const char* name, const char* path,
  ContentAttributes attributes, uint64_t id, ContentType contentType) {
  NN_FS_RESULT_DO(detail::CheckMountNameAcceptingReservedMountName(name));
  const detail::FileSystemProxyType type =
    ConvertToFileSystemProxyType(contentType);
  NN_FS_RESULT_THROW_UNLESS(path != nullptr, ResultNullptrArgument());
  fssrv::sf::FspPath sfPath = {};
  NN_FS_RESULT_DO(ConvertToFspPath(&sfPath, path));
  auto fileSystemProxy = detail::GetFileSystemProxyServiceObject();
  nn::sf::SharedPointer<fssrv::sf::IFileSystem> fileSystem;
  NN_FS_RESULT_DO(fileSystemProxy->OpenFileSystemWithId(
    nn::sf::Out<nn::sf::SharedPointer<fssrv::sf::IFileSystem>>(&fileSystem),
    sfPath, attributes, id, static_cast<uint32_t>(type)));
  std::unique_ptr<fsa::IFileSystem> adapter(
    new detail::FileSystemServiceObjectAdapter(std::move(fileSystem)));
  NN_FS_RESULT_THROW_UNLESS(adapter != nullptr,
    ResultAllocationMemoryFailedInContentA());
  return fsa::Register(name, std::move(adapter));
}

}

Result MountContent(const char* name, const char* path,
  ContentAttributes attributes, ContentType contentType) {
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(contentType == ContentType::Meta ?
    ResultSuccess() : ResultInvalidArgument());
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(MountContentImpl(name, path, attributes, 0,
    contentType));
  return ResultSuccess();
}

Result MountContent(const char* name, const char* path,
  ContentAttributes attributes, ncm::ProgramId programId,
  ContentType contentType) {
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(MountContentImpl(name, path, attributes,
    programId.value, contentType));
  return ResultSuccess();
}

Result MountContent(const char* name, const char* path,
  ContentAttributes attributes, ncm::DataId dataId,
  ContentType contentType) {
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(MountContentImpl(name, path, attributes,
    dataId.value, contentType));
  return ResultSuccess();
}

Result MountContent(const char* name, ncm::ProgramId programId,
  ContentType contentType) {
  auto mount = [&]() -> Result {
    NN_FS_RESULT_DO(detail::CheckMountNameAcceptingReservedMountName(name));
    detail::FileSystemProxyType type =
      ConvertToFileSystemProxyType(contentType);
    auto fileSystemProxy = detail::GetFileSystemProxyServiceObject();
    nn::sf::SharedPointer<fssrv::sf::IFileSystem> fileSystem;
    NN_FS_RESULT_DO(fileSystemProxy->OpenFileSystemWithPatch(
      nn::sf::Out<nn::sf::SharedPointer<fssrv::sf::IFileSystem>>(&fileSystem),
      programId.value, static_cast<uint32_t>(type)));
    std::unique_ptr<detail::FileSystemServiceObjectAdapter> adapter(
      new detail::FileSystemServiceObjectAdapter(std::move(fileSystem)));
    NN_FS_RESULT_THROW_UNLESS(adapter != nullptr,
      ResultAllocationMemoryFailedInContentA());
    return fsa::Register(name, std::move(adapter));
  };
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(mount());
  return ResultSuccess();
}

}
