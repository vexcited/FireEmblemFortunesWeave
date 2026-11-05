#include "nn/fs/detail/fs_file_system_proxy_service_object.hpp"
#include "nn/fs/detail/fs_file_system_service_object_adapter.hpp"
#include "nn/fs/detail/fs_log.hpp"
#include "nn/fs/fs_istorage.hpp"
#include "nn/fs/fs_path_utility.hpp"
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

#define NN_FS_ENABLE_MOUNT_ACCESS_LOG(name) \
  do { \
    if (::nn::fs::detail::IsEnabledAccessLog( \
      NN_FS_ACCESS_LOG_TARGET_APPLICATION)) { \
      ::nn::fs::detail::EnableFileSystemAccessorAccessLog(name); \
    } \
  } while (0)

namespace nn::fs {

namespace {

const int64_t SaveDataSizeAlignment = 0x4000;
const int64_t SaveDataSizeMax = 4000LL * 1024 * 1024;
const int64_t DebugSaveDataSize = 32 * 1024 * 1024;
const int64_t DebugSaveDataJournalSize = 32 * 1024 * 1024;

Result ExtendSaveDataIfNeeded(UserId userId, int64_t size,
  int64_t journalSize) {
  SaveDataFilter filter = {};
  SaveDataInfo info = {};
  NN_FS_RESULT_DO(SaveDataFilter::Make(&filter, uint64_t{0},
    SaveDataType::Account, userId, util::optional<uint64_t>(),
    uint16_t{0}, 0));
  NN_FS_RESULT_DO(detail::FindSaveDataWithFilter(&info, SaveDataSpaceId::User,
    filter));
  const SaveDataSpaceId spaceId = info.spaceId;
  const uint64_t saveDataId = info.saveDataId;
  int64_t availableSize = 0;
  NN_FS_RESULT_DO(detail::GetSaveDataAvailableSize(&availableSize, spaceId,
    saveDataId));
  int64_t currentJournalSize = 0;
  NN_FS_RESULT_DO(detail::GetSaveDataJournalSize(&currentJournalSize, spaceId,
    saveDataId));
  if (availableSize < size || currentJournalSize < journalSize) {
    return detail::ExtendSaveData(spaceId, saveDataId,
      availableSize < size ? size : availableSize,
      currentJournalSize < journalSize ? journalSize : currentJournalSize);
  }
  return ResultSuccess();
}

Result OpenSaveDataInternalStorageFileSystemImpl(
  std::unique_ptr<fsa::IFileSystem>* outFileSystem, SaveDataSpaceId spaceId,
  uint64_t saveDataId) {
  auto fileSystemProxy = detail::GetFileSystemProxyServiceObject();
  nn::sf::SharedPointer<fssrv::sf::IFileSystem> fileSystem;
  NN_FS_RESULT_DO(fileSystemProxy->OpenSaveDataInternalStorageFileSystem(
    nn::sf::Out<nn::sf::SharedPointer<fssrv::sf::IFileSystem>>(&fileSystem),
    spaceId, saveDataId));
  std::unique_ptr<detail::FileSystemServiceObjectAdapter> adapter(
    new detail::FileSystemServiceObjectAdapter(std::move(fileSystem)));
  NN_FS_RESULT_THROW_UNLESS(adapter != nullptr,
    ResultAllocationMemoryFailedNew());
  *outFileSystem = std::move(adapter);
  return ResultSuccess();
}

}

namespace detail {

Result MountSaveDataImpl(const char* name, SaveDataSpaceId spaceId,
  ncm::ApplicationId applicationId, UserId userId, SaveDataType type,
  bool isReadOnly, uint16_t index) {
  NN_FS_RESULT_DO(CheckMountName(name));
  auto fileSystemProxy = GetFileSystemProxyServiceObject();
  SaveDataAttribute attribute = {};
  NN_FS_RESULT_DO(SaveDataAttribute::Make(&attribute,
    SaveDataReferenceId{applicationId.value}, type, userId, 0, index));
  nn::sf::SharedPointer<fssrv::sf::IFileSystem> fileSystem;
  const nn::sf::Out<nn::sf::SharedPointer<fssrv::sf::IFileSystem>>
    outFileSystem(&fileSystem);
  if (isReadOnly) {
    NN_FS_RESULT_DO(fileSystemProxy->OpenReadOnlySaveDataFileSystem(
      outFileSystem, spaceId, attribute));
  }
  else {
    NN_FS_RESULT_DO(fileSystemProxy->OpenSaveDataFileSystem(outFileSystem,
      spaceId, attribute));
  }
  std::unique_ptr<FileSystemServiceObjectAdapter> adapter(
    new FileSystemServiceObjectAdapter(std::move(fileSystem)));
  NN_FS_RESULT_THROW_UNLESS(adapter != nullptr,
    ResultAllocationMemoryFailedNew());
  fsa::IMultiCommitTarget* multiCommitTarget = adapter.get();
  return fsa::Register(name, multiCommitTarget, std::move(adapter), nullptr,
    false, nullptr, true);
}

Result EnsureSaveDataImpl(SaveDataSpaceId spaceId, SaveDataType type,
  UserId userId, int64_t size, int64_t journalSize, uint16_t index,
  bool isExtensionAllowed) {
  NN_FS_RESULT_THROW_UNLESS(
    ((size | journalSize) & (SaveDataSizeAlignment - 1)) == 0 &&
      size + journalSize <= SaveDataSizeMax,
    ResultInvalidSize());
  auto fileSystemProxy = GetFileSystemProxyServiceObject();
  SaveDataAttribute attribute = {};
  NN_FS_RESULT_DO(SaveDataAttribute::Make(&attribute, SaveDataReferenceId{0},
    type, userId, 0, index));
  SaveDataCreationInfo creationInfo = {};
  NN_FS_RESULT_DO(SaveDataCreationInfo::Make(&creationInfo, size, journalSize,
    0, 0, spaceId));
  SaveDataMetaInfo metaInfo = {};
  const Result result = fileSystemProxy->CreateSaveDataFileSystem(attribute,
    creationInfo, metaInfo);
  if (IsFailure(result)) {
    if (IsResultIncluded(result, ResultPathAlreadyExists())) {
      if (isExtensionAllowed) {
        return ExtendSaveDataIfNeeded(userId, size, journalSize);
      }
      return ResultSuccess();
    }
    return result;
  }
  return ResultSuccess();
}

Result IsSaveDataExisting(bool* outValue, const UserId& userId) {
  return IsSaveDataExisting(outValue, ncm::ApplicationId{0},
    SaveDataType::Account, userId);
}

Result IsSaveDataExisting(bool* outValue, ncm::ApplicationId applicationId,
  const UserId& userId) {
  return IsSaveDataExisting(outValue, applicationId, SaveDataType::Account,
    userId);
}

Result IsSaveDataExisting(bool* outValue, ncm::ApplicationId applicationId,
  SaveDataType type, const UserId& userId) {
  NN_FS_RESULT_THROW_UNLESS(outValue != nullptr, ResultInvalidArgument());
  auto fileSystemProxy = GetFileSystemProxyServiceObject();
  SaveDataAttribute attribute = {};
  NN_FS_RESULT_DO(SaveDataAttribute::Make(&attribute,
    SaveDataReferenceId{applicationId.value}, type, userId, 0));
  nn::sf::SharedPointer<fssrv::sf::IFileSystem> fileSystem;
  const Result result = fileSystemProxy->OpenSaveDataFileSystem(
    nn::sf::Out<nn::sf::SharedPointer<fssrv::sf::IFileSystem>>(&fileSystem),
    SaveDataSpaceId::User, attribute);
  bool isExisting = true;
  if (IsFailure(result)) {
    if (IsResultIncluded(result, ResultTargetLocked()) ||
      IsResultIncluded(result, ResultSaveDataExtending())) {
    }
    else if (IsResultIncluded(result, ResultTargetNotFound())) {
      isExisting = false;
    }
    else {
      return result;
    }
  }
  *outValue = isExisting;
  return ResultSuccess();
}

Result CleanUpTemporaryStorageImpl() {
  while (true) {
    SaveDataInfo info = {};
    SaveDataFilter filter = {};
    NN_FS_RESULT_DO(SaveDataFilter::Make(&filter, util::optional<uint64_t>(),
      SaveDataType::Temporary, util::optional<UserId>(),
      util::optional<uint64_t>(), util::optional<uint16_t>()));
    const Result result = FindSaveDataWithFilter(&info,
      SaveDataSpaceId::Temporary, filter);
    if (IsFailure(result)) {
      if (IsResultIncluded(result, ResultTargetNotFound())) {
        return ResultSuccess();
      }
      return result;
    }
    NN_FS_RESULT_DO(DeleteSaveData(SaveDataSpaceId::Temporary,
      info.saveDataId));
  }
}

// Exported functions are never inlined into their callers in the SDK.
[[gnu::noinline]] Result MountSaveDataImpl(const char* name, UserId userId) {
  return MountSaveDataImpl(name, SaveDataSpaceId::User,
    ncm::ApplicationId{0}, userId, SaveDataType::Account, false, 0);
}

}

Result MountSaveData(const char* name, UserId userId) {
  Result result;
  NN_FS_ACCESS_LOG_MOUNT(result,
    detail::MountSaveDataImpl(name, SaveDataSpaceId::User,
      ncm::ApplicationId{0}, userId, SaveDataType::Account, false, 0),
    ", name: \"%s\", userid: 0x%016lX%016lX", name, userId.data[0],
    userId.data[1]);
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(result);
  NN_FS_ENABLE_MOUNT_ACCESS_LOG(name);
  return ResultSuccess();
}

Result MountSaveData(const char* name, ncm::ApplicationId applicationId,
  UserId userId) {
  Result result;
  NN_FS_ACCESS_LOG_MOUNT(result,
    detail::MountSaveDataImpl(name, SaveDataSpaceId::User, applicationId,
      userId, SaveDataType::Account, false, 0),
    ", name: \"%s\", applicationid: 0x%lX, userid: 0x%016lX%016lX", name,
    applicationId.value, userId.data[0], userId.data[1]);
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(result);
  NN_FS_ENABLE_MOUNT_ACCESS_LOG(name);
  return ResultSuccess();
}

Result MountSaveDataReadOnly(const char* name,
  ncm::ApplicationId applicationId, UserId userId) {
  Result result;
  NN_FS_ACCESS_LOG_MOUNT(result,
    detail::MountSaveDataImpl(name, SaveDataSpaceId::User, applicationId,
      userId, SaveDataType::Account, true, 0),
    ", name: \"%s\", applicationid: 0x%lX, userid: 0x%016lX%016lX", name,
    applicationId.value, userId.data[0], userId.data[1]);
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(result);
  NN_FS_ENABLE_MOUNT_ACCESS_LOG(name);
  return ResultSuccess();
}

Result MountTemporaryStorage(const char* name) {
  Result result;
  NN_FS_ACCESS_LOG_MOUNT(result,
    detail::MountSaveDataImpl(name, SaveDataSpaceId::Temporary,
      ncm::ApplicationId{0}, UserId{}, SaveDataType::Temporary, false, 0),
    ", name: \"%s\"", name);
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(result);
  NN_FS_ENABLE_MOUNT_ACCESS_LOG(name);
  return ResultSuccess();
}

Result MountCacheStorage(const char* name) {
  Result result;
  NN_FS_ACCESS_LOG_MOUNT(result,
    detail::MountSaveDataImpl(name, SaveDataSpaceId::User,
      ncm::ApplicationId{0}, UserId{}, SaveDataType::Cache, false, 0),
    ", name: \"%s\"", name);
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(result);
  NN_FS_ENABLE_MOUNT_ACCESS_LOG(name);
  return ResultSuccess();
}

Result MountCacheStorage(const char* name, int index) {
  Result result;
  NN_FS_ACCESS_LOG_MOUNT(result,
    detail::MountSaveDataImpl(name, SaveDataSpaceId::User,
      ncm::ApplicationId{0}, UserId{}, SaveDataType::Cache, false,
      static_cast<uint16_t>(index)),
    ", name: \"%s\", index: %d", name, index);
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(result);
  NN_FS_ENABLE_MOUNT_ACCESS_LOG(name);
  return ResultSuccess();
}

Result MountCacheStorage(const char* name, ncm::ApplicationId applicationId) {
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(detail::MountSaveDataImpl(name,
    SaveDataSpaceId::User, applicationId, UserId{}, SaveDataType::Cache,
    false, 0));
  return ResultSuccess();
}

Result MountCacheStorage(const char* name, ncm::ApplicationId applicationId,
  int index) {
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(detail::MountSaveDataImpl(name,
    SaveDataSpaceId::User, applicationId, UserId{}, SaveDataType::Cache,
    false, static_cast<uint16_t>(index)));
  return ResultSuccess();
}

void SetSaveDataRootPath(const char* path) {
  auto setRootPath = [=]() -> Result {
    NN_FS_RESULT_THROW_UNLESS(path != nullptr, ResultNullptrArgument());
    fssrv::sf::FspPath fspPath = {};
    NN_FS_RESULT_DO(ConvertToFspPath(&fspPath, path));
    auto fileSystemProxy = detail::GetFileSystemProxyServiceObject();
    return fileSystemProxy->SetSaveDataRootPath(fspPath);
  };
  Result result;
  NN_FS_ACCESS_LOG_APPLICATION(result, setRootPath(), ", path: \"%s\"", path);
  NN_FS_ABORT_UNLESS_RESULT_SUCCESS_WITH_LOG(result);
}

void UnsetSaveDataRootPath() {
  auto unsetRootPath = []() -> Result {
    auto fileSystemProxy = detail::GetFileSystemProxyServiceObject();
    return fileSystemProxy->UnsetSaveDataRootPath();
  };
  Result result;
  NN_FS_ACCESS_LOG_APPLICATION(result, unsetRootPath(), "");
  NN_FS_ABORT_UNLESS_RESULT_SUCCESS_WITH_LOG(result);
}

Result OpenSaveDataInternalStorageFileSystem(
  std::unique_ptr<fsa::IFileSystem>* outFileSystem, SaveDataSpaceId spaceId,
  uint64_t saveDataId) {
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(OpenSaveDataInternalStorageFileSystemImpl(
    outFileSystem, spaceId, saveDataId));
  return ResultSuccess();
}

Result MountSaveDataInternalStorage(const char* name, SaveDataSpaceId spaceId,
  uint64_t saveDataId) {
  auto mount = [&]() -> Result {
    NN_FS_RESULT_DO(detail::CheckMountName(name));
    std::unique_ptr<fsa::IFileSystem> fileSystem;
    NN_FS_RESULT_DO(OpenSaveDataInternalStorageFileSystemImpl(&fileSystem,
      spaceId, saveDataId));
    return fsa::Register(name, std::move(fileSystem));
  };
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(mount());
  return ResultSuccess();
}

Result EnsureSaveDataForDebug(int64_t size, int64_t journalSize) {
  Result result;
  NN_FS_ACCESS_LOG_APPLICATION(result,
    detail::EnsureSaveDataImpl(SaveDataSpaceId::User, SaveDataType::Account,
      UserId{}, size, journalSize, 0, true),
    ", save_data_size: %ld, save_data_journal_size: %ld", size, journalSize);
  return result;
}

Result MountSaveDataForDebug(const char* name) {
  auto mount = [&]() -> Result {
    NN_FS_RESULT_DO(detail::EnsureSaveDataImpl(SaveDataSpaceId::User,
      SaveDataType::Account, UserId{}, DebugSaveDataSize,
      DebugSaveDataJournalSize, 0, false));
    return detail::MountSaveDataImpl(name, UserId{});
  };
  Result result;
  NN_FS_ACCESS_LOG_MOUNT(result, mount(), ", name: \"%s\"", name);
  NN_FS_RESULT_DO(result);
  NN_FS_ENABLE_MOUNT_ACCESS_LOG(name);
  return ResultSuccess();
}

}
