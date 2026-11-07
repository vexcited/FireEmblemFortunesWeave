#include <atomic>

#include "nn/diag/diag_abort.hpp"
#include "nn/diag/unexpected_default.hpp"
#include "nn/hid/hid_controller_support.hpp"
#include "nn/irsensor/detail/irsensor_session_manager.hpp"
#include "nn/irsensor/detail/irsensor_status_manager.hpp"
#include "nn/os/sleep_thread.hpp"

namespace nn::irsensor {

enum ImageProcessorStatus : int32_t {
  ImageProcessorStatus_Stopped,
  ImageProcessorStatus_Running,
};

struct ImageProcessorConfig {
  int64_t exposureTime;
  int32_t lightTarget;
  int32_t gain;
  bool isNegativeImageUsed;
};

struct MomentProcessorConfig {
  ImageProcessorConfig base;
  Rect windowOfInterest;
  int32_t preprocess;
  int32_t preprocessIntensityThreshold;
};

struct ClusteringProcessorConfig {
  ImageProcessorConfig base;
  Rect windowOfInterest;
  int32_t objectPixelCountMin;
  int32_t objectPixelCountMax;
  int32_t objectIntensityMin;
  bool isExternalLightFilterEnabled;
};

struct ImageTransferProcessorConfig {
  ImageProcessorConfig base;
  int32_t format;
};

struct ImageTransferProcessorExConfig {
  ImageProcessorConfig base;
  int32_t origFormat;
  int32_t trimmingFormat;
  uint16_t trimmingStartX;
  uint16_t trimmingStartY;
  bool isExternalLightFilterEnabled;
};

struct TeraPluginProcessorConfig {
  uint8_t modeOffset;
  bool isParameterEnabled;
  uint16_t parameterValue;
};

struct IrLedProcessorConfig {
  int32_t lightTarget;
};

}

namespace nn::irsensor::detail {

Result GetIrCameraHandle(IrCameraHandle* pOutHandle, const uint32_t& npadId);
Result InitializeIrCamera(const IrSensorFunctionLevel& level,
  const IrCameraHandle& handle, bool isExclusive);
Result FinalizeIrCamera(const IrCameraHandle& handle);
Result StopImageProcessor(const IrCameraHandle& handle);
Result GetIrCameraStatus(IrCameraStatus* pOutStatus,
  const IrCameraHandle& handle);
Result GetIrCameraInternalStatus(IrCameraInternalStatus* pOutStatus,
  const IrCameraHandle& handle);
Result GetImageProcessorStatus(ImageProcessorStatus* pOutStatus,
  const bool& isFunctionLevelKnown, const IrCameraHandle& handle);
Result CheckLibraryAppletAvailability(bool* pOutIsAvailable,
  const IrCameraInternalStatus& status, const IrCameraHandle& handle);
Result CheckFirmwareUpdateNecessity(bool* pOutIsNeeded,
  const IrCameraHandle& handle);
Result CheckStatus(Result result, const IrCameraHandle& handle);
Result CheckInternalStatus(const IrCameraHandle& handle);
Result StopImageProcessorAsync(const IrCameraHandle& handle);

namespace {

constexpr Result ResultNotInitialized = {0x198cd};
constexpr Result ResultIrCameraUnsupported = {0xdecd};
constexpr Result ResultIrCameraUnconnected = {0xdccd};
constexpr Result ResultNotForeground = {0x12ccd};
constexpr Result ResultNeedsFirmwareUpdate = {0x140cd};
constexpr Result ResultHardwareError = {0x142cd};
constexpr Result ResultNeedsRestart = {0xf6cd};
constexpr Result ResultNeedsSystemUpdate = {0xf8cd};
constexpr Result ResultFirmwareUpdateFailed = {0xfacd};
constexpr uint32_t ControllerFirmwareUpdateFailed = 0x1902ca;
constexpr IrSensorFunctionLevel LatestFunctionLevel = {4};
constexpr int StopRetryCount = 334;
constexpr int64_t StopRetryIntervalNs = 15 * 1000 * 1000;
constexpr PackedMcuVersion RequiredMcuVersion = {0x1b0008};

constexpr Rect PointingWindowOfInterest = {0, 0, 320, 240};
constexpr uint8_t TeraPluginParameterFlag = 2;

std::atomic<int> g_IrCameraInitializedCount;

// The packed configs carry the firmware version the processor expects.
struct PackedMomentLayout {
  PackedImageProcessorConfig base;
  Rect windowOfInterest;
  PackedMcuVersion requiredVersion;
  uint8_t preprocess;
  uint8_t preprocessIntensityThreshold;
  uint8_t reserved[2];
};

struct PackedClusteringLayout {
  PackedImageProcessorConfig base;
  Rect windowOfInterest;
  PackedMcuVersion requiredVersion;
  uint32_t objectPixelCountMin;
  uint32_t objectPixelCountMax;
  uint8_t objectIntensityMin;
  bool isExternalLightFilterEnabled;
  uint8_t reserved[2];
};

struct PackedImageTransferLayout {
  PackedImageProcessorConfig base;
  PackedMcuVersion requiredVersion;
  uint8_t format;
  uint8_t reserved[3];
};

struct PackedImageTransferExLayout {
  PackedImageProcessorConfig base;
  PackedMcuVersion requiredVersion;
  uint8_t origFormat;
  uint8_t trimmingFormat;
  uint16_t trimmingStartX;
  uint16_t trimmingStartY;
  bool isExternalLightFilterEnabled;
  uint8_t reserved[5];
};

struct PackedPointingLayout {
  Rect windowOfInterest;
  PackedMcuVersion requiredVersion;
};

struct PackedSmallLayout {
  PackedMcuVersion requiredVersion;
  uint8_t value[4];
};

[[gnu::always_inline]] PackedImageProcessorConfig PackImageProcessorConfig(
  const ImageProcessorConfig& config) {
  PackedImageProcessorConfig packed = {};
  packed.exposureTime = config.exposureTime;
  packed.lightTarget = config.lightTarget;
  packed.gain = config.gain;
  packed.isNegativeImageUsed = config.isNegativeImageUsed;
  return packed;
}

[[gnu::always_inline]] IrSensorSession* GetSession() {
  SessionManager& manager = GetSessionManager();
  const applet::AppletResourceUserId aruid = GetAppletResourceUserId();
  return manager.GetSession(aruid);
}

[[gnu::always_inline]] bool IsStoppedInternalStatus(
  IrCameraInternalStatus status) {
  return static_cast<uint32_t>(status - 8) >= static_cast<uint32_t>(-3);
}

}

Result GetIrCameraHandle(IrCameraHandle* pOutHandle, const uint32_t& npadId) {
  sf::SharedPointer<IIrSensorServer> server;
  NN_ABORT_UNLESS_RESULT_SUCCESS(CreateIrSensorServerProxy(&server));
  return server->GetNpadIrCameraHandle(pOutHandle, npadId);
}

// Only the first camera activates the service, the others share it.
Result InitializeIrCamera(const IrSensorFunctionLevel& level,
  const IrCameraHandle& handle, bool isExclusive) {
  IrSensorSession* pSession = GetSession();
  if (pSession == nullptr) {
    return ResultNotInitialized;
  }
  NN_ABORT_UNLESS(!pSession->IsOwnerExclusionViolated(handle, isExclusive));
  pSession->SetOwner(handle, isExclusive);
  if (g_IrCameraInitializedCount.load() == 0) {
    NN_RESULT_DO(pSession->Activate(level));
    pSession->SetFunctionLevel(handle, level);
  }
  g_IrCameraInitializedCount.fetch_add(1);
  return Result{0};
}

Result FinalizeIrCamera(const IrCameraHandle& handle) {
  IrSensorSession* pSession = GetSession();
  if (pSession == nullptr) {
    return ResultNotInitialized;
  }
  pSession->ResetOwner(handle);
  if (!pSession->IsProcessorStopped(handle)) {
    NN_RESULT_DO(StopImageProcessor(handle));
  }
  g_IrCameraInitializedCount.fetch_sub(1);
  if (g_IrCameraInitializedCount.load() != 0) {
    return Result{0};
  }
  NN_RESULT_DO(pSession->Deactivate());
  GetSessionManager().FinalizeSession(GetAppletResourceUserId());
  const IrSensorFunctionLevel level = {};
  pSession->SetFunctionLevel(handle, level);
  return Result{0};
}

// Waits until the processor reports it stopped, for about five seconds.
[[gnu::noinline]] Result StopImageProcessor(const IrCameraHandle& handle) {
  IrSensorSession* pSession = GetSession();
  if (pSession == nullptr) {
    return ResultNotInitialized;
  }
  pSession->ResetInternalStatusForLibraryAppletCall(handle);
  pSession->SetVersionCheckRequestEnableFlag(handle, true);
  NN_RESULT_DO(pSession->StopImageProcessorAsync(handle));
  ImageProcessorStatus status = ImageProcessorStatus_Stopped;
  const bool isFunctionLevelKnown = true;
  NN_RESULT_DO(GetImageProcessorStatus(&status, isFunctionLevelKnown,
    handle));
  for (int retry = StopRetryCount; status != ImageProcessorStatus_Stopped;) {
    os::SleepThread(TimeSpan{StopRetryIntervalNs});
    if (--retry == 0) {
      break;
    }
    const bool isKnown = true;
    NN_RESULT_DO(GetImageProcessorStatus(&status, isKnown, handle));
  }
  return Result{0};
}

Result GetIrCameraStatus(IrCameraStatus* pOutStatus,
  const IrCameraHandle& handle) {
  IrSensorSession* pSession = GetSession();
  if (pSession == nullptr) {
    return ResultNotInitialized;
  }
  pSession->AttachSharedMemoryIfNotMapped();
  *pOutStatus = pSession->GetIrCameraStatus(handle);
  return Result{0};
}

Result GetIrCameraInternalStatus(IrCameraInternalStatus* pOutStatus,
  const IrCameraHandle& handle) {
  IrSensorSession* pSession = GetSession();
  if (pSession == nullptr) {
    return ResultNotInitialized;
  }
  pSession->AttachSharedMemoryIfNotMapped();
  *pOutStatus = pSession->GetIrCameraInternalStatus(handle);
  return Result{0};
}

[[gnu::noinline]] Result GetImageProcessorStatus(
  ImageProcessorStatus* pOutStatus, const bool& isFunctionLevelKnown,
  const IrCameraHandle& handle) {
  IrSensorSession* pSession = GetSession();
  if (pSession == nullptr) {
    return ResultNotInitialized;
  }
  if (!isFunctionLevelKnown) {
    IrSensorFunctionLevel level = LatestFunctionLevel;
    pSession->GetFunctionLevel(&level, handle);
  }
  IrCameraInternalStatus status;
  NN_RESULT_DO(GetIrCameraInternalStatus(&status, handle));
  *pOutStatus = IsStoppedInternalStatus(status) ?
    ImageProcessorStatus_Stopped : ImageProcessorStatus_Running;
  return Result{0};
}

Result CheckLibraryAppletAvailability(bool* pOutIsAvailable,
  const IrCameraInternalStatus& status, const IrCameraHandle& handle) {
  IrSensorSession* pSession = GetSession();
  if (pSession == nullptr) {
    return ResultNotInitialized;
  }
  pSession->AttachSharedMemoryIfNotMapped();
  *pOutIsAvailable = pSession->IsLibraryAppletCallEnabled(status, handle);
  return Result{0};
}

// Only the available, updating and updated states give an answer.
Result CheckFirmwareUpdateNecessity(bool* pOutIsNeeded,
  const IrCameraHandle& handle) {
  IrSensorSession* pSession = GetSession();
  if (pSession == nullptr) {
    return ResultNotInitialized;
  }
  pSession->AttachSharedMemoryIfNotMapped();
  if (!pSession->IsAppletForeground()) {
    return ResultNotForeground;
  }
  NN_RESULT_DO(CheckStatus(Result{0}, handle));
  if (pSession->IsVersionCheckRequestEnabled(handle)) {
    NN_RESULT_DO(pSession->CheckFirmwareVersion(handle, RequiredMcuVersion));
    pSession->SetVersionCheckRequestEnableFlag(handle, false);
  }
  const IrCameraInternalStatus status =
    pSession->GetIrCameraInternalStatus(handle);
  if (static_cast<uint32_t>(status) > 8 || ((0x1c1 >> status) & 1) == 0) {
    return ResultNotForeground;
  }
  const bool isNeeded = (0x40 >> status) & 1;
  pSession->SetVersionCheckRequestEnableFlag(handle, true);
  *pOutIsNeeded = isNeeded;
  return Result{0};
}

[[gnu::noinline]] Result CheckStatus(Result result,
  const IrCameraHandle& handle) {
  IrSensorSession* pSession = GetSession();
  if (pSession == nullptr) {
    NN_ABORT_UNLESS_RESULT_SUCCESS(ResultNotInitialized);
  }
  pSession->AttachSharedMemoryIfNotMapped();
  switch (pSession->GetIrCameraStatus(handle)) {
    case IrCameraStatus_Available:
      return result;
    case IrCameraStatus_Unsupported:
      return ResultIrCameraUnsupported;
    case IrCameraStatus_Unconnected:
      return ResultIrCameraUnconnected;
    default:
      nn::detail::UnexpectedDefaultImpl();
  }
}

// A camera that needs a firmware update starts the controller applet when
// the caller may show it.
Result CheckInternalStatus(const IrCameraHandle& handle) {
  IrCameraInternalStatus status;
  NN_ABORT_UNLESS_RESULT_SUCCESS(GetIrCameraInternalStatus(&status, handle));
  bool isAvailable;
  NN_ABORT_UNLESS_RESULT_SUCCESS(CheckLibraryAppletAvailability(&isAvailable,
    status, handle));
  switch (status) {
    case 0:
    case 7:
      return Result{0};
    case 1:
      if (isAvailable) {
        hid::ControllerFirmwareUpdateArg arg = {};
        arg.enableForceUpdate = true;
        const Result result = hid::ShowControllerFirmwareUpdate(arg);
        if (result.IsFailure()) {
          return result.GetInnerValueForDebug() ==
              ControllerFirmwareUpdateFailed ?
            ResultFirmwareUpdateFailed : result;
        }
      }
      return ResultNeedsFirmwareUpdate;
    case 2:
      return ResultNeedsRestart;
    case 3:
      return ResultNeedsSystemUpdate;
    case 4:
      return ResultHardwareError;
    case 5:
    case 6:
    case 8:
      return ResultNeedsFirmwareUpdate;
    default:
      nn::detail::UnexpectedDefaultImpl();
  }
}

Result StopImageProcessorAsync(const IrCameraHandle& handle) {
  IrSensorSession* pSession = GetSession();
  if (pSession == nullptr) {
    return ResultNotInitialized;
  }
  IrSensorFunctionLevel level = LatestFunctionLevel;
  pSession->GetFunctionLevel(&level, handle);
  pSession->ResetInternalStatusForLibraryAppletCall(handle);
  pSession->SetVersionCheckRequestEnableFlag(handle, true);
  return pSession->StopImageProcessorAsync(handle);
}

Result RunMomentProcessor(const IrCameraHandle& handle,
  const MomentProcessorConfig& config) {
  PackedMomentLayout packed = {};
  packed.base = PackImageProcessorConfig(config.base);
  packed.windowOfInterest = config.windowOfInterest;
  packed.requiredVersion = RequiredMcuVersion;
  packed.preprocess = config.preprocess;
  packed.preprocessIntensityThreshold = config.preprocessIntensityThreshold;
  IrSensorSession* pSession = GetSession();
  if (pSession == nullptr) {
    return ResultNotInitialized;
  }
  return pSession->RunMomentProcessor(handle,
    reinterpret_cast<const PackedMomentProcessorConfig&>(packed));
}

Result RunClusteringProcessor(const IrCameraHandle& handle,
  const ClusteringProcessorConfig& config) {
  PackedClusteringLayout packed = {};
  packed.base = PackImageProcessorConfig(config.base);
  packed.windowOfInterest = config.windowOfInterest;
  packed.requiredVersion = RequiredMcuVersion;
  packed.objectPixelCountMin = config.objectPixelCountMin;
  packed.objectPixelCountMax = config.objectPixelCountMax;
  packed.objectIntensityMin = config.objectIntensityMin;
  packed.isExternalLightFilterEnabled = config.isExternalLightFilterEnabled;
  IrSensorSession* pSession = GetSession();
  if (pSession == nullptr) {
    return ResultNotInitialized;
  }
  return pSession->RunClusteringProcessor(handle,
    reinterpret_cast<const PackedClusteringProcessorConfig&>(packed));
}

Result RunImageTransferProcessor(const IrCameraHandle& handle,
  const ImageTransferProcessorConfig& config, void* pWorkBuffer,
  size_t workBufferSize) {
  PackedImageTransferLayout packed = {};
  packed.base = PackImageProcessorConfig(config.base);
  packed.requiredVersion = RequiredMcuVersion;
  packed.format = config.format;
  IrSensorSession* pSession = GetSession();
  if (pSession == nullptr) {
    return ResultNotInitialized;
  }
  return pSession->RunImageTransferProcessor(handle,
    reinterpret_cast<const PackedImageTransferProcessorConfig&>(packed),
    pWorkBuffer, workBufferSize);
}

Result RunImageTransferProcessor(const IrCameraHandle& handle,
  const ImageTransferProcessorExConfig& config, void* pWorkBuffer,
  size_t workBufferSize) {
  PackedImageTransferExLayout packed = {};
  packed.base = PackImageProcessorConfig(config.base);
  packed.requiredVersion = RequiredMcuVersion;
  packed.origFormat = config.origFormat;
  packed.trimmingFormat = config.trimmingFormat;
  packed.trimmingStartX = config.trimmingStartX;
  packed.trimmingStartY = config.trimmingStartY;
  packed.isExternalLightFilterEnabled = config.isExternalLightFilterEnabled;
  IrSensorSession* pSession = GetSession();
  if (pSession == nullptr) {
    return ResultNotInitialized;
  }
  return pSession->RunImageTransferProcessor(handle,
    reinterpret_cast<const PackedImageTransferProcessorExConfig&>(packed),
    pWorkBuffer, workBufferSize);
}

Result RunPointingProcessor(const IrCameraHandle& handle) {
  PackedPointingLayout packed = {};
  packed.windowOfInterest = PointingWindowOfInterest;
  packed.requiredVersion = RequiredMcuVersion;
  IrSensorSession* pSession = GetSession();
  if (pSession == nullptr) {
    return ResultNotInitialized;
  }
  return pSession->RunPointingProcessor(handle,
    reinterpret_cast<const PackedPointingProcessorConfig&>(packed));
}

Result RunTeraPluginProcessor(const IrCameraHandle& handle,
  const TeraPluginProcessorConfig& config) {
  PackedSmallLayout packed = {};
  packed.requiredVersion = RequiredMcuVersion;
  packed.value[0] = config.modeOffset;
  packed.value[1] = TeraPluginParameterFlag |
    (config.isParameterEnabled << 7);
  *reinterpret_cast<uint16_t*>(&packed.value[2]) = config.parameterValue;
  IrSensorSession* pSession = GetSession();
  if (pSession == nullptr) {
    return ResultNotInitialized;
  }
  return pSession->RunTeraPluginProcessor(handle,
    reinterpret_cast<const PackedTeraPluginProcessorConfig&>(packed));
}

Result RunIrLedProcessor(const IrCameraHandle& handle,
  const IrLedProcessorConfig& config) {
  PackedSmallLayout packed = {};
  packed.requiredVersion = RequiredMcuVersion;
  packed.value[0] = config.lightTarget;
  IrSensorSession* pSession = GetSession();
  if (pSession == nullptr) {
    return ResultNotInitialized;
  }
  return pSession->RunIrLedProcessor(handle,
    reinterpret_cast<const PackedIrLedProcessorConfig&>(packed));
}

}
