#pragma once

#include <stddef.h>
#include <stdint.h>

#include "nn/fs/fs_file_system_proxy_types.hpp"
#include "nn/fs/fs_save_data_types.hpp"
#include "nn/ncm/ncm_ids.hpp"
#include "nn/result.hpp"

namespace nn::fs {

Result DeleteSaveData(uint64_t saveDataId);
Result DeleteSaveData(SaveDataSpaceId spaceId, uint64_t saveDataId);
Result FindSaveDataWithFilter(SaveDataInfo* outInfo, SaveDataSpaceId spaceId,
  const SaveDataFilter& filter);
Result DeleteSystemSaveData(SaveDataSpaceId spaceId, uint64_t saveDataId,
  const UserId& userId);
Result DeleteDeviceSaveData(ApplicationId applicationId);
Result ExtendSaveData(uint64_t saveDataId, int64_t dataSize,
  int64_t journalSize);
Result ExtendSaveData(SaveDataSpaceId spaceId, uint64_t saveDataId,
  int64_t dataSize, int64_t journalSize);
Result QuerySaveDataTotalSize(int64_t* outSize, int64_t dataSize,
  int64_t journalSize);
Result GetSystemSaveDataFlags(uint32_t* outFlags, SaveDataSpaceId spaceId,
  uint64_t saveDataId, const UserId& userId);
Result SetSaveDataFlags(uint64_t saveDataId, uint32_t flags);
Result SetSaveDataFlags(uint64_t saveDataId, SaveDataSpaceId spaceId,
  uint32_t flags);
Result SetSystemSaveDataFlags(SaveDataSpaceId spaceId, uint64_t saveDataId,
  const UserId& userId, uint32_t flags);
Result SetSaveDataTimeStamp(SaveDataSpaceId spaceId, uint64_t saveDataId,
  const time::PosixTime& timeStamp);
Result GetSaveDataCommitId(int64_t* outCommitId, SaveDataSpaceId spaceId,
  uint64_t saveDataId);
Result SetSaveDataCommitId(SaveDataSpaceId spaceId, uint64_t saveDataId,
  const int64_t& commitId);
Result QuerySaveDataInternalStorageTotalSize(int64_t* outSize,
  SaveDataSpaceId spaceId, uint64_t saveDataId);
Result VerifySaveData(bool* outIsValid, uint64_t saveDataId,
  void* workBuffer, size_t workBufferSize);
Result VerifySaveData(bool* outIsValid, SaveDataSpaceId spaceId,
  uint64_t saveDataId, void* workBuffer, size_t workBufferSize);
Result CorruptSaveDataForDebug(uint64_t saveDataId);
Result CorruptSaveDataForDebug(SaveDataSpaceId spaceId, uint64_t saveDataId);

namespace detail {

Result QuerySaveDataInternalStorageTotalSize(int64_t* outSize,
  SaveDataSpaceId spaceId, uint64_t saveDataId);

}

}
