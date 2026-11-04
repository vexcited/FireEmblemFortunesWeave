#include "nn/fs/fs_save_data_types.hpp"

#include <string.h>

namespace nn::fs {

namespace {

const int64_t DefaultSaveDataBlockSize = 0x4000;

bool IsValidSaveDataType(SaveDataType type) {
  return static_cast<uint8_t>(type) <= static_cast<uint8_t>(SaveDataType::Cache);
}

bool IsValidSaveDataRank(SaveDataRank rank) {
  return static_cast<uint8_t>(rank) <=
    static_cast<uint8_t>(SaveDataRank::Secondary);
}

bool IsValidSaveDataSpaceId(SaveDataSpaceId spaceId) {
  switch (spaceId) {
    case SaveDataSpaceId::System:
    case SaveDataSpaceId::User:
    case SaveDataSpaceId::SdSystem:
    case SaveDataSpaceId::Temporary:
    case SaveDataSpaceId::SdUser:
    case SaveDataSpaceId::ProperSystem:
    case SaveDataSpaceId::SafeMode:
    case SaveDataSpaceId::ProperUser:
      return true;
    default:
      return false;
  }
}

}

Result SaveDataAttribute::Make(SaveDataAttribute* out,
  SaveDataReferenceId programId, SaveDataType type, UserId userId,
  uint64_t staticSaveDataId, uint16_t index, SaveDataRank rank) {
  NN_FS_RESULT_THROW_UNLESS(IsValidSaveDataType(type) &&
    IsValidSaveDataRank(rank), ResultInvalidArgument());

  memset(out, 0, sizeof(*out));
  out->programId = programId;
  out->userId = userId;
  out->staticSaveDataId = staticSaveDataId;
  out->type = type;
  out->rank = rank;
  out->index = index;
  return ResultSuccess();
}

Result SaveDataAttribute::Make(SaveDataAttribute* out,
  SaveDataReferenceId programId, SaveDataType type, UserId userId,
  uint64_t staticSaveDataId, uint16_t index) {
  return Make(out, programId, type, userId, staticSaveDataId, index,
    SaveDataRank::Primary);
}

Result SaveDataAttribute::Make(SaveDataAttribute* out,
  SaveDataReferenceId programId, SaveDataType type, UserId userId,
  uint64_t staticSaveDataId) {
  return Make(out, programId, type, userId, staticSaveDataId, 0,
    SaveDataRank::Primary);
}

Result SaveDataCreationInfo::Make(SaveDataCreationInfo* out, int64_t size,
  int64_t journalSize, uint64_t ownerId, uint32_t flags,
  SaveDataSpaceId spaceId) {
  NN_FS_RESULT_THROW_UNLESS(size >= 0 && journalSize >= 0 &&
    IsValidSaveDataSpaceId(spaceId), ResultInvalidArgument());

  memset(out, 0, sizeof(*out));
  out->size = size;
  out->journalSize = journalSize;
  out->blockSize = DefaultSaveDataBlockSize;
  out->ownerId = ownerId;
  out->flags = flags;
  out->spaceId = spaceId;
  return ResultSuccess();
}

}
