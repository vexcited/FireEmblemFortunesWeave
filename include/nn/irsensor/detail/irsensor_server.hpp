#pragma once

#include "nn/applet/applet_types.hpp"
#include "nn/irsensor/irsensor_types.hpp"
#include "nn/result.hpp"
#include "nn/sf/native_handle.hpp"
#include "nn/sf/sf_buffers.hpp"
#include "nn/sf/shared_pointer.hpp"

namespace nn::irsensor {

class IIrSensorServer : public sf::IServiceObject {
public:
  virtual void Reserved2() = 0;
  virtual void Reserved3() = 0;
  virtual Result ActivateIrsensor(applet::AppletResourceUserId aruid) = 0;
  virtual Result DeactivateIrsensor(applet::AppletResourceUserId aruid) = 0;
  virtual Result GetIrsensorSharedMemoryHandle(sf::NativeHandle* pOutHandle,
    applet::AppletResourceUserId aruid) = 0;
  virtual Result StopImageProcessor(applet::AppletResourceUserId aruid,
    IrCameraHandle handle) = 0;
  virtual Result RunMomentProcessor(applet::AppletResourceUserId aruid,
    IrCameraHandle handle, const PackedMomentProcessorConfig& config) = 0;
  virtual Result RunClusteringProcessor(applet::AppletResourceUserId aruid,
    IrCameraHandle handle, const PackedClusteringProcessorConfig& config) = 0;
  virtual Result RunImageTransferProcessor(applet::AppletResourceUserId aruid,
    IrCameraHandle handle, const PackedImageTransferProcessorConfig& config,
    sf::NativeHandle&& transferMemory, uint64_t size) = 0;
  virtual Result GetImageTransferProcessorState(
    applet::AppletResourceUserId aruid,
    ImageTransferProcessorState* pOutState, const sf::OutBuffer& buffer,
    IrCameraHandle handle) = 0;
  virtual Result RunTeraPluginProcessor(applet::AppletResourceUserId aruid,
    IrCameraHandle handle, PackedTeraPluginProcessorConfig config) = 0;
  virtual Result GetNpadIrCameraHandle(IrCameraHandle* pOutHandle,
    uint32_t npadId) = 0;
  virtual Result RunPointingProcessor(applet::AppletResourceUserId aruid,
    IrCameraHandle handle, const PackedPointingProcessorConfig& config) = 0;
  virtual Result SuspendImageProcessor(applet::AppletResourceUserId aruid,
    IrCameraHandle handle) = 0;
  virtual Result CheckFirmwareVersion(applet::AppletResourceUserId aruid,
    IrCameraHandle handle, PackedMcuVersion version) = 0;
  virtual Result SetFunctionLevel(applet::AppletResourceUserId aruid,
    PackedFunctionLevel level) = 0;
  virtual Result RunImageTransferExProcessor(
    applet::AppletResourceUserId aruid, IrCameraHandle handle,
    const PackedImageTransferProcessorExConfig& config,
    sf::NativeHandle&& transferMemory, uint64_t size) = 0;
  virtual Result RunIrLedProcessor(applet::AppletResourceUserId aruid,
    IrCameraHandle handle, PackedIrLedProcessorConfig config) = 0;
  virtual Result StopImageProcessorAsync(applet::AppletResourceUserId aruid,
    IrCameraHandle handle) = 0;
  virtual Result ActivateIrsensorWithFunctionLevel(
    applet::AppletResourceUserId aruid, PackedFunctionLevel level) = 0;
};

}
