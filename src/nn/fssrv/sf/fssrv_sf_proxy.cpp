#include <stddef.h>

#include <utility>

#include "app/gfx_file_system.hpp"
#include "nn/am/service/am_storage.hpp"
#include "nn/fs/fs_bis.hpp"
#include "nn/fs/fs_event_notifier.hpp"
#include "nn/fs/fs_istorage.hpp"
#include "nn/fs/fs_save_data_transfer.hpp"
#include "nn/fs/fsa/fs_idirectory.hpp"
#include "nn/fs/fsa/fs_ifile.hpp"
#include "nn/fs/fsa/fs_ifile_system.hpp"
#include "nn/fssrv/sf/fssrv_sf_ifile_system.hpp"
#include "nn/fssrv/sf/fssrv_sf_ifile_system_proxy.hpp"
#include "nn/fssrv/sf/fssrv_sf_iprogram_registry.hpp"
#include "nn/fssrv/sf/fssrv_sf_isave_data_transfer_manager.hpp"
#include "nn/sf/cmif/client/cmif_proxy_factory.hpp"

namespace nn::sf {

template <typename Allocator>
class StatelessAllocationPolicy;

template <size_t Size, typename Tag>
class ExpHeapStaticAllocator;

}

// The original tags live in anonymous namespaces of the client units.

namespace nn::fs::detail {

struct HipcClientAllocator;

}

namespace nn::sf::cmif::client::detail {

template <typename Kind, typename AllocationPolicy, typename Modifier>
class CmifProxyImpl<fssrv::sf::IDeviceOperator, Kind, AllocationPolicy,
  fssrv::sf::IDeviceOperator, Modifier>
  : public CmifProxyImplBase<fssrv::sf::IDeviceOperator, Kind> {
public:
  Result SetSpeedEmulationMode(uint32_t mode) override {
    return ProxyMethodInvoker<Kind, false,
      void(uint32_t)>::Invoke(&this->m_State, 300, mode);
  }

  Result GetSpeedEmulationMode(sf::Out<int32_t> outMode) override {
    return ProxyMethodInvoker<Kind, false,
      void(sf::Out<int32_t>)>::Invoke(&this->m_State, 301, outMode);
  }

  Result SetApplicationStorageSpeed(uint32_t speed) override {
    return ProxyMethodInvoker<Kind, false,
      void(uint32_t)>::Invoke(&this->m_State, 302, speed);
  }

  Result ClearGameCardClockRateForSpeedEmulation() override {
    return ProxyMethodInvoker<Kind, false,
      void()>::Invoke(&this->m_State, 304);
  }

  Result SetDeviceSimulationEvent(uint32_t port, uint32_t operation,
    uint32_t failureEventType, uint32_t respondingFailureResult,
    bool isPersistent) override {
    return ProxyMethodInvoker<Kind, false,
      void(uint32_t, uint32_t, uint32_t, uint32_t, bool)>::Invoke(
      &this->m_State, 500, port, operation, failureEventType,
      respondingFailureResult, isPersistent);
  }

  Result ClearDeviceSimulationEvent(uint32_t port) override {
    return ProxyMethodInvoker<Kind, false,
      void(uint32_t)>::Invoke(&this->m_State, 501, port);
  }
};

template <typename Kind, typename AllocationPolicy, typename Modifier>
class CmifProxyImpl<fssrv::sf::IDirectory, Kind, AllocationPolicy,
  fssrv::sf::IDirectory, Modifier>
  : public CmifProxyImplBase<fssrv::sf::IDirectory, Kind> {
public:
  Result Read(sf::Out<int64_t> outCount,
    const sf::OutBuffer& entries) override {
    return ProxyMethodInvoker<Kind, false,
      void(sf::Out<int64_t>, const sf::OutBuffer&)>::Invoke(&this->m_State, 0,
      outCount, entries);
  }

  Result GetEntryCount(sf::Out<int64_t> outCount) override {
    return ProxyMethodInvoker<Kind, false,
      void(sf::Out<int64_t>)>::Invoke(&this->m_State, 1, outCount);
  }
};

template <typename Kind, typename AllocationPolicy, typename Modifier>
class CmifProxyImpl<fssrv::sf::IFile, Kind, AllocationPolicy, fssrv::sf::IFile,
  Modifier>
  : public CmifProxyImplBase<fssrv::sf::IFile, Kind> {
public:
  Result Read(sf::Out<int64_t> outSize, int64_t offset,
    const sf::OutBuffer& buffer, int64_t size, uint32_t option) override {
    return ProxyMethodInvoker<Kind, false,
      void(sf::Out<int64_t>, int64_t, const sf::OutBuffer&, int64_t,
      uint32_t)>::Invoke(&this->m_State, 0, outSize, offset, buffer, size,
      option);
  }

  Result Write(int64_t offset, const sf::InBuffer& buffer, int64_t size,
    uint32_t option) override {
    return ProxyMethodInvoker<Kind, false,
      void(int64_t, const sf::InBuffer&, int64_t, uint32_t)>::Invoke(
      &this->m_State, 1, offset, buffer, size, option);
  }

  Result Flush() override {
    return ProxyMethodInvoker<Kind, false,
      void()>::Invoke(&this->m_State, 2);
  }

  Result SetSize(int64_t size) override {
    return ProxyMethodInvoker<Kind, false,
      void(int64_t)>::Invoke(&this->m_State, 3, size);
  }

  Result GetSize(sf::Out<int64_t> outSize) override {
    return ProxyMethodInvoker<Kind, false,
      void(sf::Out<int64_t>)>::Invoke(&this->m_State, 4, outSize);
  }

  Result OperateRange(sf::Out<fs::QueryRangeInfo> outInfo, int32_t operationId,
    int64_t offset, int64_t size) override {
    return ProxyMethodInvoker<Kind, false,
      void(sf::Out<fs::QueryRangeInfo>, int32_t, int64_t, int64_t)>::Invoke(
      &this->m_State, 5, outInfo, operationId, offset, size);
  }

  Result OperateRangeWithBuffer(const sf::OutBuffer& outBuffer,
    const sf::InBuffer& inBuffer, int32_t operationId, int64_t offset,
    int64_t size) override {
    return ProxyMethodInvoker<Kind, false,
      void(const sf::OutBuffer&, const sf::InBuffer&, int32_t, int64_t,
      int64_t)>::Invoke(&this->m_State, 6, outBuffer, inBuffer, operationId,
      offset, size);
  }
};

template <typename Kind, typename AllocationPolicy, typename Modifier>
class CmifProxyImpl<fssrv::sf::IFileSystem, Kind, AllocationPolicy,
  fssrv::sf::IFileSystem, Modifier>
  : public CmifProxyImplBase<fssrv::sf::IFileSystem, Kind> {
public:
  Result Commit() override {
    return ProxyMethodInvoker<Kind, false,
      void()>::Invoke(&this->m_State, 10);
  }
};

template <typename Kind, typename AllocationPolicy, typename Modifier>
class CmifProxyImpl<fssrv::sf::IFileSystemProxy, Kind, AllocationPolicy,
  fssrv::sf::IFileSystemProxy, Modifier>
  : public CmifProxyImplBase<fssrv::sf::IFileSystemProxy, Kind> {
public:
  Result OpenDataFileSystemByCurrentProcess(
    const sf::Out<sf::SharedPointer<fssrv::sf::IFileSystem>>& out) override {
    return InvokeWithStatelessOutObject<Kind, false, 2, AllocationPolicy>(
      &this->m_State, out);
  }

  Result OpenFileSystemWithPatch(
    const sf::Out<sf::SharedPointer<fssrv::sf::IFileSystem>>& outFileSystem,
    uint64_t programId, uint32_t type) override {
    return InvokeWithStatelessOutObject<Kind, false, 7, AllocationPolicy>(
      &this->m_State, outFileSystem, programId, type);
  }

  Result OpenDataFileSystemByProgramId(
    const sf::Out<sf::SharedPointer<fssrv::sf::IFileSystem>>& out,
    uint64_t programId) override {
    return InvokeWithStatelessOutObject<Kind, false, 9, AllocationPolicy>(
      &this->m_State, out, programId);
  }

  Result OpenBisStorage(
    const sf::Out<sf::SharedPointer<fssrv::sf::IStorage>>& outStorage,
    uint32_t id) override {
    return InvokeWithStatelessOutObject<Kind, false, 12, AllocationPolicy>(
      &this->m_State, outStorage, id);
  }

  Result InvalidateBisCache() override {
    return ProxyMethodInvoker<Kind, false,
      void()>::Invoke(&this->m_State, 13);
  }

  Result OpenSdCardFileSystem(
    const sf::Out<sf::SharedPointer<fssrv::sf::IFileSystem>>&
      outFileSystem) override {
    return InvokeWithStatelessOutObject<Kind, false, 18, AllocationPolicy>(
      &this->m_State, outFileSystem);
  }

  Result FormatSdCard() override {
    return ProxyMethodInvoker<Kind, false,
      void()>::Invoke(&this->m_State, 19);
  }

  Result DeleteSaveDataFileSystem(uint64_t saveDataId) override {
    return ProxyMethodInvoker<Kind, false,
      void(uint64_t)>::Invoke(&this->m_State, 21, saveDataId);
  }

  Result CreateSaveDataFileSystem(const fs::SaveDataAttribute& attribute,
    const fs::SaveDataCreationInfo& creationInfo,
    const fs::SaveDataMetaInfo& metaInfo) override {
    return ProxyMethodInvoker<Kind, false,
      void(const fs::SaveDataAttribute&, const fs::SaveDataCreationInfo&,
      const fs::SaveDataMetaInfo&)>::Invoke(&this->m_State, 22, attribute,
      creationInfo, metaInfo);
  }

  Result CreateSaveDataFileSystemBySystemSaveDataId(
    const fs::SaveDataAttribute& attribute,
    const fs::SaveDataCreationInfo& creationInfo) override {
    return ProxyMethodInvoker<Kind, false,
      void(const fs::SaveDataAttribute&,
      const fs::SaveDataCreationInfo&)>::Invoke(&this->m_State, 23, attribute,
      creationInfo);
  }

  Result RegisterSaveDataFileSystemAtomicDeletion(
    const sf::InBuffer& saveDataIds) override {
    return ProxyMethodInvoker<Kind, false,
      void(const sf::InBuffer&)>::Invoke(&this->m_State, 24, saveDataIds);
  }

  Result DeleteSaveDataFileSystemBySaveDataSpaceId(fs::SaveDataSpaceId spaceId,
    uint64_t saveDataId) override {
    return ProxyMethodInvoker<Kind, false,
      void(fs::SaveDataSpaceId, uint64_t)>::Invoke(&this->m_State, 25, spaceId,
      saveDataId);
  }

  Result FormatSdCardDryRun() override {
    return ProxyMethodInvoker<Kind, false,
      void()>::Invoke(&this->m_State, 26);
  }

  Result IsExFatSupported(sf::Out<bool> outSupported) override {
    return ProxyMethodInvoker<Kind, false,
      void(sf::Out<bool>)>::Invoke(&this->m_State, 27, outSupported);
  }

  Result DeleteSaveDataFileSystemBySaveDataAttribute(
    fs::SaveDataSpaceId spaceId,
    const fs::SaveDataAttribute& attribute) override {
    return ProxyMethodInvoker<Kind, false,
      void(fs::SaveDataSpaceId, const fs::SaveDataAttribute&)>::Invoke(
      &this->m_State, 28, spaceId, attribute);
  }

  Result IsInitializationMode(sf::Out<bool> outIsInitializationMode) override {
    return ProxyMethodInvoker<Kind, false,
      void(sf::Out<bool>)>::Invoke(&this->m_State, 29, outIsInitializationMode);
  }

  Result OpenGameCardStorage(
    const sf::Out<sf::SharedPointer<fssrv::sf::IStorage>>& outStorage,
    uint32_t handle, uint32_t partition) override {
    return InvokeWithStatelessOutObject<Kind, false, 30, AllocationPolicy>(
      &this->m_State, outStorage, handle, partition);
  }

  Result OpenGameCardFileSystem(
    const sf::Out<sf::SharedPointer<fssrv::sf::IFileSystem>>& outFileSystem,
    uint32_t handle, uint32_t partition) override {
    return InvokeWithStatelessOutObject<Kind, false, 31, AllocationPolicy>(
      &this->m_State, outFileSystem, handle, partition);
  }

  Result ExtendSaveDataFileSystem(fs::SaveDataSpaceId spaceId,
    uint64_t saveDataId, int64_t dataSize, int64_t journalSize) override {
    return ProxyMethodInvoker<Kind, false,
      void(fs::SaveDataSpaceId, uint64_t, int64_t, int64_t)>::Invoke(
      &this->m_State, 32, spaceId, saveDataId, dataSize, journalSize);
  }

  Result DeleteCacheStorage(uint16_t index) override {
    return ProxyMethodInvoker<Kind, false,
      void(uint16_t)>::Invoke(&this->m_State, 33, index);
  }

  Result GetCacheStorageSize(sf::Out<int64_t> outSize,
    sf::Out<int64_t> outJournalSize, uint16_t index) override {
    return ProxyMethodInvoker<Kind, false,
      void(sf::Out<int64_t>, sf::Out<int64_t>, uint16_t)>::Invoke(
      &this->m_State, 34, outSize, outJournalSize, index);
  }

  Result CreateSaveDataFileSystemWithHashSalt(
    const fs::SaveDataAttribute& attribute,
    const fs::SaveDataCreationInfo& creationInfo,
    const fs::SaveDataMetaInfo& metaInfo,
    const fs::HashSalt& hashSalt) override {
    return ProxyMethodInvoker<Kind, false,
      void(const fs::SaveDataAttribute&, const fs::SaveDataCreationInfo&,
      const fs::SaveDataMetaInfo&, const fs::HashSalt&)>::Invoke(&this->m_State,
      35, attribute, creationInfo, metaInfo, hashSalt);
  }

  Result DetachSdCard() override {
    return ProxyMethodInvoker<Kind, false,
      void()>::Invoke(&this->m_State, 38);
  }

  Result ShutdownStorage() override {
    return ProxyMethodInvoker<Kind, false,
      void()>::Invoke(&this->m_State, 39);
  }

  Result FixSaveDataCertificate(fs::SaveDataSpaceId spaceId,
    const fs::SaveDataAttribute& attribute,
    const fs::SaveDataCertificate& certificate) override {
    return ProxyMethodInvoker<Kind, false,
      void(fs::SaveDataSpaceId, const fs::SaveDataAttribute&,
      const fs::SaveDataCertificate&)>::Invoke(&this->m_State, 40, spaceId,
      attribute, certificate);
  }

  Result OpenSaveDataFileSystem(
    const sf::Out<sf::SharedPointer<fssrv::sf::IFileSystem>>& outFileSystem,
    fs::SaveDataSpaceId spaceId,
    const fs::SaveDataAttribute& attribute) override {
    return InvokeWithStatelessOutObject<Kind, false, 51, AllocationPolicy>(
      &this->m_State, outFileSystem, spaceId, attribute);
  }

  Result OpenSaveDataFileSystemBySystemSaveDataId(
    const sf::Out<sf::SharedPointer<fssrv::sf::IFileSystem>>& outFileSystem,
    fs::SaveDataSpaceId spaceId,
    const fs::SaveDataAttribute& attribute) override {
    return InvokeWithStatelessOutObject<Kind, false, 52, AllocationPolicy>(
      &this->m_State, outFileSystem, spaceId, attribute);
  }

  Result OpenReadOnlySaveDataFileSystem(
    const sf::Out<sf::SharedPointer<fssrv::sf::IFileSystem>>& outFileSystem,
    fs::SaveDataSpaceId spaceId,
    const fs::SaveDataAttribute& attribute) override {
    return InvokeWithStatelessOutObject<Kind, false, 53, AllocationPolicy>(
      &this->m_State, outFileSystem, spaceId, attribute);
  }

  Result ReadSaveDataFileSystemExtraDataBySaveDataSpaceId(
    const sf::OutBuffer& outExtraData, fs::SaveDataSpaceId spaceId,
    uint64_t saveDataId) override {
    return ProxyMethodInvoker<Kind, false,
      void(const sf::OutBuffer&, fs::SaveDataSpaceId, uint64_t)>::Invoke(
      &this->m_State, 57, outExtraData, spaceId, saveDataId);
  }

  Result ReadSaveDataFileSystemExtraData(const sf::OutBuffer& outExtraData,
    uint64_t saveDataId) override {
    return ProxyMethodInvoker<Kind, false,
      void(const sf::OutBuffer&, uint64_t)>::Invoke(&this->m_State, 58,
      outExtraData, saveDataId);
  }

  Result WriteSaveDataFileSystemExtraData(uint64_t saveDataId,
    fs::SaveDataSpaceId spaceId, const sf::InBuffer& extraData) override {
    return ProxyMethodInvoker<Kind, false,
      void(uint64_t, fs::SaveDataSpaceId, const sf::InBuffer&)>::Invoke(
      &this->m_State, 59, saveDataId, spaceId, extraData);
  }

  Result OpenSaveDataInfoReaderBySaveDataSpaceId(
    const sf::Out<sf::SharedPointer<fssrv::sf::ISaveDataInfoReader>>& outReader,
    fs::SaveDataSpaceId spaceId) override {
    return InvokeWithStatelessOutObject<Kind, false, 61, AllocationPolicy>(
      &this->m_State, outReader, spaceId);
  }

  Result OpenSaveDataInternalStorageFileSystem(
    const sf::Out<sf::SharedPointer<fssrv::sf::IFileSystem>>& outFileSystem,
    fs::SaveDataSpaceId spaceId, uint64_t saveDataId) override {
    return InvokeWithStatelessOutObject<Kind, false, 64, AllocationPolicy>(
      &this->m_State, outFileSystem, spaceId, saveDataId);
  }

  Result UpdateSaveDataMacForDebug(uint8_t spaceId,
    uint64_t saveDataId) override {
    return ProxyMethodInvoker<Kind, false,
      void(uint8_t, uint64_t)>::Invoke(&this->m_State, 65, spaceId, saveDataId);
  }

  Result WriteSaveDataFileSystemExtraDataWithMask(uint64_t saveDataId,
    fs::SaveDataSpaceId spaceId, const sf::InBuffer& extraData,
    const sf::InBuffer& mask) override {
    return ProxyMethodInvoker<Kind, false,
      void(uint64_t, fs::SaveDataSpaceId, const sf::InBuffer&,
      const sf::InBuffer&)>::Invoke(&this->m_State, 66, saveDataId, spaceId,
      extraData, mask);
  }

  Result FindSaveDataWithFilter(sf::Out<int64_t> outCount,
    const sf::OutBuffer& outInfo, fs::SaveDataSpaceId spaceId,
    const fs::SaveDataFilter& filter) override {
    return ProxyMethodInvoker<Kind, false,
      void(sf::Out<int64_t>, const sf::OutBuffer&, fs::SaveDataSpaceId,
      const fs::SaveDataFilter&)>::Invoke(&this->m_State, 67, outCount, outInfo,
      spaceId, filter);
  }

  Result OpenSaveDataInfoReaderWithFilter(
    const sf::Out<sf::SharedPointer<fssrv::sf::ISaveDataInfoReader>>& outReader,
    fs::SaveDataSpaceId spaceId, const fs::SaveDataFilter& filter) override {
    return InvokeWithStatelessOutObject<Kind, false, 68, AllocationPolicy>(
      &this->m_State, outReader, spaceId, filter);
  }

  Result ReadSaveDataFileSystemExtraDataBySaveDataAttribute(
    const sf::OutBuffer& outExtraData, fs::SaveDataSpaceId spaceId,
    const fs::SaveDataAttribute& attribute) override {
    return ProxyMethodInvoker<Kind, false,
      void(const sf::OutBuffer&, fs::SaveDataSpaceId,
      const fs::SaveDataAttribute&)>::Invoke(&this->m_State, 69, outExtraData,
      spaceId, attribute);
  }

  Result WriteSaveDataFileSystemExtraDataWithMaskBySaveDataAttribute(
    const fs::SaveDataAttribute& attribute, fs::SaveDataSpaceId spaceId,
    const sf::InBuffer& extraData, const sf::InBuffer& mask) override {
    return ProxyMethodInvoker<Kind, false,
      void(const fs::SaveDataAttribute&, fs::SaveDataSpaceId,
      const sf::InBuffer&, const sf::InBuffer&)>::Invoke(&this->m_State, 70,
      attribute, spaceId, extraData, mask);
  }

  Result ReadSaveDataFileSystemExtraDataWithMaskBySaveDataAttribute(
    const sf::OutBuffer& outExtraData, fs::SaveDataSpaceId spaceId,
    const fs::SaveDataAttribute& attribute, const sf::InBuffer& mask) override {
    return ProxyMethodInvoker<Kind, false,
      void(const sf::OutBuffer&, fs::SaveDataSpaceId,
      const fs::SaveDataAttribute&, const sf::InBuffer&)>::Invoke(
      &this->m_State, 71, outExtraData, spaceId, attribute, mask);
  }

  Result OpenSaveDataTransferManager(
    const sf::Out<sf::SharedPointer<fssrv::sf::ISaveDataTransferManager>>&
      out) override {
    return InvokeWithStatelessOutObject<Kind, false, 81, AllocationPolicy>(
      &this->m_State, out);
  }

  Result OpenSaveDataTransferManagerVersion2(
    const sf::Out<sf::SharedPointer<
      fssrv::sf::ISaveDataTransferManagerWithDivision>>& out) override {
    return InvokeWithStatelessOutObject<Kind, false, 82, AllocationPolicy>(
      &this->m_State, out);
  }

  Result OpenSaveDataTransferProhibiter(
    const sf::Out<sf::SharedPointer<fssrv::sf::ISaveDataTransferProhibiter>>&
      out,
    ncm::ApplicationId applicationId) override {
    return InvokeWithStatelessOutObject<Kind, false, 83, AllocationPolicy>(
      &this->m_State, out, applicationId);
  }

  Result ListAccessibleSaveDataOwnerId(sf::Out<int32_t> outCount,
    const sf::OutBuffer& outIds, ncm::ProgramId programId, int32_t offset,
    int32_t count) override {
    return ProxyMethodInvoker<Kind, false,
      void(sf::Out<int32_t>, const sf::OutBuffer&, ncm::ProgramId, int32_t,
      int32_t)>::Invoke(&this->m_State, 84, outCount, outIds, programId, offset,
      count);
  }

  Result OpenSaveDataTransferManagerForRepair(
    const sf::Out<sf::SharedPointer<
      fssrv::sf::ISaveDataTransferManagerForRepair>>& out) override {
    return InvokeWithStatelessOutObject<Kind, false, 87, AllocationPolicy>(
      &this->m_State, out);
  }

  Result OpenImageDirectoryFileSystem(
    const sf::Out<sf::SharedPointer<fssrv::sf::IFileSystem>>& outFileSystem,
    uint32_t id) override {
    return InvokeWithStatelessOutObject<Kind, false, 100, AllocationPolicy>(
      &this->m_State, outFileSystem, id);
  }

  Result OpenBaseFileSystem(
    const sf::Out<sf::SharedPointer<fssrv::sf::IFileSystem>>& outFileSystem,
    uint32_t id) override {
    return InvokeWithStatelessOutObject<Kind, false, 101, AllocationPolicy>(
      &this->m_State, outFileSystem, id);
  }

  Result FormatBaseFileSystem(fs::BaseFileSystemId id) override {
    return ProxyMethodInvoker<Kind, false,
      void(fs::BaseFileSystemId)>::Invoke(&this->m_State, 102, id);
  }

  Result OpenContentStorageFileSystem(
    const sf::Out<sf::SharedPointer<fssrv::sf::IFileSystem>>& outFileSystem,
    uint32_t id) override {
    return InvokeWithStatelessOutObject<Kind, false, 110, AllocationPolicy>(
      &this->m_State, outFileSystem, id);
  }

  Result OpenCustomStorageFileSystem(
    const sf::Out<sf::SharedPointer<fssrv::sf::IFileSystem>>& outFileSystem,
    uint32_t id) override {
    return InvokeWithStatelessOutObject<Kind, false, 130, AllocationPolicy>(
      &this->m_State, outFileSystem, id);
  }

  Result OpenDataStorageByCurrentProcess(
    const sf::Out<sf::SharedPointer<fssrv::sf::IStorage>>& out) override {
    return InvokeWithStatelessOutObject<Kind, false, 200, AllocationPolicy>(
      &this->m_State, out);
  }

  Result OpenDataStorageByProgramId(
    const sf::Out<sf::SharedPointer<fssrv::sf::IStorage>>& out,
    uint64_t programId) override {
    return InvokeWithStatelessOutObject<Kind, false, 201, AllocationPolicy>(
      &this->m_State, out, programId);
  }

  Result OpenDataStorageByDataId(
    const sf::Out<sf::SharedPointer<fssrv::sf::IStorage>>& outStorage,
    ncm::DataId dataId, ncm::StorageId storageId) override {
    return InvokeWithStatelessOutObject<Kind, false, 202, AllocationPolicy>(
      &this->m_State, outStorage, dataId, storageId);
  }

  Result OpenDeviceOperator(
    const sf::Out<sf::SharedPointer<fssrv::sf::IDeviceOperator>>&
      out) override {
    return InvokeWithStatelessOutObject<Kind, false, 400, AllocationPolicy>(
      &this->m_State, out);
  }

  Result OpenSdCardDetectionEventNotifier(
    const sf::Out<sf::SharedPointer<fssrv::sf::IEventNotifier>>&
      outNotifier) override {
    return InvokeWithStatelessOutObject<Kind, false, 500, AllocationPolicy>(
      &this->m_State, outNotifier);
  }

  Result OpenGameCardDetectionEventNotifier(
    const sf::Out<sf::SharedPointer<fssrv::sf::IEventNotifier>>&
      outNotifier) override {
    return InvokeWithStatelessOutObject<Kind, false, 501, AllocationPolicy>(
      &this->m_State, outNotifier);
  }

  Result OpenSdCardAwakenReadyEventNotifier(
    const sf::Out<sf::SharedPointer<fssrv::sf::IEventNotifier>>&
      outNotifier) override {
    return InvokeWithStatelessOutObject<Kind, false, 502, AllocationPolicy>(
      &this->m_State, outNotifier);
  }

  Result OpenGameCardAwakenReadyEventNotifier(
    const sf::Out<sf::SharedPointer<fssrv::sf::IEventNotifier>>&
      outNotifier) override {
    return InvokeWithStatelessOutObject<Kind, false, 503, AllocationPolicy>(
      &this->m_State, outNotifier);
  }

  Result OpenSystemDataUpdateEventNotifier(
    const sf::Out<sf::SharedPointer<fssrv::sf::IEventNotifier>>&
      outNotifier) override {
    return InvokeWithStatelessOutObject<Kind, false, 510, AllocationPolicy>(
      &this->m_State, outNotifier);
  }

  Result NotifySystemDataUpdateEvent() override {
    return ProxyMethodInvoker<Kind, false,
      void()>::Invoke(&this->m_State, 511);
  }

  Result SimulateDeviceDetectionEvent(uint32_t port, uint32_t mode,
    bool signalEvent) override {
    return ProxyMethodInvoker<Kind, false,
      void(uint32_t, uint32_t, bool)>::Invoke(&this->m_State, 520, port, mode,
      signalEvent);
  }

  Result QuerySaveDataTotalSize(sf::Out<int64_t> outSize, int64_t dataSize,
    int64_t journalSize) override {
    return ProxyMethodInvoker<Kind, false,
      void(sf::Out<int64_t>, int64_t, int64_t)>::Invoke(&this->m_State, 601,
      outSize, dataSize, journalSize);
  }

  Result CreatePaddingFile(int64_t size) override {
    return ProxyMethodInvoker<Kind, false,
      void(int64_t)>::Invoke(&this->m_State, 604, size);
  }

  Result DeleteAllPaddingFiles() override {
    return ProxyMethodInvoker<Kind, false,
      void()>::Invoke(&this->m_State, 605);
  }

  Result GetRightsId(sf::Out<fs::RightsId> outRightsId,
    ncm::ProgramId programId, ncm::StorageId storageId) override {
    return ProxyMethodInvoker<Kind, false,
      void(sf::Out<fs::RightsId>, ncm::ProgramId, ncm::StorageId)>::Invoke(
      &this->m_State, 606, outRightsId, programId, storageId);
  }

  Result UnregisterAllExternalKey() override {
    return ProxyMethodInvoker<Kind, false,
      void()>::Invoke(&this->m_State, 608);
  }

  Result SetCurrentPosixTimeWithTimeDifference(int64_t posixTime,
    int32_t difference) override {
    return ProxyMethodInvoker<Kind, false,
      void(int64_t, int32_t)>::Invoke(&this->m_State, 611, posixTime,
      difference);
  }

  Result GetFreeSpaceSizeForSaveData(sf::Out<int64_t> outSize,
    fs::SaveDataSpaceId spaceId) override {
    return ProxyMethodInvoker<Kind, false,
      void(sf::Out<int64_t>, fs::SaveDataSpaceId)>::Invoke(&this->m_State, 612,
      outSize, spaceId);
  }

  Result VerifySaveDataFileSystemBySaveDataSpaceId(fs::SaveDataSpaceId spaceId,
    uint64_t saveDataId, const sf::OutBuffer& workBuffer) override {
    return ProxyMethodInvoker<Kind, false,
      void(fs::SaveDataSpaceId, uint64_t, const sf::OutBuffer&)>::Invoke(
      &this->m_State, 613, spaceId, saveDataId, workBuffer);
  }

  Result CorruptSaveDataFileSystemBySaveDataSpaceId(fs::SaveDataSpaceId spaceId,
    uint64_t saveDataId) override {
    return ProxyMethodInvoker<Kind, false,
      void(fs::SaveDataSpaceId, uint64_t)>::Invoke(&this->m_State, 614, spaceId,
      saveDataId);
  }

  Result QuerySaveDataInternalStorageTotalSize(sf::Out<int64_t> outSize,
    fs::SaveDataSpaceId spaceId, uint64_t saveDataId) override {
    return ProxyMethodInvoker<Kind, false,
      void(sf::Out<int64_t>, fs::SaveDataSpaceId, uint64_t)>::Invoke(
      &this->m_State, 615, outSize, spaceId, saveDataId);
  }

  Result GetSaveDataCommitId(sf::Out<int64_t> outCommitId,
    fs::SaveDataSpaceId spaceId, uint64_t saveDataId) override {
    return ProxyMethodInvoker<Kind, false,
      void(sf::Out<int64_t>, fs::SaveDataSpaceId, uint64_t)>::Invoke(
      &this->m_State, 616, outCommitId, spaceId, saveDataId);
  }

  Result UnregisterExternalKey(const fs::RightsId& rightsId) override {
    return ProxyMethodInvoker<Kind, false,
      void(const fs::RightsId&)>::Invoke(&this->m_State, 617, rightsId);
  }

  Result SetSdCardEncryptionSeed(const fs::EncryptionSeed& seed) override {
    return ProxyMethodInvoker<Kind, false,
      void(const fs::EncryptionSeed&)>::Invoke(&this->m_State, 620, seed);
  }

  Result SetSdCardAccessibility(bool isAccessible) override {
    return ProxyMethodInvoker<Kind, false,
      void(bool)>::Invoke(&this->m_State, 630, isAccessible);
  }

  Result IsSdCardAccessible(sf::Out<bool> outIsAccessible) override {
    return ProxyMethodInvoker<Kind, false,
      void(sf::Out<bool>)>::Invoke(&this->m_State, 631, outIsAccessible);
  }

  Result RegisterCpDeviceUniqueKey(const sf::InBuffer& key) override {
    return ProxyMethodInvoker<Kind, false,
      void(const sf::InBuffer&)>::Invoke(&this->m_State, 651, key);
  }

  Result OpenAccessFailureDetectionEventNotifier(
    const sf::Out<sf::SharedPointer<fssrv::sf::IEventNotifier>>& outNotifier,
    uint64_t processId, bool notifyOnDeepRetry) override {
    return InvokeWithStatelessOutObject<Kind, false, 700, AllocationPolicy>(
      &this->m_State, outNotifier, processId, notifyOnDeepRetry);
  }

  Result GetAccessFailureDetectionEvent(
    sf::Out<sf::NativeHandle> outHandle) override {
    return ProxyMethodInvoker<Kind, false,
      void(sf::Out<sf::NativeHandle>)>::Invoke(&this->m_State, 701, outHandle);
  }

  Result IsAccessFailureDetected(sf::Out<bool> outIsDetected,
    uint64_t processId) override {
    return ProxyMethodInvoker<Kind, false,
      void(sf::Out<bool>, uint64_t)>::Invoke(&this->m_State, 702, outIsDetected,
      processId);
  }

  Result ResolveAccessFailure(uint64_t processId) override {
    return ProxyMethodInvoker<Kind, false,
      void(uint64_t)>::Invoke(&this->m_State, 710, processId);
  }

  Result AbandonAccessFailure(uint64_t processId) override {
    return ProxyMethodInvoker<Kind, false,
      void(uint64_t)>::Invoke(&this->m_State, 720, processId);
  }

  Result RegisterProgramIndexMapInfo(const sf::InBuffer& buffer,
    int32_t count) override {
    return ProxyMethodInvoker<Kind, false,
      void(const sf::InBuffer&, int32_t)>::Invoke(&this->m_State, 810, buffer,
      count);
  }

  Result SetGlobalAccessLogMode(uint32_t mode) override {
    return ProxyMethodInvoker<Kind, false,
      void(uint32_t)>::Invoke(&this->m_State, 1004, mode);
  }

  Result GetGlobalAccessLogMode(sf::Out<uint32_t> outMode) override {
    return ProxyMethodInvoker<Kind, false,
      void(sf::Out<uint32_t>)>::Invoke(&this->m_State, 1005, outMode);
  }

  Result OutputAccessLogToSdCard(const sf::InBuffer& log) override {
    return ProxyMethodInvoker<Kind, false,
      void(const sf::InBuffer&)>::Invoke(&this->m_State, 1006, log);
  }

  Result RegisterUpdatePartition() override {
    return ProxyMethodInvoker<Kind, false,
      void()>::Invoke(&this->m_State, 1007);
  }

  Result OpenRegisteredUpdatePartition(
    const sf::Out<sf::SharedPointer<fssrv::sf::IFileSystem>>&
      outFileSystem) override {
    return InvokeWithStatelessOutObject<Kind, false, 1008, AllocationPolicy>(
      &this->m_State, outFileSystem);
  }

  Result GetAndClearMemoryReportInfo(
    sf::Out<fs::MemoryReportInfo> outInfo) override {
    return ProxyMethodInvoker<Kind, false,
      void(sf::Out<fs::MemoryReportInfo>)>::Invoke(&this->m_State, 1009,
      outInfo);
  }

  Result GetProgramIndexForAccessLog(sf::Out<int32_t> outIndex,
    sf::Out<uint32_t> outCount) override {
    return ProxyMethodInvoker<Kind, false,
      void(sf::Out<int32_t>, sf::Out<uint32_t>)>::Invoke(&this->m_State, 1011,
      outIndex, outCount);
  }

  Result GetFsStackUsage(sf::Out<uint32_t> outUsage,
    uint32_t threadType) override {
    return ProxyMethodInvoker<Kind, false,
      void(sf::Out<uint32_t>, uint32_t)>::Invoke(&this->m_State, 1012, outUsage,
      threadType);
  }

  Result UnsetSaveDataRootPath() override {
    return ProxyMethodInvoker<Kind, false,
      void()>::Invoke(&this->m_State, 1013);
  }

  Result FlushAccessLogOnSdCard() override {
    return ProxyMethodInvoker<Kind, false,
      void()>::Invoke(&this->m_State, 1016);
  }

  Result OutputApplicationInfoAccessLog(
    const fs::ApplicationInfo& info) override {
    return ProxyMethodInvoker<Kind, false,
      void(const fs::ApplicationInfo&)>::Invoke(&this->m_State, 1017, info);
  }

  Result SetDebugOption(fs::DebugOptionKey key, int64_t value) override {
    return ProxyMethodInvoker<Kind, false,
      void(fs::DebugOptionKey, int64_t)>::Invoke(&this->m_State, 1018, key,
      value);
  }

  Result UnsetDebugOption(fs::DebugOptionKey key) override {
    return ProxyMethodInvoker<Kind, false,
      void(fs::DebugOptionKey)>::Invoke(&this->m_State, 1019, key);
  }

  Result OpenMemoryStressor(
    const sf::Out<sf::SharedPointer<fssrv::sf::IMemoryStressor>>&
      outStressor) override {
    return InvokeWithStatelessOutObject<Kind, false, 1020, AllocationPolicy>(
      &this->m_State, outStressor);
  }

  Result OverrideSaveDataTransferTokenSignVerificationKey(uint32_t keyIndex,
    const sf::InBuffer& key) override {
    return ProxyMethodInvoker<Kind, false,
      void(uint32_t, const sf::InBuffer&)>::Invoke(&this->m_State, 1101,
      keyIndex, key);
  }

  Result CorruptSaveDataFileSystemByOffset(fs::SaveDataSpaceId spaceId,
    uint64_t saveDataId, int64_t offset) override {
    return ProxyMethodInvoker<Kind, false,
      void(fs::SaveDataSpaceId, uint64_t, int64_t)>::Invoke(&this->m_State,
      1110, spaceId, saveDataId, offset);
  }

  Result NotifyErrorContextServiceReady(bool isReady) override {
    return ProxyMethodInvoker<Kind, false,
      void(bool)>::Invoke(&this->m_State, 1400, isReady);
  }
};

template <typename Kind, typename AllocationPolicy, typename Modifier>
class CmifProxyImpl<fssrv::sf::IFileSystemProxyForLoader, Kind,
  AllocationPolicy, fssrv::sf::IFileSystemProxyForLoader, Modifier>
  : public CmifProxyImplBase<fssrv::sf::IFileSystemProxyForLoader, Kind> {
public:
  Result IsArchivedProgram(sf::Out<bool> outValue,
    uint64_t processId) override {
    return ProxyMethodInvoker<Kind, false,
      void(sf::Out<bool>, uint64_t)>::Invoke(&this->m_State, 1, outValue,
      processId);
  }

  Result SetCurrentProcess(uint64_t clientProcessId) override {
    return ProxyMethodInvoker<Kind, true,
      void(uint64_t)>::Invoke(&this->m_State, 2, clientProcessId);
  }
};

template <typename Kind, typename AllocationPolicy, typename Modifier>
class CmifProxyImpl<fssrv::sf::IProgramRegistry, Kind, AllocationPolicy,
  fssrv::sf::IProgramRegistry, Modifier>
  : public CmifProxyImplBase<fssrv::sf::IProgramRegistry, Kind> {
public:
  Result UnregisterProgram(uint64_t processId) override {
    return ProxyMethodInvoker<Kind, false,
      void(uint64_t)>::Invoke(&this->m_State, 1, processId);
  }

  Result SetCurrentProcess(uint64_t clientProcessId) override {
    return ProxyMethodInvoker<Kind, true,
      void(uint64_t)>::Invoke(&this->m_State, 2, clientProcessId);
  }
};

template <typename Kind, typename AllocationPolicy, typename Modifier>
class CmifProxyImpl<fssrv::sf::ISaveDataExporter, Kind, AllocationPolicy,
  fssrv::sf::ISaveDataExporter, Modifier>
  : public CmifProxyImplBase<fssrv::sf::ISaveDataExporter, Kind> {
public:
  Result GetRestSize(sf::Out<uint64_t> outSize) override {
    return ProxyMethodInvoker<Kind, false,
      void(sf::Out<uint64_t>)>::Invoke(&this->m_State, 1, outSize);
  }

  Result Pull(sf::Out<uint64_t> outPulledSize,
    const sf::OutBuffer& buffer) override {
    return ProxyMethodInvoker<Kind, false,
      void(sf::Out<uint64_t>, const sf::OutBuffer&)>::Invoke(&this->m_State, 16,
      outPulledSize, buffer);
  }

  Result PullInitialData(const sf::OutBuffer& buffer) override {
    return ProxyMethodInvoker<Kind, false,
      void(const sf::OutBuffer&)>::Invoke(&this->m_State, 17, buffer);
  }
};

template <typename Kind, typename AllocationPolicy, typename Modifier>
class CmifProxyImpl<fssrv::sf::ISaveDataImporter, Kind, AllocationPolicy,
  fssrv::sf::ISaveDataImporter, Modifier>
  : public CmifProxyImplBase<fssrv::sf::ISaveDataImporter, Kind> {
public:
  Result GetRestSize(sf::Out<uint64_t> outSize) override {
    return ProxyMethodInvoker<Kind, false,
      void(sf::Out<uint64_t>)>::Invoke(&this->m_State, 1, outSize);
  }

  Result Push(const sf::InBuffer& buffer) override {
    return ProxyMethodInvoker<Kind, false,
      void(const sf::InBuffer&)>::Invoke(&this->m_State, 16, buffer);
  }

  Result Finalize() override {
    return ProxyMethodInvoker<Kind, false,
      void()>::Invoke(&this->m_State, 17);
  }
};

template <typename Kind, typename AllocationPolicy, typename Modifier>
class CmifProxyImpl<fssrv::sf::ISaveDataInfoReader, Kind, AllocationPolicy,
  fssrv::sf::ISaveDataInfoReader, Modifier>
  : public CmifProxyImplBase<fssrv::sf::ISaveDataInfoReader, Kind> {
public:
  Result Read(sf::Out<int64_t> outCount,
    const sf::OutBuffer& outInfo) override {
    return ProxyMethodInvoker<Kind, false,
      void(sf::Out<int64_t>, const sf::OutBuffer&)>::Invoke(&this->m_State, 0,
      outCount, outInfo);
  }
};

template <typename Kind, typename AllocationPolicy, typename Modifier>
class CmifProxyImpl<fssrv::sf::ISaveDataMover, Kind, AllocationPolicy,
  fssrv::sf::ISaveDataMover, Modifier>
  : public CmifProxyImplBase<fssrv::sf::ISaveDataMover, Kind> {
public:
  Result Register(uint64_t saveDataId) override {
    return ProxyMethodInvoker<Kind, false,
      void(uint64_t)>::Invoke(&this->m_State, 8, saveDataId);
  }

  Result Process(sf::Out<int64_t> outRemainingSize, int64_t size) override {
    return ProxyMethodInvoker<Kind, false,
      void(sf::Out<int64_t>, int64_t)>::Invoke(&this->m_State, 16,
      outRemainingSize, size);
  }

  Result Cancel() override {
    return ProxyMethodInvoker<Kind, false,
      void()>::Invoke(&this->m_State, 18);
  }
};

template <typename Kind, typename AllocationPolicy, typename Modifier>
class CmifProxyImpl<fssrv::sf::ISaveDataTransferManager, Kind, AllocationPolicy,
  fssrv::sf::ISaveDataTransferManager, Modifier>
  : public CmifProxyImplBase<fssrv::sf::ISaveDataTransferManager, Kind> {
public:
  Result GetChallenge(const sf::OutBuffer& outChallenge) override {
    return ProxyMethodInvoker<Kind, false,
      void(const sf::OutBuffer&)>::Invoke(&this->m_State, 0, outChallenge);
  }

  Result SetToken(const sf::InBuffer& token) override {
    return ProxyMethodInvoker<Kind, false,
      void(const sf::InBuffer&)>::Invoke(&this->m_State, 16, token);
  }

  Result OpenSaveDataExporter(
    const sf::Out<sf::SharedPointer<fssrv::sf::ISaveDataExporter>>& outExporter,
    fs::SaveDataSpaceId spaceId, uint64_t saveDataId) override {
    return InvokeWithStatelessOutObject<Kind, false, 32, AllocationPolicy>(
      &this->m_State, outExporter, spaceId, saveDataId);
  }
};

template <typename Kind, typename AllocationPolicy, typename Modifier>
class CmifProxyImpl<fssrv::sf::ISaveDataTransferManagerForRepair, Kind,
  AllocationPolicy, fssrv::sf::ISaveDataTransferManagerForRepair, Modifier>
  : public CmifProxyImplBase<
      fssrv::sf::ISaveDataTransferManagerForRepair, Kind> {
public:
  Result OpenSaveDataExporter(
    const sf::Out<sf::SharedPointer<fssrv::sf::ISaveDataDivisionExporter>>&
      outExporter,
    fs::SaveDataSpaceId spaceId, uint64_t saveDataId) override {
    return InvokeWithStatelessOutObject<Kind, false, 80, AllocationPolicy>(
      &this->m_State, outExporter, spaceId, saveDataId);
  }
};

template <typename Kind, typename AllocationPolicy, typename Modifier>
class CmifProxyImpl<fssrv::sf::ISaveDataTransferManagerForSaveDataRepair, Kind,
  AllocationPolicy, fssrv::sf::ISaveDataTransferManagerForSaveDataRepair,
  Modifier>
  : public CmifProxyImplBase<
      fssrv::sf::ISaveDataTransferManagerForSaveDataRepair, Kind> {
public:
  Result GetChallenge(const sf::OutBuffer& outChallenge) override {
    return ProxyMethodInvoker<Kind, false,
      void(const sf::OutBuffer&)>::Invoke(&this->m_State, 0, outChallenge);
  }

  Result SetKeyPackage(const sf::InBuffer& keyPackage) override {
    return ProxyMethodInvoker<Kind, false,
      void(const sf::InBuffer&)>::Invoke(&this->m_State, 16, keyPackage);
  }

  Result PrepareOpenSaveDataImporter(
    const sf::OutBuffer& outEncryptedKey) override {
    return ProxyMethodInvoker<Kind, false,
      void(const sf::OutBuffer&)>::Invoke(&this->m_State, 81, outEncryptedKey);
  }
};

template <typename Kind, typename AllocationPolicy, typename Modifier>
class CmifProxyImpl<fssrv::sf::ISaveDataTransferManagerWithDivision, Kind,
  AllocationPolicy, fssrv::sf::ISaveDataTransferManagerWithDivision, Modifier>
  : public CmifProxyImplBase<
      fssrv::sf::ISaveDataTransferManagerWithDivision, Kind> {
public:
  Result GetChallenge(const sf::OutBuffer& outChallenge) override {
    return ProxyMethodInvoker<Kind, false,
      void(const sf::OutBuffer&)>::Invoke(&this->m_State, 0, outChallenge);
  }

  Result SetMode(int32_t mode) override {
    return ProxyMethodInvoker<Kind, false,
      void(int32_t)>::Invoke(&this->m_State, 8, mode);
  }

  Result SetAttribute(int32_t attribute) override {
    return ProxyMethodInvoker<Kind, false,
      void(int32_t)>::Invoke(&this->m_State, 9, attribute);
  }

  Result SetKeySeedPackage(const sf::InBuffer& keySeedPackage) override {
    return ProxyMethodInvoker<Kind, false,
      void(const sf::InBuffer&)>::Invoke(&this->m_State, 16, keySeedPackage);
  }

  Result SetLocalKeySeedPackage(
    const sf::InBuffer& localKeySeedPackage) override {
    return ProxyMethodInvoker<Kind, false,
      void(const sf::InBuffer&)>::Invoke(&this->m_State, 17,
      localKeySeedPackage);
  }

  Result OpenSaveDataFullExporter(
    const sf::Out<sf::SharedPointer<fssrv::sf::ISaveDataDivisionExporter>>&
      outExporter,
    fs::SaveDataSpaceId spaceId, uint64_t saveDataId) override {
    return InvokeWithStatelessOutObject<Kind, false, 32, AllocationPolicy>(
      &this->m_State, outExporter, spaceId, saveDataId);
  }

  Result CancelSuspendingImport(ncm::ApplicationId applicationId,
    const fs::UserId& userId) override {
    return ProxyMethodInvoker<Kind, false,
      void(ncm::ApplicationId, const fs::UserId&)>::Invoke(&this->m_State, 69,
      applicationId, userId);
  }

  Result CancelSuspendingImportByAttribute(
    const fs::SaveDataAttribute& attribute) override {
    return ProxyMethodInvoker<Kind, false,
      void(const fs::SaveDataAttribute&)>::Invoke(&this->m_State, 70,
      attribute);
  }

  Result SwapSecondary(const fs::SaveDataAttribute& attribute, bool hasCommitId,
    int64_t commitId) override {
    return ProxyMethodInvoker<Kind, false,
      void(const fs::SaveDataAttribute&, bool, int64_t)>::Invoke(&this->m_State,
      80, attribute, hasCommitId, commitId);
  }
};

template <typename Kind, typename AllocationPolicy, typename Modifier>
class CmifProxyImpl<fssrv::sf::IStorage, Kind, AllocationPolicy,
  fssrv::sf::IStorage, Modifier>
  : public CmifProxyImplBase<fssrv::sf::IStorage, Kind> {
public:
  Result Flush() override {
    return ProxyMethodInvoker<Kind, false,
      void()>::Invoke(&this->m_State, 2);
  }

  Result SetSize(int64_t size) override {
    return ProxyMethodInvoker<Kind, false,
      void(int64_t)>::Invoke(&this->m_State, 3, size);
  }

  Result GetSize(sf::Out<int64_t> outSize) override {
    return ProxyMethodInvoker<Kind, false,
      void(sf::Out<int64_t>)>::Invoke(&this->m_State, 4, outSize);
  }

  Result OperateRange(sf::Out<fs::QueryRangeInfo> outInfo, int32_t operationId,
    int64_t offset, int64_t size) override {
    return ProxyMethodInvoker<Kind, false,
      void(sf::Out<fs::QueryRangeInfo>, int32_t, int64_t, int64_t)>::Invoke(
      &this->m_State, 5, outInfo, operationId, offset, size);
  }
};

}

namespace {

using PlainKind = nn::sf::hipc::client::Hipc2ProxyKindBase<
  nn::sf::hipc::detail::MessageType::CmifRequestWithContext>;

using DomainKind = nn::sf::cmif::client::CmifDomainProxyKind<
  nn::sf::hipc::client::Hipc2ClientSessionManagedProxyKindBase<PlainKind>>;

using DefaultModifier = nn::sf::cmif::client::detail::ProcessModifierImpl<
  nn::sf::cmif::client::DefaultProxyFilterTag>;

using HipcClientAllocatorPolicy = nn::sf::StatelessAllocationPolicy<
  nn::fs::detail::HipcClientAllocator>;

}

template class nn::sf::cmif::client::detail::CmifProxyImpl<
  nn::fssrv::sf::IDeviceOperator, DomainKind, HipcClientAllocatorPolicy,
  nn::fssrv::sf::IDeviceOperator, DefaultModifier>;

template class nn::sf::cmif::client::detail::CmifProxyImpl<
  nn::fssrv::sf::IDirectory, DomainKind, HipcClientAllocatorPolicy,
  nn::fssrv::sf::IDirectory, DefaultModifier>;

template class nn::sf::cmif::client::detail::CmifProxyImpl<nn::fssrv::sf::IFile,
  DomainKind, HipcClientAllocatorPolicy, nn::fssrv::sf::IFile, DefaultModifier>;

template class nn::sf::cmif::client::detail::CmifProxyImpl<
  nn::fssrv::sf::IFileSystem, DomainKind, HipcClientAllocatorPolicy,
  nn::fssrv::sf::IFileSystem, DefaultModifier>;

template class nn::sf::cmif::client::detail::CmifProxyImpl<
  nn::fssrv::sf::IFileSystemProxy, DomainKind, HipcClientAllocatorPolicy,
  nn::fssrv::sf::IFileSystemProxy, DefaultModifier>;

template class nn::sf::cmif::client::detail::CmifProxyImpl<
  nn::fssrv::sf::IFileSystemProxyForLoader, DomainKind,
  HipcClientAllocatorPolicy, nn::fssrv::sf::IFileSystemProxyForLoader,
  DefaultModifier>;

template class nn::sf::cmif::client::detail::CmifProxyImpl<
  nn::fssrv::sf::IProgramRegistry, DomainKind, HipcClientAllocatorPolicy,
  nn::fssrv::sf::IProgramRegistry, DefaultModifier>;

template class nn::sf::cmif::client::detail::CmifProxyImpl<
  nn::fssrv::sf::ISaveDataExporter, DomainKind, HipcClientAllocatorPolicy,
  nn::fssrv::sf::ISaveDataExporter, DefaultModifier>;

template class nn::sf::cmif::client::detail::CmifProxyImpl<
  nn::fssrv::sf::ISaveDataImporter, DomainKind, HipcClientAllocatorPolicy,
  nn::fssrv::sf::ISaveDataImporter, DefaultModifier>;

template class nn::sf::cmif::client::detail::CmifProxyImpl<
  nn::fssrv::sf::ISaveDataInfoReader, DomainKind, HipcClientAllocatorPolicy,
  nn::fssrv::sf::ISaveDataInfoReader, DefaultModifier>;

template class nn::sf::cmif::client::detail::CmifProxyImpl<
  nn::fssrv::sf::ISaveDataMover, DomainKind, HipcClientAllocatorPolicy,
  nn::fssrv::sf::ISaveDataMover, DefaultModifier>;

template class nn::sf::cmif::client::detail::CmifProxyImpl<
  nn::fssrv::sf::ISaveDataTransferManager, DomainKind,
  HipcClientAllocatorPolicy, nn::fssrv::sf::ISaveDataTransferManager,
  DefaultModifier>;

template class nn::sf::cmif::client::detail::CmifProxyImpl<
  nn::fssrv::sf::ISaveDataTransferManagerForRepair, DomainKind,
  HipcClientAllocatorPolicy, nn::fssrv::sf::ISaveDataTransferManagerForRepair,
  DefaultModifier>;

template class nn::sf::cmif::client::detail::CmifProxyImpl<
  nn::fssrv::sf::ISaveDataTransferManagerForSaveDataRepair, DomainKind,
  HipcClientAllocatorPolicy,
  nn::fssrv::sf::ISaveDataTransferManagerForSaveDataRepair, DefaultModifier>;

template class nn::sf::cmif::client::detail::CmifProxyImpl<
  nn::fssrv::sf::ISaveDataTransferManagerWithDivision, DomainKind,
  HipcClientAllocatorPolicy,
  nn::fssrv::sf::ISaveDataTransferManagerWithDivision, DefaultModifier>;

template class nn::sf::cmif::client::detail::CmifProxyImpl<
  nn::fssrv::sf::IStorage, DomainKind, HipcClientAllocatorPolicy,
  nn::fssrv::sf::IStorage, DefaultModifier>;
