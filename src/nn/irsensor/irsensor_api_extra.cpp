#include "nn/diag/diag_abort.hpp"
#include "nn/irsensor/detail/irsensor_server.hpp"
#include "nn/irsensor/detail/irsensor_status_manager.hpp"

namespace nn::irsensor {

struct ImageProcessorExposureConfig {
  int64_t exposureTime;
  int32_t lightTarget;
  int32_t gain;
  bool isNegativeImageUsed;
};

struct MomentProcessorConfig {
  ImageProcessorExposureConfig hardwareConfig;
  Rect windowOfInterest;
  int32_t preprocess;
  int32_t preprocessIntensityThreshold;
};

static_assert(__builtin_offsetof(MomentProcessorConfig, windowOfInterest) ==
  0x18);

struct AdaptiveClusteringProcessorConfig {
  int32_t mode;
  int32_t target;
};

enum ImageProcessorStatus : int32_t {};

struct MomentProcessorState;
struct ClusteringProcessorState;
struct ImageTransferProcessorExConfig;
struct ImageTransferProcessorState;
struct TeraPluginProcessorConfig;
struct PointingProcessorMarkerState;
struct IrLedProcessorState;

class IIrSensorSystemServer : public sf::IServiceObject {
 public:
  virtual void Reserved2() = 0;
  virtual void Reserved3() = 0;
  virtual Result SetAppletResourceUserId(
    applet::AppletResourceUserId aruid) = 0;
  virtual Result RegisterAppletResourceUserId(
    applet::AppletResourceUserId aruid, bool isEnabled) = 0;
  virtual Result UnregisterAppletResourceUserId(
    applet::AppletResourceUserId aruid) = 0;
  virtual Result EnableAppletToGetInput(applet::AppletResourceUserId aruid,
    bool isEnabled) = 0;
};

namespace detail {

Result CreateIrSensorSystemServerProxy(
  sf::SharedPointer<IIrSensorSystemServer>* pOutProxy);
Result InitializeIrCamera(const IrSensorFunctionLevel& level,
  const IrCameraHandle& handle, bool isForLibrary);
Result GetImageProcessorStatus(ImageProcessorStatus* pOutStatus,
  const bool& isAsync, const IrCameraHandle& handle);
Result StopImageProcessorAsync(const IrCameraHandle& handle);
Result GetMomentProcessorState(MomentProcessorState* pOutState,
  const IrCameraHandle& handle);
Result GetClusteringProcessorState(ClusteringProcessorState* pOutState,
  const IrCameraHandle& handle);
Result RunImageTransferProcessor(const IrCameraHandle& handle,
  const ImageTransferProcessorExConfig& config, void* pWorkBuffer,
  size_t workBufferSize);
Result GetImageTransferProcessorState(ImageTransferProcessorState* pOutState,
  void* pImage, size_t imageSize, const IrCameraHandle& handle);
Result RunTeraPluginProcessor(const IrCameraHandle& handle,
  const TeraPluginProcessorConfig& config);
Result GetPointingProcessorStates(PointingProcessorMarkerState* pOutStates,
  int* pOutCount, int count, const IrCameraHandle& handle);
Result GetIrLedProcessorState(const IrCameraHandle& handle);

}

namespace {

constexpr int32_t CurrentFunctionLevel = 3;

}

namespace detail {

Result SetAppletResourceUserId(const applet::AppletResourceUserId& aruid) {
  sf::SharedPointer<IIrSensorSystemServer> proxy;
  NN_RESULT_DO(CreateIrSensorSystemServerProxy(&proxy));
  return proxy->SetAppletResourceUserId(aruid);
}

Result RegisterAppletResourceUserId(const applet::AppletResourceUserId& aruid,
  bool isEnabled) {
  sf::SharedPointer<IIrSensorSystemServer> proxy;
  NN_RESULT_DO(CreateIrSensorSystemServerProxy(&proxy));
  return proxy->RegisterAppletResourceUserId(aruid, isEnabled);
}

Result UnregisterAppletResourceUserId(
  const applet::AppletResourceUserId& aruid) {
  sf::SharedPointer<IIrSensorSystemServer> proxy;
  NN_RESULT_DO(CreateIrSensorSystemServerProxy(&proxy));
  return proxy->UnregisterAppletResourceUserId(aruid);
}

Result EnableAppletToGetInput(const applet::AppletResourceUserId& aruid,
  bool isEnabled) {
  sf::SharedPointer<IIrSensorSystemServer> proxy;
  NN_RESULT_DO(CreateIrSensorSystemServerProxy(&proxy));
  return proxy->EnableAppletToGetInput(aruid, isEnabled);
}

StatusManagerHolder::StatusManagerHolder() : m_IsOwner(false) {}

}

void GetAdaptiveClusteringProcessorDefaultConfig(
  AdaptiveClusteringProcessorConfig* pOutConfig) {
  *pOutConfig = {};
}

void Initialize(const IrCameraHandle& handle) {
  const IrSensorFunctionLevel level = {CurrentFunctionLevel};
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    detail::InitializeIrCamera(level, handle, false));
}

void InitializeForLibrary(const IrCameraHandle& handle) {
  const IrSensorFunctionLevel level = {CurrentFunctionLevel};
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    detail::InitializeIrCamera(level, handle, true));
}

ImageProcessorStatus GetImageProcessorStatus(const IrCameraHandle& handle) {
  ImageProcessorStatus status = {};
  const bool isAsync = false;
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    detail::GetImageProcessorStatus(&status, isAsync, handle));
  return status;
}

void StopImageProcessorAsync(const IrCameraHandle& handle) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::StopImageProcessorAsync(handle));
}

void GetMomentProcessorDefaultConfig(MomentProcessorConfig* pOutConfig) {
  pOutConfig->hardwareConfig.exposureTime = 300000;
  pOutConfig->hardwareConfig.lightTarget = 0;
  pOutConfig->hardwareConfig.gain = 8;
  pOutConfig->hardwareConfig.isNegativeImageUsed = false;
  pOutConfig->windowOfInterest = {0, 0, 320, 240};
  pOutConfig->preprocess = 1;
  pOutConfig->preprocessIntensityThreshold = 80;
}

Result GetMomentProcessorState(MomentProcessorState* pOutState,
  const IrCameraHandle& handle) {
  return detail::GetMomentProcessorState(pOutState, handle);
}

Result GetClusteringProcessorState(ClusteringProcessorState* pOutState,
  const IrCameraHandle& handle) {
  return detail::GetClusteringProcessorState(pOutState, handle);
}

void RunImageTransferProcessor(const IrCameraHandle& handle,
  const ImageTransferProcessorExConfig& config, void* pWorkBuffer,
  size_t workBufferSize) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::RunImageTransferProcessor(handle,
    config, pWorkBuffer, workBufferSize));
}

Result GetImageTransferProcessorState(ImageTransferProcessorState* pOutState,
  void* pImage, size_t imageSize, const IrCameraHandle& handle) {
  return detail::GetImageTransferProcessorState(pOutState, pImage, imageSize,
    handle);
}

Result RunTeraPluginProcessor(const IrCameraHandle& handle,
  const TeraPluginProcessorConfig& config) {
  return detail::RunTeraPluginProcessor(handle, config);
}

Result GetPointingProcessorMarkerStates(
  PointingProcessorMarkerState* pOutStates, int* pOutCount, int count,
  const IrCameraHandle& handle) {
  return detail::GetPointingProcessorStates(pOutStates, pOutCount, count,
    handle);
}

Result GetIrLedProcessorState(const IrCameraHandle& handle) {
  return detail::GetIrLedProcessorState(handle);
}

namespace system {

void RegisterAppletResourceUserId(const applet::AppletResourceUserId& aruid,
  bool isEnabled) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    detail::RegisterAppletResourceUserId(aruid, isEnabled));
}

void UnregisterAppletResourceUserId(
  const applet::AppletResourceUserId& aruid) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    detail::UnregisterAppletResourceUserId(aruid));
}

void EnableAppletToGetInput(const applet::AppletResourceUserId& aruid,
  bool isEnabled) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    detail::EnableAppletToGetInput(aruid, isEnabled));
}

}

}
