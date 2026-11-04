#include <string.h>

#include "nn/fs/fs_game_card.hpp"
#include "nn/fs/detail/fs_device_simulation.hpp"
#include "nn/fs/detail/fs_file_system_proxy_service_object.hpp"
#include "nn/fs/detail/fs_log.hpp"
#include "nn/fs/fs_istorage.hpp"

namespace nn::fs {

namespace {

using StorageDeviceManager =
  nn::sf::SharedPointer<fssrv::sf::IStorageDeviceManager>;
using StorageDevice = nn::sf::SharedPointer<fssrv::sf::IStorageDevice>;
using StorageDeviceOperator =
  nn::sf::SharedPointer<fssrv::sf::IStorageDeviceOperator>;

const int32_t StorageDevicePortGameCard = 3;

enum GameCardManagerOperationId : int32_t {
  GameCardManagerOperationId_Finalize = 1,
  GameCardManagerOperationId_GetHandle = 2,
  GameCardManagerOperationId_GetInitializationResult = 4,
  GameCardManagerOperationId_GetErrorInfo = 5,
  GameCardManagerOperationId_GetErrorReportInfo = 6,
  GameCardManagerOperationId_SetVerifyEnableFlag = 7,
  GameCardManagerOperationId_GetAsicInfo = 8,
  GameCardManagerOperationId_GetDeviceIdForProdCard = 9,
  GameCardManagerOperationId_EraseAndWriteParamDirectly = 10,
  GameCardManagerOperationId_ReadParamDirectly = 11,
  GameCardManagerOperationId_WriteToGameCardDirectly = 12,
  GameCardManagerOperationId_ForceErase = 13,
  GameCardManagerOperationId_GetAsicCertificate = 15,
  GameCardManagerOperationId_SetSessionCreationDelay = 16,
  GameCardManagerOperationId_RegisterConfigurationData = 17,
  GameCardManagerOperationId_GetDetailedErrorReportInfo = 18,
  GameCardManagerOperationId_GetTypeForWriter = 128,
  GameCardManagerOperationId_GetHostControllerStatus = 129,
  GameCardManagerOperationId_EndWrite = 130,
  GameCardManagerOperationId_IsCapClosed = 131,
  GameCardManagerOperationId_SetTypeDetectionMode = 132,
  GameCardManagerOperationId_SetStrictMode = 133,
  GameCardManagerOperationId_GetSocCertificateSet = 134,
  GameCardManagerOperationId_GetSecurityCheckInfo = 135,
};

enum GameCardOperationId : int32_t {
  GameCardOperationId_Erase = 1,
  GameCardOperationId_GetIdSet = 2,
  GameCardOperationId_GetDeviceId = 3,
  GameCardOperationId_GetImageHash = 4,
  GameCardOperationId_GetDeviceCertificate = 5,
  GameCardOperationId_ChallengeCardExistence = 6,
  GameCardOperationId_GetStatus = 7,
  GameCardOperationId_GetCardHeaderSet = 8,
  GameCardOperationId_GetApplicationIdList = 9,
  GameCardOperationId_GetCardTitlePairInfo = 128,
  GameCardOperationId_GetCardInfo = 129,
  GameCardOperationId_ChallengeResponse = 130,
  GameCardOperationId_CheckCardSideCaBase = 132,
  GameCardOperationId_TriggerSecurityCheck = 133,
  GameCardOperationId_LoadCardReportForErrorReport = 134,
};

const size_t GameCardHeaderSetSize = 0x600;
const size_t GameCardApplicationIdListSize = 0x600;

Result GetGameCardManager(StorageDeviceManager* outValue) {
  auto fileSystemProxy = detail::GetFileSystemProxyServiceObject();
  nn::sf::SharedPointer<fssrv::sf::IDeviceOperator> deviceOperator;
  NN_FS_RESULT_DO(fileSystemProxy->OpenDeviceOperator(
    nn::sf::Out<nn::sf::SharedPointer<fssrv::sf::IDeviceOperator>>(
      &deviceOperator)));
  StorageDeviceManager manager;
  NN_FS_RESULT_DO(deviceOperator->OpenStorageDeviceManager(
    nn::sf::Out<StorageDeviceManager>(&manager), StorageDevicePortGameCard));
  *outValue = manager;
  return ResultSuccess();
}

Result GetGameCardOperator(StorageDeviceOperator* outValue) {
  StorageDeviceManager manager;
  NN_FS_RESULT_DO(GetGameCardManager(&manager));
  StorageDevice device;
  NN_FS_RESULT_DO(
    manager->OpenDevice(nn::sf::Out<StorageDevice>(&device), 0));
  StorageDeviceOperator gameCardOperator;
  NN_FS_RESULT_DO(device->OpenOperator(
    nn::sf::Out<StorageDeviceOperator>(&gameCardOperator)));
  *outValue = gameCardOperator;
  return ResultSuccess();
}

[[gnu::always_inline]] inline Result GetGameCardManagerOperator(
  StorageDeviceOperator* outValue) {
  StorageDeviceManager manager;
  NN_FS_RESULT_DO(GetGameCardManager(&manager));
  StorageDeviceOperator managerOperator;
  NN_FS_RESULT_DO(manager->OpenOperator(
    nn::sf::Out<StorageDeviceOperator>(&managerOperator)));
  *outValue = managerOperator;
  return ResultSuccess();
}

inline Result CheckGameCardHandle(StorageDeviceManager manager,
  GameCardHandle handle) {
  bool isValid = false;
  NN_FS_RESULT_DO(manager->IsHandleValid(nn::sf::Out<bool>(&isValid), handle));
  NN_FS_RESULT_THROW_UNLESS(isValid, ResultInvalidGameCardHandle());
  return ResultSuccess();
}

inline Result GetGameCardStatus(gc::GameCardStatus* outValue,
  StorageDeviceOperator gameCardOperator) {
  int64_t outSize = 0;
  return gameCardOperator->OperateOut(nn::sf::Out<int64_t>(&outSize),
    nn::sf::OutBuffer(outValue, sizeof(gc::GameCardStatus)),
    GameCardOperationId_GetStatus);
}

inline Result GetGameCardHeaderSet(void* outBuffer,
  StorageDeviceOperator gameCardOperator) {
  int64_t outSize = 0;
  return gameCardOperator->OperateOut(nn::sf::Out<int64_t>(&outSize),
    nn::sf::OutBuffer(outBuffer, GameCardHeaderSetSize),
    GameCardOperationId_GetCardHeaderSet);
}

inline Result GetGameCardType(uint8_t* outValue,
  StorageDeviceOperator managerOperator) {
  int64_t outSize = 0;
  return managerOperator->OperateOut(nn::sf::Out<int64_t>(&outSize),
    nn::sf::OutBuffer(outValue, sizeof(uint8_t)),
    GameCardManagerOperationId_GetTypeForWriter);
}

Result IsGameCardUpdatePartitionAvailable(bool* outValue,
  const char* headerSet, bool isLegacyHeader) {
  char zero[sizeof(uint64_t)] = {};
  const char* updatePartitionHash;
  if (isLegacyHeader) {
    if ((headerSet[0x1B5] & 1) == 0) {
      *outValue = false;
      return ResultSuccess();
    }
    updatePartitionHash = headerSet + 0x1F8;
  }
  else {
    updatePartitionHash = headerSet + 0x18;
  }
  *outValue = memcmp(updatePartitionHash, zero, sizeof(zero)) != 0;
  return ResultSuccess();
}

inline Result GetGameCardAttribute2(GameCardAttribute2* outValue,
  const char* headerSet, uint8_t type) {
  if (type == 0) {
    *outValue = static_cast<GameCardAttribute2>(headerSet[0x11D]);
  }
  else {
    *outValue = static_cast<GameCardAttribute2>(0);
  }
  return ResultSuccess();
}

inline Result GetGameCardAttribute3(GameCardAttribute3* outValue,
  const char* headerSet, uint8_t type) {
  if (type == 0) {
    *outValue = static_cast<GameCardAttribute3>(0);
  }
  else {
    *outValue = static_cast<GameCardAttribute3>(headerSet[0x3C]);
  }
  return ResultSuccess();
}

inline Result GetGameCardPackageId(void* outBuffer, const char* headerSet,
  uint8_t type) {
  const size_t offset = type == 0 ? 0x110 : 0x10;
  *static_cast<uint64_t*>(outBuffer) =
    *reinterpret_cast<const uint64_t*>(headerSet + offset);
  return ResultSuccess();
}

}

Result GetGameCardHandle(GameCardHandle* outValue) {
  StorageDeviceManager manager;
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(GetGameCardManager(&manager));
  StorageDeviceOperator managerOperator;
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(
    GetGameCardManagerOperator(&managerOperator));
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(managerOperator->Operate(
    GameCardManagerOperationId_GetInitializationResult));
  bool isInserted = false;
  NN_FS_ABORT_UNLESS_RESULT_SUCCESS_WITH_LOG(
    manager->IsInserted(nn::sf::Out<bool>(&isInserted)));
  NN_FS_RESULT_THROW_UNLESS_WITH_ABORT_CHECK(isInserted,
    ResultGameCardNotInsertedOnGetHandle());
  int64_t outSize = 0;
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(managerOperator->OperateOut(
    nn::sf::Out<int64_t>(&outSize),
    nn::sf::OutBuffer(outValue, sizeof(GameCardHandle)),
    GameCardManagerOperationId_GetHandle));
  return ResultSuccess();
}

bool IsGameCardInserted() {
  bool isInserted = false;
  StorageDeviceManager manager;
  NN_FS_ABORT_UNLESS_RESULT_SUCCESS_WITH_LOG(GetGameCardManager(&manager));
  NN_FS_ABORT_UNLESS_RESULT_SUCCESS_WITH_LOG(
    manager->IsInserted(nn::sf::Out<bool>(&isInserted)));
  return isInserted;
}

Result EraseGameCard(GameCardSize cardSize, uint64_t normalAreaSize) {
  StorageDeviceOperator gameCardOperator;
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(GetGameCardOperator(&gameCardOperator));
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(gameCardOperator->OperateIn(
    nn::sf::InBuffer(&normalAreaSize, sizeof(normalAreaSize)), 0,
    static_cast<uint32_t>(cardSize), GameCardOperationId_Erase));
  return ResultSuccess();
}

Result GetGameCardUpdatePartitionInfo(bool* outIsAvailable,
  GameCardUpdatePartitionInfo* outValue, GameCardHandle handle) {
  StorageDeviceOperator gameCardOperator;
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(GetGameCardOperator(&gameCardOperator));
  StorageDeviceManager manager;
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(GetGameCardManager(&manager));
  StorageDeviceOperator managerOperator;
  NN_FS_ABORT_UNLESS_RESULT_SUCCESS_WITH_LOG(
    GetGameCardManagerOperator(&managerOperator));
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(CheckGameCardHandle(manager, handle));
  gc::GameCardStatus status = {};
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(
    GetGameCardStatus(&status, gameCardOperator));
  char headerSet[GameCardHeaderSetSize] = {};
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(
    GetGameCardHeaderSet(headerSet, gameCardOperator));
  uint8_t type = 0;
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(GetGameCardType(&type, managerOperator));
  bool isAvailable;
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(
    IsGameCardUpdatePartitionAvailable(&isAvailable, headerSet, type == 0));
  *outIsAvailable = isAvailable;
  outValue->version = status.updatePartitionVersion;
  outValue->id = status.updatePartitionId;
  return ResultSuccess();
}

void FinalizeGameCardDriver() {
  StorageDeviceOperator managerOperator;
  NN_FS_ABORT_UNLESS_RESULT_SUCCESS_WITH_LOG(
    GetGameCardManagerOperator(&managerOperator));
  NN_FS_ABORT_UNLESS_RESULT_SUCCESS_WITH_LOG(
    managerOperator->Operate(GameCardManagerOperationId_Finalize));
}

Result GetGameCardAsicInfo(gc::RmaInformation* outValue,
  const void* firmwareBuffer, size_t firmwareBufferSize) {
  StorageDeviceOperator managerOperator;
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(
    GetGameCardManagerOperator(&managerOperator));
  int64_t outSize = 0;
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(managerOperator->OperateInOut(
    nn::sf::Out<int64_t>(&outSize),
    nn::sf::OutBuffer(outValue, sizeof(gc::RmaInformation)),
    nn::sf::InBuffer(firmwareBuffer, firmwareBufferSize), 0,
    firmwareBufferSize, GameCardManagerOperationId_GetAsicInfo));
  return ResultSuccess();
}

Result GetGameCardAsicCertificate(gc::GameCardAsicCertificateSet* outValue) {
  StorageDeviceOperator managerOperator;
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(
    GetGameCardManagerOperator(&managerOperator));
  int64_t outSize = 0;
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(managerOperator->OperateOut(
    nn::sf::Out<int64_t>(&outSize),
    nn::sf::OutBuffer(outValue, sizeof(gc::GameCardAsicCertificateSet)),
    GameCardManagerOperationId_GetAsicCertificate));
  return ResultSuccess();
}

Result GetGameCardIdSet(gc::GameCardIdSet* outValue) {
  StorageDeviceOperator gameCardOperator;
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(GetGameCardOperator(&gameCardOperator));
  int64_t outSize = 0;
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(gameCardOperator->OperateOut(
    nn::sf::Out<int64_t>(&outSize),
    nn::sf::OutBuffer(outValue, sizeof(gc::GameCardIdSet)),
    GameCardOperationId_GetIdSet));
  return ResultSuccess();
}

Result GetGameCardCid(void* outBuffer, size_t size) {
  NN_FS_RESULT_THROW_UNLESS_WITH_ABORT_CHECK(
    size >= sizeof(gc::GameCardIdSet), ResultInvalidSize());
  StorageDeviceOperator gameCardOperator;
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(GetGameCardOperator(&gameCardOperator));
  gc::GameCardIdSet idSet = {};
  int64_t outSize = 0;
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(gameCardOperator->OperateOut(
    nn::sf::Out<int64_t>(&outSize), nn::sf::OutBuffer(&idSet, size),
    GameCardOperationId_GetIdSet));
  *static_cast<gc::GameCardIdSet*>(outBuffer) = idSet;
  return ResultSuccess();
}

Result RegisterGameCardConfigurationData(void* buffer, size_t size) {
  StorageDeviceOperator managerOperator;
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(
    GetGameCardManagerOperator(&managerOperator));
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(managerOperator->OperateIn(
    nn::sf::InBuffer(buffer, size), 0, 0,
    GameCardManagerOperationId_RegisterConfigurationData));
  return ResultSuccess();
}

Result WriteToGameCard(int64_t offset, void* buffer, size_t size) {
  StorageDeviceOperator managerOperator;
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(
    GetGameCardManagerOperator(&managerOperator));
  int64_t outSize = 0;
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(managerOperator->OperateInOut(
    nn::sf::Out<int64_t>(&outSize), nn::sf::OutBuffer(buffer, size),
    nn::sf::InBuffer(nullptr, 0), offset, size,
    GameCardManagerOperationId_WriteToGameCardDirectly));
  return ResultSuccess();
}

Result SetVerifyWriteEnableFlag(bool isEnabled) {
  StorageDeviceOperator managerOperator;
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(
    GetGameCardManagerOperator(&managerOperator));
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(managerOperator->OperateIn(
    nn::sf::InBuffer(&isEnabled, sizeof(isEnabled)), 0, 0,
    GameCardManagerOperationId_SetVerifyEnableFlag));
  return ResultSuccess();
}

Result GetGameCardDeviceIdForProdCard(void* outBuffer, size_t outBufferSize,
  void* devHeaderBuffer, size_t devHeaderBufferSize) {
  StorageDeviceOperator managerOperator;
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(
    GetGameCardManagerOperator(&managerOperator));
  int64_t outSize = 0;
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(managerOperator->OperateInOut(
    nn::sf::Out<int64_t>(&outSize),
    nn::sf::OutBuffer(outBuffer, outBufferSize),
    nn::sf::InBuffer(devHeaderBuffer, devHeaderBufferSize), 0, 0,
    GameCardManagerOperationId_GetDeviceIdForProdCard));
  return ResultSuccess();
}

Result EraseAndWriteParamDirectly(void* buffer, size_t size) {
  StorageDeviceOperator managerOperator;
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(
    GetGameCardManagerOperator(&managerOperator));
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(managerOperator->OperateIn(
    nn::sf::InBuffer(buffer, size), 0, size,
    GameCardManagerOperationId_EraseAndWriteParamDirectly));
  return ResultSuccess();
}

Result ReadParamDirectly(void* outBuffer, size_t size) {
  StorageDeviceOperator managerOperator;
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(
    GetGameCardManagerOperator(&managerOperator));
  int64_t outSize = 0;
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(managerOperator->OperateOut(
    nn::sf::Out<int64_t>(&outSize), nn::sf::OutBuffer(outBuffer, size),
    GameCardManagerOperationId_ReadParamDirectly));
  return ResultSuccess();
}

Result ForceEraseGameCard() {
  StorageDeviceOperator managerOperator;
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(
    GetGameCardManagerOperator(&managerOperator));
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(
    managerOperator->Operate(GameCardManagerOperationId_ForceErase));
  return ResultSuccess();
}

Result GetGameCardAttribute(GameCardAttribute* outValue,
  GameCardHandle handle) {
  StorageDeviceOperator gameCardOperator;
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(GetGameCardOperator(&gameCardOperator));
  StorageDeviceManager manager;
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(GetGameCardManager(&manager));
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(CheckGameCardHandle(manager, handle));
  gc::GameCardStatus status = {};
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(
    GetGameCardStatus(&status, gameCardOperator));
  *outValue = static_cast<GameCardAttribute>(status.gameCardAttribute);
  return ResultSuccess();
}

Result GetGameCardAttribute2(GameCardAttribute2* outValue,
  GameCardHandle handle) {
  StorageDeviceOperator gameCardOperator;
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(GetGameCardOperator(&gameCardOperator));
  StorageDeviceManager manager;
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(GetGameCardManager(&manager));
  StorageDeviceOperator managerOperator;
  NN_FS_ABORT_UNLESS_RESULT_SUCCESS_WITH_LOG(
    GetGameCardManagerOperator(&managerOperator));
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(CheckGameCardHandle(manager, handle));
  char headerSet[GameCardHeaderSetSize] = {};
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(
    GetGameCardHeaderSet(headerSet, gameCardOperator));
  uint8_t type = 0;
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(GetGameCardType(&type, managerOperator));
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(
    GetGameCardAttribute2(outValue, headerSet, type));
  return ResultSuccess();
}

Result GetGameCardCompatibilityType(GameCardCompatibilityType* outValue,
  GameCardHandle handle) {
  StorageDeviceOperator gameCardOperator;
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(GetGameCardOperator(&gameCardOperator));
  StorageDeviceManager manager;
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(GetGameCardManager(&manager));
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(CheckGameCardHandle(manager, handle));
  gc::GameCardStatus status = {};
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(
    GetGameCardStatus(&status, gameCardOperator));
  *outValue = static_cast<GameCardCompatibilityType>(status.compatibilityType);
  return ResultSuccess();
}

Result GetGameCardPackageId(void* outBuffer, size_t size,
  GameCardHandle handle) {
  NN_FS_RESULT_THROW_UNLESS_WITH_ABORT_CHECK(size >= sizeof(uint64_t),
    ResultInvalidSize());
  StorageDeviceOperator gameCardOperator;
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(GetGameCardOperator(&gameCardOperator));
  StorageDeviceManager manager;
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(GetGameCardManager(&manager));
  StorageDeviceOperator managerOperator;
  NN_FS_ABORT_UNLESS_RESULT_SUCCESS_WITH_LOG(
    GetGameCardManagerOperator(&managerOperator));
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(CheckGameCardHandle(manager, handle));
  char headerSet[GameCardHeaderSetSize] = {};
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(
    GetGameCardHeaderSet(headerSet, gameCardOperator));
  uint8_t type = 0;
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(GetGameCardType(&type, managerOperator));
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(
    GetGameCardPackageId(outBuffer, headerSet, type));
  return ResultSuccess();
}

Result GetGameCardDeviceCertificate(void* outBuffer, size_t size,
  GameCardHandle handle) {
  StorageDeviceOperator gameCardOperator;
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(GetGameCardOperator(&gameCardOperator));
  StorageDeviceManager manager;
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(GetGameCardManager(&manager));
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(CheckGameCardHandle(manager, handle));
  int64_t outSize = 0;
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(gameCardOperator->OperateOut(
    nn::sf::Out<int64_t>(&outSize), nn::sf::OutBuffer(outBuffer, size),
    GameCardOperationId_GetDeviceCertificate));
  return ResultSuccess();
}

Result GetGameCardDeviceCertificate(int64_t* outSize, void* outBuffer,
  size_t size, GameCardHandle handle) {
  StorageDeviceOperator gameCardOperator;
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(GetGameCardOperator(&gameCardOperator));
  StorageDeviceManager manager;
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(GetGameCardManager(&manager));
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(CheckGameCardHandle(manager, handle));
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(gameCardOperator->OperateOut(
    nn::sf::Out<int64_t>(outSize), nn::sf::OutBuffer(outBuffer, size),
    GameCardOperationId_GetDeviceCertificate));
  return ResultSuccess();
}

Result ChallengeCardExistence(void* outBuffer, size_t outBufferSize,
  const void* seedBuffer, size_t seedBufferSize, const void* valueBuffer,
  size_t valueBufferSize, GameCardHandle handle) {
  StorageDeviceOperator gameCardOperator;
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(GetGameCardOperator(&gameCardOperator));
  StorageDeviceManager manager;
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(GetGameCardManager(&manager));
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(CheckGameCardHandle(manager, handle));
  int64_t outSize = 0;
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(gameCardOperator->OperateIn2Out(
    nn::sf::Out<int64_t>(&outSize),
    nn::sf::OutBuffer(outBuffer, outBufferSize),
    nn::sf::InBuffer(seedBuffer, seedBufferSize),
    nn::sf::InBuffer(valueBuffer, valueBufferSize), 0, 0,
    GameCardOperationId_ChallengeCardExistence));
  return ResultSuccess();
}

Result GetGameCardApplicationIdList(uint16_t* outCount, void* outBuffer,
  size_t size, GameCardHandle handle) {
  NN_FS_RESULT_THROW_UNLESS_WITH_ABORT_CHECK(
    size >= GameCardApplicationIdListSize, ResultInvalidSize());
  StorageDeviceOperator gameCardOperator;
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(GetGameCardOperator(&gameCardOperator));
  StorageDeviceManager manager;
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(GetGameCardManager(&manager));
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(CheckGameCardHandle(manager, handle));
  int64_t outSize = 0;
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(gameCardOperator->OperateOut(
    nn::sf::Out<int64_t>(&outSize), nn::sf::OutBuffer(outBuffer, size),
    GameCardOperationId_GetApplicationIdList));
  *outCount = static_cast<uint16_t>(outSize);
  return ResultSuccess();
}

Result GetGameCardCardHeaderSet(void* outBuffer, size_t size,
  GameCardHandle handle) {
  char headerSet[GameCardHeaderSetSize] = {};
  NN_FS_RESULT_THROW_UNLESS_WITH_ABORT_CHECK(size == GameCardHeaderSetSize,
    ResultInvalidSize());
  StorageDeviceOperator gameCardOperator;
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(GetGameCardOperator(&gameCardOperator));
  StorageDeviceManager manager;
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(GetGameCardManager(&manager));
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(CheckGameCardHandle(manager, handle));
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(
    GetGameCardHeaderSet(headerSet, gameCardOperator));
  memcpy(outBuffer, headerSet, GameCardHeaderSetSize);
  return ResultSuccess();
}

Result GetGameCardImageHash(void* outBuffer, size_t size,
  GameCardHandle handle) {
  StorageDeviceOperator gameCardOperator;
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(GetGameCardOperator(&gameCardOperator));
  StorageDeviceManager manager;
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(GetGameCardManager(&manager));
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(CheckGameCardHandle(manager, handle));
  int64_t outSize = 0;
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(gameCardOperator->OperateOut(
    nn::sf::Out<int64_t>(&outSize), nn::sf::OutBuffer(outBuffer, size),
    GameCardOperationId_GetImageHash));
  return ResultSuccess();
}

Result GetGameCardErrorInfo(GameCardErrorInfo* outValue) {
  StorageDeviceOperator managerOperator;
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(
    GetGameCardManagerOperator(&managerOperator));
  int64_t outSize = 0;
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(managerOperator->OperateOut(
    nn::sf::Out<int64_t>(&outSize),
    nn::sf::OutBuffer(outValue, sizeof(GameCardErrorInfo)),
    GameCardManagerOperationId_GetErrorInfo));
  return ResultSuccess();
}

Result GetGameCardErrorReportInfo(GameCardErrorReportInfo* outValue) {
  StorageDeviceOperator managerOperator;
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(
    GetGameCardManagerOperator(&managerOperator));
  int64_t outSize = 0;
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(managerOperator->OperateOut(
    nn::sf::Out<int64_t>(&outSize),
    nn::sf::OutBuffer(outValue, sizeof(GameCardErrorReportInfo)),
    GameCardManagerOperationId_GetErrorReportInfo));
  return ResultSuccess();
}

Result GetGameCardDetailedErrorReportInfo(
  GameCardDetailedErrorReportInfo* outValue) {
  StorageDeviceOperator managerOperator;
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(
    GetGameCardManagerOperator(&managerOperator));
  int64_t outSize = 0;
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(managerOperator->OperateOut(
    nn::sf::Out<int64_t>(&outSize),
    nn::sf::OutBuffer(outValue, sizeof(GameCardDetailedErrorReportInfo)),
    GameCardManagerOperationId_GetDetailedErrorReportInfo));
  return ResultSuccess();
}

Result CheckGameCardPartitionAvailability(uint32_t handle,
  GameCardPartition partition) {
  auto fileSystemProxy = detail::GetFileSystemProxyServiceObject();
  nn::sf::SharedPointer<fssrv::sf::IStorage> storage;
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(fileSystemProxy->OpenGameCardStorage(
    nn::sf::Out<nn::sf::SharedPointer<fssrv::sf::IStorage>>(&storage), handle,
    static_cast<uint32_t>(partition)));
  return ResultSuccess();
}

Result GetGameCardDeviceId(void* outBuffer, size_t size) {
  StorageDeviceOperator gameCardOperator;
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(GetGameCardOperator(&gameCardOperator));
  int64_t outSize = 0;
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(gameCardOperator->OperateOut(
    nn::sf::Out<int64_t>(&outSize), nn::sf::OutBuffer(outBuffer, size),
    GameCardOperationId_GetDeviceId));
  return ResultSuccess();
}

Result SetGameCardSessionCreationDelay(bool isEnabled, uint32_t delayTime,
  bool isAppliedToSecure) {
  StorageDeviceOperator managerOperator;
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(
    GetGameCardManagerOperator(&managerOperator));
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(managerOperator->OperateIn(
    nn::sf::InBuffer(&delayTime, sizeof(delayTime)), isEnabled,
    isAppliedToSecure, GameCardManagerOperationId_SetSessionCreationDelay));
  return ResultSuccess();
}

Result GetGameCardType(GameCardType* outValue, GameCardHandle handle) {
  StorageDeviceOperator managerOperator;
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(
    GetGameCardManagerOperator(&managerOperator));
  StorageDeviceManager manager;
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(GetGameCardManager(&manager));
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(CheckGameCardHandle(manager, handle));
  int64_t outSize = 0;
  uint8_t type = 0;
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(managerOperator->OperateOut(
    nn::sf::Out<int64_t>(&outSize), nn::sf::OutBuffer(&type, sizeof(type)),
    GameCardManagerOperationId_GetTypeForWriter));
  *outValue = static_cast<GameCardType>(type);
  return ResultSuccess();
}

Result GetGameCardTypeForWriter(GameCardType* outValue) {
  StorageDeviceOperator managerOperator;
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(
    GetGameCardManagerOperator(&managerOperator));
  int64_t outSize = 0;
  uint8_t type = 0;
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(managerOperator->OperateOut(
    nn::sf::Out<int64_t>(&outSize), nn::sf::OutBuffer(&type, sizeof(type)),
    GameCardManagerOperationId_GetTypeForWriter));
  *outValue = static_cast<GameCardType>(type);
  return ResultSuccess();
}

Result GetGameCardHostControllerStatus(
  GameCardHostControllerStatus* outValue) {
  StorageDeviceOperator managerOperator;
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(
    GetGameCardManagerOperator(&managerOperator));
  int64_t outSize = 0;
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(managerOperator->OperateOut(
    nn::sf::Out<int64_t>(&outSize),
    nn::sf::OutBuffer(outValue, sizeof(GameCardHostControllerStatus)),
    GameCardManagerOperationId_GetHostControllerStatus));
  return ResultSuccess();
}

Result EndWriteToGameCard() {
  StorageDeviceOperator managerOperator;
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(
    GetGameCardManagerOperator(&managerOperator));
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(
    managerOperator->Operate(GameCardManagerOperationId_EndWrite));
  return ResultSuccess();
}

Result GetGameCardCardInfoForWriter(void* outBuffer, size_t size) {
  StorageDeviceOperator gameCardOperator;
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(GetGameCardOperator(&gameCardOperator));
  int64_t outSize = 0;
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(gameCardOperator->OperateOut(
    nn::sf::Out<int64_t>(&outSize), nn::sf::OutBuffer(outBuffer, size),
    GameCardOperationId_GetCardInfo));
  return ResultSuccess();
}

Result GetGameCardCardTitlePairInfo(void* outBuffer, size_t size,
  GameCardHandle handle) {
  StorageDeviceOperator gameCardOperator;
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(GetGameCardOperator(&gameCardOperator));
  StorageDeviceManager manager;
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(GetGameCardManager(&manager));
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(CheckGameCardHandle(manager, handle));
  int64_t outSize = 0;
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(gameCardOperator->OperateOut(
    nn::sf::Out<int64_t>(&outSize), nn::sf::OutBuffer(outBuffer, size),
    GameCardOperationId_GetCardTitlePairInfo));
  return ResultSuccess();
}

Result GetGameCardCardInfo(void* outBuffer, size_t size,
  GameCardHandle handle) {
  StorageDeviceOperator gameCardOperator;
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(GetGameCardOperator(&gameCardOperator));
  StorageDeviceManager manager;
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(GetGameCardManager(&manager));
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(CheckGameCardHandle(manager, handle));
  int64_t outSize = 0;
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(gameCardOperator->OperateOut(
    nn::sf::Out<int64_t>(&outSize), nn::sf::OutBuffer(outBuffer, size),
    GameCardOperationId_GetCardInfo));
  return ResultSuccess();
}

Result ChallengeGameCardResponse(void* outBuffer, size_t outBufferSize,
  const void* challengeBuffer, size_t challengeBufferSize, uint8_t index,
  GameCardHandle handle) {
  StorageDeviceOperator gameCardOperator;
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(GetGameCardOperator(&gameCardOperator));
  StorageDeviceManager manager;
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(GetGameCardManager(&manager));
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(CheckGameCardHandle(manager, handle));
  int64_t outSize = 0;
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(gameCardOperator->OperateInOut(
    nn::sf::Out<int64_t>(&outSize),
    nn::sf::OutBuffer(outBuffer, outBufferSize),
    nn::sf::InBuffer(challengeBuffer, challengeBufferSize), index, 0,
    GameCardOperationId_ChallengeResponse));
  return ResultSuccess();
}

Result GetGameCardAttribute3(GameCardAttribute3* outValue,
  GameCardHandle handle) {
  StorageDeviceOperator gameCardOperator;
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(GetGameCardOperator(&gameCardOperator));
  StorageDeviceManager manager;
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(GetGameCardManager(&manager));
  StorageDeviceOperator managerOperator;
  NN_FS_ABORT_UNLESS_RESULT_SUCCESS_WITH_LOG(
    GetGameCardManagerOperator(&managerOperator));
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(CheckGameCardHandle(manager, handle));
  char headerSet[GameCardHeaderSetSize] = {};
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(
    GetGameCardHeaderSet(headerSet, gameCardOperator));
  uint8_t type = 0;
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(GetGameCardType(&type, managerOperator));
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(
    GetGameCardAttribute3(outValue, headerSet, type));
  return ResultSuccess();
}

bool IsGameCardCapClosed() {
  StorageDeviceOperator managerOperator;
  NN_FS_ABORT_UNLESS_RESULT_SUCCESS_WITH_LOG(
    GetGameCardManagerOperator(&managerOperator));
  int64_t outSize = 0;
  bool isClosed = false;
  NN_FS_ABORT_UNLESS_RESULT_SUCCESS_WITH_LOG(managerOperator->OperateOut(
    nn::sf::Out<int64_t>(&outSize),
    nn::sf::OutBuffer(&isClosed, sizeof(isClosed)),
    GameCardManagerOperationId_IsCapClosed));
  return isClosed;
}

Result SetGameCardTypeDetectionMode(GameCardTypeDetectionMode mode,
  bool isPersistent) {
  StorageDeviceOperator managerOperator;
  NN_FS_ABORT_UNLESS_RESULT_SUCCESS_WITH_LOG(
    GetGameCardManagerOperator(&managerOperator));
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(managerOperator->OperateIn(
    nn::sf::InBuffer(&mode, sizeof(mode)), isPersistent, 0,
    GameCardManagerOperationId_SetTypeDetectionMode));
  return ResultSuccess();
}

Result CheckGameCardCardSideCaBase(const void* buffer, size_t size,
  GameCardHandle handle) {
  StorageDeviceOperator gameCardOperator;
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(GetGameCardOperator(&gameCardOperator));
  StorageDeviceManager manager;
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(GetGameCardManager(&manager));
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(CheckGameCardHandle(manager, handle));
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(gameCardOperator->OperateIn(
    nn::sf::InBuffer(buffer, size), 0, static_cast<uint32_t>(size),
    GameCardOperationId_CheckCardSideCaBase));
  return ResultSuccess();
}

Result SetGameCardStrictMode(bool isEnabled, bool isPersistent) {
  StorageDeviceOperator managerOperator;
  NN_FS_ABORT_UNLESS_RESULT_SUCCESS_WITH_LOG(
    GetGameCardManagerOperator(&managerOperator));
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(managerOperator->OperateIn(
    nn::sf::InBuffer(&isEnabled, sizeof(isEnabled)), isPersistent, 0,
    GameCardManagerOperationId_SetStrictMode));
  return ResultSuccess();
}

Result GetGameCardSocCertificateSet(void* outBuffer, size_t size) {
  StorageDeviceOperator managerOperator;
  NN_FS_ABORT_UNLESS_RESULT_SUCCESS_WITH_LOG(
    GetGameCardManagerOperator(&managerOperator));
  int64_t outSize = 0;
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(managerOperator->OperateOut(
    nn::sf::Out<int64_t>(&outSize), nn::sf::OutBuffer(outBuffer, size),
    GameCardManagerOperationId_GetSocCertificateSet));
  return ResultSuccess();
}

Result TriggerGameCardSecurityCheck(bool isForced, GameCardHandle handle) {
  StorageDeviceOperator gameCardOperator;
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(GetGameCardOperator(&gameCardOperator));
  StorageDeviceManager manager;
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(GetGameCardManager(&manager));
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(CheckGameCardHandle(manager, handle));
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(gameCardOperator->OperateIn(
    nn::sf::InBuffer(&isForced, sizeof(isForced)), 0, 0,
    GameCardOperationId_TriggerSecurityCheck));
  return ResultSuccess();
}

Result GetGameCardSecurityCheckInfo(bool* outIsAvailable,
  GameCardSecurityCheckInfo* outValue) {
  StorageDeviceOperator managerOperator;
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(
    GetGameCardManagerOperator(&managerOperator));
  int64_t outSize = 0;
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(managerOperator->OperateOut(
    nn::sf::Out<int64_t>(&outSize),
    nn::sf::OutBuffer(outValue, sizeof(GameCardSecurityCheckInfo)),
    GameCardManagerOperationId_GetSecurityCheckInfo));
  *outIsAvailable = outSize != 0;
  return ResultSuccess();
}

Result LoadGameCardCardReportForErrorReport(int64_t* outSize,
  void* outBuffer, size_t size, int index, GameCardHandle handle) {
  StorageDeviceOperator gameCardOperator;
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(GetGameCardOperator(&gameCardOperator));
  StorageDeviceManager manager;
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(GetGameCardManager(&manager));
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(CheckGameCardHandle(manager, handle));
  *outSize = 0;
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(gameCardOperator->OperateInOut(
    nn::sf::Out<int64_t>(outSize), nn::sf::OutBuffer(outBuffer, size),
    nn::sf::InBuffer(nullptr, 0), index, 0,
    GameCardOperationId_LoadCardReportForErrorReport));
  return ResultSuccess();
}

Result SimulateGameCardDetectionEvent(SimulatingDeviceDetectionMode mode,
  bool signalEvent) {
  auto fileSystemProxy = detail::GetFileSystemProxyServiceObject();
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(
    fileSystemProxy->SimulateDeviceDetectionEvent(detail::DevicePort_GameCard,
      static_cast<uint32_t>(mode), signalEvent));
  return ResultSuccess();
}

Result SetGameCardSimulationEvent(SimulatingDeviceTargetOperation operation,
  SimulatingDeviceAccessFailureEventType failureEventType) {
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(detail::SetDeviceSimulationEvent(
    detail::DevicePort_GameCard, operation, failureEventType, ResultSuccess(),
    false));
  return ResultSuccess();
}

Result SetGameCardSimulationEvent(SimulatingDeviceTargetOperation operation,
  SimulatingDeviceAccessFailureEventType failureEventType,
  bool isPersistent) {
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(detail::SetDeviceSimulationEvent(
    detail::DevicePort_GameCard, operation, failureEventType, ResultSuccess(),
    isPersistent));
  return ResultSuccess();
}

Result SetGameCardSimulationEvent(SimulatingDeviceTargetOperation operation,
  Result respondingFailureResult, bool isPersistent) {
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(detail::SetDeviceSimulationEvent(
    detail::DevicePort_GameCard, operation,
    SimulatingDeviceAccessFailureEventType::AccessFailure,
    respondingFailureResult, isPersistent));
  return ResultSuccess();
}

Result ClearGameCardSimulationEvent() {
  auto fileSystemProxy = detail::GetFileSystemProxyServiceObject();
  nn::sf::SharedPointer<fssrv::sf::IDeviceOperator> deviceOperator;
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(fileSystemProxy->OpenDeviceOperator(
    nn::sf::Out<nn::sf::SharedPointer<fssrv::sf::IDeviceOperator>>(
      &deviceOperator)));
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(
    deviceOperator->ClearDeviceSimulationEvent(detail::DevicePort_GameCard));
  return ResultSuccess();
}

}
