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

std::atomic<int> g_IrCameraInitializedCount;

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

}
