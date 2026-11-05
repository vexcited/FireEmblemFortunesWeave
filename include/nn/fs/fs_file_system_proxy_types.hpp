#pragma once

#include <stdint.h>

#include "nn/fs/fs_save_data_types.hpp"
#include "nn/fs/fs_types.hpp"

namespace nn::time {

struct PosixTime {
  int64_t value;
};

}

namespace nn::fs {

struct SaveDataMetaInfo {
  uint32_t size;
  uint8_t type;
  char reserved[11];
};

struct HashSalt {
  uint8_t value[32];
};

enum class SaveDataMetaType : uint8_t {
  None,
  Thumbnail,
  ExtensionContext,
};

struct SaveDataCertificate {
  uint8_t version;
  uint8_t keyType;
  uint8_t reserved1;
  bool hasProgramId;
  char reserved2[4];
  uint64_t programId;
  uint8_t reserved3;
  bool isDevelopment;
  char reserved4[46];
  char signature[64];
};

static_assert(sizeof(SaveDataCertificate) == 0x80);

struct SaveDataCreationInfo2 {
  uint32_t version;
  SaveDataAttribute attribute;
  int64_t size;
  int64_t journalSize;
  int64_t blockSize;
  uint64_t ownerId;
  uint32_t flags;
  SaveDataSpaceId spaceId;
  SaveDataFormatType formatType;
  char reserved1[2];
  bool isHashSaltEnabled;
  char reserved2[3];
  HashSalt hashSalt;
  SaveDataMetaType metaType;
  char reserved3[3];
  uint32_t metaSize;
  char reserved4[4];
  SaveDataCertificate certificate;
  char reserved5[224];

  static Result Make(SaveDataCreationInfo2* out,
    const SaveDataAttribute& attribute, int64_t size, int64_t journalSize,
    int64_t blockSize, uint64_t ownerId, uint32_t flags,
    SaveDataSpaceId spaceId, SaveDataFormatType formatType,
    const SaveDataCertificate* certificate);
};

static_assert(sizeof(SaveDataCreationInfo2) == 0x200);

struct RightsId {
  uint8_t data[16];
};

struct ExternalKeySource {
  uint8_t data[16];
};

struct EncryptionSeed {
  uint8_t value[16];
};

struct SaveDataExtraData {
  SaveDataAttribute attribute;
  uint64_t ownerId;
  int64_t timeStamp;
  uint32_t flags;
  uint8_t reserved1;
  uint8_t acdIndex;
  uint8_t reserved2[2];
  int64_t availableSize;
  int64_t journalSize;
  int64_t commitId;
  uint8_t reserved3[400];
};

struct FileSystemProxyErrorInfo {
  char data[0x80];
};

struct ApplicationInfo {
  char data[24];
};

enum class SimulatingDeviceDetectionMode : uint32_t {};

enum class SaveDataTransferKeyIndexForTest : uint32_t {};

enum class FsStackUsageThreadType : uint32_t {};

enum class SimulatingDeviceTargetOperation : uint32_t {};

enum class SimulatingDeviceAccessFailureEventType : uint32_t {
  None,
  AccessTimeoutFailure,
  AccessFailure,
  DataCorruption,
};

enum class BaseFileSystemId : uint32_t {};

enum ContentAttributes : uint8_t {
  ContentAttributes_None = 0,
};

namespace detail {

enum class FileSystemProxyType : uint32_t {
  Code = 0,
  Rom = 1,
  Logo = 2,
  Control = 3,
  Manual = 4,
  Meta = 5,
  Data = 6,
  Package = 7,
  RegisteredUpdate = 8,
};

}

enum class DebugOptionKey : uint32_t {};

struct ProcessEnvironmentSource {
  uint8_t data[16];
};

struct ProgramIndexMapInfo {
  uint64_t programId;
  uint64_t mainProgramId;
  uint8_t programIndex;
  uint8_t reserved[15];
};

static_assert(sizeof(ProgramIndexMapInfo) == 0x20);

enum FsAccessControlRestrictionMode : uint8_t {};

struct MemoryReportInfo {
  uint64_t values[16];
};

static_assert(sizeof(MemoryReportInfo) == 0x80);

}
