#pragma once

#include <atomic>
#include <stddef.h>
#include <stdint.h>

#include "nn/applet/applet_types.hpp"
#include "nn/irsensor/irsensor_types.hpp"
#include "nn/os/mutex.hpp"
#include "nn/os/shared_memory.hpp"
#include "nn/result.hpp"
#include "nn/util/bit_flag_set.hpp"

namespace nn::irsensor::detail {

void MakeIrCameraHandle(IrCameraHandle* pOutHandle, const uint32_t& npadId);
uint8_t GetIrCameraHandleDeviceType(const IrCameraHandle& handle);
int GetIrCameraHandlePlayerNumber(const IrCameraHandle& handle);
applet::AppletResourceUserId GetAppletResourceUserId();

struct AppletStatusFlag;

using AppletStatusFlagSet = util::BitFlagSet<32, AppletStatusFlag>;

class ProcessorStateLifo {
public:
  void Clear() {
    m_Count = 0;
    m_Tail = 0;
  }

private:
  std::atomic<uint64_t> m_Tail;
  std::atomic<uint32_t> m_Count;
  uint8_t m_Storage[3604];
};

class StatusManager {
public:
  static constexpr int DeviceCountMax = 9;
  static constexpr int AruidCountMax = 4;

  StatusManager();
  ~StatusManager();

  IrCameraStatus GetIrCameraStatus(const IrCameraHandle& handle) const;
  void SetIrCameraStatus(const IrCameraHandle& handle, IrCameraStatus status);
  IrCameraInternalStatus GetIrCameraInternalStatus(
    const IrCameraHandle& handle) const;
  void SetIrCameraInternalStatus(const IrCameraHandle& handle,
    IrCameraInternalStatus status);
  bool GetIrSensorAruidStatus(AppletStatusFlagSet* pOutStatus,
    const applet::AppletResourceUserId& aruid);
  void SetIrSensorAruidStatus(const applet::AppletResourceUserId& aruid,
    AppletStatusFlagSet status);
  void RegisterIrSensorAruid(const applet::AppletResourceUserId& aruid);
  void UnregisterIrSensorAruid(const applet::AppletResourceUserId& aruid);
  void AllocateMomentLifo(const IrCameraHandle& handle);
  void AllocateClusteringLifo(const IrCameraHandle& handle);
  void AllocatePointingLifo(const IrCameraHandle& handle);
  void AllocateTeraPluginLifo(const IrCameraHandle& handle);
  void FreeLifo(const IrCameraHandle& handle);
  ProcessorStateLifo* GetMomentLifo(const IrCameraHandle& handle) const;
  ProcessorStateLifo* GetClusteringLifo(const IrCameraHandle& handle) const;
  ProcessorStateLifo* GetPointingLifo(const IrCameraHandle& handle) const;
  ProcessorStateLifo* GetTeraPluginLifo(const IrCameraHandle& handle) const;
  void ClearLifo(const IrCameraHandle& handle);

private:
  enum LifoType : uint32_t {
    LifoType_None = 0,
    LifoType_Moment = 1,
    LifoType_Clustering = 2,
    LifoType_Pointing = 4,
    LifoType_TeraPlugin = 5,
  };

  struct DeviceStatus {
    std::atomic<uint32_t> status;
    std::atomic<uint32_t> internalStatus;
    std::atomic<uint32_t> lifoType;
    ProcessorStateLifo lifo;
  };

  struct AruidStatus {
    std::atomic<uint64_t> aruid;
    std::atomic<uint32_t> status;
  };

  ProcessorStateLifo* GetLifo(const IrCameraHandle& handle,
    LifoType type) const;

  DeviceStatus m_Devices[DeviceCountMax];
  AruidStatus m_Aruids[AruidCountMax];
};

class StatusManagerHolder {
public:
  StatusManagerHolder();
  ~StatusManagerHolder();

  Result Initialize();
  void Finalize();
  StatusManager* GetStatusManager() const;
  void Clear();
  void Attach(uint32_t handle, bool managed);
  size_t GetSharedMemorySize() const;
  uint32_t GetSharedMemoryHandle() const;
  bool IsSharedMemoryMapped() const;

private:
  bool m_IsOwner;
  os::SharedMemoryType m_SharedMemory;
};

class InternalErrorHandler {
public:
  InternalErrorHandler();
  ~InternalErrorHandler();

  bool IsLibraryAppletCallEnabled(const IrCameraInternalStatus& status,
    const IrCameraHandle& handle);
  void SetInternalStatus(const IrCameraInternalStatus& status,
    const IrCameraHandle& handle);

private:
  os::MutexType m_Mutex;
  IrCameraInternalStatus m_Statuses[StatusManager::DeviceCountMax];
};

}
