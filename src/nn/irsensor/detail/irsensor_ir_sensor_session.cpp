#include <string.h>

#include "nn/diag/diag_abort.hpp"
#include "nn/irsensor/detail/irsensor_session.hpp"
#include "nn/os/transfer_memory.hpp"

namespace nn::detail {

[[noreturn]] void UnexpectedDefaultImpl();

}

namespace nn::irsensor::detail {

namespace {

constexpr Result ResultIrsensorNotReady = {0x140cd};
constexpr Result ResultIrsensorActivationUpperLimitOver = {0x192cd};
constexpr Result ResultIrsensorDeactivationLowerLimitOver = {0x194cd};
constexpr Result ResultIrsensorAllocationFailed = {0x196cd};
constexpr Result ResultIrsensorTransferMemoryCreationFailed = {0x19acd};

constexpr uint32_t AppletStatusFlag_Foreground = 1u << 0;

}

ProcessorStateLifo* IrSensorSession::GetMomentLifo(
  const IrCameraHandle& handle) const {
  if (m_ProcessorTypes[GetIrCameraHandlePlayerNumber(handle)] !=
        ProcessorType_Moment &&
      m_ProcessorTypes[GetIrCameraHandlePlayerNumber(handle)] !=
        ProcessorType_IrLed) {
    return nullptr;
  }

  return m_StatusManagerHolder.GetStatusManager()->GetMomentLifo(handle);
}

ProcessorStateLifo* IrSensorSession::GetClusteringLifo(
  const IrCameraHandle& handle) const {
  if (m_ProcessorTypes[GetIrCameraHandlePlayerNumber(handle)] !=
      ProcessorType_Clustering) {
    return nullptr;
  }

  return m_StatusManagerHolder.GetStatusManager()->GetClusteringLifo(handle);
}

ProcessorStateLifo* IrSensorSession::GetPointingLifo(
  const IrCameraHandle& handle) const {
  if (m_ProcessorTypes[GetIrCameraHandlePlayerNumber(handle)] !=
      ProcessorType_Pointing) {
    return nullptr;
  }

  return m_StatusManagerHolder.GetStatusManager()->GetPointingLifo(handle);
}

ProcessorStateLifo* IrSensorSession::GetTeraPluginLifo(
  const IrCameraHandle& handle) const {
  if (m_ProcessorTypes[GetIrCameraHandlePlayerNumber(handle)] !=
      ProcessorType_TeraPlugin) {
    return nullptr;
  }

  return m_StatusManagerHolder.GetStatusManager()->GetTeraPluginLifo(handle);
}

IrCameraStatus IrSensorSession::GetIrCameraStatus(
  const IrCameraHandle& handle) {
  return m_StatusManagerHolder.GetStatusManager()->GetIrCameraStatus(handle);
}

IrCameraInternalStatus IrSensorSession::GetIrCameraInternalStatus(
  const IrCameraHandle& handle) {
  return m_StatusManagerHolder.GetStatusManager()->GetIrCameraInternalStatus(
    handle);
}

Result IrSensorSession::CheckFirmwareVersion(const IrCameraHandle& handle,
  const PackedMcuVersion& version) {
  return m_Proxy->CheckFirmwareVersion(m_Aruid, handle, version);
}

bool IrSensorSession::IsAppletForeground() {
  AppletStatusFlagSet status = {};
  bool isFound = m_StatusManagerHolder.GetStatusManager()
    ->GetIrSensorAruidStatus(&status, m_Aruid);

  return !isFound || (status._storage[0] & AppletStatusFlag_Foreground) != 0;
}

void IrSensorSession::AttachSharedMemoryIfNotMapped() {
  if (!m_StatusManagerHolder.IsSharedMemoryMapped()) {
    NN_ABORT_UNLESS_RESULT_SUCCESS(Activate(m_FunctionLevel));
  }
}

bool IrSensorSession::IsSharedMemoryMapped() {
  return m_StatusManagerHolder.IsSharedMemoryMapped();
}

void IrSensorSession::SetFunctionLevel(const IrCameraHandle& handle,
  const IrSensorFunctionLevel& level) {
  m_FunctionLevel = level;
}

void IrSensorSession::GetFunctionLevel(IrSensorFunctionLevel* pOutLevel,
  const IrCameraHandle& handle) {
  *pOutLevel = m_FunctionLevel;
}

bool IrSensorSession::IsOwnerExclusionViolated(const IrCameraHandle& handle,
  bool isExclusive) {
  OwnerType owner = m_Owners[GetIrCameraHandlePlayerNumber(handle)];

  if (isExclusive) {
    return owner != OwnerType_None;
  }

  return owner == OwnerType_Exclusive;
}

void IrSensorSession::SetOwner(const IrCameraHandle& handle,
  bool isExclusive) {
  m_Owners[GetIrCameraHandlePlayerNumber(handle)] =
    isExclusive ? OwnerType_Exclusive : OwnerType_Shared;
}

void IrSensorSession::ResetOwner(const IrCameraHandle& handle) {
  m_Owners[GetIrCameraHandlePlayerNumber(handle)] = OwnerType_None;
}

Result IrSensorSession::StopImageProcessorAsync(const IrCameraHandle& handle) {
  NN_RESULT_DO(m_Proxy->StopImageProcessorAsync(m_Aruid, handle));

  m_ProcessorTypes[GetIrCameraHandlePlayerNumber(handle)] =
    ProcessorType_None;
  return {};
}

bool IrSensorSession::IsLibraryAppletCallEnabled(
  const IrCameraInternalStatus& status, const IrCameraHandle& handle) {
  return m_InternalErrorHandler.IsLibraryAppletCallEnabled(status, handle);
}

void IrSensorSession::ResetInternalStatusForLibraryAppletCall(
  const IrCameraHandle& handle) {
  IrCameraInternalStatus status = IrCameraInternalStatus_Available;
  m_InternalErrorHandler.SetInternalStatus(status, handle);
}

bool IrSensorSession::IsProcessorStopped(const IrCameraHandle& handle) {
  return m_ProcessorTypes[GetIrCameraHandlePlayerNumber(handle)] ==
    ProcessorType_None;
}

bool IrSensorSession::IsVersionCheckRequestEnabled(
  const IrCameraHandle& handle) {
  return m_IsVersionCheckRequestEnabled[GetIrCameraHandlePlayerNumber(handle)];
}

void IrSensorSession::SetVersionCheckRequestEnableFlag(
  const IrCameraHandle& handle, bool isEnabled) {
  m_IsVersionCheckRequestEnabled[GetIrCameraHandlePlayerNumber(handle)] =
    isEnabled;
}

Rect IrSensorSession::GetWindowOfInterestConfig(const IrCameraHandle& handle) {
  return m_WindowOfInterests[GetIrCameraHandlePlayerNumber(handle)];
}

Result IrSensorSession::RunMomentProcessor(const IrCameraHandle& handle,
  const PackedMomentProcessorConfig& config) {
  int index = GetIrCameraHandlePlayerNumber(handle);

  if (m_FunctionLevel.level >= 1 &&
      m_ProcessorTypes[index] != ProcessorType_None &&
      m_ProcessorTypes[index] != ProcessorType_Moment) {
    NN_RESULT_DO(m_Proxy->SuspendImageProcessor(m_Aruid, handle));
  }

  NN_RESULT_DO(m_Proxy->RunMomentProcessor(m_Aruid, handle, config));

  m_IsNegativeImageUsed[index] = config.base.isNegativeImageUsed;
  m_WindowOfInterests[index] = config.windowOfInterest;
  m_ProcessorTypes[index] = ProcessorType_Moment;
  return {};
}

Result IrSensorSession::RunClusteringProcessor(const IrCameraHandle& handle,
  const PackedClusteringProcessorConfig& config) {
  int index = GetIrCameraHandlePlayerNumber(handle);

  if (m_FunctionLevel.level >= 1 &&
      m_ProcessorTypes[index] != ProcessorType_None &&
      m_ProcessorTypes[index] != ProcessorType_Clustering) {
    NN_RESULT_DO(m_Proxy->SuspendImageProcessor(m_Aruid, handle));
  }

  NN_RESULT_DO(m_Proxy->RunClusteringProcessor(m_Aruid, handle, config));

  m_IsNegativeImageUsed[index] = config.base.isNegativeImageUsed;
  m_WindowOfInterests[index] = config.windowOfInterest;
  m_ProcessorTypes[index] = ProcessorType_Clustering;
  return {};
}

Result IrSensorSession::RunImageTransferProcessor(const IrCameraHandle& handle,
  const PackedImageTransferProcessorConfig& config, void* workBuffer,
  size_t workBufferSize) {
  int index = GetIrCameraHandlePlayerNumber(handle);

  if (m_FunctionLevel.level >= 1 &&
      m_ProcessorTypes[index] != ProcessorType_None) {
    NN_RESULT_DO(m_Proxy->SuspendImageProcessor(m_Aruid, handle));
  }

  os::TransferMemoryType transferMemory = {};
  if (os::CreateTransferMemory(&transferMemory, workBuffer, workBufferSize,
        os::MemoryPermission_None).IsFailure()) {
    return ResultIrsensorTransferMemoryCreationFailed;
  }

  uint32_t transferMemoryHandle = os::DetachTransferMemory(&transferMemory);
  os::DestroyTransferMemory(&transferMemory);

  NN_RESULT_DO(m_Proxy->RunImageTransferProcessor(m_Aruid, handle, config,
    sf::NativeHandle(transferMemoryHandle, true), workBufferSize));

  m_ImageFormats[index] =
    static_cast<ImageTransferProcessorFormat>(config.format);
  m_IsNegativeImageUsed[index] = config.base.isNegativeImageUsed;
  m_ProcessorTypes[index] = ProcessorType_ImageTransfer;
  return {};
}

Result IrSensorSession::RunImageTransferProcessor(const IrCameraHandle& handle,
  const PackedImageTransferProcessorExConfig& config, void* workBuffer,
  size_t workBufferSize) {
  int index = GetIrCameraHandlePlayerNumber(handle);

  if (m_ProcessorTypes[index] != ProcessorType_None) {
    NN_RESULT_DO(m_Proxy->SuspendImageProcessor(m_Aruid, handle));
  }

  os::TransferMemoryType transferMemory = {};
  if (os::CreateTransferMemory(&transferMemory, workBuffer, workBufferSize,
        os::MemoryPermission_None).IsFailure()) {
    return ResultIrsensorTransferMemoryCreationFailed;
  }

  uint32_t transferMemoryHandle = os::DetachTransferMemory(&transferMemory);
  os::DestroyTransferMemory(&transferMemory);

  NN_RESULT_DO(m_Proxy->RunImageTransferExProcessor(m_Aruid, handle, config,
    sf::NativeHandle(transferMemoryHandle, true), workBufferSize));

  m_ImageFormats[index] =
    static_cast<ImageTransferProcessorFormat>(config.trimmingFormat);
  m_IsNegativeImageUsed[index] = config.base.isNegativeImageUsed;
  m_ProcessorTypes[index] = ProcessorType_ImageTransfer;
  return {};
}

Result IrSensorSession::RunPointingProcessor(const IrCameraHandle& handle,
  const PackedPointingProcessorConfig& config) {
  int index = GetIrCameraHandlePlayerNumber(handle);

  if (m_FunctionLevel.level >= 1 &&
      m_ProcessorTypes[index] != ProcessorType_None &&
      m_ProcessorTypes[index] != ProcessorType_Pointing) {
    NN_RESULT_DO(m_Proxy->SuspendImageProcessor(m_Aruid, handle));
  }

  NN_RESULT_DO(m_Proxy->RunPointingProcessor(m_Aruid, handle, config));

  m_ProcessorTypes[index] = ProcessorType_Pointing;
  return {};
}

Result IrSensorSession::RunTeraPluginProcessor(const IrCameraHandle& handle,
  const PackedTeraPluginProcessorConfig& config) {
  int index = GetIrCameraHandlePlayerNumber(handle);

  if (m_FunctionLevel.level >= 1 &&
      m_ProcessorTypes[index] != ProcessorType_None) {
    NN_RESULT_DO(m_Proxy->SuspendImageProcessor(m_Aruid, handle));
  }

  switch (m_FunctionLevel.level) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
      break;
    default:
      nn::detail::UnexpectedDefaultImpl();
  }

  NN_RESULT_DO(m_Proxy->RunTeraPluginProcessor(m_Aruid, handle, config));

  m_ProcessorTypes[index] = ProcessorType_TeraPlugin;
  return {};
}

Result IrSensorSession::RunIrLedProcessor(const IrCameraHandle& handle,
  const PackedIrLedProcessorConfig& config) {
  int index = GetIrCameraHandlePlayerNumber(handle);

  if (m_ProcessorTypes[index] != ProcessorType_None &&
      m_ProcessorTypes[index] != ProcessorType_IrLed) {
    NN_RESULT_DO(m_Proxy->SuspendImageProcessor(m_Aruid, handle));
  }

  NN_RESULT_DO(m_Proxy->RunIrLedProcessor(m_Aruid, handle, config));

  m_ProcessorTypes[index] = ProcessorType_IrLed;
  return {};
}

Result IrSensorSession::GetImageTransferState(const IrCameraHandle& handle,
  ImageTransferProcessorState* pOutState, void* buffer, size_t size) {
  int index = GetIrCameraHandlePlayerNumber(handle);

  if (m_ProcessorTypes[index] != ProcessorType_ImageTransfer) {
    return ResultIrsensorNotReady;
  }

  NN_RESULT_DO(m_Proxy->GetImageTransferProcessorState(m_Aruid, pOutState,
    sf::OutBuffer(buffer, size), handle));

  if (m_IsNegativeImageUsed[index]) {
    size_t imageSize = GetImageSize(m_ImageFormats[index]);
    uint8_t* image = static_cast<uint8_t*>(buffer);
    for (size_t i = 0; i < imageSize; i++) {
      image[i] = ~image[i];
    }
  }

  return {};
}

size_t IrSensorSession::GetImageSize(ImageTransferProcessorFormat format) {
  switch (format) {
    case ImageTransferProcessorFormat_320x240:
      return 320 * 240;
    case ImageTransferProcessorFormat_160x120:
      return 160 * 120;
    case ImageTransferProcessorFormat_80x60:
      return 80 * 60;
    case ImageTransferProcessorFormat_40x30:
      return 40 * 30;
    case ImageTransferProcessorFormat_20x15:
      return 20 * 15;
    default:
      nn::detail::UnexpectedDefaultImpl();
  }
}

void IrSensorSession::GetClusteringProcessorStateDefault(
  ClusteringProcessorState* pOutState, const IrCameraHandle& handle) {
  pOutState->objectCount = 0;
  pOutState->samplingNumber = 0;
  pOutState->timeStampNanoSeconds = 0;
  pOutState->ambientNoiseLevel = IrCameraAmbientNoiseLevel_Unknown;
}

void IrSensorSession::GetImageTransferProcessorStateDefault(
  ImageTransferProcessorState* pOutState, void* buffer, size_t size,
  const IrCameraHandle& handle) {
  int index = GetIrCameraHandlePlayerNumber(handle);
  pOutState->samplingNumber = 0;
  pOutState->ambientNoiseLevel = IrCameraAmbientNoiseLevel_Unknown;

  memset(buffer, m_IsNegativeImageUsed[index] ? -1 : 0,
    GetImageSize(m_ImageFormats[index]));
}

void IrSensorSession::GetPointingProcessorStateDefault(
  PointingProcessorMarkerState* pOutState, const IrCameraHandle& handle) {
  pOutState->data[1].pointingStatus = 0;
  pOutState->data[2].pointingStatus = 0;
  pOutState->samplingNumber = 0;
  pOutState->timeStampNanoSeconds = 0;
  pOutState->data[0].pointingStatus = 0;
}

void IrSensorSession::GetTeraPluginProcessorStateDefault(
  TeraPluginProcessorState* pOutState, const IrCameraHandle& handle) {
  pOutState->samplingNumber = 0;
  pOutState->timeStampNanoSeconds = 0;
  pOutState->ambientNoiseLevel = IrCameraAmbientNoiseLevel_Unknown;
}

Result IrSensorSession::ThrowResultActivationUpperLimitOver() {
  return ResultIrsensorActivationUpperLimitOver;
}

Result IrSensorSession::ThrowResultDeactivationLowerLimitOver() {
  return ResultIrsensorDeactivationLowerLimitOver;
}

Result IrSensorSession::ThrowResultAllocationFailed() {
  return ResultIrsensorAllocationFailed;
}

Result IrSensorSession::CreateProxy() {
  return CreateIrSensorServerProxy(&m_Proxy);
}

void IrSensorSession::DestroyProxy() {
  m_Proxy.Reset();
}

Result IrSensorSession::ActivateService() {
  return m_Proxy->ActivateIrsensor(m_Aruid);
}

Result IrSensorSession::ActivateServiceWithFunctionLevel(
  const IrSensorFunctionLevel& level) {
  PackedFunctionLevel packedLevel = {static_cast<uint8_t>(level.level)};
  return m_Proxy->ActivateIrsensorWithFunctionLevel(m_Aruid, packedLevel);
}

Result IrSensorSession::DeactivateService() {
  return m_Proxy->DeactivateIrsensor(m_Aruid);
}

Result IrSensorSession::GetSharedMemoryHandle(sf::NativeHandle* pOutHandle) {
  return m_Proxy->GetIrsensorSharedMemoryHandle(pOutHandle, m_Aruid);
}

void IrSensorSession::AttachSharedMemory(uint32_t handle, bool managed) {
  m_StatusManagerHolder.Attach(handle, managed);
}

void IrSensorSession::FinalizeSharedMemory() {
  m_StatusManagerHolder.Finalize();
}

}
