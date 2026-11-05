#pragma once

#include <stddef.h>
#include <stdint.h>

#include "nn/fs/fs_types.hpp"
#include "nn/result.hpp"

namespace nn::gc {

struct GameCardIdSet {
  uint8_t data[12];
};

struct RmaInformation {
  uint8_t data[0x200];
};

struct GameCardStatus {
  uint8_t partitionFsHeaderHash[0x20];
  uint64_t packageId;
  int64_t cardSize;
  int64_t partitionFsHeaderOffset;
  int64_t partitionFsHeaderSize;
  int64_t secureAreaOffset;
  int64_t secureAreaSize;
  uint32_t updatePartitionVersion;
  uint64_t updatePartitionId;
  uint8_t compatibilityType;
  uint8_t reserved61[3];
  uint8_t gameCardAttribute;
  uint8_t reserved65[0xB];
};

struct GameCardAsicCertificateSet {
  uint8_t data[0x513];
};

}

namespace nn::fs {

typedef uint32_t GameCardHandle;

enum class GameCardPartitionRaw {
  NormalReadOnly,
  SecureReadOnly,
  RootWriteOnly,
};

enum class GameCardSize : uint32_t {};

enum GameCardAttribute : uint8_t {};

enum GameCardCompatibilityType : uint8_t {};

enum GameCardAttribute2 : uint8_t {};

enum GameCardAttribute3 : uint8_t {};

enum class GameCardType : uint8_t {};

enum class GameCardTypeDetectionMode : uint8_t {};

struct GameCardUpdatePartitionInfo {
  uint32_t version;
  uint64_t id;
};

struct GameCardErrorInfo {
  uint8_t data[0x10];
};

struct GameCardErrorReportInfo {
  uint8_t data[0x40];
};

struct GameCardDetailedErrorReportInfo {
  uint8_t data[0xD80];
};

struct GameCardHostControllerStatus {
  uint8_t data[8];
};

struct GameCardSecurityCheckInfo {
  uint8_t data[0x80];
};

Result GetGameCardHandle(GameCardHandle* outValue);
bool IsGameCardInserted();
Result EraseGameCard(GameCardSize cardSize, uint64_t normalAreaSize);
Result GetGameCardUpdatePartitionInfo(bool* outIsAvailable,
  GameCardUpdatePartitionInfo* outValue, GameCardHandle handle);
void FinalizeGameCardDriver();
Result GetGameCardAsicInfo(gc::RmaInformation* outValue,
  const void* firmwareBuffer, size_t firmwareBufferSize);
Result GetGameCardAsicCertificate(gc::GameCardAsicCertificateSet* outValue);
Result GetGameCardIdSet(gc::GameCardIdSet* outValue);
Result GetGameCardCid(void* outBuffer, size_t size);
Result RegisterGameCardConfigurationData(void* buffer, size_t size);
Result WriteToGameCard(int64_t offset, void* buffer, size_t size);
Result SetVerifyWriteEnableFlag(bool isEnabled);
Result GetGameCardDeviceIdForProdCard(void* outBuffer, size_t outBufferSize,
  void* devHeaderBuffer, size_t devHeaderBufferSize);
Result EraseAndWriteParamDirectly(void* buffer, size_t size);
Result ReadParamDirectly(void* outBuffer, size_t size);
Result ForceEraseGameCard();
Result GetGameCardAttribute(GameCardAttribute* outValue,
  GameCardHandle handle);
Result GetGameCardAttribute2(GameCardAttribute2* outValue,
  GameCardHandle handle);
Result GetGameCardAttribute3(GameCardAttribute3* outValue,
  GameCardHandle handle);
Result GetGameCardPackageId(void* outBuffer, size_t size,
  GameCardHandle handle);
Result GetGameCardCompatibilityType(GameCardCompatibilityType* outValue,
  GameCardHandle handle);
Result GetGameCardDeviceCertificate(void* outBuffer, size_t size,
  GameCardHandle handle);
Result GetGameCardDeviceCertificate(int64_t* outSize, void* outBuffer,
  size_t size, GameCardHandle handle);
Result ChallengeCardExistence(void* outBuffer, size_t outBufferSize,
  const void* seedBuffer, size_t seedBufferSize, const void* valueBuffer,
  size_t valueBufferSize, GameCardHandle handle);
Result GetGameCardApplicationIdList(uint16_t* outCount, void* outBuffer,
  size_t size, GameCardHandle handle);
Result GetGameCardCardHeaderSet(void* outBuffer, size_t size,
  GameCardHandle handle);
Result GetGameCardImageHash(void* outBuffer, size_t size,
  GameCardHandle handle);
Result GetGameCardType(GameCardType* outValue, GameCardHandle handle);
Result GetGameCardCardTitlePairInfo(void* outBuffer, size_t size,
  GameCardHandle handle);
Result GetGameCardCardInfo(void* outBuffer, size_t size,
  GameCardHandle handle);
Result ChallengeGameCardResponse(void* outBuffer, size_t outBufferSize,
  const void* challengeBuffer, size_t challengeBufferSize, uint8_t index,
  GameCardHandle handle);
Result CheckGameCardCardSideCaBase(const void* buffer, size_t size,
  GameCardHandle handle);
Result TriggerGameCardSecurityCheck(bool isForced, GameCardHandle handle);
Result LoadGameCardCardReportForErrorReport(int64_t* outSize,
  void* outBuffer, size_t size, int index, GameCardHandle handle);
Result GetGameCardErrorInfo(GameCardErrorInfo* outValue);
Result GetGameCardErrorReportInfo(GameCardErrorReportInfo* outValue);
Result GetGameCardDetailedErrorReportInfo(
  GameCardDetailedErrorReportInfo* outValue);
Result GetGameCardDeviceId(void* outBuffer, size_t size);
Result SetGameCardSessionCreationDelay(bool isEnabled, uint32_t delayTime,
  bool isAppliedToSecure);
Result GetGameCardTypeForWriter(GameCardType* outValue);
Result GetGameCardHostControllerStatus(GameCardHostControllerStatus* outValue);
Result EndWriteToGameCard();
Result GetGameCardCardInfoForWriter(void* outBuffer, size_t size);
bool IsGameCardCapClosed();
Result SetGameCardTypeDetectionMode(GameCardTypeDetectionMode mode,
  bool isPersistent);
Result SetGameCardStrictMode(bool isEnabled, bool isPersistent);
Result GetGameCardSocCertificateSet(void* outBuffer, size_t size);
Result GetGameCardSecurityCheckInfo(bool* outIsAvailable,
  GameCardSecurityCheckInfo* outValue);

}
