#pragma once

#include <stdint.h>

#include "nn/fs/fs_save_data_transfer.hpp"
#include "nn/ncm/ncm_ids.hpp"
#include "nn/result.hpp"
#include "nn/sf/sf_buffers.hpp"
#include "nn/sf/shared_pointer.hpp"

namespace nn::fssrv::sf {

class ISaveDataExporter : public nn::sf::IServiceObject {
public:
  virtual void Reserved2() = 0;
  virtual void Reserved3() = 0;
  virtual Result GetSaveDataInfo(nn::sf::Out<fs::SaveDataInfo> outInfo) = 0;
  virtual Result GetRestSize(nn::sf::Out<uint64_t> outSize) = 0;
  virtual Result Pull(nn::sf::Out<uint64_t> outPulledSize,
    const nn::sf::OutBuffer& buffer) = 0;
  virtual Result PullInitialData(const nn::sf::OutBuffer& buffer) = 0;
};

class ISaveDataImporter : public nn::sf::IServiceObject {
public:
  virtual void Reserved2() = 0;
  virtual void Reserved3() = 0;
  virtual Result GetSaveDataInfo(nn::sf::Out<fs::SaveDataInfo> outInfo) = 0;
  virtual Result GetRestSize(nn::sf::Out<uint64_t> outSize) = 0;
  virtual Result Push(const nn::sf::InBuffer& buffer) = 0;
  virtual Result Finalize() = 0;
};

class ISaveDataDivisionExporter : public nn::sf::IServiceObject {};

class ISaveDataDivisionImporter : public nn::sf::IServiceObject {};

class ISaveDataTransferManager : public nn::sf::IServiceObject {
public:
  virtual void Reserved2() = 0;
  virtual void Reserved3() = 0;
  virtual Result GetChallenge(const nn::sf::OutBuffer& outChallenge) = 0;
  virtual Result SetToken(const nn::sf::InBuffer& token) = 0;
  virtual Result OpenSaveDataExporter(
    const nn::sf::Out<nn::sf::SharedPointer<ISaveDataExporter>>& outExporter,
    fs::SaveDataSpaceId spaceId, uint64_t saveDataId) = 0;
  virtual Result OpenSaveDataImporter(
    const nn::sf::Out<nn::sf::SharedPointer<ISaveDataImporter>>& outImporter,
    nn::sf::Out<int64_t> outRequiredSize, const nn::sf::InBuffer& initialData,
    const fs::UserId& userId, fs::SaveDataSpaceId spaceId) = 0;
};

class ISaveDataTransferManagerForRepair : public nn::sf::IServiceObject {
public:
  virtual void Reserved2() = 0;
  virtual void Reserved3() = 0;
  virtual Result OpenSaveDataExporter(const nn::sf::Out<
      nn::sf::SharedPointer<ISaveDataDivisionExporter>>& outExporter,
    fs::SaveDataSpaceId spaceId, uint64_t saveDataId) = 0;
  virtual Result OpenSaveDataImporter(const nn::sf::Out<
      nn::sf::SharedPointer<ISaveDataDivisionImporter>>& outImporter,
    const nn::sf::InBuffer& initialData, fs::SaveDataSpaceId spaceId) = 0;
};

struct SaveDataImportParameter {
  char reserved0[0x10];
  fs::UserId userId;
  uint64_t staticSaveDataId;
  char reserved1[0x38];
  uint64_t ownerId;
  char reserved2[0x198];
};

class ISaveDataTransferManagerWithDivision : public nn::sf::IServiceObject {
public:
  virtual void Reserved2() = 0;
  virtual void Reserved3() = 0;
  virtual Result GetChallenge(const nn::sf::OutBuffer& outChallenge) = 0;
  virtual Result SetMode(int32_t mode) = 0;
  virtual Result SetAttribute(int32_t attribute) = 0;
  virtual Result SetKeySeedPackage(const nn::sf::InBuffer& keySeedPackage) = 0;
  virtual Result SetLocalKeySeedPackage(
    const nn::sf::InBuffer& localKeySeedPackage) = 0;
  virtual Result OpenSaveDataFullExporter(const nn::sf::Out<
      nn::sf::SharedPointer<ISaveDataDivisionExporter>>& outExporter,
    fs::SaveDataSpaceId spaceId, uint64_t saveDataId) = 0;
  virtual Result OpenSaveDataDiffExporter(const nn::sf::Out<
      nn::sf::SharedPointer<ISaveDataDivisionExporter>>& outExporter,
    const nn::sf::InBuffer& initialData, fs::SaveDataSpaceId spaceId,
    uint64_t saveDataId) = 0;
  virtual Result OpenSaveDataExporterByContext(const nn::sf::Out<
      nn::sf::SharedPointer<ISaveDataDivisionExporter>>& outExporter,
    const nn::sf::InBuffer& context) = 0;
  virtual Result OpenSaveDataImporter(const nn::sf::Out<
      nn::sf::SharedPointer<ISaveDataDivisionImporter>>& outImporter,
    const nn::sf::InBuffer& initialData,
    const SaveDataImportParameter& parameter,
    fs::SaveDataSpaceId spaceId) = 0;
  virtual Result OpenSaveDataImporterByContext(const nn::sf::Out<
      nn::sf::SharedPointer<ISaveDataDivisionImporter>>& outImporter,
    const nn::sf::InBuffer& context) = 0;
  virtual Result CancelSuspendingImport(ncm::ApplicationId applicationId,
    const fs::UserId& userId) = 0;
  virtual Result CancelSuspendingImportByAttribute(
    const fs::SaveDataAttribute& attribute) = 0;
  virtual Result SwapSecondary(const fs::SaveDataAttribute& attribute,
    bool hasCommitId, int64_t commitId) = 0;
};

class ISaveDataTransferManagerForSaveDataRepair
  : public nn::sf::IServiceObject {
public:
  virtual void Reserved2() = 0;
  virtual void Reserved3() = 0;
  virtual Result GetChallenge(const nn::sf::OutBuffer& outChallenge) = 0;
  virtual Result SetKeyPackage(const nn::sf::InBuffer& keyPackage) = 0;
  virtual Result OpenSaveDataExporterAndGetEncryptedKey(const nn::sf::Out<
      nn::sf::SharedPointer<ISaveDataDivisionExporter>>& outExporter,
    const nn::sf::OutBuffer& outEncryptedKey, fs::SaveDataSpaceId spaceId,
    uint64_t saveDataId) = 0;
  virtual Result PrepareOpenSaveDataImporter(
    const nn::sf::OutBuffer& outEncryptedKey) = 0;
  virtual Result OpenSaveDataImporterForSaveDataAfterRepair(
    const nn::sf::Out<
      nn::sf::SharedPointer<ISaveDataDivisionImporter>>& outImporter,
    const nn::sf::InBuffer& initialData,
    const nn::sf::InBuffer& baseInitialData, const fs::UserId& userId,
    fs::SaveDataSpaceId spaceId) = 0;
  virtual Result OpenSaveDataImporterForSaveDataBeforeRepair(
    const nn::sf::Out<
      nn::sf::SharedPointer<ISaveDataDivisionImporter>>& outImporter,
    const nn::sf::InBuffer& initialData, const fs::UserId& userId,
    fs::SaveDataSpaceId spaceId) = 0;
  virtual Result OpenSaveDataExporterWithKey(const nn::sf::Out<
      nn::sf::SharedPointer<ISaveDataDivisionExporter>>& outExporter,
    const nn::sf::InBuffer& key, fs::SaveDataSpaceId spaceId,
    uint64_t saveDataId) = 0;
  virtual Result OpenSaveDataImporterWithKey(const nn::sf::Out<
      nn::sf::SharedPointer<ISaveDataDivisionImporter>>& outImporter,
    const nn::sf::InBuffer& key, const nn::sf::InBuffer& initialData,
    const fs::UserId& userId, uint64_t spaceId) = 0;
};

class ISaveDataTransferProhibiter : public nn::sf::IServiceObject {};

class ISaveDataMover : public nn::sf::IServiceObject {
public:
  virtual void Reserved2() = 0;
  virtual void Reserved3() = 0;
  virtual Result Register(uint64_t saveDataId) = 0;
  virtual Result Process(nn::sf::Out<int64_t> outRemainingSize,
    int64_t size) = 0;
  virtual Result Cancel() = 0;
};

}
