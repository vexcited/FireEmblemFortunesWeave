#include "nn/fs/fs_save_data.hpp"
#include "nn/fs/fs_save_data_transfer.hpp"

namespace nn::fs {

Result SaveDataTransferManager::OpenSaveDataImporter(
  std::unique_ptr<SaveDataImporter>* outValue, int64_t* outRequiredSize,
  const void* initialData, size_t initialDataSize, const account::Uid& user,
  SaveDataSpaceId spaceId) {
  return OpenSaveDataImporter(outValue, outRequiredSize, initialData,
    initialDataSize, ConvertAccountUidToFsUserId(user), spaceId);
}

Result SaveDataTransferManagerVersion2::OpenSaveDataImporter(
  std::unique_ptr<ISaveDataDivisionImporter>* outValue,
  const InitialDataVersion2& initialData, const account::Uid& user,
  SaveDataSpaceId spaceId) {
  return OpenSaveDataImporterImpl(outValue, initialData, 0,
    ConvertAccountUidToFsUserId(user), 0, spaceId);
}

Result SaveDataTransferManagerVersion2::OpenSaveDataImporter(
  std::unique_ptr<ISaveDataDivisionImporter>* outValue,
  const InitialDataVersion2& initialData, uint64_t staticSaveDataId,
  const account::Uid& user, uint64_t ownerId) {
  return OpenSaveDataImporterImpl(outValue, initialData, staticSaveDataId,
    ConvertAccountUidToFsUserId(user), ownerId, SaveDataSpaceId::System);
}

Result SaveDataTransferManagerVersion2::CancelSuspendingImport(
  ncm::ApplicationId applicationId, const account::Uid& user) {
  return CancelSuspendingImport(applicationId,
    ConvertAccountUidToFsUserId(user));
}

SaveDataTransferManagerVersion2::SaveDataTag
  SaveDataTransferManagerVersion2::MakeUserAccountSaveDataTag(
  ncm::ApplicationId applicationId, const account::Uid& user) {
  return MakeUserAccountSaveDataTag(applicationId,
    ConvertAccountUidToFsUserId(user));
}

Result SaveDataTransferManagerForSaveDataRepair::OpenSaveDataImporter(
  std::unique_ptr<ISaveDataDivisionImporter>* outValue,
  const InitialDataVersion2& initialData,
  const InitialDataVersion2& baseInitialData, const account::Uid& user,
  SaveDataSpaceId spaceId) {
  return OpenSaveDataImporter(outValue, initialData, baseInitialData,
    ConvertAccountUidToFsUserId(user), spaceId);
}

Result SaveDataTransferManagerForSaveDataRepair::OpenSaveDataImporter(
  std::unique_ptr<ISaveDataDivisionImporter>* outValue,
  const InitialDataVersion2& initialData, const account::Uid& user,
  SaveDataSpaceId spaceId) {
  return OpenSaveDataImporter(outValue, initialData,
    ConvertAccountUidToFsUserId(user), spaceId);
}

Result SaveDataTransferManagerForSaveDataRepair::OpenSaveDataImporterWithKey(
  std::unique_ptr<ISaveDataDivisionImporter>* outValue,
  const AesKeyImpl<16>& key, const InitialDataVersion2& initialData,
  const account::Uid& user, SaveDataSpaceId spaceId) {
  return OpenSaveDataImporterWithKey(outValue, key, initialData,
    ConvertAccountUidToFsUserId(user), spaceId);
}

}
