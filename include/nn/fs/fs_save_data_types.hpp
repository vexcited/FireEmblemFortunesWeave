#pragma once

#include <stdint.h>

#include "nn/fs/fs_result.hpp"
#include "nn/fs/fs_types.hpp"

namespace nn::fs {

struct SaveDataReferenceId {
  uint64_t value;
};

struct UserId {
  uint64_t data[2];
};

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
