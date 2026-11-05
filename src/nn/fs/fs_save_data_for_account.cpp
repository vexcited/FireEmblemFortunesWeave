#include "nn/am/service/am_application_functions.hpp"
#include "nn/err/err_show_error.hpp"
#include "nn/fs/detail/fs_id_string.hpp"
#include "nn/fs/detail/fs_log.hpp"
#include "nn/fs/fs_save_data.hpp"
#include "nn/fs/fs_save_data_management.hpp"
#include "nn/la/la_common_arguments.hpp"

namespace nn::diag::detail {

[[noreturn]] void AbortImpl();

}

namespace nn::fs {

namespace {

const applet::AppletId AppletId_DataManagement =
  static_cast<applet::AppletId>(0x0100000D);

constexpr account::Uid InvalidUid = {};
const int64_t SaveDataSizeAlignment = 0x4000;

enum DataManagementKind : int32_t {
  DataManagementKind_SaveData = 1,
  DataManagementKind_CacheStorage = 2,
  DataManagementKind_DeviceSaveData = 3,
};

struct DataManagementArgument {
  int64_t requiredSize;
  int32_t targetMedia;
  char reserved1[4];
  int64_t reserved2[2];
  account::Uid user;
  int32_t kind;
  char reserved3[4];
};

static_assert(sizeof(DataManagementArgument) == 56);

// Results that the application functions return when the request needs no
// action, such as an application without save data settings.
inline bool IsSaveDataRequestIgnorable(Result result) {
  return (result.value & 0x3FFFFF) == 0x1010 ||
    (result.value & 0x3FFFFF) == 0xCC9D;
}

inline bool RequestDataManagement(const DataManagementArgument& argument) {
  la::CommonArgumentsWriter writer(2);
  int32_t appletResult = 0;
  size_t outSize = 0;
  const Result result = la::StartLibraryAppletEasy(AppletId_DataManagement,
    writer, &argument, sizeof(argument), &appletResult, sizeof(appletResult),
    &outSize, false);
  return IsSuccess(result) && outSize >= sizeof(appletResult) &&
    appletResult == 0;
}

}

Result MountSaveData(const char* name, const account::Uid& user) {
  return MountSaveData(name, ConvertAccountUidToFsUserId(user));
}

Result MountSaveData(const char* name, ApplicationId applicationId,
  const account::Uid& user) {
  return MountSaveData(name, ncm::ApplicationId{applicationId.value},
    ConvertAccountUidToFsUserId(user));
}

Result MountSaveDataReadOnly(const char* name, ApplicationId applicationId,
  const account::Uid& user) {
  return MountSaveDataReadOnly(name, ncm::ApplicationId{applicationId.value},
    ConvertAccountUidToFsUserId(user));
}

bool IsSaveDataExisting(const account::Uid& user) {
  if (IsAutoAbortPolicyCustomized()) {
    diag::detail::AbortImpl();
  }
  bool isExisting = false;
  NN_FS_ABORT_UNLESS_RESULT_SUCCESS(IsSaveDataExisting(&isExisting, user));
  return isExisting;
}

Result IsSaveDataExisting(bool* outValue, const account::Uid& user) {
  Result result;
  NN_FS_ACCESS_LOG_APPLICATION(result,
    detail::IsSaveDataExisting(outValue, ConvertAccountUidToFsUserId(user)),
    ", userid: 0x%016lX%016lX", user.value[0], user.value[1]);
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(result);
  return ResultSuccess();
}

bool IsSaveDataExisting(ApplicationId applicationId,
  const account::Uid& user) {
  if (IsAutoAbortPolicyCustomized()) {
    diag::detail::AbortImpl();
  }
  bool isExisting = false;
  NN_FS_ABORT_UNLESS_RESULT_SUCCESS(IsSaveDataExisting(&isExisting,
    applicationId, user));
  return isExisting;
}

Result IsSaveDataExisting(bool* outValue, ApplicationId applicationId,
  const account::Uid& user) {
  Result result;
  NN_FS_ACCESS_LOG_APPLICATION(result,
    detail::IsSaveDataExisting(outValue,
      ncm::ApplicationId{applicationId.value},
      ConvertAccountUidToFsUserId(user)),
    ", applicationid: 0x%lX, userid: 0x%016lX%016lX", applicationId.value,
    user.value[0], user.value[1]);
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(result);
  return ResultSuccess();
}

Result ReadSaveDataThumbnailFile(uint64_t applicationId,
  const account::Uid& user, void* headerBuffer, size_t headerBufferSize,
  void* imageBuffer, size_t imageBufferSize) {
  return detail::ReadSaveDataThumbnailFile(applicationId,
    ConvertAccountUidToFsUserId(user), headerBuffer, headerBufferSize,
    imageBuffer, imageBufferSize);
}

Result ReadSaveDataThumbnailFileHeader(uint64_t applicationId,
  const account::Uid& user, void* headerBuffer, size_t headerBufferSize) {
  return detail::ReadSaveDataThumbnailFileHeader(applicationId,
    ConvertAccountUidToFsUserId(user), headerBuffer, headerBufferSize);
}

Result WriteSaveDataThumbnailFile(uint64_t applicationId,
  const account::Uid& user, const void* headerBuffer, size_t headerBufferSize,
  const void* imageBuffer, size_t imageBufferSize) {
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(detail::WriteSaveDataThumbnailFile(
    applicationId, ConvertAccountUidToFsUserId(user), headerBuffer,
    headerBufferSize, imageBuffer, imageBufferSize));
  return ResultSuccess();
}

Result WriteSaveDataThumbnailFileHeader(uint64_t applicationId,
  const account::Uid& user, const void* headerBuffer,
  size_t headerBufferSize) {
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(detail::WriteSaveDataThumbnailFileHeader(
    applicationId, ConvertAccountUidToFsUserId(user), headerBuffer,
    headerBufferSize));
  return ResultSuccess();
}

Result CorruptSaveDataThumbnailFileForDebug(uint64_t applicationId,
  const account::Uid& user) {
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(
    detail::CorruptSaveDataThumbnailFileForDebug(applicationId,
      ConvertAccountUidToFsUserId(user)));
  return ResultSuccess();
}

Result MountSystemSaveData(const char* name, uint64_t saveDataId,
  const account::Uid& user) {
  return MountSystemSaveData(name, saveDataId,
    ConvertAccountUidToFsUserId(user));
}

Result CreateSystemSaveData(uint64_t saveDataId, const account::Uid& user,
  int64_t size, int64_t journalSize, uint32_t flags) {
  return CreateSystemSaveData(saveDataId, ConvertAccountUidToFsUserId(user),
    size, journalSize, flags);
}

Result CreateSystemSaveData(uint64_t saveDataId, const account::Uid& user,
  uint64_t ownerId, int64_t size, int64_t journalSize, uint32_t flags,
  SaveDataFormatType formatType) {
  return CreateSystemSaveData(SaveDataSpaceId::System, saveDataId,
    ConvertAccountUidToFsUserId(user), ownerId, size, journalSize, flags,
    formatType);
}

Result DeleteSystemSaveData(uint64_t saveDataId, const account::Uid& user) {
  return DeleteSystemSaveData(SaveDataSpaceId::System, saveDataId,
    ConvertAccountUidToFsUserId(user));
}

Result GetSystemSaveDataFlags(uint32_t* outFlags, uint64_t saveDataId,
  const account::Uid& user) {
  return GetSystemSaveDataFlags(outFlags, SaveDataSpaceId::System,
    saveDataId, ConvertAccountUidToFsUserId(user));
}

Result SetSystemSaveDataFlags(uint64_t saveDataId, const account::Uid& user,
  uint32_t flags) {
  return SetSystemSaveDataFlags(SaveDataSpaceId::System, saveDataId,
    ConvertAccountUidToFsUserId(user), flags);
}

Result GetSaveDataInfo(SaveDataInfo* outInfo, SaveDataSpaceId spaceId,
  uint64_t saveDataId, const account::Uid& user) {
  auto getInfo = [&]() -> Result {
    SaveDataFilter filter = {};
    NN_FS_RESULT_DO(SaveDataFilter::Make(&filter, util::optional<uint64_t>(),
      SaveDataType::System, ConvertAccountUidToFsUserId(user), saveDataId,
      uint16_t{0}, 0));
    SaveDataInfo info = {};
    NN_FS_RESULT_DO(detail::FindSaveDataWithFilter(&info, spaceId, filter));
    *outInfo = info;
    return ResultSuccess();
  };
  Result result;
  NN_FS_ACCESS_LOG_SYSTEM(result, getInfo(),
    ", savedataspaceid: %s, savedataid: 0x%lX, userid: 0x%016lX%016lX",
    detail::IdString().ToString(spaceId), saveDataId, user.value[0],
    user.value[1]);
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(result);
  return ResultSuccess();
}

Result EnsureSaveData(const account::Uid& user) {
  auto ensure = [=]() -> Result {
    if (user.value[0] != 0 || user.value[1] != 0) {
      NN_FS_RESULT_DO(CheckUid(user));
    }
    int64_t requiredSize = 0;
    Result result = am::service::GetApplicationFunctionsObject()
      ->EnsureSaveData(nn::sf::Out<int64_t>(&requiredSize), user);
    if (IsSaveDataRequestIgnorable(result)) {
      return ResultSuccess();
    }
    NN_FS_RESULT_DO(result);
    if (requiredSize == 0) {
      return ResultSuccess();
    }
    const DataManagementArgument argument = {requiredSize,
      DataManagementKind_SaveData, {}, {}, user, DataManagementKind_SaveData,
      {}};
    NN_FS_RESULT_THROW_UNLESS(RequestDataManagement(argument),
      ResultUsableSpaceNotEnough());
    result = am::service::GetApplicationFunctionsObject()->EnsureSaveData(
      nn::sf::Out<int64_t>(&requiredSize), user);
    if (IsSaveDataRequestIgnorable(result)) {
      return ResultSuccess();
    }
    NN_FS_RESULT_DO(result);
    if (requiredSize != 0) {
      err::ShowError(ResultUsableSpaceNotEnoughForSaveData());
      return ResultUsableSpaceNotEnough();
    }
    return ResultSuccess();
  };
  Result result;
  NN_FS_ACCESS_LOG_APPLICATION(result, ensure(), ", userid: 0x%016lX%016lX",
    user.value[0], user.value[1]);
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(result);
  return ResultSuccess();
}

Result EnsureDeviceSaveDataUnsafe(ApplicationId applicationId, int64_t size,
  int64_t journalSize) {
  auto ensure = [&]() -> Result {
    NN_FS_RESULT_THROW_UNLESS(
      (size & (SaveDataSizeAlignment - 1)) == 0 &&
        (journalSize & (SaveDataSizeAlignment - 1)) == 0,
      ResultInvalidAlignment());
    int64_t requiredSize = 0;
    NN_FS_RESULT_DO(detail::EnsureApplicationDeviceSaveData(&requiredSize,
      ncm::ApplicationId{applicationId.value}, size, journalSize));
    if (requiredSize == 0) {
      return ResultSuccess();
    }
    const DataManagementArgument argument = {requiredSize,
      DataManagementKind_SaveData, {}, {}, {},
      DataManagementKind_DeviceSaveData, {}};
    NN_FS_RESULT_THROW_UNLESS(RequestDataManagement(argument),
      ResultUsableSpaceNotEnough());
    NN_FS_RESULT_DO(detail::EnsureApplicationDeviceSaveData(&requiredSize,
      ncm::ApplicationId{applicationId.value}, size, journalSize));
    if (requiredSize != 0) {
      err::ShowError(ResultUsableSpaceNotEnoughForSaveData());
      return ResultUsableSpaceNotEnough();
    }
    return ResultSuccess();
  };
  Result result;
  NN_FS_ACCESS_LOG_APPLICATION(result, ensure(),
    ", applicationid: 0x%lX, save_data_size: %ld, save_data_journal_size: %ld",
    applicationId.value, size, journalSize);
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(result);
  return ResultSuccess();
}

void GetSaveDataSizeMax(int64_t* outSizeMax, int64_t* outJournalSizeMax) {
  Result result;
  NN_FS_ACCESS_LOG_APPLICATION(result,
    outSizeMax != nullptr && outJournalSizeMax != nullptr ?
      am::service::GetApplicationFunctionsObject()->GetSaveDataSizeMax(
        nn::sf::Out<int64_t>(outSizeMax),
        nn::sf::Out<int64_t>(outJournalSizeMax)) :
      ResultNullptrArgument(),
    ", save_data_size_max: %ld, save_data_journal_size_max: %ld",
    outSizeMax != nullptr && IsSuccess(result) ? *outSizeMax : 0,
    outJournalSizeMax != nullptr && IsSuccess(result) ?
      *outJournalSizeMax : 0);
  NN_FS_ABORT_UNLESS_RESULT_SUCCESS_WITH_LOG(result);
}

void GetDeviceSaveDataSizeMax(int64_t* outSizeMax,
  int64_t* outJournalSizeMax) {
  Result result;
  NN_FS_ACCESS_LOG_APPLICATION(result,
    outSizeMax != nullptr && outJournalSizeMax != nullptr ?
      am::service::GetApplicationFunctionsObject()->GetDeviceSaveDataSizeMax(
        nn::sf::Out<int64_t>(outSizeMax),
        nn::sf::Out<int64_t>(outJournalSizeMax)) :
      ResultNullptrArgument(),
    ", save_data_size_max: %ld, save_data_journal_size_max: %ld",
    outSizeMax != nullptr && IsSuccess(result) ? *outSizeMax : 0,
    outJournalSizeMax != nullptr && IsSuccess(result) ?
      *outJournalSizeMax : 0);
  NN_FS_ABORT_UNLESS_RESULT_SUCCESS_WITH_LOG(result);
}

Result ExtendSaveData(const account::Uid& user, int64_t size,
  int64_t journalSize) {
  auto extend = [=]() -> Result {
    int64_t requiredSize = 0;
    Result result = am::service::GetApplicationFunctionsObject()
      ->ExtendSaveData(nn::sf::Out<int64_t>(&requiredSize),
        static_cast<uint8_t>(SaveDataType::Account), user, size,
        journalSize);
    NN_FS_RESULT_THROW_UNLESS(!IsResultIncluded(result, ResultTargetLocked()),
      ResultSaveDataExtensionLocked());
    if (IsSaveDataRequestIgnorable(result)) {
      return ResultSuccess();
    }
    NN_FS_RESULT_DO(result);
    if (requiredSize == 0) {
      return ResultSuccess();
    }
    const DataManagementArgument argument = {requiredSize,
      DataManagementKind_SaveData, {}, {}, user, DataManagementKind_SaveData,
      {}};
    NN_FS_RESULT_THROW_UNLESS(RequestDataManagement(argument),
      ResultUsableSpaceNotEnough());
    result = am::service::GetApplicationFunctionsObject()->ExtendSaveData(
      nn::sf::Out<int64_t>(&requiredSize),
      static_cast<uint8_t>(SaveDataType::Account), user, size, journalSize);
    NN_FS_RESULT_THROW_UNLESS(!IsResultIncluded(result, ResultTargetLocked()),
      ResultSaveDataExtensionLocked());
    if (IsSaveDataRequestIgnorable(result)) {
      return ResultSuccess();
    }
    NN_FS_RESULT_DO(result);
    if (requiredSize != 0) {
      err::ShowError(ResultUsableSpaceNotEnoughForSaveData());
      return ResultUsableSpaceNotEnough();
    }
    return ResultSuccess();
  };
  Result result;
  NN_FS_ACCESS_LOG_APPLICATION(result, extend(),
    ", userid: 0x%016lX%016lX, save_data_size: %ld"
    ", save_data_journal_size: %ld",
    user.value[0], user.value[1], size, journalSize);
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(result);
  return ResultSuccess();
}

Result ExtendDeviceSaveData(int64_t size, int64_t journalSize) {
  auto extend = [=]() -> Result {
    const account::Uid user = {};
    int64_t requiredSize = 0;
    Result result = am::service::GetApplicationFunctionsObject()
      ->ExtendSaveData(nn::sf::Out<int64_t>(&requiredSize),
        static_cast<uint8_t>(SaveDataType::Device), user, size, journalSize);
    NN_FS_RESULT_THROW_UNLESS(!IsResultIncluded(result, ResultTargetLocked()),
      ResultSaveDataExtensionLocked());
    if (IsSaveDataRequestIgnorable(result)) {
      return ResultSuccess();
    }
    NN_FS_RESULT_DO(result);
    if (requiredSize == 0) {
      return ResultSuccess();
    }
    const DataManagementArgument argument = {requiredSize,
      DataManagementKind_SaveData, {}, {}, user,
      DataManagementKind_DeviceSaveData, {}};
    NN_FS_RESULT_THROW_UNLESS(RequestDataManagement(argument),
      ResultUsableSpaceNotEnough());
    result = am::service::GetApplicationFunctionsObject()->ExtendSaveData(
      nn::sf::Out<int64_t>(&requiredSize),
      static_cast<uint8_t>(SaveDataType::Device), user, size, journalSize);
    NN_FS_RESULT_THROW_UNLESS(!IsResultIncluded(result, ResultTargetLocked()),
      ResultSaveDataExtensionLocked());
    if (IsSaveDataRequestIgnorable(result)) {
      return ResultSuccess();
    }
    NN_FS_RESULT_DO(result);
    if (requiredSize != 0) {
      err::ShowError(ResultUsableSpaceNotEnoughForSaveData());
      return ResultUsableSpaceNotEnough();
    }
    return ResultSuccess();
  };
  Result result;
  NN_FS_ACCESS_LOG_APPLICATION(result, extend(),
    ", save_data_size: %ld, save_data_journal_size: %ld", size, journalSize);
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(result);
  return ResultSuccess();
}

Result GetSaveDataSize(int64_t* outSize, int64_t* outJournalSize,
  const account::Uid& user) {
  auto getSize = [&]() -> Result {
    NN_FS_RESULT_THROW_UNLESS(outSize != nullptr && outJournalSize != nullptr,
      ResultInvalidArgument());
    return am::service::GetApplicationFunctionsObject()->GetSaveDataSize(
      nn::sf::Out<int64_t>(outSize), nn::sf::Out<int64_t>(outJournalSize),
      static_cast<uint8_t>(SaveDataType::Account), user);
  };
  Result result;
  NN_FS_ACCESS_LOG_APPLICATION(result, getSize(),
    ", userid: 0x%016lX%016lX, save_data_size: %ld"
    ", save_data_journal_size: %ld",
    user.value[0], user.value[1],
    outSize != nullptr && IsSuccess(result) ? *outSize : 0,
    outJournalSize != nullptr && IsSuccess(result) ? *outJournalSize : 0);
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(result);
  return ResultSuccess();
}

Result GetDeviceSaveDataSize(int64_t* outSize, int64_t* outJournalSize) {
  auto getSize = [&]() -> Result {
    NN_FS_RESULT_THROW_UNLESS(outSize != nullptr && outJournalSize != nullptr,
      ResultInvalidArgument());
    return am::service::GetApplicationFunctionsObject()->GetSaveDataSize(
      nn::sf::Out<int64_t>(outSize), nn::sf::Out<int64_t>(outJournalSize),
      static_cast<uint8_t>(SaveDataType::Device), InvalidUid);
  };
  Result result;
  NN_FS_ACCESS_LOG_APPLICATION(result, getSize(),
    ", save_data_size: %ld, save_data_journal_size: %ld",
    outSize != nullptr && IsSuccess(result) ? *outSize : 0,
    outJournalSize != nullptr && IsSuccess(result) ? *outJournalSize : 0);
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(result);
  return ResultSuccess();
}

void GetCacheStorageMax(int* outIndexMax, int64_t* outSizeMax) {
  Result result;
  NN_FS_ACCESS_LOG_APPLICATION(result,
    outIndexMax != nullptr && outSizeMax != nullptr ?
      am::service::GetApplicationFunctionsObject()->GetCacheStorageMax(
        nn::sf::Out<int32_t>(outIndexMax), nn::sf::Out<int64_t>(outSizeMax)) :
      ResultNullptrArgument(),
    ", cache_storage_index_max: %d"
    ", cache_storage_data_and_journal_size_max: %ld",
    outIndexMax != nullptr && IsSuccess(result) ? *outIndexMax : 0,
    outSizeMax != nullptr && IsSuccess(result) ? *outSizeMax : 0);
  NN_FS_ABORT_UNLESS_RESULT_SUCCESS_WITH_LOG(result);
}

Result CreateCacheStorage(int index, int64_t size, int64_t journalSize) {
  const uint16_t cacheIndex = static_cast<uint16_t>(index);
  auto create = [=]() -> Result {
    NN_FS_RESULT_THROW_UNLESS(index >= 0, ResultInvalidArgument());
    int64_t requiredSize = 0;
    int32_t targetMedia = 0;
    Result result = am::service::GetApplicationFunctionsObject()
      ->CreateCacheStorage(nn::sf::Out<int64_t>(&requiredSize),
        nn::sf::Out<int32_t>(&targetMedia), cacheIndex, size, journalSize);
    if (IsSaveDataRequestIgnorable(result)) {
      return ResultSuccess();
    }
    NN_FS_RESULT_DO(result);
    if (requiredSize == 0) {
      return ResultSuccess();
    }
    const DataManagementArgument argument = {requiredSize, targetMedia, {},
      {}, {}, DataManagementKind_CacheStorage, {}};
    NN_FS_RESULT_THROW_UNLESS(RequestDataManagement(argument),
      ResultUsableSpaceNotEnoughForCacheStorage());
    result = am::service::GetApplicationFunctionsObject()->CreateCacheStorage(
      nn::sf::Out<int64_t>(&requiredSize),
      nn::sf::Out<int32_t>(&targetMedia), cacheIndex, size, journalSize);
    if (IsSaveDataRequestIgnorable(result)) {
      return ResultSuccess();
    }
    NN_FS_RESULT_DO(result);
    if (requiredSize != 0) {
      err::ShowError(ResultUsableSpaceNotEnoughForSaveData());
      return ResultUsableSpaceNotEnoughForCacheStorage();
    }
    return ResultSuccess();
  };
  Result result;
  NN_FS_ACCESS_LOG_APPLICATION(result, create(),
    ", index: %d, save_data_size: %ld, save_data_journal_size: %ld",
    cacheIndex, size, journalSize);
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(result);
  return ResultSuccess();
}

}
