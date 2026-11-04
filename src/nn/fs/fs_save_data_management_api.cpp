#include "nn/fs/detail/fs_file_system_proxy_service_object.hpp"
#include "nn/fs/detail/fs_log.hpp"
#include "nn/fs/fs_save_data_transfer.hpp"

namespace nn::fs {

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

Result WriteSaveDataFileSystemExtraData(SaveDataSpaceId spaceId,
  uint64_t saveDataId, const SaveDataExtraData& extraData,
  const SaveDataExtraData& mask) {
  auto fileSystemProxy = GetFileSystemProxyServiceObject();
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(
    fileSystemProxy->WriteSaveDataFileSystemExtraDataWithMask(saveDataId,
      spaceId, nn::sf::InBuffer(&extraData, sizeof(extraData)),
      nn::sf::InBuffer(&mask, sizeof(mask))));
  return ResultSuccess();
}

Result WriteSaveDataFileSystemExtraData(SaveDataSpaceId spaceId,
  SaveDataAttribute attribute, const SaveDataExtraData& extraData,
  const SaveDataExtraData& mask) {
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

Result CreateSaveData(const SaveDataAttribute& attribute,
  const SaveDataCreationInfo& creationInfo, const SaveDataMetaInfo& metaInfo,
  const HashSalt& hashSalt) {
  auto fileSystemProxy = GetFileSystemProxyServiceObject();
  return fileSystemProxy->CreateSaveDataFileSystemWithHashSalt(attribute,
    creationInfo, metaInfo, hashSalt);
}

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

}
