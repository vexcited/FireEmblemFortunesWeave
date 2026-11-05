#pragma once

#include <atomic>
#include <stddef.h>
#include <stdint.h>

#include "nn/applet/applet_types.hpp"
#include "nn/irsensor/detail/irsensor_server.hpp"
#include "nn/irsensor/detail/irsensor_status_manager.hpp"
#include "nn/os/mutex.hpp"
#include "nn/result.hpp"

namespace nn::irsensor::detail {

class Session {
public:
  Session();
  virtual ~Session();

  Result Activate(const IrSensorFunctionLevel& level);
  Result Deactivate();

protected:
  virtual Result ThrowResultActivationUpperLimitOver() = 0;
  virtual Result ThrowResultDeactivationLowerLimitOver() = 0;
  virtual Result ThrowResultAllocationFailed() = 0;
  virtual Result CreateProxy() = 0;
  virtual void DestroyProxy() = 0;
  virtual Result ActivateService() = 0;
  virtual Result ActivateServiceWithFunctionLevel(
    const IrSensorFunctionLevel& level) = 0;
  virtual Result DeactivateService() = 0;
  virtual Result GetSharedMemoryHandle(sf::NativeHandle* pOutHandle) = 0;
  virtual bool IsSharedMemoryMapped() = 0;
  virtual void AttachSharedMemory(uint32_t handle, bool managed) = 0;
  virtual void FinalizeSharedMemory() = 0;

private:
  int m_ActivationCountMax;
  std::atomic<int> m_ActivationCount;
  os::MutexType m_Mutex;
};

class IrSensorSession : public Session {
public:
  explicit IrSensorSession(const applet::AppletResourceUserId& aruid);
  ~IrSensorSession() override;

  ProcessorStateLifo* GetMomentLifo(const IrCameraHandle& handle) const;
  ProcessorStateLifo* GetClusteringLifo(const IrCameraHandle& handle) const;
  ProcessorStateLifo* GetPointingLifo(const IrCameraHandle& handle) const;
  ProcessorStateLifo* GetTeraPluginLifo(const IrCameraHandle& handle) const;
  IrCameraStatus GetIrCameraStatus(const IrCameraHandle& handle);
  IrCameraInternalStatus GetIrCameraInternalStatus(
    const IrCameraHandle& handle);
  Result CheckFirmwareVersion(const IrCameraHandle& handle,
    const PackedMcuVersion& version);
  bool IsAppletForeground();
  void AttachSharedMemoryIfNotMapped();
  bool IsSharedMemoryMapped() override;
  void SetFunctionLevel(const IrCameraHandle& handle,
    const IrSensorFunctionLevel& level);
  void GetFunctionLevel(IrSensorFunctionLevel* pOutLevel,
    const IrCameraHandle& handle);
  bool IsOwnerExclusionViolated(const IrCameraHandle& handle,
    bool isExclusive);
  void SetOwner(const IrCameraHandle& handle, bool isExclusive);
  void ResetOwner(const IrCameraHandle& handle);
  Result StopImageProcessorAsync(const IrCameraHandle& handle);
  bool IsLibraryAppletCallEnabled(const IrCameraInternalStatus& status,
    const IrCameraHandle& handle);
  void ResetInternalStatusForLibraryAppletCall(const IrCameraHandle& handle);
  bool IsProcessorStopped(const IrCameraHandle& handle);
  bool IsVersionCheckRequestEnabled(const IrCameraHandle& handle);
  void SetVersionCheckRequestEnableFlag(const IrCameraHandle& handle,
    bool isEnabled);
  Rect GetWindowOfInterestConfig(const IrCameraHandle& handle);
  Result RunMomentProcessor(const IrCameraHandle& handle,
    const PackedMomentProcessorConfig& config);
  Result RunClusteringProcessor(const IrCameraHandle& handle,
    const PackedClusteringProcessorConfig& config);
  Result RunImageTransferProcessor(const IrCameraHandle& handle,
    const PackedImageTransferProcessorConfig& config, void* workBuffer,
    size_t workBufferSize);
  Result RunImageTransferProcessor(const IrCameraHandle& handle,
    const PackedImageTransferProcessorExConfig& config, void* workBuffer,
    size_t workBufferSize);
  Result RunPointingProcessor(const IrCameraHandle& handle,
    const PackedPointingProcessorConfig& config);
  Result RunTeraPluginProcessor(const IrCameraHandle& handle,
    const PackedTeraPluginProcessorConfig& config);
  Result RunIrLedProcessor(const IrCameraHandle& handle,
    const PackedIrLedProcessorConfig& config);
  Result GetImageTransferState(const IrCameraHandle& handle,
    ImageTransferProcessorState* pOutState, void* buffer, size_t size);
  size_t GetImageSize(ImageTransferProcessorFormat format);
  void GetClusteringProcessorStateDefault(ClusteringProcessorState* pOutState,
    const IrCameraHandle& handle);
  void GetImageTransferProcessorStateDefault(
    ImageTransferProcessorState* pOutState, void* buffer, size_t size,
    const IrCameraHandle& handle);
  void GetPointingProcessorStateDefault(
    PointingProcessorMarkerState* pOutState, const IrCameraHandle& handle);
  void GetTeraPluginProcessorStateDefault(
    TeraPluginProcessorState* pOutState, const IrCameraHandle& handle);

protected:
  Result ThrowResultActivationUpperLimitOver() override;
  Result ThrowResultDeactivationLowerLimitOver() override;
  Result ThrowResultAllocationFailed() override;
  Result CreateProxy() override;
  void DestroyProxy() override;
  Result ActivateService() override;
  Result ActivateServiceWithFunctionLevel(
    const IrSensorFunctionLevel& level) override;
  Result DeactivateService() override;
  Result GetSharedMemoryHandle(sf::NativeHandle* pOutHandle) override;
  void AttachSharedMemory(uint32_t handle, bool managed) override;
  void FinalizeSharedMemory() override;

private:
  static constexpr int DeviceCountMax = StatusManager::DeviceCountMax;

  enum ProcessorType : int32_t {
    ProcessorType_None,
    ProcessorType_Moment,
    ProcessorType_Clustering,
    ProcessorType_ImageTransfer,
    ProcessorType_Pointing,
    ProcessorType_TeraPlugin,
    ProcessorType_IrLed,
  };

  enum OwnerType : int32_t {
    OwnerType_None,
    OwnerType_Shared,
    OwnerType_Exclusive,
  };

  sf::SharedPointer<IIrSensorServer> m_Proxy;
  applet::AppletResourceUserId m_Aruid;
  StatusManagerHolder m_StatusManagerHolder;
  ProcessorType m_ProcessorTypes[DeviceCountMax];
  ImageTransferProcessorFormat m_ImageFormats[DeviceCountMax];
  bool m_IsNegativeImageUsed[DeviceCountMax];
  Rect m_WindowOfInterests[DeviceCountMax];
  bool m_IsVersionCheckRequestEnabled[DeviceCountMax];
  InternalErrorHandler m_InternalErrorHandler;
  IrSensorFunctionLevel m_FunctionLevel;
  OwnerType m_Owners[DeviceCountMax];
};

Result CreateIrSensorServerProxy(sf::SharedPointer<IIrSensorServer>* pOut);

}
