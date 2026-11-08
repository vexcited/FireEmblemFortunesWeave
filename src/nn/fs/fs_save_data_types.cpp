#include "nn/fs/fs_save_data_types.hpp"

#include <string.h>

namespace nn::fs {

namespace {

const int64_t DefaultSaveDataBlockSize = 0x4000;

bool IsValidSaveDataType(SaveDataType type) {
  return static_cast<uint8_t>(type) <=
    static_cast<uint8_t>(SaveDataType::Cache);
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

// The engaged flag is the first byte of the optional.
template<class T>
uint8_t GetEngagedByte(const util::optional<T>& value) {
  return *reinterpret_cast<const uint8_t*>(&value);
}

template<class T>
T GetValueIfEngaged(const util::optional<T>& value) {
  return GetEngagedByte(value) == 1 ? *value : T{};
}

template<class T>
util::optional<T> Normalize(const util::optional<T>& value) {
  return GetEngagedByte(value) == 1 ? util::optional<T>(*value) :
    util::optional<T>();
}

// The user condition keeps the low bit of its flag, its value only when the
// flag is one.
util::optional<UserId> NormalizeUserId(const util::optional<UserId>& value) {
  if ((GetEngagedByte(value) & 1) == 0) {
    return util::optional<UserId>();
  }
  return util::optional<UserId>(GetValueIfEngaged(value));
}

void SetFlagByte(bool* pFlag, uint8_t value) {
  *reinterpret_cast<uint8_t*>(pFlag) = value;
}

// Absent conditions match anything, their attribute fields stay zero. The
// flag bytes are copied as they are, except the user one.
Result SaveDataFilter::Make(SaveDataFilter* outValue,
  util::optional<uint64_t> programId, util::optional<SaveDataType> type,
  util::optional<UserId> userId, util::optional<uint64_t> saveDataId,
  util::optional<uint16_t> index, uint8_t rank) {
  SaveDataFilter filter = {};
  NN_FS_RESULT_DO(SaveDataAttribute::Make(&filter.attribute,
    SaveDataReferenceId{GetValueIfEngaged(programId)},
    GetValueIfEngaged(type), GetValueIfEngaged(userId),
    GetValueIfEngaged(saveDataId), GetValueIfEngaged(index),
    SaveDataRank::Primary));
  SetFlagByte(&filter.useProgramId, GetEngagedByte(programId));
  SetFlagByte(&filter.useSaveDataType, GetEngagedByte(type));
  filter.useUserId = GetEngagedByte(userId) != 0;
  SetFlagByte(&filter.useSaveDataId, GetEngagedByte(saveDataId));
  SetFlagByte(&filter.useIndex, GetEngagedByte(index));
  filter.rank = static_cast<SaveDataRank>(rank);
  *outValue = filter;
  return ResultSuccess();
}

Result SaveDataFilter::Make(SaveDataFilter* outValue,
  util::optional<uint64_t> programId, util::optional<SaveDataType> type,
  util::optional<UserId> userId, util::optional<uint64_t> saveDataId,
  util::optional<uint16_t> index) {
  return Make(outValue, Normalize(programId), Normalize(type),
    NormalizeUserId(userId), Normalize(saveDataId), Normalize(index), 0);
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
