#include <string.h>

#include "nn/fs/detail/fs_file_system_proxy_service_object.hpp"
#include "nn/fs/detail/fs_log.hpp"
#include "nn/fs/detail/fs_save_data_division.hpp"
#include "nn/fs/fs_save_data_transfer.hpp"
#include "nn/fssrv/sf/fssrv_sf_isave_data_transfer_manager.hpp"

namespace nn::fs {

namespace {

const uint32_t InitialDataBodyMagic = 0x30444953;
const uint32_t InitialDataVersionMax = 0x100;

struct InitialDataHeader {
  uint32_t reserved0;
  int16_t version;
  char reserved1[26];
};

// The initial data body starts 0x20 bytes into the initial data.
struct InitialDataBody {
  uint32_t magic = InitialDataBodyMagic;
  uint32_t version = 0;
  SaveDataAttribute attribute;
  char reserved[0x1F88];

  static void* operator new(size_t size) noexcept {
    return detail::Allocate(size);
  }

  static void operator delete(void* pointer, size_t size) noexcept {
    detail::Deallocate(pointer, size);
  }
};

}

SaveDataTransferManager::SaveDataTransferManager() {
  auto fileSystemProxy = detail::GetFileSystemProxyServiceObject();
  NN_FS_ABORT_UNLESS_RESULT_SUCCESS_WITH_LOG(
    fileSystemProxy->OpenSaveDataTransferManager(nn::sf::Out<
      nn::sf::SharedPointer<fssrv::sf::ISaveDataTransferManager>>(
        &m_Interface)));
}

Result SaveDataTransferManager::GetChallenge(void* outBuffer, size_t size) {
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(m_Interface->GetChallenge(
    nn::sf::OutBuffer(outBuffer, size)));
  return ResultSuccess();
}

Result SaveDataTransferManager::SetToken(const void* token, size_t size) {
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(m_Interface->SetToken(
    nn::sf::InBuffer(token, size)));
  return ResultSuccess();
}

Result SaveDataTransferManager::OpenSaveDataExporter(
  std::unique_ptr<SaveDataExporter>* outValue, SaveDataSpaceId spaceId,
  uint64_t saveDataId) {
  nn::sf::SharedPointer<fssrv::sf::ISaveDataExporter> exporter;
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(m_Interface->OpenSaveDataExporter(
    nn::sf::Out<nn::sf::SharedPointer<fssrv::sf::ISaveDataExporter>>(
      &exporter), spaceId, saveDataId));
  std::unique_ptr<SaveDataExporter> object(
    new SaveDataExporter(std::move(exporter)));
  NN_FS_RESULT_THROW_UNLESS_WITH_ABORT_CHECK(object != nullptr,
    ResultAllocationMemoryFailedNew());
  *outValue = std::move(object);
  return ResultSuccess();
}

Result SaveDataTransferManager::OpenSaveDataImporter(
  std::unique_ptr<SaveDataImporter>* outValue, int64_t* outRequiredSize,
  const void* initialData, size_t initialDataSize, const UserId& userId,
  SaveDataSpaceId spaceId) {
  nn::sf::SharedPointer<fssrv::sf::ISaveDataImporter> importer;
  int64_t requiredSize = 0;
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(m_Interface->OpenSaveDataImporter(
    nn::sf::Out<nn::sf::SharedPointer<fssrv::sf::ISaveDataImporter>>(
      &importer), nn::sf::Out<int64_t>(&requiredSize),
    nn::sf::InBuffer(initialData, initialDataSize), userId, spaceId));
  if (requiredSize != 0) {
    *outRequiredSize = requiredSize;
    NN_FS_RESULT_DO_WITH_ABORT_CHECK(ResultUsableSpaceNotEnough());
  }
  std::unique_ptr<SaveDataImporter> object(
    new SaveDataImporter(std::move(importer)));
  NN_FS_RESULT_THROW_UNLESS_WITH_ABORT_CHECK(object != nullptr,
    ResultAllocationMemoryFailedNew());
  *outValue = std::move(object);
  return ResultSuccess();
}

SaveDataTransferManagerForRepair::SaveDataTransferManagerForRepair() {
  auto fileSystemProxy = detail::GetFileSystemProxyServiceObject();
  NN_FS_ABORT_UNLESS_RESULT_SUCCESS_WITH_LOG(
    fileSystemProxy->OpenSaveDataTransferManagerForRepair(nn::sf::Out<
      nn::sf::SharedPointer<fssrv::sf::ISaveDataTransferManagerForRepair>>(
        &m_Interface)));
}

Result SaveDataTransferManagerForRepair::OpenSaveDataExporter(
  std::unique_ptr<ISaveDataDivisionExporter>* outValue,
  SaveDataSpaceId spaceId, uint64_t saveDataId) {
  nn::sf::SharedPointer<fssrv::sf::ISaveDataDivisionExporter> exporter;
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(m_Interface->OpenSaveDataExporter(
    nn::sf::Out<nn::sf::SharedPointer<fssrv::sf::ISaveDataDivisionExporter>>(
      &exporter), spaceId, saveDataId));
  std::unique_ptr<ISaveDataDivisionExporter> object(
    new detail::SaveDataExporterVersion2(std::move(exporter)));
  NN_FS_RESULT_THROW_UNLESS_WITH_ABORT_CHECK(object != nullptr,
    ResultAllocationMemoryFailedNew());
  *outValue = std::move(object);
  return ResultSuccess();
}

Result SaveDataTransferManagerForRepair::OpenSaveDataImporter(
  std::unique_ptr<ISaveDataDivisionImporter>* outValue,
  const InitialDataVersion2& initialData, SaveDataSpaceId spaceId) {
  nn::sf::SharedPointer<fssrv::sf::ISaveDataDivisionImporter> importer;
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(m_Interface->OpenSaveDataImporter(
    nn::sf::Out<nn::sf::SharedPointer<fssrv::sf::ISaveDataDivisionImporter>>(
      &importer),
    nn::sf::InBuffer(&initialData, sizeof(initialData)), spaceId));
  std::unique_ptr<ISaveDataDivisionImporter> object(
    new detail::SaveDataImporterVersion2(std::move(importer)));
  NN_FS_RESULT_THROW_UNLESS_WITH_ABORT_CHECK(object != nullptr,
    ResultAllocationMemoryFailedNew());
  *outValue = std::move(object);
  return ResultSuccess();
}

Result SaveDataTransferManagerForRepair::GetSaveDataAttribute(
  SaveDataAttribute* outValue, const InitialDataVersion2& initialData) {
  std::unique_ptr<InitialDataBody> body(new InitialDataBody());
  NN_FS_RESULT_THROW_UNLESS_WITH_ABORT_CHECK(body != nullptr,
    ResultAllocationMemoryFailed());
  const auto& header =
    *reinterpret_cast<const InitialDataHeader*>(initialData.data);
  NN_FS_RESULT_THROW_UNLESS_WITH_ABORT_CHECK(header.version >= 0,
    ResultInvalidSaveDataTransferInitialData());
  NN_FS_RESULT_THROW_UNLESS_WITH_ABORT_CHECK(
    header.version < static_cast<int16_t>(InitialDataVersionMax),
    ResultUnsupportedSaveDataTransferInitialDataVersion());
  memcpy(body.get(), initialData.data + sizeof(InitialDataHeader),
    sizeof(InitialDataBody));
  NN_FS_RESULT_THROW_UNLESS_WITH_ABORT_CHECK(
    body->magic == InitialDataBodyMagic,
    ResultInvalidSaveDataTransferInitialData());
  NN_FS_RESULT_THROW_UNLESS_WITH_ABORT_CHECK(body->version >= 2,
    ResultInvalidSaveDataTransferInitialData());
  NN_FS_RESULT_THROW_UNLESS_WITH_ABORT_CHECK(
    body->version < InitialDataVersionMax,
    ResultUnsupportedSaveDataTransferInitialDataVersion());
  *outValue = body->attribute;
  return ResultSuccess();
}

SaveDataTransferManagerForSaveDataRepair::
  SaveDataTransferManagerForSaveDataRepair(int keyGeneration) {
  auto fileSystemProxy = detail::GetFileSystemProxyServiceObject();
  NN_FS_ABORT_UNLESS_RESULT_SUCCESS_WITH_LOG(
    fileSystemProxy->OpenSaveDataTransferManagerForSaveDataRepair(
      nn::sf::Out<nn::sf::SharedPointer<
        fssrv::sf::ISaveDataTransferManagerForSaveDataRepair>>(&m_Interface),
      keyGeneration));
}

Result SaveDataTransferManagerForSaveDataRepair::GetChallenge(
  SaveDataTransferManagerVersion2::Challenge* outChallenge) {
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(m_Interface->GetChallenge(
    nn::sf::OutBuffer(outChallenge, sizeof(*outChallenge))));
  return ResultSuccess();
}

Result SaveDataTransferManagerForSaveDataRepair::SetKeyPackage(
  const KeyPackageV1& keyPackage) {
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(m_Interface->SetKeyPackage(
    nn::sf::InBuffer(&keyPackage, sizeof(keyPackage))));
  return ResultSuccess();
}

Result SaveDataTransferManagerForSaveDataRepair::
  OpenSaveDataExporterAndGetEncryptedKey(
  std::unique_ptr<ISaveDataDivisionExporter>* outValue,
  RsaEncryptedKeyImpl<384>* outEncryptedKey, SaveDataSpaceId spaceId,
  uint64_t saveDataId) {
  nn::sf::SharedPointer<fssrv::sf::ISaveDataDivisionExporter> exporter;
  RsaEncryptedKeyImpl<384> encryptedKey = {};
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(
    m_Interface->OpenSaveDataExporterAndGetEncryptedKey(
    nn::sf::Out<nn::sf::SharedPointer<fssrv::sf::ISaveDataDivisionExporter>>(
      &exporter),
    nn::sf::OutBuffer(&encryptedKey, sizeof(encryptedKey)), spaceId,
    saveDataId));
  std::unique_ptr<ISaveDataDivisionExporter> object(
    new detail::SaveDataExporterVersion2(std::move(exporter)));
  NN_FS_RESULT_THROW_UNLESS_WITH_ABORT_CHECK(object != nullptr,
    ResultAllocationMemoryFailedNew());
  *outValue = std::move(object);
  *outEncryptedKey = encryptedKey;
  return ResultSuccess();
}

Result SaveDataTransferManagerForSaveDataRepair::PrepareOpenSaveDataImporter(
  RsaEncryptedKeyImpl<384>* outEncryptedKey) {
  RsaEncryptedKeyImpl<384> encryptedKey = {};
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(m_Interface->PrepareOpenSaveDataImporter(
    nn::sf::OutBuffer(&encryptedKey, sizeof(encryptedKey))));
  *outEncryptedKey = encryptedKey;
  return ResultSuccess();
}

Result SaveDataTransferManagerForSaveDataRepair::OpenSaveDataImporter(
  std::unique_ptr<ISaveDataDivisionImporter>* outValue,
  const InitialDataVersion2& initialData,
  const InitialDataVersion2& baseInitialData, const UserId& userId,
  SaveDataSpaceId spaceId) {
  nn::sf::SharedPointer<fssrv::sf::ISaveDataDivisionImporter> importer;
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(
    m_Interface->OpenSaveDataImporterForSaveDataAfterRepair(
    nn::sf::Out<nn::sf::SharedPointer<fssrv::sf::ISaveDataDivisionImporter>>(
      &importer),
    nn::sf::InBuffer(&initialData, sizeof(initialData)),
    nn::sf::InBuffer(&baseInitialData, sizeof(baseInitialData)), userId,
    spaceId));
  std::unique_ptr<ISaveDataDivisionImporter> object(
    new detail::SaveDataImporterVersion2(std::move(importer)));
  NN_FS_RESULT_THROW_UNLESS_WITH_ABORT_CHECK(object != nullptr,
    ResultAllocationMemoryFailedNew());
  *outValue = std::move(object);
  return ResultSuccess();
}

Result SaveDataTransferManagerForSaveDataRepair::OpenSaveDataImporter(
  std::unique_ptr<ISaveDataDivisionImporter>* outValue,
  const InitialDataVersion2& initialData, const UserId& userId,
  SaveDataSpaceId spaceId) {
  nn::sf::SharedPointer<fssrv::sf::ISaveDataDivisionImporter> importer;
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(
    m_Interface->OpenSaveDataImporterForSaveDataBeforeRepair(
    nn::sf::Out<nn::sf::SharedPointer<fssrv::sf::ISaveDataDivisionImporter>>(
      &importer),
    nn::sf::InBuffer(&initialData, sizeof(initialData)), userId, spaceId));
  std::unique_ptr<ISaveDataDivisionImporter> object(
    new detail::SaveDataImporterVersion2(std::move(importer)));
  NN_FS_RESULT_THROW_UNLESS_WITH_ABORT_CHECK(object != nullptr,
    ResultAllocationMemoryFailedNew());
  *outValue = std::move(object);
  return ResultSuccess();
}

Result SaveDataTransferManagerForSaveDataRepair::OpenDeviceSaveDataImporter(
  std::unique_ptr<ISaveDataDivisionImporter>* outValue,
  const InitialDataVersion2& initialData,
  const InitialDataVersion2& baseInitialData, SaveDataSpaceId spaceId) {
  nn::sf::SharedPointer<fssrv::sf::ISaveDataDivisionImporter> importer;
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(
    m_Interface->OpenSaveDataImporterForSaveDataAfterRepair(
    nn::sf::Out<nn::sf::SharedPointer<fssrv::sf::ISaveDataDivisionImporter>>(
      &importer),
    nn::sf::InBuffer(&initialData, sizeof(initialData)),
    nn::sf::InBuffer(&baseInitialData, sizeof(baseInitialData)), InvalidUserId,
    spaceId));
  std::unique_ptr<ISaveDataDivisionImporter> object(
    new detail::SaveDataImporterVersion2(std::move(importer)));
  NN_FS_RESULT_THROW_UNLESS_WITH_ABORT_CHECK(object != nullptr,
    ResultAllocationMemoryFailedNew());
  *outValue = std::move(object);
  return ResultSuccess();
}

Result SaveDataTransferManagerForSaveDataRepair::OpenDeviceSaveDataImporter(
  std::unique_ptr<ISaveDataDivisionImporter>* outValue,
  const InitialDataVersion2& initialData, SaveDataSpaceId spaceId) {
  nn::sf::SharedPointer<fssrv::sf::ISaveDataDivisionImporter> importer;
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(
    m_Interface->OpenSaveDataImporterForSaveDataBeforeRepair(
    nn::sf::Out<nn::sf::SharedPointer<fssrv::sf::ISaveDataDivisionImporter>>(
      &importer),
    nn::sf::InBuffer(&initialData, sizeof(initialData)), InvalidUserId,
    spaceId));
  std::unique_ptr<ISaveDataDivisionImporter> object(
    new detail::SaveDataImporterVersion2(std::move(importer)));
  NN_FS_RESULT_THROW_UNLESS_WITH_ABORT_CHECK(object != nullptr,
    ResultAllocationMemoryFailedNew());
  *outValue = std::move(object);
  return ResultSuccess();
}

Result SaveDataTransferManagerForSaveDataRepair::OpenSaveDataExporterWithKey(
  std::unique_ptr<ISaveDataDivisionExporter>* outValue,
  const AesKeyImpl<16>& key, SaveDataSpaceId spaceId, uint64_t saveDataId) {
  nn::sf::SharedPointer<fssrv::sf::ISaveDataDivisionExporter> exporter;
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(m_Interface->OpenSaveDataExporterWithKey(
    nn::sf::Out<nn::sf::SharedPointer<fssrv::sf::ISaveDataDivisionExporter>>(
      &exporter),
    nn::sf::InBuffer(&key, sizeof(key)), spaceId, saveDataId));
  std::unique_ptr<ISaveDataDivisionExporter> object(
    new detail::SaveDataExporterVersion2(std::move(exporter)));
  NN_FS_RESULT_THROW_UNLESS_WITH_ABORT_CHECK(object != nullptr,
    ResultAllocationMemoryFailedNew());
  *outValue = std::move(object);
  return ResultSuccess();
}

Result SaveDataTransferManagerForSaveDataRepair::OpenSaveDataImporterWithKey(
  std::unique_ptr<ISaveDataDivisionImporter>* outValue,
  const AesKeyImpl<16>& key, const InitialDataVersion2& initialData,
  const UserId& userId, SaveDataSpaceId spaceId) {
  nn::sf::SharedPointer<fssrv::sf::ISaveDataDivisionImporter> importer;
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(m_Interface->OpenSaveDataImporterWithKey(
    nn::sf::Out<nn::sf::SharedPointer<fssrv::sf::ISaveDataDivisionImporter>>(
      &importer),
    nn::sf::InBuffer(&key, sizeof(key)),
    nn::sf::InBuffer(&initialData, sizeof(initialData)), userId,
    static_cast<uint64_t>(spaceId)));
  std::unique_ptr<ISaveDataDivisionImporter> object(
    new detail::SaveDataImporterVersion2(std::move(importer)));
  NN_FS_RESULT_THROW_UNLESS_WITH_ABORT_CHECK(object != nullptr,
    ResultAllocationMemoryFailedNew());
  *outValue = std::move(object);
  return ResultSuccess();
}

Result SaveDataTransferManagerForSaveDataRepair::OpenSaveDataExporterWithKey(
  std::unique_ptr<ISaveDataDivisionExporter>* outValue,
  const AesKeyImpl<32>& key, SaveDataSpaceId spaceId, uint64_t saveDataId) {
  nn::sf::SharedPointer<fssrv::sf::ISaveDataDivisionExporter> exporter;
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(m_Interface->OpenSaveDataExporterWithKey(
    nn::sf::Out<nn::sf::SharedPointer<fssrv::sf::ISaveDataDivisionExporter>>(
      &exporter),
    nn::sf::InBuffer(&key, sizeof(key)), spaceId, saveDataId));
  std::unique_ptr<ISaveDataDivisionExporter> object(
    new detail::SaveDataExporterVersion2(std::move(exporter)));
  NN_FS_RESULT_THROW_UNLESS_WITH_ABORT_CHECK(object != nullptr,
    ResultAllocationMemoryFailedNew());
  *outValue = std::move(object);
  return ResultSuccess();
}

Result SaveDataTransferManagerForSaveDataRepair::OpenSaveDataImporterWithKey(
  std::unique_ptr<ISaveDataDivisionImporter>* outValue,
  const AesKeyImpl<32>& key, const InitialDataVersion2& initialData,
  const UserId& userId, SaveDataSpaceId spaceId) {
  nn::sf::SharedPointer<fssrv::sf::ISaveDataDivisionImporter> importer;
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(m_Interface->OpenSaveDataImporterWithKey(
    nn::sf::Out<nn::sf::SharedPointer<fssrv::sf::ISaveDataDivisionImporter>>(
      &importer),
    nn::sf::InBuffer(&key, sizeof(key)),
    nn::sf::InBuffer(&initialData, sizeof(initialData)), userId,
    static_cast<uint64_t>(spaceId)));
  std::unique_ptr<ISaveDataDivisionImporter> object(
    new detail::SaveDataImporterVersion2(std::move(importer)));
  NN_FS_RESULT_THROW_UNLESS_WITH_ABORT_CHECK(object != nullptr,
    ResultAllocationMemoryFailedNew());
  *outValue = std::move(object);
  return ResultSuccess();
}

}
