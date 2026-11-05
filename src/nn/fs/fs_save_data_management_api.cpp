#include "nn/fs/detail/fs_file_system_proxy_service_object.hpp"
#include "nn/fs/detail/fs_id_string.hpp"
#include "nn/fs/detail/fs_log.hpp"
#include "nn/fs/fs_save_data_management.hpp"
#include "nn/fs/fs_save_data_transfer.hpp"
#include "nn/ncm/ncm_ids.hpp"

namespace nn::fs {

namespace {

#define NN_FS_SAVE_DATA_ID_FORMAT ", savedataid: 0x%lX"
#define NN_FS_SAVE_DATA_SPACE_ID_FORMAT \
  ", savedataspaceid: %s, savedataid: 0x%lX"
#define NN_FS_SAVE_DATA_SPACE_ID_USER_ID_FORMAT \
  ", savedataspaceid: %s, savedataid: 0x%lX, userid: 0x%016lX%016lX"
#define NN_FS_SAVE_DATA_SIZE_FORMAT \
  ", save_data_size: %ld, save_data_journal_size: %ld"

Result ReadExtraDataBySaveDataAttribute(SaveDataExtraData* outExtraData,
  SaveDataSpaceId spaceId, SaveDataAttribute attribute) {
  auto fileSystemProxy = detail::GetFileSystemProxyServiceObject();
  return fileSystemProxy->ReadSaveDataFileSystemExtraDataBySaveDataAttribute(
    nn::sf::OutBuffer(outExtraData, sizeof(*outExtraData)), spaceId,
    attribute);
}

}

namespace detail {

Result DeleteSaveData(uint64_t saveDataId) {
  auto fileSystemProxy = GetFileSystemProxyServiceObject();
  return fileSystemProxy->DeleteSaveDataFileSystem(saveDataId);
}

Result DeleteSaveData(SaveDataSpaceId spaceId, uint64_t saveDataId) {
  auto fileSystemProxy = GetFileSystemProxyServiceObject();
  return fileSystemProxy->DeleteSaveDataFileSystemBySaveDataSpaceId(spaceId,
    saveDataId);
}

Result ExtendSaveData(SaveDataSpaceId spaceId, uint64_t saveDataId,
  int64_t dataSize, int64_t journalSize) {
  auto fileSystemProxy = GetFileSystemProxyServiceObject();
  return fileSystemProxy->ExtendSaveDataFileSystem(spaceId, saveDataId,
    dataSize, journalSize);
}

Result ReadSaveDataFileSystemExtraData(SaveDataExtraData* outExtraData,
  uint64_t saveDataId) {
  auto fileSystemProxy = GetFileSystemProxyServiceObject();
  return fileSystemProxy->ReadSaveDataFileSystemExtraData(
    nn::sf::OutBuffer(outExtraData, sizeof(*outExtraData)), saveDataId);
}

Result ReadSaveDataFileSystemExtraData(SaveDataExtraData* outExtraData,
  SaveDataSpaceId spaceId, uint64_t saveDataId) {
  auto fileSystemProxy = GetFileSystemProxyServiceObject();
  return fileSystemProxy->ReadSaveDataFileSystemExtraDataBySaveDataSpaceId(
    nn::sf::OutBuffer(outExtraData, sizeof(*outExtraData)), spaceId,
    saveDataId);
}

Result ReadSaveDataFileSystemExtraData(SaveDataExtraData* outExtraData,
  SaveDataSpaceId spaceId, SaveDataAttribute attribute,
  const SaveDataExtraData& mask) {
  auto fileSystemProxy = GetFileSystemProxyServiceObject();
  return fileSystemProxy
    ->ReadSaveDataFileSystemExtraDataWithMaskBySaveDataAttribute(
      nn::sf::OutBuffer(outExtraData, sizeof(*outExtraData)), spaceId,
      attribute, nn::sf::InBuffer(&mask, sizeof(mask)));
}

Result WriteSaveDataFileSystemExtraData(SaveDataSpaceId spaceId,
  uint64_t saveDataId, const SaveDataExtraData& extraData) {
  auto fileSystemProxy = GetFileSystemProxyServiceObject();
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(
    fileSystemProxy->WriteSaveDataFileSystemExtraData(saveDataId, spaceId,
      nn::sf::InBuffer(&extraData, sizeof(extraData))));
  return ResultSuccess();
}

[[gnu::noinline]] Result WriteSaveDataFileSystemExtraData(
  SaveDataSpaceId spaceId, uint64_t saveDataId,
  const SaveDataExtraData& extraData, const SaveDataExtraData& mask) {
  auto fileSystemProxy = GetFileSystemProxyServiceObject();
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(
    fileSystemProxy->WriteSaveDataFileSystemExtraDataWithMask(saveDataId,
      spaceId, nn::sf::InBuffer(&extraData, sizeof(extraData)),
      nn::sf::InBuffer(&mask, sizeof(mask))));
  return ResultSuccess();
}

[[gnu::noinline]] Result WriteSaveDataFileSystemExtraData(
  SaveDataSpaceId spaceId, SaveDataAttribute attribute,
  const SaveDataExtraData& extraData, const SaveDataExtraData& mask) {
  auto fileSystemProxy = GetFileSystemProxyServiceObject();
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(fileSystemProxy
    ->WriteSaveDataFileSystemExtraDataWithMaskBySaveDataAttribute(attribute,
      spaceId, nn::sf::InBuffer(&extraData, sizeof(extraData)),
      nn::sf::InBuffer(&mask, sizeof(mask))));
  return ResultSuccess();
}

Result QuerySaveDataTotalSize(int64_t* outSize, int64_t dataSize,
  int64_t journalSize) {
  NN_FS_RESULT_THROW_UNLESS(outSize != nullptr, ResultNullptrArgument());

  auto fileSystemProxy = GetFileSystemProxyServiceObject();
  int64_t size = 0;
  NN_FS_RESULT_DO(fileSystemProxy->QuerySaveDataTotalSize(
    nn::sf::Out<int64_t>(&size), dataSize, journalSize));
  *outSize = size;
  return ResultSuccess();
}

Result QuerySaveDataInternalStorageTotalSize(int64_t* outSize,
  SaveDataSpaceId spaceId, uint64_t saveDataId) {
  NN_FS_RESULT_THROW_UNLESS(outSize != nullptr, ResultNullptrArgument());
  auto fileSystemProxy = GetFileSystemProxyServiceObject();
  int64_t size = 0;
  NN_FS_RESULT_DO(fileSystemProxy->QuerySaveDataInternalStorageTotalSize(
    nn::sf::Out<int64_t>(&size), spaceId, saveDataId));
  *outSize = size;
  return ResultSuccess();
}

Result CreateSaveData(const SaveDataAttribute& attribute,
  const SaveDataCreationInfo& creationInfo, const SaveDataMetaInfo& metaInfo,
  const HashSalt& hashSalt) {
  auto fileSystemProxy = GetFileSystemProxyServiceObject();
  return fileSystemProxy->CreateSaveDataFileSystemWithHashSalt(attribute,
    creationInfo, metaInfo, hashSalt);
}

}

Result DeleteSaveData(uint64_t saveDataId) {
  Result result;
  NN_FS_ACCESS_LOG_SYSTEM(result, detail::DeleteSaveData(saveDataId),
    NN_FS_SAVE_DATA_ID_FORMAT, saveDataId);
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(result);
  return ResultSuccess();
}

Result DeleteSaveData(SaveDataSpaceId spaceId, uint64_t saveDataId) {
  Result result;
  NN_FS_ACCESS_LOG_SYSTEM(result, detail::DeleteSaveData(spaceId, saveDataId),
    NN_FS_SAVE_DATA_SPACE_ID_FORMAT, detail::IdString().ToString(spaceId),
    saveDataId);
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(result);
  return ResultSuccess();
}

Result DeleteSystemSaveData(SaveDataSpaceId spaceId, uint64_t saveDataId,
  const UserId& userId) {
  auto deleteSaveData = [&]() -> Result {
    auto fileSystemProxy = detail::GetFileSystemProxyServiceObject();
    SaveDataAttribute attribute = {};
    NN_FS_RESULT_DO(SaveDataAttribute::Make(&attribute,
      SaveDataReferenceId{0}, SaveDataType::System, userId, saveDataId));
    return fileSystemProxy->DeleteSaveDataFileSystemBySaveDataAttribute(
      spaceId, attribute);
  };
  Result result;
  NN_FS_ACCESS_LOG_SYSTEM(result, deleteSaveData(),
    NN_FS_SAVE_DATA_SPACE_ID_USER_ID_FORMAT,
    detail::IdString().ToString(spaceId), saveDataId, userId.data[0],
    userId.data[1]);
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(result);
  return ResultSuccess();
}

Result DeleteDeviceSaveData(ApplicationId applicationId) {
  auto deleteSaveData = [&]() -> Result {
    auto fileSystemProxy = detail::GetFileSystemProxyServiceObject();
    SaveDataAttribute attribute = {};
    NN_FS_RESULT_DO(SaveDataAttribute::Make(&attribute,
      SaveDataReferenceId{applicationId.value}, SaveDataType::Device,
      UserId{}, 0));
    return fileSystemProxy->DeleteSaveDataFileSystemBySaveDataAttribute(
      SaveDataSpaceId::User, attribute);
  };
  Result result;
  NN_FS_ACCESS_LOG_APPLICATION(result, deleteSaveData(),
    ", applicationid: 0x%lX", applicationId.value);
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(result);
  return ResultSuccess();
}

Result ExtendSaveData(uint64_t saveDataId, int64_t dataSize,
  int64_t journalSize) {
  Result result;
  NN_FS_ACCESS_LOG_SYSTEM(result,
    detail::ExtendSaveData(SaveDataSpaceId::System, saveDataId, dataSize,
      journalSize),
    NN_FS_SAVE_DATA_SPACE_ID_FORMAT ", save_data_size: %ld"
    ", save_data_journal_size: %ld",
    detail::IdString().ToString(SaveDataSpaceId::System), saveDataId,
    dataSize, journalSize);
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(result);
  return ResultSuccess();
}

Result ExtendSaveData(SaveDataSpaceId spaceId, uint64_t saveDataId,
  int64_t dataSize, int64_t journalSize) {
  Result result;
  NN_FS_ACCESS_LOG_SYSTEM(result,
    detail::ExtendSaveData(spaceId, saveDataId, dataSize, journalSize),
    NN_FS_SAVE_DATA_SPACE_ID_FORMAT ", save_data_size: %ld"
    ", save_data_journal_size: %ld",
    detail::IdString().ToString(spaceId), saveDataId, dataSize, journalSize);
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(result);
  return ResultSuccess();
}

Result QuerySaveDataTotalSize(int64_t* outSize, int64_t dataSize,
  int64_t journalSize) {
  Result result;
  NN_FS_ACCESS_LOG_SYSTEM(result,
    detail::QuerySaveDataTotalSize(outSize, dataSize, journalSize),
    NN_FS_SAVE_DATA_SIZE_FORMAT, dataSize, journalSize);
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(result);
  return ResultSuccess();
}

Result GetSystemSaveDataFlags(uint32_t* outFlags, SaveDataSpaceId spaceId,
  uint64_t saveDataId, const UserId& userId) {
  auto getFlags = [=]() -> Result {
    NN_FS_RESULT_THROW_UNLESS(outFlags != nullptr, ResultNullptrArgument());
    SaveDataExtraData extraData = {};
    SaveDataAttribute attribute = {};
    NN_FS_RESULT_DO(SaveDataAttribute::Make(&attribute,
      SaveDataReferenceId{0}, SaveDataType::System, userId, saveDataId));
    NN_FS_RESULT_DO(
      ReadExtraDataBySaveDataAttribute(&extraData, spaceId, attribute));
    *outFlags = extraData.flags;
    return ResultSuccess();
  };
  Result result;
  NN_FS_ACCESS_LOG_SYSTEM(result, getFlags(),
    NN_FS_SAVE_DATA_SPACE_ID_USER_ID_FORMAT,
    detail::IdString().ToString(spaceId), saveDataId, userId.data[0],
    userId.data[1]);
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(result);
  return ResultSuccess();
}

Result SetSaveDataFlags(uint64_t saveDataId, uint32_t flags) {
  return SetSaveDataFlags(saveDataId, SaveDataSpaceId::System, flags);
}

Result SetSaveDataFlags(uint64_t saveDataId, SaveDataSpaceId spaceId,
  uint32_t flags) {
  auto setFlags = [=]() -> Result {
    SaveDataExtraData extraData = {};
    NN_FS_RESULT_DO(detail::ReadSaveDataFileSystemExtraData(&extraData,
      spaceId, saveDataId));
    extraData.flags = flags;
    return detail::WriteSaveDataFileSystemExtraData(spaceId, saveDataId,
      extraData);
  };
  Result result;
  NN_FS_ACCESS_LOG_SYSTEM(result, setFlags(),
    NN_FS_SAVE_DATA_ID_FORMAT ", savedataspaceid: %s, save_data_flags: 0x%08X",
    saveDataId, detail::IdString().ToString(spaceId), flags);
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(result);
  return ResultSuccess();
}

Result SetSystemSaveDataFlags(SaveDataSpaceId spaceId, uint64_t saveDataId,
  const UserId& userId, uint32_t flags) {
  auto setFlags = [=]() -> Result {
    SaveDataExtraData extraDataMask = {};
    extraDataMask.flags = 0xFFFFFFFF;
    SaveDataExtraData extraData = {};
    extraData.flags = flags;
    SaveDataAttribute attribute = {};
    NN_FS_RESULT_DO(SaveDataAttribute::Make(&attribute,
      SaveDataReferenceId{0}, SaveDataType::System, userId, saveDataId));
    return detail::WriteSaveDataFileSystemExtraData(spaceId, attribute,
      extraData, extraDataMask);
  };
  Result result;
  NN_FS_ACCESS_LOG_SYSTEM(result, setFlags(),
    NN_FS_SAVE_DATA_ID_FORMAT ", userid: 0x%016lX%016lX, "
    "savedataspaceid: %s, save_data_flags: 0x%08X",
    saveDataId, userId.data[0], userId.data[1],
    detail::IdString().ToString(spaceId), flags);
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(result);
  return ResultSuccess();
}

Result SetSaveDataTimeStamp(SaveDataSpaceId spaceId, uint64_t saveDataId,
  const time::PosixTime& timeStamp) {
  Result result;
  auto setTimeStamp = [=]() -> Result {
    SaveDataExtraData extraDataMask = {};
    extraDataMask.timeStamp = -1;
    SaveDataExtraData extraData = {};
    extraData.timeStamp = timeStamp.value;
    return detail::WriteSaveDataFileSystemExtraData(spaceId, saveDataId,
      extraData, extraDataMask);
  };
  NN_FS_ACCESS_LOG_SYSTEM(result, setTimeStamp(),
    NN_FS_SAVE_DATA_ID_FORMAT ", savedataspaceid: %s, "
    "save_data_time_stamp: %ld",
    saveDataId, detail::IdString().ToString(spaceId), timeStamp.value);
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(result);
  return ResultSuccess();
}

Result GetSaveDataCommitId(int64_t* outCommitId, SaveDataSpaceId spaceId,
  uint64_t saveDataId) {
  auto getCommitId = [&]() -> Result {
    NN_FS_RESULT_THROW_UNLESS(outCommitId != nullptr,
      ResultNullptrArgument());
    auto fileSystemProxy = detail::GetFileSystemProxyServiceObject();
    int64_t commitId = 0;
    NN_FS_RESULT_DO(fileSystemProxy->GetSaveDataCommitId(
      nn::sf::Out<int64_t>(&commitId), spaceId, saveDataId));
    *outCommitId = commitId;
    return ResultSuccess();
  };
  Result result;
  NN_FS_ACCESS_LOG_SYSTEM(result, getCommitId(),
    NN_FS_SAVE_DATA_SPACE_ID_FORMAT, detail::IdString().ToString(spaceId),
    saveDataId);
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(result);
  return ResultSuccess();
}

Result SetSaveDataCommitId(SaveDataSpaceId spaceId, uint64_t saveDataId,
  const int64_t& commitId) {
  Result result;
  auto setCommitId = [=]() -> Result {
    SaveDataExtraData extraDataMask = {};
    extraDataMask.commitId = -1;
    SaveDataExtraData extraData = {};
    extraData.commitId = commitId;
    return detail::WriteSaveDataFileSystemExtraData(spaceId, saveDataId,
      extraData, extraDataMask);
  };
  NN_FS_ACCESS_LOG_SYSTEM(result, setCommitId(),
    NN_FS_SAVE_DATA_ID_FORMAT ", savedataspaceid: %s, "
    "save_data_commit_id: 0x%016lX",
    saveDataId, detail::IdString().ToString(spaceId), commitId);
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(result);
  return ResultSuccess();
}

Result QuerySaveDataInternalStorageTotalSize(int64_t* outSize,
  SaveDataSpaceId spaceId, uint64_t saveDataId) {
  Result result;
  NN_FS_ACCESS_LOG_SYSTEM(result,
    detail::QuerySaveDataInternalStorageTotalSize(outSize, spaceId,
      saveDataId),
    NN_FS_SAVE_DATA_SPACE_ID_FORMAT, detail::IdString().ToString(spaceId),
    saveDataId);
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(result);
  return ResultSuccess();
}

Result VerifySaveData(bool* outIsValid, uint64_t saveDataId,
  void* workBuffer, size_t workBufferSize) {
  return VerifySaveData(outIsValid, SaveDataSpaceId::System, saveDataId,
    workBuffer, workBufferSize);
}

Result VerifySaveData(bool* outIsValid, SaveDataSpaceId spaceId,
  uint64_t saveDataId, void* workBuffer, size_t workBufferSize) {
  NN_FS_RESULT_THROW_UNLESS_WITH_ABORT_CHECK(outIsValid != nullptr,
    ResultNullptrArgument());
  auto fileSystemProxy = detail::GetFileSystemProxyServiceObject();
  const Result result =
    fileSystemProxy->VerifySaveDataFileSystemBySaveDataSpaceId(spaceId,
      saveDataId, nn::sf::OutBuffer(workBuffer, workBufferSize));
  if (IsResultDataCorrupted(result)) {
    *outIsValid = false;
    return ResultSuccess();
  }
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(result);
  *outIsValid = true;
  return ResultSuccess();
}

Result CorruptSaveDataForDebug(uint64_t saveDataId) {
  auto fileSystemProxy = detail::GetFileSystemProxyServiceObject();
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(
    fileSystemProxy->CorruptSaveDataFileSystemBySaveDataSpaceId(
      SaveDataSpaceId::System, saveDataId));
  return ResultSuccess();
}

Result CorruptSaveDataForDebug(SaveDataSpaceId spaceId, uint64_t saveDataId) {
  auto fileSystemProxy = detail::GetFileSystemProxyServiceObject();
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(
    fileSystemProxy->CorruptSaveDataFileSystemBySaveDataSpaceId(spaceId,
      saveDataId));
  return ResultSuccess();
}

Result UpdateSaveDataMacForDebug(uint8_t spaceId, uint64_t saveDataId) {
  auto fileSystemProxy = detail::GetFileSystemProxyServiceObject();
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(
    fileSystemProxy->UpdateSaveDataMacForDebug(spaceId, saveDataId));
  return ResultSuccess();
}

Result CorruptSaveDataForDebug(SaveDataSpaceId spaceId, uint64_t saveDataId,
  int64_t offset) {
  auto fileSystemProxy = detail::GetFileSystemProxyServiceObject();
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(
    fileSystemProxy->CorruptSaveDataFileSystemByOffset(spaceId, saveDataId,
      offset));
  return ResultSuccess();
}

Result RegisterSaveDataAtomicDeletion(uint64_t* saveDataIds, int count) {
  auto fileSystemProxy = detail::GetFileSystemProxyServiceObject();
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(
    fileSystemProxy->RegisterSaveDataFileSystemAtomicDeletion(
      nn::sf::InBuffer(saveDataIds, sizeof(uint64_t) * count)));
  return ResultSuccess();
}

Result OverrideSaveDataTransferKeyForTest(
  SaveDataTransferKeyIndexForTest keyIndex, const void* key, size_t size) {
  auto fileSystemProxy = detail::GetFileSystemProxyServiceObject();
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(
    fileSystemProxy->OverrideSaveDataTransferTokenSignVerificationKey(
      static_cast<uint32_t>(keyIndex), nn::sf::InBuffer(key, size)));
  return ResultSuccess();
}

Result SaveDataTransferSizeCalculator::GetFreeSpaceSize(int64_t* outSize,
  SaveDataSpaceId spaceId) {
  auto fileSystemProxy = detail::GetFileSystemProxyServiceObject();
  int64_t size = 0;
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(
    fileSystemProxy->GetFreeSpaceSizeForSaveData(nn::sf::Out<int64_t>(&size),
      spaceId));
  *outSize = size;
  return ResultSuccess();
}

Result SizeCalculatorForSaveDataMover::GetFreeSpaceSize(int64_t* outSize,
  SaveDataSpaceId spaceId) {
  auto fileSystemProxy = detail::GetFileSystemProxyServiceObject();
  int64_t size = 0;
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(
    fileSystemProxy->GetFreeSpaceSizeForSaveData(nn::sf::Out<int64_t>(&size),
      spaceId));
  *outSize = size;
  return ResultSuccess();
}

int64_t QuerySaveDataRequiredSizeForImport(const SaveDataInfo& info,
  PlatformIdForSaveDataSizeCalculation platformId) {
  return SaveDataTransferSizeCalculator::QuerySaveDataRequiredSizeForImport(
    info, platformId);
}

}
