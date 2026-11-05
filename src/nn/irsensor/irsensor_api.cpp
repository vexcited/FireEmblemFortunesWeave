#include "nn/irsensor/irsensor_types.hpp"

#include <stddef.h>

#include "nn/applet/applet_types.hpp"
#include "nn/diag/diag_abort.hpp"
#include "nn/os/time.hpp"
#include "nn/result.hpp"

namespace nn::detail {

[[noreturn]] void UnexpectedDefaultImpl();

}

namespace nn::irsensor {

struct ImageProcessorExposureConfig {
  TimeSpan exposureTime;
  int32_t lightTarget;
  int32_t gain;
  bool isNegativeImageUsed;
};

struct MomentProcessorConfig;
struct MomentProcessorState;

struct ClusteringProcessorConfig {
  ImageProcessorExposureConfig irCameraConfig;
  Rect windowOfInterest;
  int32_t objectPixelCountMin;
  int32_t objectPixelCountMax;
  int32_t objectIntensityMin;
  bool isExternalLightFilterEnabled;
};

struct ImageTransferProcessorConfig {
  ImageProcessorExposureConfig irCameraConfig;
  ImageTransferProcessorFormat format;
};

struct ImageTransferProcessorExConfig {
  ImageProcessorExposureConfig irCameraConfig;
  ImageTransferProcessorFormat origFormat;
  ImageTransferProcessorFormat trimmingFormat;
  uint16_t trimmingStartX;
  uint16_t trimmingStartY;
};

struct IrLedProcessorConfig {
  int32_t lightTarget;
};

enum HandAnalysisMode : int32_t {
  HandAnalysisMode_None,
  HandAnalysisMode_Silhouette,
  HandAnalysisMode_Image,
  HandAnalysisMode_SilhouetteAndImage,
  HandAnalysisMode_SilhouetteOnly,
};

struct HandAnalysisConfig {
  HandAnalysisMode mode;
};

struct TeraPluginProcessorConfig {
  uint8_t modeId;
  uint8_t reserved[3];
};

namespace detail {

Result GetIrCameraHandle(IrCameraHandle* pOutHandle, const uint32_t& npadId);
Result FinalizeIrCamera(const IrCameraHandle& handle);
Result GetIrCameraStatus(IrCameraStatus* pOutStatus,
  const IrCameraHandle& handle);
Result CheckFirmwareUpdateNecessity(bool* pOutIsNecessary,
  const IrCameraHandle& handle);
Result StopImageProcessor(const IrCameraHandle& handle);
Result RunMomentProcessor(const IrCameraHandle& handle,
  const MomentProcessorConfig& config);
Result GetMomentProcessorStates(MomentProcessorState* pOutStates,
  int* pOutCount, int count, const IrCameraHandle& handle);
Result RunClusteringProcessor(const IrCameraHandle& handle,
  const ClusteringProcessorConfig& config);
Result GetClusteringProcessorStates(ClusteringProcessorState* pOutStates,
  int* pOutCount, int count, const IrCameraHandle& handle);
Result RunImageTransferProcessor(const IrCameraHandle& handle,
  const ImageTransferProcessorConfig& config, void* buffer, size_t size);
Result RunPointingProcessor(const IrCameraHandle& handle);
Result RunTeraPluginProcessor(const IrCameraHandle& handle,
  const TeraPluginProcessorConfig& config);
Result GetTeraPluginProcessorStates(TeraPluginProcessorState* pOutStates,
  int* pOutCount, int count, int64_t samplingNumber, uint32_t prefixData,
  int prefixBitCount, const IrCameraHandle& handle);
Result RunIrLedProcessor(const IrCameraHandle& handle,
  const IrLedProcessorConfig& config);
Result SetAppletResourceUserId(const applet::AppletResourceUserId& aruid);

}

namespace {

const TimeSpan DefaultClusteringExposureTime = {200000};
const TimeSpan DefaultImageTransferExposureTime = {300000};
const int32_t DefaultClusteringGain = 2;
const int32_t DefaultImageTransferGain = 8;
const int16_t ImageWidth = 320;
const int16_t ImageHeight = 240;
const int32_t DefaultObjectPixelCountMin = 3;
const int32_t DefaultObjectIntensityMin = 150;

}

IrCameraHandle GetIrCameraHandle(const uint32_t& npadId) {
  IrCameraHandle handle = {};
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::GetIrCameraHandle(&handle, npadId));
  return handle;
}

void Finalize(const IrCameraHandle& handle) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::FinalizeIrCamera(handle));
}

IrCameraStatus GetIrCameraStatus(const IrCameraHandle& handle) {
  IrCameraStatus status = {};
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::GetIrCameraStatus(&status, handle));
  return status;
}

Result CheckFirmwareUpdateNecessity(bool* pOutIsNecessary,
  const IrCameraHandle& handle) {
  return detail::CheckFirmwareUpdateNecessity(pOutIsNecessary, handle);
}

void StopImageProcessor(const IrCameraHandle& handle) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::StopImageProcessor(handle));
}

void RunMomentProcessor(const IrCameraHandle& handle,
  const MomentProcessorConfig& config) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::RunMomentProcessor(handle, config));
}

Result GetMomentProcessorStates(MomentProcessorState* pOutStates,
  int* pOutCount, int count, const IrCameraHandle& handle) {
  return detail::GetMomentProcessorStates(pOutStates, pOutCount, count,
    handle);
}

void GetClusteringProcessorDefaultConfig(
  ClusteringProcessorConfig* pOutConfig) {
  pOutConfig->irCameraConfig.exposureTime = DefaultClusteringExposureTime;
  pOutConfig->irCameraConfig.lightTarget = 0;
  pOutConfig->irCameraConfig.gain = DefaultClusteringGain;
  pOutConfig->irCameraConfig.isNegativeImageUsed = false;
  pOutConfig->windowOfInterest = {0, 0, ImageWidth, ImageHeight};
  pOutConfig->objectPixelCountMin = DefaultObjectPixelCountMin;
  pOutConfig->objectPixelCountMax = ImageWidth * ImageHeight;
  pOutConfig->objectIntensityMin = DefaultObjectIntensityMin;
  pOutConfig->isExternalLightFilterEnabled = true;
}

void RunClusteringProcessor(const IrCameraHandle& handle,
  const ClusteringProcessorConfig& config) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::RunClusteringProcessor(handle,
    config));
}

Result GetClusteringProcessorStates(ClusteringProcessorState* pOutStates,
  int* pOutCount, int count, const IrCameraHandle& handle) {
  return detail::GetClusteringProcessorStates(pOutStates, pOutCount, count,
    handle);
}

void GetImageTransferProcessorDefaultConfig(
  ImageTransferProcessorConfig* pOutConfig) {
  pOutConfig->irCameraConfig.exposureTime = DefaultImageTransferExposureTime;
  pOutConfig->irCameraConfig.lightTarget = 0;
  pOutConfig->irCameraConfig.gain = DefaultImageTransferGain;
  pOutConfig->irCameraConfig.isNegativeImageUsed = false;
  pOutConfig->format = ImageTransferProcessorFormat_320x240;
}

void GetImageTransferProcessorDefaultConfig(
  ImageTransferProcessorExConfig* pOutConfig) {
  pOutConfig->irCameraConfig.exposureTime = DefaultImageTransferExposureTime;
  pOutConfig->irCameraConfig.lightTarget = 0;
  pOutConfig->irCameraConfig.gain = DefaultImageTransferGain;
  pOutConfig->irCameraConfig.isNegativeImageUsed = false;
  pOutConfig->origFormat = ImageTransferProcessorFormat_320x240;
  pOutConfig->trimmingFormat = ImageTransferProcessorFormat_320x240;
  pOutConfig->trimmingStartX = 0;
  pOutConfig->trimmingStartY = 0;
}

void RunImageTransferProcessor(const IrCameraHandle& handle,
  const ImageTransferProcessorConfig& config, void* buffer, size_t size) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::RunImageTransferProcessor(handle,
    config, buffer, size));
}

void RunHandAnalysis(const IrCameraHandle& handle,
  const HandAnalysisConfig& config) {
  TeraPluginProcessorConfig teraConfig = {};
  switch (config.mode) {
    case HandAnalysisMode_Silhouette:
      teraConfig.modeId = 5;
      break;
    case HandAnalysisMode_Image:
      teraConfig.modeId = 6;
      break;
    case HandAnalysisMode_SilhouetteAndImage:
      teraConfig.modeId = 7;
      break;
    case HandAnalysisMode_SilhouetteOnly:
      teraConfig.modeId = 10;
      break;
    default:
      nn::detail::UnexpectedDefaultImpl();
  }
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::RunTeraPluginProcessor(handle,
    teraConfig));
}

void RunPointingProcessor(const IrCameraHandle& handle) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::RunPointingProcessor(handle));
}

Result GetTeraPluginProcessorStates(TeraPluginProcessorState* pOutStates,
  int* pOutCount, int count, int64_t samplingNumber, uint32_t prefixData,
  int prefixBitCount, const IrCameraHandle& handle) {
  return detail::GetTeraPluginProcessorStates(pOutStates, pOutCount, count,
    samplingNumber, prefixData, prefixBitCount, handle);
}

void GetIrLedProcessorDefaultConfig(IrLedProcessorConfig* pOutConfig) {
  pOutConfig->lightTarget = 0;
}

void RunIrLedProcessor(const IrCameraHandle& handle,
  const IrLedProcessorConfig& config) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::RunIrLedProcessor(handle, config));
}

Rect MakeRect(int x, int y, int width, int height) {
  return {static_cast<int16_t>(x), static_cast<int16_t>(y),
    static_cast<int16_t>(width), static_cast<int16_t>(height)};
}

namespace system {

void SetAppletResourceUserId(const applet::AppletResourceUserId& aruid) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::SetAppletResourceUserId(aruid));
}

}

}
