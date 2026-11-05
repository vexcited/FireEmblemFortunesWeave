#include <stddef.h>

#include "nn/crypto/ecdsa_p256_sha256_signer.hpp"
#include "nn/fs/detail/fs_file_system_proxy_service_object.hpp"
#include "nn/fs/detail/fs_id_string.hpp"
#include "nn/fs/detail/fs_log.hpp"
#include "nn/fs/fs_save_data.hpp"
#include "nn/os/random.hpp"

namespace nn::fs {

namespace {

const int64_t SaveDataBlockSize = 0x4000;
const int64_t BcatSaveDataJournalSize = 0x200000;
const uint64_t BcatSaveDataOwnerId = 0x040000000000000C;
const uint32_t ThumbnailFileSize = 0x40060;

const uint8_t SaveDataCertificateVersion = 1;
const uint8_t SaveDataCertificateKeyType = 4;
const uint64_t SystemProgramIdPrefix = 0x01;

inline Result GenerateSaveDataCertificate(
  SaveDataCertificate* outCertificate, ncm::ApplicationId applicationId) {
  SaveDataCertificate certificate = {};
  // System programs do not get a signed certificate.
  if ((applicationId.value >> 56) != SystemProgramIdPrefix) {
    certificate.version = SaveDataCertificateVersion;
    certificate.keyType = SaveDataCertificateKeyType;
    certificate.hasProgramId = true;
    certificate.programId = applicationId.value;
    certificate.isDevelopment = true;
    char random[32] = {};
    const uint8_t privateKey[32] = {
      0x57, 0x2B, 0xE5, 0xF6, 0xE3, 0xB7, 0x2F, 0x47, 0xCE, 0x84, 0x55, 0x2F,
      0x06, 0x4D, 0x81, 0xDE, 0x83, 0x6B, 0x7B, 0xE8, 0xD0, 0x23, 0x8D, 0x1B,
      0x8B, 0xA8, 0x01, 0x51, 0xB4, 0x0C, 0x06, 0xED,
    };
    os::GenerateRandomBytes(random, sizeof(random));
    crypto::EcdsaP256Sha256Signer signer;
    NN_FS_RESULT_THROW_UNLESS(signer.Sign(certificate.signature,
      sizeof(certificate.signature), privateKey, sizeof(privateKey),
      &certificate, offsetof(SaveDataCertificate, signature), random,
      sizeof(random)), ResultUnexpected());
  }
  *outCertificate = certificate;
  return ResultSuccess();
}

}

namespace detail {

Result GenerateSaveDataCertificateDev(SaveDataCertificate* outCertificate,
  ncm::ApplicationId applicationId) {
  return GenerateSaveDataCertificate(outCertificate, applicationId);
}

Result FindSaveDataWithFilter(SaveDataInfo* outInfo, SaveDataSpaceId spaceId,
  const SaveDataFilter& filter) {
  NN_FS_RESULT_THROW_UNLESS(outInfo != nullptr, ResultNullptrArgument());
  auto fileSystemProxy = GetFileSystemProxyServiceObject();
  int64_t count = 0;
  SaveDataInfo info = {};
  NN_FS_RESULT_DO(fileSystemProxy->FindSaveDataWithFilter(
    nn::sf::Out<int64_t>(&count), nn::sf::OutBuffer(&info, sizeof(info)),
    spaceId, filter));
  NN_FS_RESULT_THROW_UNLESS(count != 0, ResultTargetNotFound());
  *outInfo = info;
  return ResultSuccess();
}

Result CreateSaveData(ncm::ApplicationId applicationId, UserId userId,
  uint64_t ownerId, int64_t size, int64_t journalSize, uint32_t flags,
  const SaveDataCertificate* certificate) {
  auto fileSystemProxy = GetFileSystemProxyServiceObject();
  SaveDataAttribute attribute = {};
  NN_FS_RESULT_DO(SaveDataAttribute::Make(&attribute,
    SaveDataReferenceId{applicationId.value}, SaveDataType::Account, userId,
    0));
  SaveDataCreationInfo2 creationInfo = {};
  NN_FS_RESULT_DO(SaveDataCreationInfo2::Make(&creationInfo, attribute, size,
    journalSize, SaveDataBlockSize, ownerId, flags, SaveDataSpaceId::User,
    SaveDataFormatType::Normal, certificate));
  creationInfo.metaType = SaveDataMetaType::Thumbnail;
  creationInfo.metaSize = ThumbnailFileSize;
  return fileSystemProxy->CreateSaveDataFileSystemWithCreationInfo2(
    creationInfo);
}

// The public creation function calls this one out of line.
[[gnu::noinline]] Result CreateBcatSaveData(ncm::ApplicationId applicationId, int64_t size,
  const SaveDataCertificate* certificate) {
  auto fileSystemProxy = GetFileSystemProxyServiceObject();
  SaveDataAttribute attribute = {};
  NN_FS_RESULT_DO(SaveDataAttribute::Make(&attribute,
    SaveDataReferenceId{applicationId.value}, SaveDataType::Bcat, UserId{},
    0));
  SaveDataCreationInfo2 creationInfo = {};
  NN_FS_RESULT_DO(SaveDataCreationInfo2::Make(&creationInfo, attribute, size,
    BcatSaveDataJournalSize, SaveDataBlockSize, BcatSaveDataOwnerId, 0,
    SaveDataSpaceId::User, SaveDataFormatType::Normal, certificate));
  creationInfo.metaType = SaveDataMetaType::None;
  creationInfo.metaSize = 0;
  return fileSystemProxy->CreateSaveDataFileSystemWithCreationInfo2(
    creationInfo);
}

Result CreateDeviceSaveData(ncm::ApplicationId applicationId,
  uint64_t ownerId, int64_t size, int64_t journalSize, uint32_t flags,
  const SaveDataCertificate* certificate) {
  auto fileSystemProxy = GetFileSystemProxyServiceObject();
  SaveDataAttribute attribute = {};
  NN_FS_RESULT_DO(SaveDataAttribute::Make(&attribute,
    SaveDataReferenceId{applicationId.value}, SaveDataType::Device, UserId{},
    0));
  SaveDataCreationInfo2 creationInfo = {};
  NN_FS_RESULT_DO(SaveDataCreationInfo2::Make(&creationInfo, attribute, size,
    journalSize, SaveDataBlockSize, ownerId, flags, SaveDataSpaceId::User,
    SaveDataFormatType::Normal, certificate));
  creationInfo.metaType = SaveDataMetaType::Thumbnail;
  creationInfo.metaSize = ThumbnailFileSize;
  return fileSystemProxy->CreateSaveDataFileSystemWithCreationInfo2(
    creationInfo);
}

Result CreateCacheStorage(ncm::ApplicationId applicationId,
  SaveDataSpaceId spaceId, uint64_t ownerId, uint16_t index, int64_t size,
  int64_t journalSize, uint32_t flags,
  const SaveDataCertificate* certificate) {
  auto fileSystemProxy = GetFileSystemProxyServiceObject();
  SaveDataAttribute attribute = {};
  NN_FS_RESULT_DO(SaveDataAttribute::Make(&attribute,
    SaveDataReferenceId{applicationId.value}, SaveDataType::Cache, UserId{},
    0, index));
  SaveDataCreationInfo2 creationInfo = {};
  NN_FS_RESULT_DO(SaveDataCreationInfo2::Make(&creationInfo, attribute, size,
    journalSize, SaveDataBlockSize, ownerId, flags, spaceId,
    SaveDataFormatType::Normal, certificate));
  creationInfo.metaType = SaveDataMetaType::None;
  creationInfo.metaSize = 0;
  return fileSystemProxy->CreateSaveDataFileSystemWithCreationInfo2(
    creationInfo);
}

Result FixSaveDataCertificate(SaveDataSpaceId spaceId,
  ncm::ApplicationId applicationId, SaveDataType type, UserId userId,
  const SaveDataCertificate& certificate) {
  auto fileSystemProxy = GetFileSystemProxyServiceObject();
  SaveDataAttribute attribute = {};
  NN_FS_RESULT_DO(SaveDataAttribute::Make(&attribute,
    SaveDataReferenceId{applicationId.value}, type, userId, 0));
  return fileSystemProxy->FixSaveDataCertificate(spaceId, attribute,
    certificate);
}

Result CreateTemporaryStorage(ncm::ApplicationId applicationId,
  uint64_t ownerId, int64_t size, uint32_t flags) {
  auto fileSystemProxy = GetFileSystemProxyServiceObject();
  SaveDataAttribute attribute = {};
  NN_FS_RESULT_DO(SaveDataAttribute::Make(&attribute,
    SaveDataReferenceId{applicationId.value}, SaveDataType::Temporary,
    UserId{}, 0));
  SaveDataCreationInfo creationInfo = {};
  NN_FS_RESULT_DO(SaveDataCreationInfo::Make(&creationInfo, size, 0, ownerId,
    flags, SaveDataSpaceId::Temporary));
  SaveDataMetaInfo metaInfo = {};
  return fileSystemProxy->CreateSaveDataFileSystem(attribute, creationInfo,
    metaInfo);
}

Result CreateSystemSaveData(SaveDataSpaceId spaceId, uint64_t saveDataId,
  UserId userId, uint64_t ownerId, int64_t size, int64_t journalSize,
  uint32_t flags, SaveDataFormatType formatType) {
  NN_FS_RESULT_THROW_UNLESS(
    journalSize == 0 || formatType != SaveDataFormatType::NoJournal,
    ResultInvalidArgument());
  auto fileSystemProxy = GetFileSystemProxyServiceObject();
  SaveDataAttribute attribute = {};
  NN_FS_RESULT_DO(SaveDataAttribute::Make(&attribute, SaveDataReferenceId{0},
    SaveDataType::System, userId, saveDataId));
  SaveDataCreationInfo2 creationInfo = {};
  NN_FS_RESULT_DO(SaveDataCreationInfo2::Make(&creationInfo, attribute, size,
    journalSize, SaveDataBlockSize, ownerId, flags, spaceId, formatType,
    nullptr));
  creationInfo.metaType = SaveDataMetaType::None;
  creationInfo.metaSize = 0;
  return fileSystemProxy->CreateSaveDataFileSystemWithCreationInfo2(
    creationInfo);
}

}

Result FindSaveDataWithFilter(SaveDataInfo* outInfo, SaveDataSpaceId spaceId,
  const SaveDataFilter& filter) {
  Result result;
  NN_FS_ACCESS_LOG_SYSTEM(result,
    detail::FindSaveDataWithFilter(outInfo, spaceId, filter),
    ", savedataspaceid: %s", detail::IdString().ToString(spaceId));
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(result);
  return ResultSuccess();
}

Result CreateSaveData(ncm::ApplicationId applicationId, UserId userId,
  uint64_t ownerId, int64_t size, int64_t journalSize, uint32_t flags) {
  SaveDataCertificate certificate;
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(GenerateSaveDataCertificate(&certificate,
    applicationId));
  Result result;
  NN_FS_ACCESS_LOG_SYSTEM(result,
    detail::CreateSaveData(applicationId, userId, ownerId, size, journalSize,
      flags, &certificate),
    ", applicationid: 0x%lX, userid: 0x%016lX%016lX"
    ", save_data_owner_id: 0x%lX, save_data_size: %ld"
    ", save_data_journal_size: %ld, save_data_flags: 0x%08X",
    applicationId.value, userId.data[0], userId.data[1], ownerId, size,
    journalSize, flags);
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(result);
  return ResultSuccess();
}

Result CreateSaveData(ncm::ApplicationId applicationId, UserId userId,
  uint64_t ownerId, int64_t size, int64_t journalSize,
  const HashSalt& hashSalt, uint32_t flags) {
  auto create = [=]() -> Result {
    SaveDataCertificate certificate;
    NN_FS_RESULT_DO(GenerateSaveDataCertificate(&certificate,
      applicationId));
    auto fileSystemProxy = detail::GetFileSystemProxyServiceObject();
    SaveDataAttribute attribute = {};
    NN_FS_RESULT_DO(SaveDataAttribute::Make(&attribute,
      SaveDataReferenceId{applicationId.value}, SaveDataType::Account,
      userId, 0));
    SaveDataCreationInfo2 creationInfo = {};
    NN_FS_RESULT_DO(SaveDataCreationInfo2::Make(&creationInfo, attribute,
      size, journalSize, SaveDataBlockSize, ownerId, flags,
      SaveDataSpaceId::User, SaveDataFormatType::Normal, &certificate));
    creationInfo.isHashSaltEnabled = true;
    creationInfo.hashSalt = hashSalt;
    creationInfo.metaType = SaveDataMetaType::Thumbnail;
    creationInfo.metaSize = ThumbnailFileSize;
    return fileSystemProxy->CreateSaveDataFileSystemWithCreationInfo2(
      creationInfo);
  };
  Result result;
  NN_FS_ACCESS_LOG_SYSTEM(result, create(),
    ", applicationid: 0x%lX, userid: 0x%016lX%016lX"
    ", save_data_owner_id: 0x%lX, save_data_size: %ld"
    ", save_data_journal_size: %ld, save_data_flags: 0x%08X",
    applicationId.value, userId.data[0], userId.data[1], ownerId, size,
    journalSize, flags);
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(result);
  return ResultSuccess();
}

Result CreateBcatSaveData(ncm::ApplicationId applicationId, int64_t size) {
  SaveDataCertificate certificate;
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(GenerateSaveDataCertificate(&certificate,
    applicationId));
  Result result;
  NN_FS_ACCESS_LOG_SYSTEM(result,
    detail::CreateBcatSaveData(applicationId, size, &certificate),
    ", applicationid: 0x%lX, save_data_size: %ld", applicationId.value, size);
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(result);
  return ResultSuccess();
}

Result CreateDeviceSaveData(ncm::ApplicationId applicationId,
  uint64_t ownerId, int64_t size, int64_t journalSize, uint32_t flags) {
  SaveDataCertificate certificate;
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(GenerateSaveDataCertificate(&certificate,
    applicationId));
  Result result;
  NN_FS_ACCESS_LOG_SYSTEM(result,
    detail::CreateDeviceSaveData(applicationId, ownerId, size, journalSize,
      flags, &certificate),
    ", applicationid: 0x%lX, save_data_owner_id: 0x%lX, save_data_size: %ld"
    ", save_data_journal_size: %ld, save_data_flags: 0x%08X",
    applicationId.value, ownerId, size, journalSize, flags);
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(result);
  return ResultSuccess();
}

Result CreateTemporaryStorage(ncm::ApplicationId applicationId,
  uint64_t ownerId, int64_t size, uint32_t flags) {
  Result result;
  NN_FS_ACCESS_LOG_SYSTEM(result,
    detail::CreateTemporaryStorage(applicationId, ownerId, size, flags),
    ", applicationid: 0x%lX, save_data_owner_id: 0x%lX, save_data_size: %ld"
    ", save_data_flags: 0x%08X",
    applicationId.value, ownerId, size, flags);
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(result);
  return ResultSuccess();
}

Result CreateCacheStorage(ncm::ApplicationId applicationId,
  SaveDataSpaceId spaceId, uint64_t ownerId, uint16_t index, int64_t size,
  int64_t journalSize, uint32_t flags) {
  SaveDataCertificate certificate;
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(GenerateSaveDataCertificate(&certificate,
    applicationId));
  Result result;
  NN_FS_ACCESS_LOG_SYSTEM(result,
    detail::CreateCacheStorage(applicationId, spaceId, ownerId, index, size,
      journalSize, flags, &certificate),
    ", applicationid: 0x%lX, savedataspaceid: %s, save_data_owner_id: 0x%lX"
    ", save_data_size: %ld, save_data_journal_size: %ld"
    ", save_data_flags: 0x%08X",
    applicationId.value, detail::IdString().ToString(spaceId), ownerId, size,
    journalSize, flags);
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(result);
  return ResultSuccess();
}

Result CreateSystemSaveData(SaveDataSpaceId spaceId, uint64_t saveDataId,
  UserId userId, uint64_t ownerId, int64_t size, int64_t journalSize,
  uint32_t flags) {
  auto create = [&]() -> Result {
    auto fileSystemProxy = detail::GetFileSystemProxyServiceObject();
    SaveDataAttribute attribute = {};
    NN_FS_RESULT_DO(SaveDataAttribute::Make(&attribute,
      SaveDataReferenceId{0}, SaveDataType::System, userId, saveDataId));
    SaveDataCreationInfo creationInfo = {};
    NN_FS_RESULT_DO(SaveDataCreationInfo::Make(&creationInfo, size,
      journalSize, ownerId, flags, spaceId));
    return fileSystemProxy->CreateSaveDataFileSystemBySystemSaveDataId(
      attribute, creationInfo);
  };
  Result result;
  NN_FS_ACCESS_LOG_SYSTEM(result, create(),
    ", savedataspaceid: %s, savedataid: 0x%lX, userid: 0x%016lX%016lX"
    ", save_data_owner_id: 0x%lX, save_data_size: %ld"
    ", save_data_journal_size: %ld, save_data_flags: 0x%08X",
    detail::IdString().ToString(spaceId), saveDataId, userId.data[0],
    userId.data[1], ownerId, size, journalSize, flags);
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(result);
  return ResultSuccess();
}

Result CreateSystemSaveData(uint64_t saveDataId, UserId userId,
  uint64_t ownerId, int64_t size, int64_t journalSize, uint32_t flags) {
  return CreateSystemSaveData(SaveDataSpaceId::System, saveDataId, userId,
    ownerId, size, journalSize, flags);
}

Result CreateSystemSaveData(uint64_t saveDataId, UserId userId, int64_t size,
  int64_t journalSize, uint32_t flags) {
  return CreateSystemSaveData(SaveDataSpaceId::System, saveDataId, userId, 0,
    size, journalSize, flags);
}

Result CreateSystemSaveData(uint64_t saveDataId, uint64_t ownerId,
  int64_t size, int64_t journalSize, uint32_t flags) {
  return CreateSystemSaveData(SaveDataSpaceId::System, saveDataId, UserId{},
    ownerId, size, journalSize, flags);
}

Result CreateSystemSaveData(uint64_t saveDataId, int64_t size,
  int64_t journalSize, uint32_t flags) {
  return CreateSystemSaveData(SaveDataSpaceId::System, saveDataId, UserId{},
    0, size, journalSize, flags);
}

Result CreateSystemSaveData(SaveDataSpaceId spaceId, uint64_t saveDataId,
  uint64_t ownerId, int64_t size, int64_t journalSize, uint32_t flags) {
  return CreateSystemSaveData(spaceId, saveDataId, UserId{}, ownerId, size,
    journalSize, flags);
}

Result CreateSystemSaveData(SaveDataSpaceId spaceId, uint64_t saveDataId,
  uint64_t ownerId, int64_t size, int64_t journalSize, uint32_t flags,
  SaveDataFormatType formatType) {
  Result result;
  NN_FS_ACCESS_LOG_SYSTEM(result,
    detail::CreateSystemSaveData(spaceId, saveDataId, UserId{}, ownerId,
      size, journalSize, flags, formatType),
    ", savedataspaceid: %s, savedataid: 0x%lX, userid: 0x%016lX%016lX"
    ", save_data_owner_id: 0x%lX, save_data_size: %ld"
    ", save_data_journal_size: %ld, save_data_flags: 0x%08X"
    ", save_data_format_type: %s",
    detail::IdString().ToString(spaceId), saveDataId, uint64_t{0},
    uint64_t{0}, ownerId, size, journalSize, flags,
    detail::IdString().ToString(formatType));
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(result);
  return ResultSuccess();
}

Result CreateSystemSaveData(SaveDataSpaceId spaceId, uint64_t saveDataId,
  UserId userId, uint64_t ownerId, int64_t size, int64_t journalSize,
  uint32_t flags, SaveDataFormatType formatType) {
  Result result;
  NN_FS_ACCESS_LOG_SYSTEM(result,
    detail::CreateSystemSaveData(spaceId, saveDataId, userId, ownerId, size,
      journalSize, flags, formatType),
    ", savedataspaceid: %s, savedataid: 0x%lX, userid: 0x%016lX%016lX"
    ", save_data_owner_id: 0x%lX, save_data_size: %ld"
    ", save_data_journal_size: %ld, save_data_flags: 0x%08X"
    ", save_data_format_type: %s",
    detail::IdString().ToString(spaceId), saveDataId, userId.data[0],
    userId.data[1], ownerId, size, journalSize, flags,
    detail::IdString().ToString(formatType));
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(result);
  return ResultSuccess();
}

Result CreateCacheStorage(ncm::ApplicationId applicationId,
  SaveDataSpaceId spaceId, uint64_t ownerId, int64_t size,
  int64_t journalSize, uint32_t flags) {
  return CreateCacheStorage(applicationId, spaceId, ownerId, 0, size,
    journalSize, flags);
}

Result CreateCacheStorage(ncm::ApplicationId applicationId, uint64_t ownerId,
  int64_t size, int64_t journalSize, uint32_t flags) {
  return CreateCacheStorage(applicationId, SaveDataSpaceId::User, ownerId, 0,
    size, journalSize, flags);
}

}
