#pragma once

#include <stddef.h>
#include <stdint.h>

#include "nn/account/account_types.hpp"
#include "nn/fs/fs_file_system_proxy_types.hpp"
#include "nn/fs/fs_save_data_types.hpp"
#include "nn/ncm/ncm_ids.hpp"
#include "nn/result.hpp"

namespace nn::fs {

enum CacheStorageTargetMedia {
  CacheStorageTargetMedia_None,
  CacheStorageTargetMedia_Nand,
  CacheStorageTargetMedia_SdCard,
};

bool IsSdCardAccessible();
Result GetCacheStorageTargetMedia(CacheStorageTargetMedia* outValue,
  ncm::ApplicationId applicationId);

UserId ConvertAccountUidToFsUserId(const account::Uid& user);

Result MountSaveData(const char* name, UserId userId);
Result MountSaveData(const char* name, ncm::ApplicationId applicationId,
  UserId userId);
Result MountSaveDataReadOnly(const char* name,
  ncm::ApplicationId applicationId, UserId userId);
Result MountSaveData(const char* name, const account::Uid& user);
Result MountSaveData(const char* name, ApplicationId applicationId,
  const account::Uid& user);
Result MountSaveDataReadOnly(const char* name, ApplicationId applicationId,
  const account::Uid& user);

Result IsSaveDataExisting(bool* outValue, const account::Uid& user);
bool IsSaveDataExisting(const account::Uid& user);
Result IsSaveDataExisting(bool* outValue, ApplicationId applicationId,
  const account::Uid& user);
bool IsSaveDataExisting(ApplicationId applicationId,
  const account::Uid& user);

Result MountSystemSaveData(const char* name, uint64_t saveDataId);
Result MountSystemSaveData(const char* name, uint64_t saveDataId,
  UserId userId);
Result MountSystemSaveData(const char* name, SaveDataSpaceId spaceId,
  uint64_t saveDataId);
Result MountSystemSaveData(const char* name, SaveDataSpaceId spaceId,
  uint64_t saveDataId, UserId userId);
Result MountSystemSaveData(const char* name, uint64_t saveDataId,
  const account::Uid& user);

Result CreateSystemSaveData(SaveDataSpaceId spaceId, uint64_t saveDataId,
  UserId userId, uint64_t ownerId, int64_t size, int64_t journalSize,
  uint32_t flags);
Result CreateSystemSaveData(uint64_t saveDataId, UserId userId, int64_t size,
  int64_t journalSize, uint32_t flags);
Result CreateCacheStorage(ncm::ApplicationId applicationId,
  SaveDataSpaceId spaceId, uint64_t ownerId, uint16_t index, int64_t size,
  int64_t journalSize, uint32_t flags);
Result CreateSystemSaveData(SaveDataSpaceId spaceId, uint64_t saveDataId,
  UserId userId, uint64_t ownerId, int64_t size, int64_t journalSize,
  uint32_t flags, SaveDataFormatType formatType);
Result CreateSystemSaveData(uint64_t saveDataId, const account::Uid& user,
  int64_t size, int64_t journalSize, uint32_t flags);
Result CreateSystemSaveData(uint64_t saveDataId, const account::Uid& user,
  uint64_t ownerId, int64_t size, int64_t journalSize, uint32_t flags,
  SaveDataFormatType formatType);

Result DeleteSystemSaveData(uint64_t saveDataId, const account::Uid& user);
Result GetSystemSaveDataFlags(uint32_t* outFlags, uint64_t saveDataId,
  const account::Uid& user);
Result SetSystemSaveDataFlags(uint64_t saveDataId, const account::Uid& user,
  uint32_t flags);

Result ReadSaveDataThumbnailFile(uint64_t applicationId,
  const account::Uid& user, void* headerBuffer, size_t headerBufferSize,
  void* imageBuffer, size_t imageBufferSize);
Result ReadSaveDataThumbnailFileHeader(uint64_t applicationId,
  const account::Uid& user, void* headerBuffer, size_t headerBufferSize);
Result WriteSaveDataThumbnailFile(uint64_t applicationId,
  const account::Uid& user, const void* headerBuffer, size_t headerBufferSize,
  const void* imageBuffer, size_t imageBufferSize);
Result WriteSaveDataThumbnailFileHeader(uint64_t applicationId,
  const account::Uid& user, const void* headerBuffer,
  size_t headerBufferSize);
Result CorruptSaveDataThumbnailFileForDebug(uint64_t applicationId,
  const account::Uid& user);

Result DeleteCacheStorage(int index);
Result GetCacheStorageSize(int64_t* outSize, int64_t* outJournalSize,
  int index);
Result ListApplicationAccessibleSaveDataOwnerId(int* outCount,
  ncm::ApplicationId* outIds, ncm::ApplicationId applicationId,
  int programIndex, int offset, int count);
Result GetDeviceSaveDataSize(int64_t* outSize, int64_t* outJournalSize,
  ApplicationId applicationId);

Result MountDeviceSaveData(const char* name);
Result MountDeviceSaveData(const char* name,
  ncm::ApplicationId applicationId);
Result MountDeviceSaveData(const char* name, ApplicationId applicationId);
bool IsDeviceSaveDataExisting(ApplicationId applicationId);

Result CheckUid(const account::Uid& user);

bool IsAutoAbortPolicyCustomized();

namespace detail {

Result EnsureApplicationDeviceSaveData(int64_t* outRequiredSize,
  ncm::ApplicationId applicationId, int64_t size, int64_t journalSize);
Result CheckMountName(const char* name);
void EnableFileSystemAccessorAccessLog(const char* name);

Result MountSaveDataImpl(const char* name, SaveDataSpaceId spaceId,
  ncm::ApplicationId applicationId, UserId userId, SaveDataType type,
  bool isReadOnly, uint16_t index);
Result MountSaveDataImpl(const char* name, UserId userId);
Result EnsureSaveDataImpl(SaveDataSpaceId spaceId, SaveDataType type,
  UserId userId, int64_t size, int64_t journalSize, uint16_t index,
  bool isExtensionAllowed);
Result IsSaveDataExisting(bool* outValue, ncm::ApplicationId applicationId,
  SaveDataType type, const UserId& userId);
Result CleanUpTemporaryStorageImpl();

Result FindSaveDataWithFilter(SaveDataInfo* outInfo, SaveDataSpaceId spaceId,
  const SaveDataFilter& filter);
Result DeleteSaveData(SaveDataSpaceId spaceId, uint64_t saveDataId);
Result ExtendSaveData(SaveDataSpaceId spaceId, uint64_t saveDataId,
  int64_t dataSize, int64_t journalSize);
Result GetSaveDataAvailableSize(int64_t* outSize, SaveDataSpaceId spaceId,
  uint64_t saveDataId);
Result GetSaveDataJournalSize(int64_t* outSize, SaveDataSpaceId spaceId,
  uint64_t saveDataId);

Result IsSaveDataExisting(bool* outValue, const UserId& userId);
Result IsSaveDataExisting(bool* outValue, ncm::ApplicationId applicationId,
  const UserId& userId);

Result ReadSaveDataThumbnailFile(uint64_t applicationId, UserId userId,
  void* headerBuffer, size_t headerBufferSize, void* imageBuffer,
  size_t imageBufferSize);
Result ReadSaveDataThumbnailFileHeader(uint64_t applicationId, UserId userId,
  void* headerBuffer, size_t headerBufferSize);
Result WriteSaveDataThumbnailFile(uint64_t applicationId, UserId userId,
  const void* headerBuffer, size_t headerBufferSize, const void* imageBuffer,
  size_t imageBufferSize);
Result WriteSaveDataThumbnailFileHeader(uint64_t applicationId,
  UserId userId, const void* headerBuffer, size_t headerBufferSize);
Result CorruptSaveDataThumbnailFileForDebug(uint64_t applicationId,
  UserId userId);

}

}
