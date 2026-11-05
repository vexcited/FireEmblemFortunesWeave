#pragma once

#include <stdint.h>

#include "nn/fs/fs_result.hpp"
#include "nn/fs/fs_types.hpp"
#include "nn/util/optional.hpp"

namespace nn::fs {

struct SaveDataReferenceId {
  uint64_t value;
};

struct UserId {
  uint64_t data[2];
};

constexpr UserId InvalidUserId = {};

enum class SaveDataType : uint8_t {
  System,
  Account,
  Bcat,
  Device,
  Temporary,
  Cache,
};

enum class SaveDataRank : uint8_t {
  Primary,
  Secondary,
};

struct SaveDataAttribute {
  SaveDataReferenceId programId;
  UserId userId;
  uint64_t staticSaveDataId;
  SaveDataType type;
  SaveDataRank rank;
  uint16_t index;
  char reserved[28];

  static Result Make(SaveDataAttribute* out, SaveDataReferenceId programId,
    SaveDataType type, UserId userId, uint64_t staticSaveDataId);
  static Result Make(SaveDataAttribute* out, SaveDataReferenceId programId,
    SaveDataType type, UserId userId, uint64_t staticSaveDataId,
    uint16_t index);
  static Result Make(SaveDataAttribute* out, SaveDataReferenceId programId,
    SaveDataType type, UserId userId, uint64_t staticSaveDataId,
    uint16_t index, SaveDataRank rank);
};

struct SaveDataInfo {
  uint64_t saveDataId;
  SaveDataSpaceId spaceId;
  SaveDataType type;
  char reserved0[6];
  UserId userId;
  uint64_t staticSaveDataId;
  uint64_t programId;
  int64_t size;
  uint16_t index;
  SaveDataRank rank;
  char reserved1[37];
};

struct SaveDataFilter {
  bool useProgramId;
  bool useSaveDataType;
  bool useUserId;
  bool useSaveDataId;
  bool useIndex;
  SaveDataRank rank;
  SaveDataAttribute attribute;

  static Result Make(SaveDataFilter* outValue,
    util::optional<uint64_t> programId, util::optional<SaveDataType> type,
    util::optional<UserId> userId, util::optional<uint64_t> saveDataId,
    util::optional<uint16_t> index);
  static Result Make(SaveDataFilter* outValue,
    util::optional<uint64_t> programId, util::optional<SaveDataType> type,
    util::optional<UserId> userId, util::optional<uint64_t> saveDataId,
    util::optional<uint16_t> index, uint8_t rank);
};

struct SaveDataCreationInfo {
  int64_t size;
  int64_t journalSize;
  int64_t blockSize;
  uint64_t ownerId;
  uint32_t flags;
  SaveDataSpaceId spaceId;
  bool isPseudoSaveData;
  char reserved[26];

  static Result Make(SaveDataCreationInfo* out, int64_t size,
    int64_t journalSize, uint64_t ownerId, uint32_t flags,
    SaveDataSpaceId spaceId);
};

}
