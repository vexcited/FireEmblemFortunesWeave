#include "nn/fs/detail/fs_file_system_accessor.hpp"
#include "nn/fs/detail/fs_file_system_proxy_service_object.hpp"
#include "nn/fs/detail/fs_log.hpp"
#include "nn/fs/fs_save_data.hpp"

namespace nn::fs {

namespace {

const uint64_t SelfProgramId = 0xFFFFFFFFFFFFFFFE;
const uint32_t SaveDataFlags_Restore = 0x10;

Result ReadExtraDataWithMask(SaveDataExtraData* outExtraData,
  SaveDataSpaceId spaceId, SaveDataAttribute attribute,
  const SaveDataExtraData& mask) {
  auto fileSystemProxy = detail::GetFileSystemProxyServiceObject();
  return fileSystemProxy
    ->ReadSaveDataFileSystemExtraDataWithMaskBySaveDataAttribute(
      nn::sf::OutBuffer(outExtraData, sizeof(*outExtraData)), spaceId,
      attribute, nn::sf::InBuffer(&mask, sizeof(mask)));
}

}

Result DeleteCacheStorage(int index) {
  auto deleteCacheStorage = [=]() -> Result {
    NN_FS_RESULT_THROW_UNLESS(index >= 0, ResultInvalidArgument());
    auto fileSystemProxy = detail::GetFileSystemProxyServiceObject();
    return fileSystemProxy->DeleteCacheStorage(static_cast<uint16_t>(index));
  };
  Result result;
  NN_FS_ACCESS_LOG_APPLICATION(result, deleteCacheStorage(), ", index: %d",
    index);
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(result);
  return ResultSuccess();
}

Result GetCacheStorageSize(int64_t* outSize, int64_t* outJournalSize,
  int index) {
  auto fileSystemProxy = detail::GetFileSystemProxyServiceObject();
  auto getSize = [&]() -> Result {
    NN_FS_RESULT_THROW_UNLESS(index >= 0, ResultInvalidArgument());
    NN_FS_RESULT_THROW_UNLESS(outSize != nullptr && outJournalSize != nullptr,
      ResultNullptrArgument());
    return fileSystemProxy->GetCacheStorageSize(
      nn::sf::Out<int64_t>(outSize), nn::sf::Out<int64_t>(outJournalSize),
      static_cast<uint16_t>(index));
  };
  Result result;
  NN_FS_ACCESS_LOG_APPLICATION(result, getSize(),
    ", index: %d, save_data_size: %ld, save_data_journal_size: %ld", index,
    outSize != nullptr && IsSuccess(result) ? *outSize : 0,
    outJournalSize != nullptr && IsSuccess(result) ? *outJournalSize : 0);
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(result);
  return ResultSuccess();
}

Result ListApplicationAccessibleSaveDataOwnerId(int* outCount,
  ncm::ApplicationId* outIds, ncm::ApplicationId applicationId,
  int programIndex, int offset, int count) {
  NN_FS_RESULT_THROW_UNLESS_WITH_ABORT_CHECK(outCount != nullptr,
    ResultNullptrArgument());
  NN_FS_RESULT_THROW_UNLESS_WITH_ABORT_CHECK(outIds != nullptr,
    ResultNullptrArgument());
  if (count == 0) {
    *outCount = 0;
    return ResultSuccess();
  }
  auto fileSystemProxy = detail::GetFileSystemProxyServiceObject();
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(fileSystemProxy
    ->ListAccessibleSaveDataOwnerId(nn::sf::Out<int32_t>(outCount),
      nn::sf::OutBuffer(outIds, sizeof(ncm::ApplicationId) * count),
      ncm::ProgramId{applicationId.value + programIndex}, offset, count));
  return ResultSuccess();
}

Result GetDeviceSaveDataSize(int64_t* outSize, int64_t* outJournalSize,
  ApplicationId applicationId) {
  auto getSize = [&]() -> Result {
    NN_FS_RESULT_THROW_UNLESS(outSize != nullptr && outJournalSize != nullptr,
      ResultNullptrArgument());
    SaveDataExtraData extraData = {};
    SaveDataExtraData mask = {};
    SaveDataAttribute attribute = {};
    mask.availableSize = -1;
    mask.journalSize = -1;
    NN_FS_RESULT_DO(SaveDataAttribute::Make(&attribute,
      SaveDataReferenceId{applicationId.value}, SaveDataType::Device,
      UserId{}, 0));
    NN_FS_RESULT_DO(ReadExtraDataWithMask(&extraData, SaveDataSpaceId::User,
      attribute, mask));
    *outSize = extraData.availableSize;
    *outJournalSize = extraData.journalSize;
    return ResultSuccess();
  };
  Result result;
  NN_FS_ACCESS_LOG_APPLICATION(result, getSize(),
    ", applicationid: 0x%lX, save_data_size: %ld, save_data_journal_size: %ld",
    applicationId.value,
    outSize != nullptr && IsSuccess(result) ? *outSize : 0,
    outJournalSize != nullptr && IsSuccess(result) ? *outJournalSize : 0);
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(result);
  return ResultSuccess();
}

Result GetSaveDataRestoreFlag(bool* outValue, const char* name) {
  detail::FileSystemAccessor* fileSystem = nullptr;
  Result result;
  NN_FS_ACCESS_LOG_UNLESS_SUCCESS(result, detail::Find(&fileSystem, name),
    ", name: \"%s\"", name);
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(result);

  auto getFlag = [&]() -> Result {
    NN_FS_RESULT_THROW_UNLESS(outValue != nullptr, ResultNullptrArgument());
    SaveDataAttribute attribute = {};
    NN_FS_RESULT_DO(fileSystem->GetSaveDataAttribute(&attribute));
    if (attribute.programId.value == 0) {
      attribute.programId.value = SelfProgramId;
    }
    SaveDataExtraData extraData = {};
    SaveDataExtraData mask = {};
    mask.flags = SaveDataFlags_Restore;
    NN_FS_RESULT_DO(ReadExtraDataWithMask(&extraData, SaveDataSpaceId::User,
      attribute, mask));
    *outValue = (extraData.flags & SaveDataFlags_Restore) != 0;
    return ResultSuccess();
  };
  NN_FS_ACCESS_LOG_FILE_SYSTEM(result, fileSystem, nullptr, getFlag(),
    ", name: \"%s\", restore_flag: %s", name,
    outValue != nullptr && IsSuccess(result) && *outValue ? "true" : "false");
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(result);
  return ResultSuccess();
}

}
