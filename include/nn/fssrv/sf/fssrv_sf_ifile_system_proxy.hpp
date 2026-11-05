#pragma once

#include <stdint.h>

#include "nn/fs/fs_file_system_proxy_types.hpp"
#include "nn/fs/fs_istorage.hpp"
#include "nn/fssrv/sf/fssrv_sf_ifile_system.hpp"
#include "nn/fssrv/sf/fssrv_sf_path.hpp"
#include "nn/ncm/ncm_ids.hpp"
#include "nn/result.hpp"
#include "nn/sf/native_handle.hpp"
#include "nn/sf/sf_buffers.hpp"
#include "nn/sf/shared_pointer.hpp"

namespace nn::fssrv::sf {

class IEventNotifier : public nn::sf::IServiceObject {
public:
  virtual void Reserved2() = 0;
  virtual void Reserved3() = 0;
  virtual Result GetEventHandle(
    nn::sf::Out<nn::sf::NativeHandle> outHandle) = 0;
};

class IStorage : public nn::sf::IServiceObject {
public:
  virtual void Reserved2() = 0;
  virtual void Reserved3() = 0;
  virtual Result Read(int64_t offset, const nn::sf::OutBuffer& buffer) = 0;
  virtual Result Write(int64_t offset, const nn::sf::InBuffer& buffer) = 0;
  virtual Result Flush() = 0;
  virtual Result SetSize(int64_t size) = 0;
  virtual Result GetSize(nn::sf::Out<int64_t> outSize) = 0;
  virtual Result OperateRange(nn::sf::Out<fs::QueryRangeInfo> outInfo,
    int32_t operationId, int64_t offset, int64_t size) = 0;
};

class IStorageDeviceOperator : public nn::sf::IServiceObject {
public:
  virtual void Reserved2() = 0;
  virtual void Reserved3() = 0;
  virtual Result Operate(int32_t operationId) = 0;
  virtual Result OperateIn(const nn::sf::InBuffer& buffer, int64_t offset,
    int64_t size, int32_t operationId) = 0;
  virtual Result OperateOut(nn::sf::Out<int64_t> outSize,
    const nn::sf::OutBuffer& buffer, int32_t operationId) = 0;
  virtual Result OperateOut2(nn::sf::Out<int64_t> outSizeA,
    const nn::sf::OutBuffer& bufferA, nn::sf::Out<int64_t> outSizeB,
    const nn::sf::OutBuffer& bufferB, int32_t operationId) = 0;
  virtual Result OperateInOut(nn::sf::Out<int64_t> outSize,
    const nn::sf::OutBuffer& outBuffer, const nn::sf::InBuffer& inBuffer,
    int64_t offset, int64_t size, int32_t operationId) = 0;
  virtual Result OperateIn2Out(nn::sf::Out<int64_t> outSize,
    const nn::sf::OutBuffer& outBuffer, const nn::sf::InBuffer& inBufferA,
    const nn::sf::InBuffer& inBufferB, int64_t offset, int64_t size,
    int32_t operationId) = 0;
};

class IStorageDevice : public nn::sf::IServiceObject {
public:
  virtual void Reserved2() = 0;
  virtual void Reserved3() = 0;
  virtual void Reserved4() = 0;
  virtual void Reserved5() = 0;
  virtual Result OpenOperator(
    const nn::sf::Out<nn::sf::SharedPointer<IStorageDeviceOperator>>& out) = 0;
};

class IStorageDeviceManager : public nn::sf::IServiceObject {
public:
  virtual void Reserved2() = 0;
  virtual void Reserved3() = 0;
  virtual Result IsInserted(nn::sf::Out<bool> outValue) = 0;
  virtual Result IsHandleValid(nn::sf::Out<bool> outValue, uint32_t handle) = 0;
  virtual void Reserved6() = 0;
  virtual void Reserved7() = 0;
  virtual Result OpenOperator(
    const nn::sf::Out<nn::sf::SharedPointer<IStorageDeviceOperator>>& out) = 0;
  virtual Result OpenDevice(
    const nn::sf::Out<nn::sf::SharedPointer<IStorageDevice>>& out,
    uint64_t attribute) = 0;
};

class IDeviceOperator : public nn::sf::IServiceObject {
public:
  virtual void Reserved2() = 0;
  virtual void Reserved3() = 0;
  virtual Result SetSpeedEmulationMode(uint32_t mode) = 0;
  virtual Result GetSpeedEmulationMode(nn::sf::Out<int32_t> outMode) = 0;
  virtual Result SetApplicationStorageSpeed(uint32_t speed) = 0;
  virtual Result SetGameCardClockRateForSpeedEmulation(uint8_t clockRate) = 0;
  virtual Result ClearGameCardClockRateForSpeedEmulation() = 0;
  virtual Result SetDeviceSimulationEvent(uint32_t port, uint32_t operation,
    uint32_t failureEventType, uint32_t respondingFailureResult,
    bool isPersistent) = 0;
  virtual Result ClearDeviceSimulationEvent(uint32_t port) = 0;
  virtual Result OpenStorageDeviceManager(
    const nn::sf::Out<nn::sf::SharedPointer<IStorageDeviceManager>>& out,
    int32_t port) = 0;
};

class ISaveDataTransferManager;
class ISaveDataTransferProhibiter;
class ISaveDataMover;
class ISaveDataTransferManagerWithDivision;
class ISaveDataTransferManagerForRepair;
class ISaveDataTransferManagerForSaveDataRepair;

class ISaveDataInfoReader : public nn::sf::IServiceObject {
public:
  virtual void Reserved2() = 0;
  virtual void Reserved3() = 0;
  virtual Result Read(nn::sf::Out<int64_t> outCount,
    const nn::sf::OutBuffer& outInfo) = 0;
};

class IWiper : public nn::sf::IServiceObject {
public:
  virtual void Reserved2() = 0;
  virtual void Reserved3() = 0;
  virtual Result Startup() = 0;
  virtual Result Process() = 0;
};

class IMemoryStressor : public nn::sf::IServiceObject {
public:
  virtual void Reserved2() = 0;
  virtual void Reserved3() = 0;
  virtual Result SetPooledBufferFreeSize(uint64_t size) = 0;
};

class IFileSystemProxy : public nn::sf::IServiceObject {
public:
  virtual void Reserved2() = 0;
  virtual void Reserved3() = 0;
  virtual void Reserved4() = 0;
  virtual Result OpenDataFileSystemByCurrentProcess(
    const nn::sf::Out<nn::sf::SharedPointer<IFileSystem>>& out) = 0;
  virtual Result OpenFileSystemWithPatch(
    const nn::sf::Out<nn::sf::SharedPointer<IFileSystem>>& outFileSystem,
    uint64_t programId, uint32_t type) = 0;
  virtual void Reserved7() = 0;
  virtual Result OpenDataFileSystemByProgramId(
    const nn::sf::Out<nn::sf::SharedPointer<IFileSystem>>& out,
    uint64_t programId) = 0;
  virtual Result OpenFileSystemWithId(
    const nn::sf::Out<nn::sf::SharedPointer<IFileSystem>>& outFileSystem,
    const FspPath& path, fs::ContentAttributes attributes, uint64_t id,
    uint32_t type) = 0;
  virtual Result OpenBisFileSystem(
    const nn::sf::Out<nn::sf::SharedPointer<IFileSystem>>& outFileSystem,
    const FspPath& rootPath, uint32_t id) = 0;
  virtual Result OpenBisStorage(
    const nn::sf::Out<nn::sf::SharedPointer<IStorage>>& outStorage,
    uint32_t id) = 0;
  virtual Result InvalidateBisCache() = 0;
  virtual Result OpenHostFileSystem(
    const nn::sf::Out<nn::sf::SharedPointer<IFileSystem>>& outFileSystem,
    const FspPath& rootPath) = 0;
  virtual Result OpenSdCardFileSystem(
    const nn::sf::Out<nn::sf::SharedPointer<IFileSystem>>& outFileSystem) = 0;
  virtual Result FormatSdCard() = 0;
  virtual Result DeleteSaveDataFileSystem(uint64_t saveDataId) = 0;
  virtual Result CreateSaveDataFileSystem(
    const fs::SaveDataAttribute& attribute,
    const fs::SaveDataCreationInfo& creationInfo,
    const fs::SaveDataMetaInfo& metaInfo) = 0;
  virtual Result CreateSaveDataFileSystemBySystemSaveDataId(
    const fs::SaveDataAttribute& attribute,
    const fs::SaveDataCreationInfo& creationInfo) = 0;
  virtual Result RegisterSaveDataFileSystemAtomicDeletion(
    const nn::sf::InBuffer& saveDataIds) = 0;
  virtual Result DeleteSaveDataFileSystemBySaveDataSpaceId(
    fs::SaveDataSpaceId spaceId, uint64_t saveDataId) = 0;
  virtual Result FormatSdCardDryRun() = 0;
  virtual Result IsExFatSupported(nn::sf::Out<bool> outSupported) = 0;
  virtual Result DeleteSaveDataFileSystemBySaveDataAttribute(
    fs::SaveDataSpaceId spaceId, const fs::SaveDataAttribute& attribute) = 0;
  virtual Result IsInitializationMode(
    nn::sf::Out<bool> outIsInitializationMode) = 0;
  virtual Result OpenGameCardStorage(
    const nn::sf::Out<nn::sf::SharedPointer<IStorage>>& outStorage,
    uint32_t handle, uint32_t partition) = 0;
  virtual Result OpenGameCardFileSystem(
    const nn::sf::Out<nn::sf::SharedPointer<IFileSystem>>& outFileSystem,
    uint32_t handle, uint32_t partition) = 0;
  virtual Result ExtendSaveDataFileSystem(fs::SaveDataSpaceId spaceId,
    uint64_t saveDataId, int64_t dataSize, int64_t journalSize) = 0;
  virtual Result DeleteCacheStorage(uint16_t index) = 0;
  virtual Result GetCacheStorageSize(nn::sf::Out<int64_t> outSize,
    nn::sf::Out<int64_t> outJournalSize, uint16_t index) = 0;
  virtual Result CreateSaveDataFileSystemWithHashSalt(
    const fs::SaveDataAttribute& attribute,
    const fs::SaveDataCreationInfo& creationInfo,
    const fs::SaveDataMetaInfo& metaInfo, const fs::HashSalt& hashSalt) = 0;
  virtual Result OpenHostFileSystemWithOption(
    const nn::sf::Out<nn::sf::SharedPointer<IFileSystem>>& outFileSystem,
    const FspPath& rootPath, uint32_t option) = 0;
  virtual Result CreateSaveDataFileSystemWithCreationInfo2(
    const fs::SaveDataCreationInfo2& creationInfo) = 0;
  virtual Result DetachSdCard() = 0;
  virtual Result ShutdownStorage() = 0;
  virtual Result FixSaveDataCertificate(fs::SaveDataSpaceId spaceId,
    const fs::SaveDataAttribute& attribute,
    const fs::SaveDataCertificate& certificate) = 0;
  virtual Result OpenSaveDataFileSystem(
    const nn::sf::Out<nn::sf::SharedPointer<IFileSystem>>& outFileSystem,
    fs::SaveDataSpaceId spaceId, const fs::SaveDataAttribute& attribute) = 0;
  virtual Result OpenSaveDataFileSystemBySystemSaveDataId(
    const nn::sf::Out<nn::sf::SharedPointer<IFileSystem>>& outFileSystem,
    fs::SaveDataSpaceId spaceId, const fs::SaveDataAttribute& attribute) = 0;
  virtual Result OpenReadOnlySaveDataFileSystem(
    const nn::sf::Out<nn::sf::SharedPointer<IFileSystem>>& outFileSystem,
    fs::SaveDataSpaceId spaceId, const fs::SaveDataAttribute& attribute) = 0;
  virtual Result ReadSaveDataFileSystemExtraDataBySaveDataSpaceId(
    const nn::sf::OutBuffer& outExtraData, fs::SaveDataSpaceId spaceId,
    uint64_t saveDataId) = 0;
  virtual Result ReadSaveDataFileSystemExtraData(
    const nn::sf::OutBuffer& outExtraData, uint64_t saveDataId) = 0;
  virtual Result WriteSaveDataFileSystemExtraData(uint64_t saveDataId,
    fs::SaveDataSpaceId spaceId, const nn::sf::InBuffer& extraData) = 0;
  virtual void Reserved42() = 0;
  virtual Result OpenSaveDataInfoReaderBySaveDataSpaceId(
    const nn::sf::Out<nn::sf::SharedPointer<ISaveDataInfoReader>>& outReader,
    fs::SaveDataSpaceId spaceId) = 0;
  virtual void Reserved44() = 0;
  virtual Result OpenSaveDataInternalStorageFileSystem(
    const nn::sf::Out<nn::sf::SharedPointer<IFileSystem>>& outFileSystem,
    fs::SaveDataSpaceId spaceId, uint64_t saveDataId) = 0;
  virtual Result UpdateSaveDataMacForDebug(uint8_t spaceId,
    uint64_t saveDataId) = 0;
  virtual Result WriteSaveDataFileSystemExtraDataWithMask(uint64_t saveDataId,
    fs::SaveDataSpaceId spaceId, const nn::sf::InBuffer& extraData,
    const nn::sf::InBuffer& mask) = 0;
  virtual Result FindSaveDataWithFilter(nn::sf::Out<int64_t> outCount,
    const nn::sf::OutBuffer& outInfo, fs::SaveDataSpaceId spaceId,
    const fs::SaveDataFilter& filter) = 0;
  virtual Result OpenSaveDataInfoReaderWithFilter(
    const nn::sf::Out<nn::sf::SharedPointer<ISaveDataInfoReader>>& outReader,
    fs::SaveDataSpaceId spaceId, const fs::SaveDataFilter& filter) = 0;
  virtual Result ReadSaveDataFileSystemExtraDataBySaveDataAttribute(
    const nn::sf::OutBuffer& outExtraData, fs::SaveDataSpaceId spaceId,
    const fs::SaveDataAttribute& attribute) = 0;
  virtual Result WriteSaveDataFileSystemExtraDataWithMaskBySaveDataAttribute(
    const fs::SaveDataAttribute& attribute, fs::SaveDataSpaceId spaceId,
    const nn::sf::InBuffer& extraData, const nn::sf::InBuffer& mask) = 0;
  virtual Result ReadSaveDataFileSystemExtraDataWithMaskBySaveDataAttribute(
    const nn::sf::OutBuffer& outExtraData, fs::SaveDataSpaceId spaceId,
    const fs::SaveDataAttribute& attribute, const nn::sf::InBuffer& mask) = 0;
  virtual Result OpenSaveDataMetaFile(
    const nn::sf::Out<nn::sf::SharedPointer<IFile>>& outFile,
    fs::SaveDataSpaceId spaceId, const fs::SaveDataAttribute& attribute,
    fs::SaveDataMetaType metaType) = 0;
  virtual Result OpenSaveDataTransferManager(
    const nn::sf::Out<nn::sf::SharedPointer<ISaveDataTransferManager>>&
      out) = 0;
  virtual Result OpenSaveDataTransferManagerVersion2(
    const nn::sf::Out<
      nn::sf::SharedPointer<ISaveDataTransferManagerWithDivision>>& out) = 0;
  virtual Result OpenSaveDataTransferProhibiter(
    const nn::sf::Out<nn::sf::SharedPointer<ISaveDataTransferProhibiter>>&
      out, ncm::ApplicationId applicationId) = 0;
  virtual Result ListAccessibleSaveDataOwnerId(nn::sf::Out<int32_t> outCount,
    const nn::sf::OutBuffer& outIds, ncm::ProgramId programId,
    int32_t offset, int32_t count) = 0;
  virtual void Reserved58() = 0;
  virtual Result OpenSaveDataMover(
    const nn::sf::Out<nn::sf::SharedPointer<ISaveDataMover>>& out,
    fs::SaveDataSpaceId sourceSpaceId, fs::SaveDataSpaceId destinationSpaceId,
    nn::sf::NativeHandle&& transferMemoryHandle, uint64_t size) = 0;
  virtual Result OpenSaveDataTransferManagerForRepair(
    const nn::sf::Out<
      nn::sf::SharedPointer<ISaveDataTransferManagerForRepair>>& out) = 0;
  virtual Result OpenSaveDataTransferManagerForSaveDataRepair(
    const nn::sf::Out<
      nn::sf::SharedPointer<ISaveDataTransferManagerForSaveDataRepair>>& out,
    int32_t keyGeneration) = 0;
  virtual Result OpenImageDirectoryFileSystem(
    const nn::sf::Out<nn::sf::SharedPointer<IFileSystem>>& outFileSystem,
    uint32_t id) = 0;
  virtual Result OpenBaseFileSystem(
    const nn::sf::Out<nn::sf::SharedPointer<IFileSystem>>& outFileSystem,
    uint32_t id) = 0;
  virtual Result FormatBaseFileSystem(fs::BaseFileSystemId id) = 0;
  virtual Result OpenContentStorageFileSystem(
    const nn::sf::Out<nn::sf::SharedPointer<IFileSystem>>& outFileSystem,
    uint32_t id) = 0;
  virtual Result OpenCustomStorageFileSystem(
    const nn::sf::Out<nn::sf::SharedPointer<IFileSystem>>& outFileSystem,
    uint32_t id) = 0;
  virtual Result OpenDataStorageByCurrentProcess(
    const nn::sf::Out<nn::sf::SharedPointer<IStorage>>& out) = 0;
  virtual Result OpenDataStorageByProgramId(
    const nn::sf::Out<nn::sf::SharedPointer<IStorage>>& out,
    uint64_t programId) = 0;
  virtual Result OpenDataStorageByDataId(
    const nn::sf::Out<nn::sf::SharedPointer<IStorage>>& outStorage,
    ncm::DataId dataId, ncm::StorageId storageId) = 0;
  virtual void Reserved70() = 0;
  virtual Result OpenDataFileSystemWithProgramIndex(
    const nn::sf::Out<nn::sf::SharedPointer<IFileSystem>>& out,
    int32_t programIndex) = 0;
  virtual Result OpenDataStorageWithProgramIndex(
    const nn::sf::Out<nn::sf::SharedPointer<IStorage>>& out,
    int32_t programIndex) = 0;
  virtual Result OpenDataStorageByPath(
    const nn::sf::Out<nn::sf::SharedPointer<IStorage>>& out,
    const FspPath& path, uint8_t attributes, uint32_t type) = 0;
  virtual void Reserved74() = 0;
  virtual Result OpenDeviceOperator(
    const nn::sf::Out<nn::sf::SharedPointer<IDeviceOperator>>& out) = 0;
  virtual Result OpenSdCardDetectionEventNotifier(
    const nn::sf::Out<nn::sf::SharedPointer<IEventNotifier>>& outNotifier) = 0;
  virtual Result OpenGameCardDetectionEventNotifier(
    const nn::sf::Out<nn::sf::SharedPointer<IEventNotifier>>& outNotifier) = 0;
  virtual Result OpenSdCardAwakenReadyEventNotifier(
    const nn::sf::Out<nn::sf::SharedPointer<IEventNotifier>>& outNotifier) = 0;
  virtual Result OpenGameCardAwakenReadyEventNotifier(
    const nn::sf::Out<nn::sf::SharedPointer<IEventNotifier>>& outNotifier) = 0;
  virtual Result OpenSystemDataUpdateEventNotifier(
    const nn::sf::Out<nn::sf::SharedPointer<IEventNotifier>>& outNotifier) = 0;
  virtual Result NotifySystemDataUpdateEvent() = 0;
  virtual Result SimulateDeviceDetectionEvent(uint32_t port, uint32_t mode,
    bool signalEvent) = 0;
  virtual Result QuerySaveDataTotalSize(nn::sf::Out<int64_t> outSize,
    int64_t dataSize, int64_t journalSize) = 0;
  virtual void Reserved84() = 0;
  virtual void Reserved85() = 0;
  virtual Result CreatePaddingFile(int64_t size) = 0;
  virtual Result DeleteAllPaddingFiles() = 0;
  virtual Result GetRightsId(nn::sf::Out<fs::RightsId> outRightsId,
    ncm::ProgramId programId, ncm::StorageId storageId) = 0;
  virtual Result RegisterExternalKey(const fs::RightsId& rightsId,
    const fs::ExternalKeySource& keySource) = 0;
  virtual Result UnregisterAllExternalKey() = 0;
  virtual Result GetRightsIdAndKeyGenerationByPath(
    nn::sf::Out<fs::RightsId> outRightsId,
    nn::sf::Out<uint8_t> outKeyGeneration, const FspPath& path,
    fs::ContentAttributes attributes) = 0;
  virtual Result SetCurrentPosixTimeWithTimeDifference(int64_t posixTime,
    int32_t difference) = 0;
  virtual Result GetFreeSpaceSizeForSaveData(nn::sf::Out<int64_t> outSize,
    fs::SaveDataSpaceId spaceId) = 0;
  virtual Result VerifySaveDataFileSystemBySaveDataSpaceId(
    fs::SaveDataSpaceId spaceId, uint64_t saveDataId,
    const nn::sf::OutBuffer& workBuffer) = 0;
  virtual Result CorruptSaveDataFileSystemBySaveDataSpaceId(
    fs::SaveDataSpaceId spaceId, uint64_t saveDataId) = 0;
  virtual Result QuerySaveDataInternalStorageTotalSize(
    nn::sf::Out<int64_t> outSize, fs::SaveDataSpaceId spaceId,
    uint64_t saveDataId) = 0;
  virtual Result GetSaveDataCommitId(nn::sf::Out<int64_t> outCommitId,
    fs::SaveDataSpaceId spaceId, uint64_t saveDataId) = 0;
  virtual Result UnregisterExternalKey(const fs::RightsId& rightsId) = 0;
  virtual Result GetProgramId(nn::sf::Out<ncm::ProgramId> outProgramId,
    const FspPath& path, fs::ContentAttributes attributes) = 0;
  virtual Result SetSdCardEncryptionSeed(const fs::EncryptionSeed& seed) = 0;
  virtual Result SetSdCardAccessibility(bool isAccessible) = 0;
  virtual Result IsSdCardAccessible(nn::sf::Out<bool> outIsAccessible) = 0;
  virtual Result TestExternalKey(const fs::RightsId& rightsId,
    const fs::ExternalKeySource& keySource) = 0;
  virtual Result RegisterCpDeviceUniqueKey(const nn::sf::InBuffer& key) = 0;
  virtual Result GetProcessEnvironmentSource(
    nn::sf::Out<fs::ProcessEnvironmentSource> outSource, const FspPath& path,
    fs::ContentAttributes attributes) = 0;
  virtual Result OpenAccessFailureDetectionEventNotifier(
    const nn::sf::Out<nn::sf::SharedPointer<IEventNotifier>>& outNotifier,
    uint64_t processId, bool notifyOnDeepRetry) = 0;
  virtual Result GetAccessFailureDetectionEvent(
    nn::sf::Out<nn::sf::NativeHandle> outHandle) = 0;
  virtual Result IsAccessFailureDetected(nn::sf::Out<bool> outIsDetected,
    uint64_t processId) = 0;
  virtual Result ResolveAccessFailure(uint64_t processId) = 0;
  virtual Result AbandonAccessFailure(uint64_t processId) = 0;
  virtual Result GetAndClearErrorInfo(
    nn::sf::Out<fs::FileSystemProxyErrorInfo> outErrorInfo) = 0;
  virtual Result RegisterProgramIndexMapInfo(const nn::sf::InBuffer& buffer,
    int32_t count) = 0;
  virtual void Reserved113() = 0;
  virtual void Reserved114() = 0;
  virtual Result SetSaveDataRootPath(const FspPath& path) = 0;
  virtual Result SetGlobalAccessLogMode(uint32_t mode) = 0;
  virtual Result GetGlobalAccessLogMode(nn::sf::Out<uint32_t> outMode) = 0;
  virtual Result OutputAccessLogToSdCard(const nn::sf::InBuffer& log) = 0;
  virtual Result RegisterUpdatePartition() = 0;
  virtual Result OpenRegisteredUpdatePartition(
    const nn::sf::Out<nn::sf::SharedPointer<IFileSystem>>& outFileSystem) = 0;
  virtual Result GetAndClearMemoryReportInfo(
    nn::sf::Out<fs::MemoryReportInfo> outInfo) = 0;
  virtual Result GetProgramIndexForAccessLog(nn::sf::Out<int32_t> outIndex,
    nn::sf::Out<uint32_t> outCount) = 0;
  virtual Result GetFsStackUsage(nn::sf::Out<uint32_t> outUsage,
    uint32_t threadType) = 0;
  virtual Result UnsetSaveDataRootPath() = 0;
  virtual Result FlushAccessLogOnSdCard() = 0;
  virtual Result OutputApplicationInfoAccessLog(
    const fs::ApplicationInfo& info) = 0;
  virtual Result SetDebugOption(fs::DebugOptionKey key, int64_t value) = 0;
  virtual Result UnsetDebugOption(fs::DebugOptionKey key) = 0;
  virtual Result OpenMemoryStressor(
    const nn::sf::Out<nn::sf::SharedPointer<IMemoryStressor>>& outStressor)
    = 0;
  virtual Result OverrideSaveDataTransferTokenSignVerificationKey(
    uint32_t keyIndex, const nn::sf::InBuffer& key) = 0;
  virtual Result CorruptSaveDataFileSystemByOffset(fs::SaveDataSpaceId spaceId,
    uint64_t saveDataId, int64_t offset) = 0;
  virtual void Reserved132() = 0;
  virtual Result OpenBisWiper(
    const nn::sf::Out<nn::sf::SharedPointer<IWiper>>& outWiper,
    nn::sf::NativeHandle&& transferMemoryHandle, uint64_t transferMemorySize)
    = 0;
  virtual Result NotifyErrorContextServiceReady(bool isReady) = 0;
};

}
