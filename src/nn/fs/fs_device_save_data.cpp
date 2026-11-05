#include "nn/fs/detail/fs_file_system_proxy_service_object.hpp"
#include "nn/fs/detail/fs_file_system_service_object_adapter.hpp"
#include "nn/fs/detail/fs_log.hpp"
#include "nn/fs/detail/fs_newable.hpp"
#include "nn/fs/fs_save_data.hpp"
#include "nn/fs/fsa/fs_registrar.hpp"

#define NN_FS_ACCESS_LOG_TARGET_APPLICATION 1u

#define NN_FS_ACCESS_LOG_MOUNT(result, expression, ...) \
  do { \
    if (::nn::fs::detail::IsEnabledAccessLog( \
      NN_FS_ACCESS_LOG_TARGET_APPLICATION)) { \
      const ::nn::os::Tick fsStart_ = ::nn::os::GetSystemTick(); \
      result = (expression); \
      const ::nn::os::Tick fsEnd_ = ::nn::os::GetSystemTick(); \
      ::nn::fs::detail::OutputAccessLog(result, fsStart_, fsEnd_, \
        __FUNCTION__, nullptr, __VA_ARGS__); \
    } \
    else { \
      result = (expression); \
    } \
  } while (0)

namespace nn::fs {

namespace {

class DeviceSaveDataAttributeGetter : public detail::Newable,
  public fsa::ISaveDataAttributeGetter {
public:
  explicit DeviceSaveDataAttributeGetter(ncm::ApplicationId applicationId)
    : m_ApplicationId(applicationId) {}

  virtual Result GetSaveDataAttribute(
    SaveDataAttribute* outAttribute) override {
    return SaveDataAttribute::Make(outAttribute,
      SaveDataReferenceId{m_ApplicationId.value}, SaveDataType::Device,
      UserId{}, 0);
  }

private:
  ncm::ApplicationId m_ApplicationId;
};

Result MountDeviceSaveDataImpl(const char* name,
  const SaveDataAttribute& attribute) {
  NN_FS_RESULT_DO(detail::CheckMountName(name));
  auto fileSystemProxy = detail::GetFileSystemProxyServiceObject();
  nn::sf::SharedPointer<fssrv::sf::IFileSystem> fileSystem;
  NN_FS_RESULT_DO(fileSystemProxy->OpenSaveDataFileSystem(
    nn::sf::Out<nn::sf::SharedPointer<fssrv::sf::IFileSystem>>(&fileSystem),
    SaveDataSpaceId::User, attribute));
  std::unique_ptr<detail::FileSystemServiceObjectAdapter> adapter(
    new detail::FileSystemServiceObjectAdapter(std::move(fileSystem)));
  NN_FS_RESULT_THROW_UNLESS(adapter != nullptr,
    ResultAllocationMemoryFailedInDeviceSaveDataA());
  std::unique_ptr<DeviceSaveDataAttributeGetter> attributeGetter(
    new DeviceSaveDataAttributeGetter(
      ncm::ApplicationId{attribute.programId.value}));
  NN_FS_RESULT_THROW_UNLESS(attributeGetter != nullptr,
    ResultAllocationMemoryFailedNew());
  fsa::IMultiCommitTarget* multiCommitTarget = adapter.get();
  return fsa::Register(name, multiCommitTarget, std::move(adapter), nullptr,
    std::move(attributeGetter), false, nullptr, true);
}

}

Result MountDeviceSaveData(const char* name) {
  SaveDataAttribute attribute = {};
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(SaveDataAttribute::Make(&attribute,
    SaveDataReferenceId{0}, SaveDataType::Device, UserId{}, 0));
  Result result;
  NN_FS_ACCESS_LOG_MOUNT(result, MountDeviceSaveDataImpl(name, attribute),
    ", name: \"%s\"", name);
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(result);
  if (detail::IsEnabledAccessLog(NN_FS_ACCESS_LOG_TARGET_APPLICATION)) {
    detail::EnableFileSystemAccessorAccessLog(name);
  }
  return ResultSuccess();
}

Result MountDeviceSaveData(const char* name,
  ncm::ApplicationId applicationId) {
  SaveDataAttribute attribute = {};
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(SaveDataAttribute::Make(&attribute,
    SaveDataReferenceId{applicationId.value}, SaveDataType::Device, UserId{},
    0));
  Result result;
  NN_FS_ACCESS_LOG_MOUNT(result, MountDeviceSaveDataImpl(name, attribute),
    ", name: \"%s\", applicationid: 0x%lX", name, applicationId.value);
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(result);
  if (detail::IsEnabledAccessLog(NN_FS_ACCESS_LOG_TARGET_APPLICATION)) {
    detail::EnableFileSystemAccessorAccessLog(name);
  }
  return ResultSuccess();
}

Result MountDeviceSaveData(const char* name, ApplicationId applicationId) {
  return MountDeviceSaveData(name, ncm::ApplicationId{applicationId.value});
}

bool IsDeviceSaveDataExisting(ApplicationId applicationId) {
  bool isExisting = false;
  Result result;
  NN_FS_ACCESS_LOG_APPLICATION(result,
    detail::IsSaveDataExisting(&isExisting,
      ncm::ApplicationId{applicationId.value}, SaveDataType::Device,
      InvalidUserId),
    ", applicationid: 0x%lX", applicationId.value);
  NN_FS_ABORT_UNLESS_RESULT_SUCCESS_WITH_LOG(result);
  return isExisting;
}

}
