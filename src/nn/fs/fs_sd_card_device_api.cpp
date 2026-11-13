#include <memory>

#include "nn/fs/fs_sd_card.hpp"
#include "nn/fs/detail/fs_event_notifier_object_adapter.hpp"
#include "nn/fs/detail/fs_file_system_accessor.hpp"
#include "nn/fs/detail/fs_file_system_proxy_service_object.hpp"
#include "nn/fs/detail/fs_file_system_service_object_adapter.hpp"
#include "nn/fs/detail/fs_log.hpp"
#include "nn/fs/fsa/fs_registrar.hpp"
#include "nn/os/sleep_thread.hpp"

namespace nn::fs {

namespace detail {

void EnableFileSystemAccessorAccessLog(const char* name);

}

namespace {

#define NN_FS_ACCESS_LOG_TARGET_APPLICATION 1u

#define NN_FS_SD_CARD_ACCESS_LOG_IMPL(output, result, expression, ...) \
  do { \
    if (::nn::fs::detail::IsEnabledAccessLog( \
      NN_FS_ACCESS_LOG_TARGET_APPLICATION)) { \
      const ::nn::os::Tick fsStart_ = ::nn::os::GetSystemTick(); \
      result = (expression); \
      const ::nn::os::Tick fsEnd_ = ::nn::os::GetSystemTick(); \
      ::nn::fs::detail::output(result, fsStart_, fsEnd_, __FUNCTION__, \
        nullptr, __VA_ARGS__); \
    } \
    else { \
      result = (expression); \
    } \
  } while (0)

#define NN_FS_SD_CARD_ACCESS_LOG(result, expression, ...) \
  NN_FS_SD_CARD_ACCESS_LOG_IMPL(OutputAccessLog, result, expression, \
    __VA_ARGS__)

#define NN_FS_SD_CARD_ACCESS_LOG_UNLESS_SUCCESS(result, expression, ...) \
  NN_FS_SD_CARD_ACCESS_LOG_IMPL(OutputAccessLogUnlessResultSuccess, result, \
    expression, __VA_ARGS__)

constexpr Result ResultAllocationMemoryFailedInSdCardA() {
  return detail::MakeResult(3244);
}

constexpr Result ResultAllocationMemoryFailedInSdCardB() {
  return detail::MakeResult(3245);
}

inline bool IsResultUnsupportedOperation(Result result) {
  const uint32_t module = result.value & 0x1FF;
  const uint32_t description = (result.value >> 9) & 0x1FFF;
  return module == 2 && description >= 6300 && description < 6400;
}

using FileSystemObject = nn::sf::SharedPointer<fssrv::sf::IFileSystem>;
using EventNotifierObject = nn::sf::SharedPointer<fssrv::sf::IEventNotifier>;
using StorageDeviceManager =
  nn::sf::SharedPointer<fssrv::sf::IStorageDeviceManager>;
using StorageDevice = nn::sf::SharedPointer<fssrv::sf::IStorageDevice>;
using StorageDeviceOperator =
  nn::sf::SharedPointer<fssrv::sf::IStorageDeviceOperator>;

const int32_t StorageDevicePortSdCard = 2;
const int SdCardRetryCount = 10;
const int64_t SdCardRetryIntervalNanoSeconds = 1000000000;

enum SdCardManagerOperationId : int32_t {
  SdCardManagerOperationId_GetAndClearErrorInfo = 1,
  SdCardManagerOperationId_PresetFormatParameter = 6,
  SdCardManagerOperationId_SwitchModeFromPcieToSd = 7,
  SdCardManagerOperationId_GetAndClearNvmeErrorInfo = 8,
  SdCardManagerOperationId_GetAndClearNvmeActivationLog = 9,
  SdCardManagerOperationId_EnableMalfunctionSimulation = 10,
  SdCardManagerOperationId_DisableMalfunctionSimulation = 11,
  SdCardManagerOperationId_GetMalfunctionSimulationParameters = 12,
  SdCardManagerOperationId_SetActivationMode = 14,
  SdCardManagerOperationId_GetCid = 16,
  SdCardManagerOperationId_GetUserAreaSize = 17,
  SdCardManagerOperationId_GetProtectedAreaSize = 18,
  SdCardManagerOperationId_TryGetSdCardInfo = 20,
  SdCardManagerOperationId_IsPcieNvmeMode = 19,
  SdCardManagerOperationId_GetNvmeDeviceLog = 21,
};

enum SdCardOperationId : int32_t {
  SdCardOperationId_GetSpeedMode = 1,
  SdCardOperationId_GetNvmeConnectionStatus = 7,
  SdCardOperationId_GetHostControllerStatus = 9,
  SdCardOperationId_GetNvmeSmart = 10,
  SdCardOperationId_GetNvmeDeviceProperty = 11,
  SdCardOperationId_GetNvmeHctm = 12,
  SdCardOperationId_GetNvmeLba = 13,
  SdCardOperationId_GetNvmeApst = 14,
  SdCardOperationId_SetNvmeHctm = 15,
  SdCardOperationId_SetNvmeApst = 16,
  SdCardOperationId_GetNvmeNoopme = 18,
  SdCardOperationId_SetNvmeNoopme = 19,
};

const size_t SdCardNvmeSmartSize = 0x200;

template<typename Function>
inline Result RetryWhileStorageDeviceNotReady(Function function) {
  Result result;
  for (int i = 0; i < SdCardRetryCount; ++i) {
    result = function();
    if (!IsResultIncluded(result, ResultStorageDeviceNotReady())) {
      break;
    }
    os::SleepThread(TimeSpan{SdCardRetryIntervalNanoSeconds});
  }
  return result;
}

Result GetSdCardManager(StorageDeviceManager* outValue) {
  auto fileSystemProxy = detail::GetFileSystemProxyServiceObject();
  nn::sf::SharedPointer<fssrv::sf::IDeviceOperator> deviceOperator;
  NN_FS_RESULT_DO(fileSystemProxy->OpenDeviceOperator(
    nn::sf::Out<nn::sf::SharedPointer<fssrv::sf::IDeviceOperator>>(
      &deviceOperator)));
  StorageDeviceManager manager;
  NN_FS_RESULT_DO(RetryWhileStorageDeviceNotReady([&]() -> Result {
    return deviceOperator->OpenStorageDeviceManager(
      nn::sf::Out<StorageDeviceManager>(&manager), StorageDevicePortSdCard);
  }));
  *outValue = manager;
  return ResultSuccess();
}

Result GetSdCardOperator(StorageDeviceOperator* outValue) {
  StorageDeviceManager manager;
  NN_FS_RESULT_DO(GetSdCardManager(&manager));
  StorageDevice device;
  NN_FS_RESULT_DO(
    manager->OpenDevice(nn::sf::Out<StorageDevice>(&device), 0));
  StorageDeviceOperator sdCardOperator;
  NN_FS_RESULT_DO(device->OpenOperator(
    nn::sf::Out<StorageDeviceOperator>(&sdCardOperator)));
  *outValue = sdCardOperator;
  return ResultSuccess();
}

[[gnu::always_inline]] inline Result GetSdCardManagerOperator(
  StorageDeviceOperator* outValue) {
  StorageDeviceManager manager;
  NN_FS_RESULT_DO(GetSdCardManager(&manager));
  StorageDeviceOperator managerOperator;
  NN_FS_RESULT_DO(manager->OpenOperator(
    nn::sf::Out<StorageDeviceOperator>(&managerOperator)));
  *outValue = managerOperator;
  return ResultSuccess();
}

inline SdCardSpeedMode ConvertToSdCardSpeedMode(uint8_t speedMode) {
  switch (speedMode) {
    case 0:
      return SdCardSpeedMode::Identification;
    case 1:
      return SdCardSpeedMode::DefaultSpeed;
    case 2:
      return SdCardSpeedMode::HighSpeed;
    case 3:
      return SdCardSpeedMode::Sdr12;
    case 4:
      return SdCardSpeedMode::Sdr25;
    case 5:
      return SdCardSpeedMode::Sdr50;
    case 6:
      return SdCardSpeedMode::Sdr104;
    case 7:
      return SdCardSpeedMode::Ddr50;
    case 16:
      return SdCardSpeedMode::Pcie;
    default:
      return SdCardSpeedMode::Unknown;
  }
}

}

Result MountSdCard(const char* name) {
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(detail::CheckMountName(name));
  FileSystemObject fileSystem;
  auto openFileSystem = [&]() __attribute__((noinline)) -> Result {
    auto fileSystemProxy = detail::GetFileSystemProxyServiceObject();
    return RetryWhileStorageDeviceNotReady([&]() -> Result {
      return fileSystemProxy->OpenSdCardFileSystem(
        nn::sf::Out<FileSystemObject>(&fileSystem));
    });
  };
  NN_FS_RESULT_DO(openFileSystem());
  std::unique_ptr<detail::FileSystemServiceObjectAdapter> adapter(
    new detail::FileSystemServiceObjectAdapter(std::move(fileSystem)));
  NN_FS_RESULT_THROW_UNLESS_WITH_ABORT_CHECK(adapter != nullptr,
    ResultAllocationMemoryFailedInSdCardA());
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(fsa::Register(name, std::move(adapter)));
  return ResultSuccess();
}

Result MountSdCardForDebug(const char* name) {
  Result result;
  NN_FS_SD_CARD_ACCESS_LOG_UNLESS_SUCCESS(result, detail::CheckMountName(name),
    ", name: \"%s\"", name);
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(result);
  FileSystemObject fileSystem;
  auto openFileSystem = [&]() __attribute__((noinline)) -> Result {
    auto fileSystemProxy = detail::GetFileSystemProxyServiceObject();
    return RetryWhileStorageDeviceNotReady([&]() -> Result {
      return fileSystemProxy->OpenSdCardFileSystem(
        nn::sf::Out<FileSystemObject>(&fileSystem));
    });
  };
  NN_FS_SD_CARD_ACCESS_LOG_UNLESS_SUCCESS(result, openFileSystem(),
    ", name: \"%s\"", name);
  NN_FS_RESULT_DO(result);
  auto registerFileSystem = [&]() -> Result {
    std::unique_ptr<detail::FileSystemServiceObjectAdapter> adapter(
      new detail::FileSystemServiceObjectAdapter(std::move(fileSystem)));
    NN_FS_RESULT_THROW_UNLESS(adapter != nullptr,
      ResultAllocationMemoryFailedInSdCardA());
    return fsa::Register(name, std::move(adapter));
  };
  NN_FS_SD_CARD_ACCESS_LOG(result, registerFileSystem(), ", name: \"%s\"",
    name);
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(result);
  if (detail::IsEnabledAccessLog(NN_FS_ACCESS_LOG_TARGET_APPLICATION)) {
    detail::EnableFileSystemAccessorAccessLog(name);
  }
  return ResultSuccess();
}

Result OpenSdCardDetectionEventNotifier(
  std::unique_ptr<IEventNotifier>* outNotifier) {
  auto fileSystemProxy = detail::GetFileSystemProxyServiceObject();
  EventNotifierObject notifier;
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(
    RetryWhileStorageDeviceNotReady([&]() -> Result {
      return fileSystemProxy->OpenSdCardDetectionEventNotifier(
        nn::sf::Out<EventNotifierObject>(&notifier));
    }));
  outNotifier->reset(
    new detail::EventNotifierObjectAdapter(static_cast<EventNotifierObject&&>(
      notifier)));
  NN_FS_RESULT_THROW_UNLESS_WITH_ABORT_CHECK(*outNotifier != nullptr,
    ResultAllocationMemoryFailedInSdCardB());
  return ResultSuccess();
}

bool IsSdCardInserted() {
  StorageDeviceManager manager;
  NN_FS_ABORT_UNLESS_RESULT_SUCCESS_WITH_LOG(GetSdCardManager(&manager));
  bool isInserted = false;
  const Result result = RetryWhileStorageDeviceNotReady([&]() -> Result {
    return manager->IsInserted(nn::sf::Out<bool>(&isInserted));
  });
  if (IsFailure(result) &&
    !IsResultIncluded(result, ResultStorageDeviceNotReady())) {
    NN_FS_ABORT_UNLESS_RESULT_SUCCESS_WITH_LOG(result);
  }
  return isInserted;
}

Result FormatSdCard() {
  auto fileSystemProxy = detail::GetFileSystemProxyServiceObject();
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(
    RetryWhileStorageDeviceNotReady([&]() -> Result {
      return fileSystemProxy->FormatSdCard();
    }));
  return ResultSuccess();
}

Result GetSdCardSpeedMode(SdCardSpeedMode* outValue) {
  NN_FS_RESULT_THROW_UNLESS_WITH_ABORT_CHECK(outValue != nullptr,
    ResultNullptrArgument());
  StorageDeviceOperator sdCardOperator;
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(GetSdCardOperator(&sdCardOperator));
  int64_t outSize = 0;
  uint8_t speedMode = 8;
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(
    RetryWhileStorageDeviceNotReady([&]() -> Result {
      return sdCardOperator->OperateOut(nn::sf::Out<int64_t>(&outSize),
        nn::sf::OutBuffer(&speedMode, sizeof(speedMode)),
        SdCardOperationId_GetSpeedMode);
    }));
  *outValue = ConvertToSdCardSpeedMode(speedMode);
  return ResultSuccess();
}

Result GetSdCardCid(void* buffer, size_t size) {
  NN_FS_RESULT_THROW_UNLESS_WITH_ABORT_CHECK(buffer != nullptr,
    ResultNullptrArgument());
  StorageDeviceOperator managerOperator;
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(GetSdCardManagerOperator(&managerOperator));
  int64_t outSize = 0;
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(
    RetryWhileStorageDeviceNotReady([&]() -> Result {
      return managerOperator->OperateOut(nn::sf::Out<int64_t>(&outSize),
        nn::sf::OutBuffer(buffer, size), SdCardManagerOperationId_GetCid);
    }));
  return ResultSuccess();
}

Result GetSdCardUserAreaSize(int64_t* outValue) {
  NN_FS_RESULT_THROW_UNLESS_WITH_ABORT_CHECK(outValue != nullptr,
    ResultNullptrArgument());
  StorageDeviceOperator managerOperator;
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(GetSdCardManagerOperator(&managerOperator));
  int64_t outSize = 0;
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(
    RetryWhileStorageDeviceNotReady([&]() -> Result {
      return managerOperator->OperateOut(nn::sf::Out<int64_t>(&outSize),
        nn::sf::OutBuffer(outValue, sizeof(int64_t)),
        SdCardManagerOperationId_GetUserAreaSize);
    }));
  return ResultSuccess();
}

Result GetSdCardProtectedAreaSize(int64_t* outValue) {
  NN_FS_RESULT_THROW_UNLESS_WITH_ABORT_CHECK(outValue != nullptr,
    ResultNullptrArgument());
  StorageDeviceOperator managerOperator;
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(GetSdCardManagerOperator(&managerOperator));
  int64_t outSize = 0;
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(
    RetryWhileStorageDeviceNotReady([&]() -> Result {
      return managerOperator->OperateOut(nn::sf::Out<int64_t>(&outSize),
        nn::sf::OutBuffer(outValue, sizeof(int64_t)),
        SdCardManagerOperationId_GetProtectedAreaSize);
    }));
  return ResultSuccess();
}

Result TryGetSdCardInfo(sdmmcsrv::SdCardInfo* outValue) {
  NN_FS_RESULT_THROW_UNLESS_WITH_ABORT_CHECK(outValue != nullptr,
    ResultNullptrArgument());
  StorageDeviceOperator managerOperator;
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(GetSdCardManagerOperator(&managerOperator));
  int64_t outSize = 0;
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(
    RetryWhileStorageDeviceNotReady([&]() -> Result {
      return managerOperator->OperateOut(nn::sf::Out<int64_t>(&outSize),
        nn::sf::OutBuffer(outValue, sizeof(sdmmcsrv::SdCardInfo)),
        SdCardManagerOperationId_TryGetSdCardInfo);
    }));
  return ResultSuccess();
}

Result GetAndClearSdCardErrorInfo(StorageErrorInfo* outErrorInfo,
  size_t* outLogSize, char* logBuffer, size_t logBufferSize) {
  NN_FS_RESULT_THROW_UNLESS_WITH_ABORT_CHECK(outErrorInfo != nullptr,
    ResultNullptrArgument());
  NN_FS_RESULT_THROW_UNLESS_WITH_ABORT_CHECK(outLogSize != nullptr,
    ResultNullptrArgument());
  NN_FS_RESULT_THROW_UNLESS_WITH_ABORT_CHECK(logBuffer != nullptr,
    ResultNullptrArgument());
  StorageDeviceOperator managerOperator;
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(GetSdCardManagerOperator(&managerOperator));
  int64_t errorInfoSize = 0;
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(
    RetryWhileStorageDeviceNotReady([&]() -> Result {
      return managerOperator->OperateOut2(
        nn::sf::Out<int64_t>(&errorInfoSize),
        nn::sf::OutBuffer(outErrorInfo, sizeof(StorageErrorInfo)),
        nn::sf::Out<int64_t>(reinterpret_cast<int64_t*>(outLogSize)),
        nn::sf::OutBuffer(logBuffer, logBufferSize),
        SdCardManagerOperationId_GetAndClearErrorInfo);
    }));
  return ResultSuccess();
}

Result GetSdCardNvmeConnectionStatus(nvme::LinkSpeed* outLinkSpeed,
  uint8_t* outLinkWidth) {
  NN_FS_RESULT_THROW_UNLESS_WITH_ABORT_CHECK(outLinkSpeed != nullptr,
    ResultNullptrArgument());
  NN_FS_RESULT_THROW_UNLESS_WITH_ABORT_CHECK(outLinkWidth != nullptr,
    ResultNullptrArgument());
  StorageDeviceOperator sdCardOperator;
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(GetSdCardOperator(&sdCardOperator));
  int64_t linkSpeedSize = 0;
  int64_t linkWidthSize = 0;
  nvme::LinkSpeed linkSpeed = {};
  uint8_t linkWidth = 0;
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(sdCardOperator->OperateOut2(
    nn::sf::Out<int64_t>(&linkSpeedSize),
    nn::sf::OutBuffer(&linkSpeed, sizeof(linkSpeed)),
    nn::sf::Out<int64_t>(&linkWidthSize),
    nn::sf::OutBuffer(&linkWidth, sizeof(linkWidth)),
    SdCardOperationId_GetNvmeConnectionStatus));
  *outLinkSpeed = linkSpeed;
  *outLinkWidth = linkWidth;
  return ResultSuccess();
}

Result GetSdCardNvmeSmart(void* buffer, size_t size) {
  NN_FS_RESULT_THROW_UNLESS_WITH_ABORT_CHECK(buffer != nullptr,
    ResultNullptrArgument());
  NN_FS_RESULT_THROW_UNLESS_WITH_ABORT_CHECK(size >= SdCardNvmeSmartSize,
    ResultInvalidArgument());
  StorageDeviceOperator sdCardOperator;
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(GetSdCardOperator(&sdCardOperator));
  int64_t outSize = 0;
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(sdCardOperator->OperateOut(
    nn::sf::Out<int64_t>(&outSize),
    nn::sf::OutBuffer(buffer, SdCardNvmeSmartSize),
    SdCardOperationId_GetNvmeSmart));
  return ResultSuccess();
}

Result GetSdCardNvmeDeviceProperty(nvme::DeviceProperty* outValue) {
  NN_FS_RESULT_THROW_UNLESS_WITH_ABORT_CHECK(outValue != nullptr,
    ResultNullptrArgument());
  StorageDeviceOperator sdCardOperator;
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(GetSdCardOperator(&sdCardOperator));
  int64_t outSize = 0;
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(sdCardOperator->OperateOut(
    nn::sf::Out<int64_t>(&outSize),
    nn::sf::OutBuffer(outValue, sizeof(nvme::DeviceProperty)),
    SdCardOperationId_GetNvmeDeviceProperty));
  return ResultSuccess();
}

Result GetSdCardNvmeHctm(uint16_t* outThermal1, uint16_t* outThermal2) {
  NN_FS_RESULT_THROW_UNLESS_WITH_ABORT_CHECK(outThermal1 != nullptr,
    ResultNullptrArgument());
  NN_FS_RESULT_THROW_UNLESS_WITH_ABORT_CHECK(outThermal2 != nullptr,
    ResultNullptrArgument());
  StorageDeviceOperator sdCardOperator;
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(GetSdCardOperator(&sdCardOperator));
  int64_t thermal1Size = 0;
  int64_t thermal2Size = 0;
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(sdCardOperator->OperateOut2(
    nn::sf::Out<int64_t>(&thermal1Size),
    nn::sf::OutBuffer(outThermal1, sizeof(uint16_t)),
    nn::sf::Out<int64_t>(&thermal2Size),
    nn::sf::OutBuffer(outThermal2, sizeof(uint16_t)),
    SdCardOperationId_GetNvmeHctm));
  return ResultSuccess();
}

Result GetSdCardNvmeLba(uint32_t* outLbaA, uint32_t* outLbaB) {
  NN_FS_RESULT_THROW_UNLESS_WITH_ABORT_CHECK(outLbaA != nullptr,
    ResultNullptrArgument());
  NN_FS_RESULT_THROW_UNLESS_WITH_ABORT_CHECK(outLbaB != nullptr,
    ResultNullptrArgument());
  StorageDeviceOperator sdCardOperator;
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(GetSdCardOperator(&sdCardOperator));
  int64_t lbaASize = 0;
  int64_t lbaBSize = 0;
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(sdCardOperator->OperateOut2(
    nn::sf::Out<int64_t>(&lbaASize),
    nn::sf::OutBuffer(outLbaA, sizeof(uint32_t)),
    nn::sf::Out<int64_t>(&lbaBSize),
    nn::sf::OutBuffer(outLbaB, sizeof(uint32_t)),
    SdCardOperationId_GetNvmeLba));
  return ResultSuccess();
}

Result GetSdCardNvmeApst(uint32_t* outThreshold, uint8_t* outState) {
  NN_FS_RESULT_THROW_UNLESS_WITH_ABORT_CHECK(outThreshold != nullptr,
    ResultNullptrArgument());
  NN_FS_RESULT_THROW_UNLESS_WITH_ABORT_CHECK(outState != nullptr,
    ResultNullptrArgument());
  StorageDeviceOperator sdCardOperator;
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(GetSdCardOperator(&sdCardOperator));
  int64_t thresholdSize = 0;
  int64_t stateSize = 0;
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(sdCardOperator->OperateOut2(
    nn::sf::Out<int64_t>(&thresholdSize),
    nn::sf::OutBuffer(outThreshold, sizeof(uint32_t)),
    nn::sf::Out<int64_t>(&stateSize),
    nn::sf::OutBuffer(outState, sizeof(uint8_t)),
    SdCardOperationId_GetNvmeApst));
  return ResultSuccess();
}

Result SetSdCardNvmeHctm(uint16_t thermal1, uint16_t thermal2) {
  StorageDeviceOperator sdCardOperator;
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(GetSdCardOperator(&sdCardOperator));
  int64_t outSize = 0;
  char unused = 0;
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(sdCardOperator->OperateIn2Out(
    nn::sf::Out<int64_t>(&outSize), nn::sf::OutBuffer(&unused, sizeof(unused)),
    nn::sf::InBuffer(&thermal1, sizeof(thermal1)),
    nn::sf::InBuffer(&thermal2, sizeof(thermal2)), 0, sizeof(thermal1),
    SdCardOperationId_SetNvmeHctm));
  return ResultSuccess();
}

Result PresetSdCardFormatParameter(uint32_t parameter) {
  StorageDeviceOperator managerOperator;
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(GetSdCardManagerOperator(&managerOperator));
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(managerOperator->OperateIn(
    nn::sf::InBuffer(&parameter, sizeof(parameter)), 0, sizeof(parameter),
    SdCardManagerOperationId_PresetFormatParameter));
  return ResultSuccess();
}

Result SetSdCardNvmeApst(uint32_t threshold, uint8_t state) {
  StorageDeviceOperator sdCardOperator;
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(GetSdCardOperator(&sdCardOperator));
  int64_t outSize = 0;
  char unused = 0;
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(sdCardOperator->OperateIn2Out(
    nn::sf::Out<int64_t>(&outSize), nn::sf::OutBuffer(&unused, sizeof(unused)),
    nn::sf::InBuffer(&threshold, sizeof(threshold)),
    nn::sf::InBuffer(&state, sizeof(state)), 0, sizeof(threshold),
    SdCardOperationId_SetNvmeApst));
  return ResultSuccess();
}

Result SwitchSdCardModeFromPcieToSd() {
  StorageDeviceOperator managerOperator;
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(GetSdCardManagerOperator(&managerOperator));
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(managerOperator->Operate(
    SdCardManagerOperationId_SwitchModeFromPcieToSd));
  return ResultSuccess();
}

Result IsSdCardPcieNvmeMode(bool* outValue) {
  StorageDeviceOperator managerOperator;
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(GetSdCardManagerOperator(&managerOperator));
  int64_t outSize = 0;
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(managerOperator->OperateOut(
    nn::sf::Out<int64_t>(&outSize), nn::sf::OutBuffer(outValue, sizeof(bool)),
    SdCardManagerOperationId_IsPcieNvmeMode));
  return ResultSuccess();
}

Result GetAndClearSdCardNvmeErrorInfo(sdcard::NvmeErrorInfo* outValue) {
  NN_FS_RESULT_THROW_UNLESS_WITH_ABORT_CHECK(outValue != nullptr,
    ResultNullptrArgument());
  StorageDeviceOperator managerOperator;
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(GetSdCardManagerOperator(&managerOperator));
  int64_t outSize = 0;
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(managerOperator->OperateOut(
    nn::sf::Out<int64_t>(&outSize),
    nn::sf::OutBuffer(outValue, sizeof(sdcard::NvmeErrorInfo)),
    SdCardManagerOperationId_GetAndClearNvmeErrorInfo));
  return ResultSuccess();
}

Result GetAndClearSdCardNvmeActivationLog(
  sdcard::NvmeLatestActivationLog* outValue) {
  NN_FS_RESULT_THROW_UNLESS_WITH_ABORT_CHECK(outValue != nullptr,
    ResultNullptrArgument());
  StorageDeviceOperator managerOperator;
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(GetSdCardManagerOperator(&managerOperator));
  int64_t outSize = 0;
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(managerOperator->OperateOut(
    nn::sf::Out<int64_t>(&outSize),
    nn::sf::OutBuffer(outValue, sizeof(sdcard::NvmeLatestActivationLog)),
    SdCardManagerOperationId_GetAndClearNvmeActivationLog));
  return ResultSuccess();
}

Result GetSdCardNvmeNoopme(bool* outValue) {
  StorageDeviceOperator sdCardOperator;
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(GetSdCardOperator(&sdCardOperator));
  int64_t outSize = 0;
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(sdCardOperator->OperateOut(
    nn::sf::Out<int64_t>(&outSize), nn::sf::OutBuffer(outValue, sizeof(bool)),
    SdCardOperationId_GetNvmeNoopme));
  return ResultSuccess();
}

Result SetSdCardNvmeNoopme(bool isEnabled) {
  StorageDeviceOperator sdCardOperator;
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(GetSdCardOperator(&sdCardOperator));
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(sdCardOperator->OperateIn(
    nn::sf::InBuffer(&isEnabled, sizeof(isEnabled)), 0, sizeof(uint32_t),
    SdCardOperationId_SetNvmeNoopme));
  return ResultSuccess();
}

Result GetSdCardNvmeDeviceLog(sdcard::NvmeLatestDeviceLog* outValue) {
  NN_FS_RESULT_THROW_UNLESS_WITH_ABORT_CHECK(outValue != nullptr,
    ResultNullptrArgument());
  StorageDeviceOperator managerOperator;
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(GetSdCardManagerOperator(&managerOperator));
  int64_t outSize = 0;
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(managerOperator->OperateOut(
    nn::sf::Out<int64_t>(&outSize),
    nn::sf::OutBuffer(outValue, sizeof(sdcard::NvmeLatestDeviceLog)),
    SdCardManagerOperationId_GetNvmeDeviceLog));
  return ResultSuccess();
}

Result GetSdCardHostControllerStatus(sdcard::HostControllerStatus* outValue) {
  NN_FS_RESULT_THROW_UNLESS_WITH_ABORT_CHECK(outValue != nullptr,
    ResultNullptrArgument());
  StorageDeviceOperator sdCardOperator;
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(GetSdCardOperator(&sdCardOperator));
  int64_t outSize = 0;
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(sdCardOperator->OperateOut(
    nn::sf::Out<int64_t>(&outSize),
    nn::sf::OutBuffer(outValue, sizeof(sdcard::HostControllerStatus)),
    SdCardOperationId_GetHostControllerStatus));
  return ResultSuccess();
}

Result SetSdCardActivationMode(SdCardActivationMode mode) {
  auto fileSystemProxy = detail::GetFileSystemProxyServiceObject();
  StorageDeviceOperator managerOperator;
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(GetSdCardManagerOperator(&managerOperator));
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(
    RetryWhileStorageDeviceNotReady([&]() -> Result {
      return managerOperator->OperateIn(
        nn::sf::InBuffer(&mode, sizeof(mode)), 0, sizeof(mode),
        SdCardManagerOperationId_SetActivationMode);
    }));
  if (mode == static_cast<SdCardActivationMode>(2)) {
    NN_FS_RESULT_DO_WITH_ABORT_CHECK(fileSystemProxy->DetachSdCard());
  }
  return ResultSuccess();
}

Result EnableSdCardMalfunctionSimulation(
  const sdcard::MalfunctionSimulationParameters* parameters) {
  NN_FS_RESULT_THROW_UNLESS_WITH_ABORT_CHECK(parameters != nullptr,
    ResultNullptrArgument());
  StorageDeviceOperator managerOperator;
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(GetSdCardManagerOperator(&managerOperator));
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(managerOperator->OperateIn(
    nn::sf::InBuffer(parameters, sizeof(sdcard::MalfunctionSimulationParameters)),
    0, sizeof(uint32_t),
    SdCardManagerOperationId_EnableMalfunctionSimulation));
  return ResultSuccess();
}

Result DisableSdCardMalfunctionSimulation() {
  StorageDeviceOperator managerOperator;
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(GetSdCardManagerOperator(&managerOperator));
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(managerOperator->Operate(
    SdCardManagerOperationId_DisableMalfunctionSimulation));
  return ResultSuccess();
}

Result GetSdCardMalfunctionSimulationParameters(
  sdcard::MalfunctionSimulationParameters* outParameters) {
  NN_FS_RESULT_THROW_UNLESS_WITH_ABORT_CHECK(outParameters != nullptr,
    ResultNullptrArgument());
  StorageDeviceOperator managerOperator;
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(GetSdCardManagerOperator(&managerOperator));
  int64_t outSize = 0;
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(managerOperator->OperateOut(
    nn::sf::Out<int64_t>(&outSize),
    nn::sf::OutBuffer(outParameters,
      sizeof(sdcard::MalfunctionSimulationParameters)),
    SdCardManagerOperationId_GetMalfunctionSimulationParameters));
  return ResultSuccess();
}

bool IsValidSignedSystemPartitionOnSdCard(const char* path) {
  detail::FileSystemAccessor* fileSystem = nullptr;
  const char* subPath = nullptr;
  NN_FS_ABORT_UNLESS_RESULT_SUCCESS_WITH_LOG(detail::FindFileSystem(
    &fileSystem, &subPath, path));
  bool isValid = false;
  Result result = fileSystem->QueryEntry(reinterpret_cast<char*>(&isValid),
    sizeof(isValid), nullptr, 0,
    fsa::QueryId::IsSignedSystemPartitionOnSdCardValid, "/");
  if (IsResultUnsupportedOperation(result)) {
    isValid = false;
    result = ResultSuccess();
  }
  NN_FS_ABORT_UNLESS_RESULT_SUCCESS_WITH_LOG(result);
  return isValid;
}

Result SetSpeedEmulationMode(SpeedEmulationMode mode) {
  auto fileSystemProxy = detail::GetFileSystemProxyServiceObject();
  nn::sf::SharedPointer<fssrv::sf::IDeviceOperator> deviceOperator;
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(fileSystemProxy->OpenDeviceOperator(
    nn::sf::Out<nn::sf::SharedPointer<fssrv::sf::IDeviceOperator>>(
      &deviceOperator)));
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(deviceOperator->SetSpeedEmulationMode(
    static_cast<uint32_t>(mode)));
  return ResultSuccess();
}

Result GetSpeedEmulationMode(SpeedEmulationMode* outMode) {
  NN_FS_RESULT_THROW_UNLESS_WITH_ABORT_CHECK(outMode != nullptr,
    ResultNullptrArgument());
  auto fileSystemProxy = detail::GetFileSystemProxyServiceObject();
  nn::sf::SharedPointer<fssrv::sf::IDeviceOperator> deviceOperator;
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(fileSystemProxy->OpenDeviceOperator(
    nn::sf::Out<nn::sf::SharedPointer<fssrv::sf::IDeviceOperator>>(
      &deviceOperator)));
  int32_t mode = 0;
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(deviceOperator->GetSpeedEmulationMode(
    nn::sf::Out<int32_t>(&mode)));
  *outMode = static_cast<SpeedEmulationMode>(mode);
  return ResultSuccess();
}

Result SetApplicationStorageSpeed(ApplicationStorageSpeed speed) {
  auto fileSystemProxy = detail::GetFileSystemProxyServiceObject();
  nn::sf::SharedPointer<fssrv::sf::IDeviceOperator> deviceOperator;
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(fileSystemProxy->OpenDeviceOperator(
    nn::sf::Out<nn::sf::SharedPointer<fssrv::sf::IDeviceOperator>>(
      &deviceOperator)));
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(deviceOperator->SetApplicationStorageSpeed(
    static_cast<uint32_t>(speed)));
  return ResultSuccess();
}

Result SetGameCardClockRateForSpeedEmulation(
  ApplicationGameCardClockRate clockRate) {
  auto fileSystemProxy = detail::GetFileSystemProxyServiceObject();
  nn::sf::SharedPointer<fssrv::sf::IDeviceOperator> deviceOperator;
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(fileSystemProxy->OpenDeviceOperator(
    nn::sf::Out<nn::sf::SharedPointer<fssrv::sf::IDeviceOperator>>(
      &deviceOperator)));
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(
    deviceOperator->SetGameCardClockRateForSpeedEmulation(
      static_cast<uint8_t>(clockRate)));
  return ResultSuccess();
}

Result ClearGameCardClockRateForSpeedEmulation() {
  auto fileSystemProxy = detail::GetFileSystemProxyServiceObject();
  nn::sf::SharedPointer<fssrv::sf::IDeviceOperator> deviceOperator;
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(fileSystemProxy->OpenDeviceOperator(
    nn::sf::Out<nn::sf::SharedPointer<fssrv::sf::IDeviceOperator>>(
      &deviceOperator)));
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(
    deviceOperator->ClearGameCardClockRateForSpeedEmulation());
  return ResultSuccess();
}

void ShutdownStorage() {
  auto fileSystemProxy = detail::GetFileSystemProxyServiceObject();
  fileSystemProxy->ShutdownStorage();
}

}
