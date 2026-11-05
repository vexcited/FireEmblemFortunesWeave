#include "nn/fs/detail/fs_file_system_proxy_service_object.hpp"
#include "nn/fs/detail/fs_log.hpp"
#include "nn/fs/detail/fs_save_data_division.hpp"
#include "nn/fs/fs_save_data_transfer.hpp"
#include "nn/fssrv/sf/fssrv_sf_isave_data_transfer_manager.hpp"

namespace nn::fs {

SaveDataTransferManagerVersion2::SaveDataTransferManagerVersion2() {
  auto fileSystemProxy = detail::GetFileSystemProxyServiceObject();
  NN_FS_ABORT_UNLESS_RESULT_SUCCESS_WITH_LOG(
    fileSystemProxy->OpenSaveDataTransferManagerVersion2(nn::sf::Out<
      nn::sf::SharedPointer<fssrv::sf::ISaveDataTransferManagerWithDivision>>(
        &m_Interface)));
}

Result SaveDataTransferManagerVersion2::SetMode(Mode mode) {
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(m_Interface->SetMode(mode));
  return ResultSuccess();
}

Result SaveDataTransferManagerVersion2::SetAttribute(Attribute attribute) {
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(m_Interface->SetAttribute(attribute));
  return ResultSuccess();
}

Result SaveDataTransferManagerVersion2::GetChallenge(Challenge* outChallenge) {
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(m_Interface->GetChallenge(
    nn::sf::OutBuffer(outChallenge, sizeof(*outChallenge))));
  return ResultSuccess();
}

Result SaveDataTransferManagerVersion2::SetKeySeedPackage(
  const KeySeedPackage& keySeedPackage) {
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(m_Interface->SetKeySeedPackage(
    nn::sf::InBuffer(&keySeedPackage, sizeof(keySeedPackage))));
  return ResultSuccess();
}

Result SaveDataTransferManagerVersion2::SetLocalKeySeedPackage(
  const LocalKeySeedPackage& localKeySeedPackage) {
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(m_Interface->SetLocalKeySeedPackage(
    nn::sf::InBuffer(&localKeySeedPackage, sizeof(localKeySeedPackage))));
  return ResultSuccess();
}

Result SaveDataTransferManagerVersion2::OpenSaveDataFullExporter(
  std::unique_ptr<ISaveDataDivisionExporter>* outValue,
  SaveDataSpaceId spaceId, uint64_t saveDataId) {
  nn::sf::SharedPointer<fssrv::sf::ISaveDataDivisionExporter> exporter;
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(m_Interface->OpenSaveDataFullExporter(
    nn::sf::Out<nn::sf::SharedPointer<fssrv::sf::ISaveDataDivisionExporter>>(
      &exporter), spaceId, saveDataId));
  std::unique_ptr<ISaveDataDivisionExporter> object(
    new detail::SaveDataExporterVersion2(std::move(exporter)));
  NN_FS_RESULT_THROW_UNLESS_WITH_ABORT_CHECK(object != nullptr,
    ResultAllocationMemoryFailedNew());
  *outValue = std::move(object);
  return ResultSuccess();
}

Result SaveDataTransferManagerVersion2::OpenSaveDataDiffExporter(
  std::unique_ptr<ISaveDataDivisionExporter>* outValue,
  const InitialDataVersion2& initialData, SaveDataSpaceId spaceId,
  uint64_t saveDataId) {
  nn::sf::SharedPointer<fssrv::sf::ISaveDataDivisionExporter> exporter;
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(m_Interface->OpenSaveDataDiffExporter(
    nn::sf::Out<nn::sf::SharedPointer<fssrv::sf::ISaveDataDivisionExporter>>(
      &exporter),
    nn::sf::InBuffer(&initialData, sizeof(initialData)), spaceId, saveDataId));
  std::unique_ptr<ISaveDataDivisionExporter> object(
    new detail::SaveDataExporterVersion2(std::move(exporter)));
  NN_FS_RESULT_THROW_UNLESS_WITH_ABORT_CHECK(object != nullptr,
    ResultAllocationMemoryFailedNew());
  *outValue = std::move(object);
  return ResultSuccess();
}

Result SaveDataTransferManagerVersion2::OpenSaveDataExporterByContext(
  std::unique_ptr<ISaveDataDivisionExporter>* outValue,
  const ISaveDataDivisionExporter::ExportContext& context) {
  nn::sf::SharedPointer<fssrv::sf::ISaveDataDivisionExporter> exporter;
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(m_Interface->OpenSaveDataExporterByContext(
    nn::sf::Out<nn::sf::SharedPointer<fssrv::sf::ISaveDataDivisionExporter>>(
      &exporter),
    nn::sf::InBuffer(&context, sizeof(context))));
  std::unique_ptr<ISaveDataDivisionExporter> object(
    new detail::SaveDataExporterVersion2(std::move(exporter)));
  NN_FS_RESULT_THROW_UNLESS_WITH_ABORT_CHECK(object != nullptr,
    ResultAllocationMemoryFailedNew());
  *outValue = std::move(object);
  return ResultSuccess();
}

Result SaveDataTransferManagerVersion2::OpenSaveDataImporterImpl(
  std::unique_ptr<ISaveDataDivisionImporter>* outValue,
  const InitialDataVersion2& initialData, uint64_t staticSaveDataId,
  const UserId& userId, uint64_t ownerId, SaveDataSpaceId spaceId) {
  nn::sf::SharedPointer<fssrv::sf::ISaveDataDivisionImporter> importer;
  fssrv::sf::SaveDataImportParameter parameter = {};
  parameter.userId = userId;
  parameter.staticSaveDataId = staticSaveDataId;
  parameter.ownerId = ownerId;
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(m_Interface->OpenSaveDataImporter(
    nn::sf::Out<nn::sf::SharedPointer<fssrv::sf::ISaveDataDivisionImporter>>(
      &importer),
    nn::sf::InBuffer(&initialData, sizeof(initialData)), parameter, spaceId));
  std::unique_ptr<ISaveDataDivisionImporter> object(
    new detail::SaveDataImporterVersion2(std::move(importer)));
  NN_FS_RESULT_THROW_UNLESS_WITH_ABORT_CHECK(object != nullptr,
    ResultAllocationMemoryFailedNew());
  *outValue = std::move(object);
  return ResultSuccess();
}

Result SaveDataTransferManagerVersion2::OpenSaveDataImporter(
  std::unique_ptr<ISaveDataDivisionImporter>* outValue,
  const InitialDataVersion2& initialData, SaveDataSpaceId spaceId) {
  return OpenSaveDataImporterImpl(outValue, initialData, 0, InvalidUserId, 0,
    spaceId);
}

Result SaveDataTransferManagerVersion2::OpenSaveDataImporterByContext(
  std::unique_ptr<ISaveDataDivisionImporter>* outValue,
  const ISaveDataDivisionImporter::ImportContext& context) {
  nn::sf::SharedPointer<fssrv::sf::ISaveDataDivisionImporter> importer;
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(m_Interface->OpenSaveDataImporterByContext(
    nn::sf::Out<nn::sf::SharedPointer<fssrv::sf::ISaveDataDivisionImporter>>(
      &importer),
    nn::sf::InBuffer(&context, sizeof(context))));
  std::unique_ptr<ISaveDataDivisionImporter> object(
    new detail::SaveDataImporterVersion2(std::move(importer)));
  NN_FS_RESULT_THROW_UNLESS_WITH_ABORT_CHECK(object != nullptr,
    ResultAllocationMemoryFailedNew());
  *outValue = std::move(object);
  return ResultSuccess();
}

SaveDataTransferManagerVersion2::SaveDataTag
  SaveDataTransferManagerVersion2::MakeUserAccountSaveDataTag(
  ncm::ApplicationId applicationId, const UserId& userId) {
  SaveDataAttribute attribute = {};
  NN_FS_ABORT_UNLESS_RESULT_SUCCESS(SaveDataAttribute::Make(&attribute,
    SaveDataReferenceId{applicationId.value}, SaveDataType::Account, userId,
    0, 0, SaveDataRank::Primary));
  return SaveDataTag{attribute};
}

SaveDataTransferManagerVersion2::SaveDataTag
  SaveDataTransferManagerVersion2::MakeDeviceSaveDataTag(
  ncm::ApplicationId applicationId) {
  SaveDataAttribute attribute = {};
  NN_FS_ABORT_UNLESS_RESULT_SUCCESS(SaveDataAttribute::Make(&attribute,
    SaveDataReferenceId{applicationId.value}, SaveDataType::Device,
    InvalidUserId, 0, 0, SaveDataRank::Primary));
  return SaveDataTag{attribute};
}

Result SaveDataTransferManagerVersion2::CancelSuspendingImport(
  ncm::ApplicationId applicationId, const UserId& userId) {
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(m_Interface->CancelSuspendingImport(
    applicationId, userId));
  return ResultSuccess();
}

Result SaveDataTransferManagerVersion2::CancelSuspendingImport(
  const SaveDataTag& tag) {
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(
    m_Interface->CancelSuspendingImportByAttribute(tag.attribute));
  return ResultSuccess();
}

Result SaveDataTransferManagerVersion2::SwapSecondary(const SaveDataTag& tag,
  util::optional<int64_t> commitId) {
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(m_Interface->SwapSecondary(tag.attribute,
    commitId.has_value(), commitId.has_value() ? *commitId : 0));
  return ResultSuccess();
}

}
