#pragma once

#include <stdint.h>

#include "nn/fs/fs_file_system_proxy_types.hpp"
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

class IFileSystemProxy : public nn::sf::IServiceObject {
public:
  virtual void Reserved2() = 0;
  virtual void Reserved3() = 0;
  virtual void Reserved4() = 0;
  virtual void Reserved5() = 0;
  virtual void Reserved6() = 0;
  virtual void Reserved7() = 0;
  virtual void Reserved8() = 0;
  virtual void Reserved9() = 0;
  virtual void Reserved10() = 0;
  virtual void Reserved11() = 0;
  virtual Result InvalidateBisCache() = 0;
  virtual void Reserved13() = 0;
  virtual void Reserved14() = 0;
  virtual void Reserved15() = 0;
  virtual Result DeleteSaveDataFileSystem(uint64_t saveDataId) = 0;
  virtual void Reserved17() = 0;
  virtual void Reserved18() = 0;
  virtual Result RegisterSaveDataFileSystemAtomicDeletion(
    const nn::sf::InBuffer& saveDataIds) = 0;
  virtual Result DeleteSaveDataFileSystemBySaveDataSpaceId(
    fs::SaveDataSpaceId spaceId, uint64_t saveDataId) = 0;
  virtual Result FormatSdCardDryRun() = 0;
  virtual Result IsExFatSupported(nn::sf::Out<bool> outSupported) = 0;
  virtual void Reserved23() = 0;
  virtual Result IsInitializationMode(
    nn::sf::Out<bool> outIsInitializationMode) = 0;
  virtual void Reserved25() = 0;
  virtual void Reserved26() = 0;
  virtual Result ExtendSaveDataFileSystem(fs::SaveDataSpaceId spaceId,
    uint64_t saveDataId, int64_t dataSize, int64_t journalSize) = 0;
  virtual void Reserved28() = 0;
  virtual void Reserved29() = 0;
  virtual Result CreateSaveDataFileSystemWithHashSalt(
    const fs::SaveDataAttribute& attribute,
    const fs::SaveDataCreationInfo& creationInfo,
    const fs::SaveDataMetaInfo& metaInfo, const fs::HashSalt& hashSalt) = 0;
  virtual void Reserved31() = 0;
  virtual void Reserved32() = 0;
  virtual Result DetachSdCard() = 0;
  virtual void Reserved34() = 0;
  virtual void Reserved35() = 0;
  virtual void Reserved36() = 0;
  virtual void Reserved37() = 0;
  virtual void Reserved38() = 0;
  virtual Result ReadSaveDataFileSystemExtraDataBySaveDataSpaceId(
    const nn::sf::OutBuffer& outExtraData, fs::SaveDataSpaceId spaceId,
    uint64_t saveDataId) = 0;
  virtual Result ReadSaveDataFileSystemExtraData(
    const nn::sf::OutBuffer& outExtraData, uint64_t saveDataId) = 0;
  virtual Result WriteSaveDataFileSystemExtraData(uint64_t saveDataId,
    fs::SaveDataSpaceId spaceId, const nn::sf::InBuffer& extraData) = 0;
  virtual void Reserved42() = 0;
  virtual void Reserved43() = 0;
  virtual void Reserved44() = 0;
  virtual void Reserved45() = 0;
  virtual Result UpdateSaveDataMacForDebug(uint8_t spaceId,
    uint64_t saveDataId) = 0;
  virtual Result WriteSaveDataFileSystemExtraDataWithMask(uint64_t saveDataId,
    fs::SaveDataSpaceId spaceId, const nn::sf::InBuffer& extraData,
    const nn::sf::InBuffer& mask) = 0;
  virtual void Reserved48() = 0;
  virtual void Reserved49() = 0;
  virtual void Reserved50() = 0;
  virtual Result WriteSaveDataFileSystemExtraDataWithMaskBySaveDataAttribute(
    const fs::SaveDataAttribute& attribute, fs::SaveDataSpaceId spaceId,
    const nn::sf::InBuffer& extraData, const nn::sf::InBuffer& mask) = 0;
  virtual Result ReadSaveDataFileSystemExtraDataWithMaskBySaveDataAttribute(
    const nn::sf::OutBuffer& outExtraData, fs::SaveDataSpaceId spaceId,
    const fs::SaveDataAttribute& attribute, const nn::sf::InBuffer& mask) = 0;
  virtual void Reserved53() = 0;
  virtual void Reserved54() = 0;
  virtual void Reserved55() = 0;
  virtual void Reserved56() = 0;
  virtual void Reserved57() = 0;
  virtual void Reserved58() = 0;
  virtual void Reserved59() = 0;
  virtual void Reserved60() = 0;
  virtual void Reserved61() = 0;
  virtual void Reserved62() = 0;
  virtual void Reserved63() = 0;
  virtual Result FormatBaseFileSystem(fs::BaseFileSystemId id) = 0;
  virtual void Reserved65() = 0;
  virtual void Reserved66() = 0;
  virtual void Reserved67() = 0;
  virtual void Reserved68() = 0;
  virtual void Reserved69() = 0;
  virtual void Reserved70() = 0;
  virtual void Reserved71() = 0;
  virtual void Reserved72() = 0;
  virtual void Reserved73() = 0;
  virtual void Reserved74() = 0;
  virtual void Reserved75() = 0;
  virtual void Reserved76() = 0;
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
  virtual void Reserved88() = 0;
  virtual Result RegisterExternalKey(const fs::RightsId& rightsId,
    const fs::ExternalKeySource& keySource) = 0;
  virtual Result UnregisterAllExternalKey() = 0;
  virtual void Reserved91() = 0;
  virtual Result SetCurrentPosixTimeWithTimeDifference(int64_t posixTime,
    int32_t difference) = 0;
  virtual Result GetFreeSpaceSizeForSaveData(nn::sf::Out<int64_t> outSize,
    fs::SaveDataSpaceId spaceId) = 0;
  virtual void Reserved94() = 0;
  virtual void Reserved95() = 0;
  virtual void Reserved96() = 0;
  virtual void Reserved97() = 0;
  virtual Result UnregisterExternalKey(const fs::RightsId& rightsId) = 0;
  virtual void Reserved99() = 0;
  virtual Result SetSdCardEncryptionSeed(const fs::EncryptionSeed& seed) = 0;
  virtual Result SetSdCardAccessibility(bool isAccessible) = 0;
  virtual Result IsSdCardAccessible(nn::sf::Out<bool> outIsAccessible) = 0;
  virtual Result TestExternalKey(const fs::RightsId& rightsId,
    const fs::ExternalKeySource& keySource) = 0;
  virtual void Reserved104() = 0;
  virtual void Reserved105() = 0;
  virtual Result OpenAccessFailureDetectionEventNotifier(
    const nn::sf::Out<nn::sf::SharedPointer<IEventNotifier>>& outNotifier,
    uint64_t processId, bool notifyOnDeepRetry) = 0;
  virtual void Reserved107() = 0;
  virtual Result IsAccessFailureDetected(nn::sf::Out<bool> outIsDetected,
    uint64_t processId) = 0;
  virtual Result ResolveAccessFailure(uint64_t processId) = 0;
  virtual Result AbandonAccessFailure(uint64_t processId) = 0;
  virtual void Reserved111() = 0;
  virtual void Reserved112() = 0;
  virtual void Reserved113() = 0;
  virtual void Reserved114() = 0;
  virtual void Reserved115() = 0;
  virtual Result SetGlobalAccessLogMode(uint32_t mode) = 0;
  virtual Result GetGlobalAccessLogMode(nn::sf::Out<uint32_t> outMode) = 0;
  virtual void Reserved118() = 0;
  virtual Result RegisterUpdatePartition() = 0;
  virtual void Reserved120() = 0;
  virtual void Reserved121() = 0;
  virtual void Reserved122() = 0;
  virtual Result GetFsStackUsage(nn::sf::Out<uint32_t> outUsage,
    uint32_t threadType) = 0;
  virtual void Reserved124() = 0;
  virtual void Reserved125() = 0;
  virtual Result OutputApplicationInfoAccessLog(
    const fs::ApplicationInfo& info) = 0;
  virtual Result SetDebugOption(fs::DebugOptionKey key, int64_t value) = 0;
  virtual Result UnsetDebugOption(fs::DebugOptionKey key) = 0;
  virtual void Reserved129() = 0;
  virtual Result OverrideSaveDataTransferTokenSignVerificationKey(
    uint32_t keyIndex, const nn::sf::InBuffer& key) = 0;
  virtual Result CorruptSaveDataFileSystemByOffset(fs::SaveDataSpaceId spaceId,
    uint64_t saveDataId, int64_t offset) = 0;
  virtual void Reserved132() = 0;
  virtual void Reserved133() = 0;
  virtual Result NotifyErrorContextServiceReady(bool isReady) = 0;
};

}
