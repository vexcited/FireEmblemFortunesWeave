#pragma once

#include <stddef.h>
#include <stdint.h>

#include <memory>

#include "nn/account/account_types.hpp"
#include "nn/fs/detail/fs_memory.hpp"
#include "nn/fs/fs_result.hpp"
#include "nn/fs/fs_save_data_types.hpp"
#include "nn/fs/fs_types.hpp"
#include "nn/ncm/ncm_ids.hpp"
#include "nn/sf/native_handle.hpp"
#include "nn/sf/shared_pointer.hpp"
#include "nn/util/optional.hpp"

namespace nn::fssrv::sf {

class ISaveDataExporter;
class ISaveDataImporter;
class ISaveDataTransferManager;
class ISaveDataTransferManagerWithDivision;
class ISaveDataTransferManagerForRepair;
class ISaveDataTransferManagerForSaveDataRepair;
class ISaveDataTransferProhibiter;

}

namespace nn::fs {

enum class PlatformIdForSaveDataSizeCalculation {
  Nx = 0,
  Ounce = 1,
};

class SaveDataTransferSizeCalculator {
public:
  Result GetFreeSpaceSize(int64_t* outSize, SaveDataSpaceId spaceId);

  static Result QuerySaveDataExportSize(int64_t* outSize,
    const SaveDataInfo& info);
  static Result QuerySaveDataExportSize(int64_t* outSize,
    const SaveDataInfo* infos, uint32_t count);
  static int64_t QuerySaveDataRequiredSizeForImport(const SaveDataInfo& info);
  static int64_t QuerySaveDataRequiredSizeForImport(const SaveDataInfo& info,
    PlatformIdForSaveDataSizeCalculation platformId);
  static int64_t QuerySaveDataRequiredSizeForImport(
    const SaveDataInfo* infos, uint32_t count);
};

int64_t QuerySaveDataRequiredSizeForImport(const SaveDataInfo& info,
  PlatformIdForSaveDataSizeCalculation platformId);

class SizeCalculatorForSaveDataMover {
public:
  void Add(const SaveDataInfo& info);
  int64_t GetTotalSize();
  Result GetFreeSpaceSize(int64_t* outSize, SaveDataSpaceId spaceId);

private:
  int64_t m_TotalSize;
};

class ISaveDataMover {
public:
  virtual ~ISaveDataMover() {}

  virtual Result Register(uint64_t saveDataId) = 0;
  virtual Result Process(int64_t* outRemainingSize, int64_t size) = 0;
  virtual Result Cancel() = 0;
};

Result OpenSaveDataMover(std::unique_ptr<ISaveDataMover>* outValue,
  SaveDataSpaceId sourceSpaceId, SaveDataSpaceId destinationSpaceId,
  nn::sf::NativeHandle&& transferMemoryHandle, size_t transferMemorySize);

class SaveDataTransferProhibiterForCloudBackUp {
public:
  explicit SaveDataTransferProhibiterForCloudBackUp(
    nn::sf::SharedPointer<fssrv::sf::ISaveDataTransferProhibiter>&&
      prohibiter);

  static void* operator new(size_t size) noexcept {
    return detail::Allocate(size);
  }

  static void operator delete(void* pointer, size_t size) noexcept {
    detail::Deallocate(pointer, size);
  }

private:
  nn::sf::SharedPointer<fssrv::sf::ISaveDataTransferProhibiter> m_Interface;
};

namespace detail {

Result OpenSaveDataTransferProhibiterForCloudBackUp(
  std::unique_ptr<SaveDataTransferProhibiterForCloudBackUp>* outValue,
  ncm::ApplicationId applicationId);

}

Result OpenSaveDataTransferProhibiterForCloudBackUp(
  std::unique_ptr<SaveDataTransferProhibiterForCloudBackUp>* outValue,
  ncm::ApplicationId applicationId);
Result OpenSaveDataTransferProhibiterForCloudBackUp(
  std::unique_ptr<SaveDataTransferProhibiterForCloudBackUp>* outValues,
  ncm::ApplicationId* applicationIds, int count);
Result GetCountOfApplicationAccessibleSaveDataOwnerId(int* outCount,
  ncm::ApplicationId applicationId, int programIndex);
Result GetOccupiedWorkSpaceSizeForCloudBackUp(int64_t* outSize);

class SaveDataExporter {
public:
  explicit SaveDataExporter(
    nn::sf::SharedPointer<fssrv::sf::ISaveDataExporter>&& exporter);

  const SaveDataInfo& GetSaveDataInfo();
  Result PullInitialData(void* buffer, size_t size);
  Result Pull(size_t* outPulledSize, void* buffer, size_t size);
  int64_t GetRestSize();

  static void* operator new(size_t size) noexcept {
    return detail::Allocate(size);
  }

  static void operator delete(void* pointer, size_t size) noexcept {
    detail::Deallocate(pointer, size);
  }

private:
  nn::sf::SharedPointer<fssrv::sf::ISaveDataExporter> m_Interface;
  SaveDataInfo m_SaveDataInfo;
};

class SaveDataImporter {
public:
  explicit SaveDataImporter(
    nn::sf::SharedPointer<fssrv::sf::ISaveDataImporter>&& importer);

  const SaveDataInfo& GetSaveDataInfo();
  Result Push(const void* buffer, size_t size);
  Result Finalize();
  int64_t GetRestSize();

  static void* operator new(size_t size) noexcept {
    return detail::Allocate(size);
  }

  static void operator delete(void* pointer, size_t size) noexcept {
    detail::Deallocate(pointer, size);
  }

private:
  nn::sf::SharedPointer<fssrv::sf::ISaveDataImporter> m_Interface;
  SaveDataInfo m_SaveDataInfo;
};

class SaveDataTransferManager {
public:
  SaveDataTransferManager();

  Result GetChallenge(void* outBuffer, size_t size);
  Result SetToken(const void* token, size_t size);
  Result OpenSaveDataExporter(std::unique_ptr<SaveDataExporter>* outValue,
    SaveDataSpaceId spaceId, uint64_t saveDataId);
  Result OpenSaveDataImporter(std::unique_ptr<SaveDataImporter>* outValue,
    int64_t* outRequiredSize, const void* initialData, size_t initialDataSize,
    const UserId& userId, SaveDataSpaceId spaceId);
  Result OpenSaveDataImporter(std::unique_ptr<SaveDataImporter>* outValue,
    int64_t* outRequiredSize, const void* initialData, size_t initialDataSize,
    const account::Uid& user, SaveDataSpaceId spaceId);

private:
  nn::sf::SharedPointer<fssrv::sf::ISaveDataTransferManager> m_Interface;
};

struct InitialDataVersion2 {
  char data[0x2000];
};

template<int Size>
struct AesKeyImpl {
  uint8_t value[Size];
};

template<int Size>
struct RsaEncryptedKeyImpl {
  uint8_t value[Size];
};

struct KeySeedPackage {
  char data[0x280];
};

struct LocalKeySeedPackage {
  char data[0x280];
};

class ISaveDataDivisionExporter {
public:
  struct ExportContext {
    char data[0x4000];
  };

  virtual ~ISaveDataDivisionExporter() {}
};

class ISaveDataDivisionImporter {
public:
  struct ImportContext {
    char data[0x4000];
  };

  virtual ~ISaveDataDivisionImporter() {}
};

class SaveDataTransferManagerForRepair {
public:
  SaveDataTransferManagerForRepair();

  Result OpenSaveDataExporter(
    std::unique_ptr<ISaveDataDivisionExporter>* outValue,
    SaveDataSpaceId spaceId, uint64_t saveDataId);
  Result OpenSaveDataImporter(
    std::unique_ptr<ISaveDataDivisionImporter>* outValue,
    const InitialDataVersion2& initialData, SaveDataSpaceId spaceId);

  Result GetSaveDataAttribute(SaveDataAttribute* outValue,
    const InitialDataVersion2& initialData);

private:
  nn::sf::SharedPointer<fssrv::sf::ISaveDataTransferManagerForRepair>
    m_Interface;
};

class SaveDataTransferManagerVersion2 {
public:
  struct Challenge {
    char data[16];
  };

  struct SaveDataTag {
    SaveDataAttribute attribute;
  };

  enum Mode {
  };

  enum Attribute {
  };

  SaveDataTransferManagerVersion2();

  Result SetMode(Mode mode);
  Result SetAttribute(Attribute attribute);
  Result GetChallenge(Challenge* outChallenge);
  Result SetKeySeedPackage(const KeySeedPackage& keySeedPackage);
  Result SetLocalKeySeedPackage(
    const LocalKeySeedPackage& localKeySeedPackage);
  Result OpenSaveDataFullExporter(
    std::unique_ptr<ISaveDataDivisionExporter>* outValue,
    SaveDataSpaceId spaceId, uint64_t saveDataId);
  Result OpenSaveDataDiffExporter(
    std::unique_ptr<ISaveDataDivisionExporter>* outValue,
    const InitialDataVersion2& initialData, SaveDataSpaceId spaceId,
    uint64_t saveDataId);
  Result OpenSaveDataExporterByContext(
    std::unique_ptr<ISaveDataDivisionExporter>* outValue,
    const ISaveDataDivisionExporter::ExportContext& context);
  Result OpenSaveDataImporter(
    std::unique_ptr<ISaveDataDivisionImporter>* outValue,
    const InitialDataVersion2& initialData, SaveDataSpaceId spaceId);
  Result OpenSaveDataImporter(
    std::unique_ptr<ISaveDataDivisionImporter>* outValue,
    const InitialDataVersion2& initialData, const account::Uid& user,
    SaveDataSpaceId spaceId);
  Result OpenSaveDataImporter(
    std::unique_ptr<ISaveDataDivisionImporter>* outValue,
    const InitialDataVersion2& initialData, uint64_t staticSaveDataId,
    const account::Uid& user, uint64_t ownerId);
  Result OpenSaveDataImporterByContext(
    std::unique_ptr<ISaveDataDivisionImporter>* outValue,
    const ISaveDataDivisionImporter::ImportContext& context);
  Result CancelSuspendingImport(ncm::ApplicationId applicationId,
    const UserId& userId);
  Result CancelSuspendingImport(ncm::ApplicationId applicationId,
    const account::Uid& user);
  Result CancelSuspendingImport(const SaveDataTag& tag);
  Result SwapSecondary(const SaveDataTag& tag,
    util::optional<int64_t> commitId);

  static SaveDataTag MakeUserAccountSaveDataTag(
    ncm::ApplicationId applicationId, const UserId& userId);
  static SaveDataTag MakeUserAccountSaveDataTag(
    ncm::ApplicationId applicationId, const account::Uid& user);
  static SaveDataTag MakeDeviceSaveDataTag(ncm::ApplicationId applicationId);

private:
  Result OpenSaveDataImporterImpl(
    std::unique_ptr<ISaveDataDivisionImporter>* outValue,
    const InitialDataVersion2& initialData, uint64_t staticSaveDataId,
    const UserId& userId, uint64_t ownerId, SaveDataSpaceId spaceId);

  nn::sf::SharedPointer<fssrv::sf::ISaveDataTransferManagerWithDivision>
    m_Interface;
};

class SaveDataTransferManagerForSaveDataRepair {
public:
  struct KeyPackageV1 {
    char data[0x300];
  };

  explicit SaveDataTransferManagerForSaveDataRepair(int keyGeneration);

  Result GetChallenge(
    SaveDataTransferManagerVersion2::Challenge* outChallenge);
  Result SetKeyPackage(const KeyPackageV1& keyPackage);
  Result OpenSaveDataExporterAndGetEncryptedKey(
    std::unique_ptr<ISaveDataDivisionExporter>* outValue,
    RsaEncryptedKeyImpl<384>* outEncryptedKey, SaveDataSpaceId spaceId,
    uint64_t saveDataId);
  Result PrepareOpenSaveDataImporter(
    RsaEncryptedKeyImpl<384>* outEncryptedKey);
  Result OpenSaveDataImporter(
    std::unique_ptr<ISaveDataDivisionImporter>* outValue,
    const InitialDataVersion2& initialData,
    const InitialDataVersion2& baseInitialData, const UserId& userId,
    SaveDataSpaceId spaceId);
  Result OpenSaveDataImporter(
    std::unique_ptr<ISaveDataDivisionImporter>* outValue,
    const InitialDataVersion2& initialData, const UserId& userId,
    SaveDataSpaceId spaceId);
  Result OpenSaveDataImporter(
    std::unique_ptr<ISaveDataDivisionImporter>* outValue,
    const InitialDataVersion2& initialData,
    const InitialDataVersion2& baseInitialData, const account::Uid& user,
    SaveDataSpaceId spaceId);
  Result OpenSaveDataImporter(
    std::unique_ptr<ISaveDataDivisionImporter>* outValue,
    const InitialDataVersion2& initialData, const account::Uid& user,
    SaveDataSpaceId spaceId);
  Result OpenDeviceSaveDataImporter(
    std::unique_ptr<ISaveDataDivisionImporter>* outValue,
    const InitialDataVersion2& initialData,
    const InitialDataVersion2& baseInitialData, SaveDataSpaceId spaceId);
  Result OpenDeviceSaveDataImporter(
    std::unique_ptr<ISaveDataDivisionImporter>* outValue,
    const InitialDataVersion2& initialData, SaveDataSpaceId spaceId);
  Result OpenSaveDataExporterWithKey(
    std::unique_ptr<ISaveDataDivisionExporter>* outValue,
    const AesKeyImpl<16>& key, SaveDataSpaceId spaceId, uint64_t saveDataId);
  Result OpenSaveDataImporterWithKey(
    std::unique_ptr<ISaveDataDivisionImporter>* outValue,
    const AesKeyImpl<16>& key, const InitialDataVersion2& initialData,
    const UserId& userId, SaveDataSpaceId spaceId);
  Result OpenSaveDataImporterWithKey(
    std::unique_ptr<ISaveDataDivisionImporter>* outValue,
    const AesKeyImpl<16>& key, const InitialDataVersion2& initialData,
    const account::Uid& user, SaveDataSpaceId spaceId);
  Result OpenSaveDataExporterWithKey(
    std::unique_ptr<ISaveDataDivisionExporter>* outValue,
    const AesKeyImpl<32>& key, SaveDataSpaceId spaceId, uint64_t saveDataId);
  Result OpenSaveDataImporterWithKey(
    std::unique_ptr<ISaveDataDivisionImporter>* outValue,
    const AesKeyImpl<32>& key, const InitialDataVersion2& initialData,
    const UserId& userId, SaveDataSpaceId spaceId);

private:
  nn::sf::SharedPointer<fssrv::sf::ISaveDataTransferManagerForSaveDataRepair>
    m_Interface;
};

}
