#include "nn/fs/detail/fs_file_system_proxy_service_object.hpp"
#include "nn/fs/detail/fs_id_string.hpp"
#include "nn/fs/detail/fs_log.hpp"

namespace nn::fs {

namespace {

#define NN_FS_SAVE_DATA_ID_FORMAT ", savedataid: 0x%lX"
#define NN_FS_SAVE_DATA_SPACE_ID_FORMAT \
  ", savedataspaceid: %s, savedataid: 0x%lX"

Result ReadExtraData(SaveDataExtraData* outExtraData, uint64_t saveDataId) {
  auto fileSystemProxy = detail::GetFileSystemProxyServiceObject();
  return fileSystemProxy->ReadSaveDataFileSystemExtraData(
    nn::sf::OutBuffer(outExtraData, sizeof(*outExtraData)), saveDataId);
}

Result ReadExtraData(SaveDataExtraData* outExtraData, SaveDataSpaceId spaceId,
  uint64_t saveDataId) {
  auto fileSystemProxy = detail::GetFileSystemProxyServiceObject();
  return fileSystemProxy->ReadSaveDataFileSystemExtraDataBySaveDataSpaceId(
    nn::sf::OutBuffer(outExtraData, sizeof(*outExtraData)), spaceId,
    saveDataId);
}

Result GetOwnerId(uint64_t* outOwnerId, uint64_t saveDataId) {
  NN_FS_RESULT_THROW_UNLESS(outOwnerId != nullptr, ResultNullptrArgument());
  SaveDataExtraData extraData = {};
  NN_FS_RESULT_DO(ReadExtraData(&extraData, saveDataId));
  *outOwnerId = extraData.ownerId;
  return ResultSuccess();
}

Result GetOwnerId(uint64_t* outOwnerId, SaveDataSpaceId spaceId,
  uint64_t saveDataId) {
  NN_FS_RESULT_THROW_UNLESS(outOwnerId != nullptr, ResultNullptrArgument());
  SaveDataExtraData extraData = {};
  NN_FS_RESULT_DO(ReadExtraData(&extraData, spaceId, saveDataId));
  *outOwnerId = extraData.ownerId;
  return ResultSuccess();
}

Result GetFlags(uint32_t* outFlags, uint64_t saveDataId) {
  NN_FS_RESULT_THROW_UNLESS(outFlags != nullptr, ResultNullptrArgument());
  SaveDataExtraData extraData = {};
  NN_FS_RESULT_DO(ReadExtraData(&extraData, saveDataId));
  *outFlags = extraData.flags;
  return ResultSuccess();
}

Result GetFlags(uint32_t* outFlags, SaveDataSpaceId spaceId,
  uint64_t saveDataId) {
  NN_FS_RESULT_THROW_UNLESS(outFlags != nullptr, ResultNullptrArgument());
  SaveDataExtraData extraData = {};
  NN_FS_RESULT_DO(ReadExtraData(&extraData, spaceId, saveDataId));
  *outFlags = extraData.flags;
  return ResultSuccess();
}

Result GetTimeStamp(time::PosixTime* outTimeStamp, uint64_t saveDataId) {
  NN_FS_RESULT_THROW_UNLESS(outTimeStamp != nullptr,
    ResultNullptrArgument());
  SaveDataExtraData extraData = {};
  NN_FS_RESULT_DO(ReadExtraData(&extraData, saveDataId));
  outTimeStamp->value = extraData.timeStamp;
  return ResultSuccess();
}

Result GetTimeStamp(time::PosixTime* outTimeStamp, SaveDataSpaceId spaceId,
  uint64_t saveDataId) {
  NN_FS_RESULT_THROW_UNLESS(outTimeStamp != nullptr,
    ResultNullptrArgument());
  SaveDataExtraData extraData = {};
  NN_FS_RESULT_DO(ReadExtraData(&extraData, spaceId, saveDataId));
  outTimeStamp->value = extraData.timeStamp;
  return ResultSuccess();
}

Result GetAcdIndex(uint8_t* outIndex, SaveDataSpaceId spaceId,
  uint64_t saveDataId) {
  NN_FS_RESULT_THROW_UNLESS(outIndex != nullptr, ResultNullptrArgument());
  SaveDataExtraData extraData = {};
  NN_FS_RESULT_DO(ReadExtraData(&extraData, spaceId, saveDataId));
  *outIndex = extraData.acdIndex;
  return ResultSuccess();
}

}

namespace detail {

Result GetSaveDataAvailableSize(int64_t* outSize, uint64_t saveDataId) {
  NN_FS_RESULT_THROW_UNLESS(outSize != nullptr, ResultNullptrArgument());
  SaveDataExtraData extraData = {};
  NN_FS_RESULT_DO(ReadExtraData(&extraData, saveDataId));
  *outSize = extraData.availableSize;
  return ResultSuccess();
}

Result GetSaveDataAvailableSize(int64_t* outSize, SaveDataSpaceId spaceId,
  uint64_t saveDataId) {
  NN_FS_RESULT_THROW_UNLESS(outSize != nullptr, ResultNullptrArgument());
  SaveDataExtraData extraData = {};
  NN_FS_RESULT_DO(ReadExtraData(&extraData, spaceId, saveDataId));
  *outSize = extraData.availableSize;
  return ResultSuccess();
}

Result GetSaveDataJournalSize(int64_t* outSize, uint64_t saveDataId) {
  NN_FS_RESULT_THROW_UNLESS(outSize != nullptr, ResultNullptrArgument());
  SaveDataExtraData extraData = {};
  NN_FS_RESULT_DO(ReadExtraData(&extraData, saveDataId));
  *outSize = extraData.journalSize;
  return ResultSuccess();
}

Result GetSaveDataJournalSize(int64_t* outSize, SaveDataSpaceId spaceId,
  uint64_t saveDataId) {
  NN_FS_RESULT_THROW_UNLESS(outSize != nullptr, ResultNullptrArgument());
  SaveDataExtraData extraData = {};
  NN_FS_RESULT_DO(ReadExtraData(&extraData, spaceId, saveDataId));
  *outSize = extraData.journalSize;
  return ResultSuccess();
}

}

Result GetSaveDataOwnerId(uint64_t* outOwnerId, uint64_t saveDataId) {
  Result result;
  NN_FS_ACCESS_LOG_SYSTEM(result, GetOwnerId(outOwnerId, saveDataId),
    ", save_data_size: %ld", saveDataId);
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(result);
  return ResultSuccess();
}

Result GetSaveDataOwnerId(uint64_t* outOwnerId, SaveDataSpaceId spaceId,
  uint64_t saveDataId) {
  Result result;
  NN_FS_ACCESS_LOG_SYSTEM(result, GetOwnerId(outOwnerId, spaceId, saveDataId),
    NN_FS_SAVE_DATA_SPACE_ID_FORMAT, detail::IdString().ToString(spaceId),
    saveDataId);
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(result);
  return ResultSuccess();
}

Result GetSaveDataFlags(uint32_t* outFlags, uint64_t saveDataId) {
  Result result;
  NN_FS_ACCESS_LOG_SYSTEM(result, GetFlags(outFlags, saveDataId),
    NN_FS_SAVE_DATA_ID_FORMAT, saveDataId);
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(result);
  return ResultSuccess();
}

Result GetSaveDataFlags(uint32_t* outFlags, SaveDataSpaceId spaceId,
  uint64_t saveDataId) {
  Result result;
  NN_FS_ACCESS_LOG_SYSTEM(result, GetFlags(outFlags, spaceId, saveDataId),
    NN_FS_SAVE_DATA_SPACE_ID_FORMAT, detail::IdString().ToString(spaceId),
    saveDataId);
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(result);
  return ResultSuccess();
}

Result GetSaveDataTimeStamp(time::PosixTime* outTimeStamp,
  uint64_t saveDataId) {
  Result result;
  NN_FS_ACCESS_LOG_SYSTEM(result, GetTimeStamp(outTimeStamp, saveDataId),
    NN_FS_SAVE_DATA_ID_FORMAT, saveDataId);
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(result);
  return ResultSuccess();
}

Result GetSaveDataTimeStamp(time::PosixTime* outTimeStamp,
  SaveDataSpaceId spaceId, uint64_t saveDataId) {
  Result result;
  NN_FS_ACCESS_LOG_SYSTEM(result,
    GetTimeStamp(outTimeStamp, spaceId, saveDataId),
    NN_FS_SAVE_DATA_SPACE_ID_FORMAT, detail::IdString().ToString(spaceId),
    saveDataId);
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(result);
  return ResultSuccess();
}

Result GetSaveDataAcdIndex(uint8_t* outIndex, SaveDataSpaceId spaceId,
  uint64_t saveDataId) {
  Result result;
  NN_FS_ACCESS_LOG_SYSTEM(result, GetAcdIndex(outIndex, spaceId, saveDataId),
    NN_FS_SAVE_DATA_SPACE_ID_FORMAT, detail::IdString().ToString(spaceId),
    saveDataId);
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(result);
  return ResultSuccess();
}

Result GetSaveDataAvailableSize(int64_t* outSize, uint64_t saveDataId) {
  Result result;
  NN_FS_ACCESS_LOG_SYSTEM(result,
    detail::GetSaveDataAvailableSize(outSize, saveDataId),
    NN_FS_SAVE_DATA_ID_FORMAT, saveDataId);
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(result);
  return ResultSuccess();
}

Result GetSaveDataAvailableSize(int64_t* outSize, SaveDataSpaceId spaceId,
  uint64_t saveDataId) {
  Result result;
  NN_FS_ACCESS_LOG_SYSTEM(result,
    detail::GetSaveDataAvailableSize(outSize, spaceId, saveDataId),
    NN_FS_SAVE_DATA_SPACE_ID_FORMAT, detail::IdString().ToString(spaceId),
    saveDataId);
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(result);
  return ResultSuccess();
}

Result GetSaveDataJournalSize(int64_t* outSize, uint64_t saveDataId) {
  Result result;
  NN_FS_ACCESS_LOG_SYSTEM(result,
    detail::GetSaveDataJournalSize(outSize, saveDataId),
    NN_FS_SAVE_DATA_ID_FORMAT, saveDataId);
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(result);
  return ResultSuccess();
}

Result GetSaveDataJournalSize(int64_t* outSize, SaveDataSpaceId spaceId,
  uint64_t saveDataId) {
  Result result;
  NN_FS_ACCESS_LOG_SYSTEM(result,
    detail::GetSaveDataJournalSize(outSize, spaceId, saveDataId),
    NN_FS_SAVE_DATA_SPACE_ID_FORMAT, detail::IdString().ToString(spaceId),
    saveDataId);
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(result);
  return ResultSuccess();
}

}
