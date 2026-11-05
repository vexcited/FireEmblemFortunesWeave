#include <new>
#include <string.h>

#include "nn/diag/diag_abort.hpp"
#include "nn/irsensor/detail/irsensor_status_manager.hpp"

namespace nn::detail {

[[noreturn]] void UnexpectedDefaultImpl();

}

namespace nn::irsensor::detail {

StatusManager::StatusManager() {
  for (DeviceStatus& device : m_Devices) {
    device.status = IrCameraStatus_Unconnected;
    device.internalStatus = IrCameraInternalStatus_Available;
    device.lifoType = LifoType_None;
    memset(&device.lifo, 0, sizeof(device.lifo));
  }

  for (AruidStatus& entry : m_Aruids) {
    entry.aruid = 0;
    entry.status = 0;
  }
}

StatusManager::~StatusManager() {
}

IrCameraStatus StatusManager::GetIrCameraStatus(
  const IrCameraHandle& handle) const {
  uint32_t status =
    m_Devices[GetIrCameraHandlePlayerNumber(handle)].status;

  switch (status) {
    case IrCameraStatus_Available:
    case IrCameraStatus_Unsupported:
    case IrCameraStatus_Unconnected:
      return static_cast<IrCameraStatus>(status);
    default:
      nn::detail::UnexpectedDefaultImpl();
  }
}

void StatusManager::SetIrCameraStatus(const IrCameraHandle& handle,
  IrCameraStatus status) {
  m_Devices[GetIrCameraHandlePlayerNumber(handle)].status = status;
}

IrCameraInternalStatus StatusManager::GetIrCameraInternalStatus(
  const IrCameraHandle& handle) const {
  uint32_t status =
    m_Devices[GetIrCameraHandlePlayerNumber(handle)].internalStatus;

  if (status > 8) {
    nn::detail::UnexpectedDefaultImpl();
  }

  return static_cast<IrCameraInternalStatus>(status);
}

void StatusManager::SetIrCameraInternalStatus(const IrCameraHandle& handle,
  IrCameraInternalStatus status) {
  m_Devices[GetIrCameraHandlePlayerNumber(handle)].internalStatus = status;
}

bool StatusManager::GetIrSensorAruidStatus(AppletStatusFlagSet* pOutStatus,
  const applet::AppletResourceUserId& aruid) {
  for (AruidStatus& entry : m_Aruids) {
    if (entry.aruid == aruid.lower) {
      pOutStatus->_storage[0] = entry.status;
      return true;
    }
  }

  return false;
}

void StatusManager::SetIrSensorAruidStatus(
  const applet::AppletResourceUserId& aruid, AppletStatusFlagSet status) {
  for (AruidStatus& entry : m_Aruids) {
    if (entry.aruid == aruid.lower) {
      entry.status = status._storage[0];
      return;
    }
  }

  NN_ABORT_UNLESS(false);
}

void StatusManager::RegisterIrSensorAruid(
  const applet::AppletResourceUserId& aruid) {
  for (AruidStatus& entry : m_Aruids) {
    if (entry.aruid == 0) {
      entry.aruid = aruid.lower;
      return;
    }
  }

  NN_ABORT_UNLESS(false);
}

void StatusManager::UnregisterIrSensorAruid(
  const applet::AppletResourceUserId& aruid) {
  for (AruidStatus& entry : m_Aruids) {
    if (entry.aruid == aruid.lower) {
      entry.aruid = 0;
      return;
    }
  }

  NN_ABORT_UNLESS(false);
}

void StatusManager::AllocateMomentLifo(const IrCameraHandle& handle) {
  DeviceStatus& device = m_Devices[GetIrCameraHandlePlayerNumber(handle)];
  device.lifo.Clear();
  device.lifoType = LifoType_Moment;
  std::atomic_thread_fence(std::memory_order_seq_cst);
}

void StatusManager::AllocateClusteringLifo(const IrCameraHandle& handle) {
  DeviceStatus& device = m_Devices[GetIrCameraHandlePlayerNumber(handle)];
  device.lifo.Clear();
  device.lifoType = LifoType_Clustering;
  std::atomic_thread_fence(std::memory_order_seq_cst);
}

void StatusManager::AllocatePointingLifo(const IrCameraHandle& handle) {
  DeviceStatus& device = m_Devices[GetIrCameraHandlePlayerNumber(handle)];
  device.lifo.Clear();
  device.lifoType = LifoType_Pointing;
  std::atomic_thread_fence(std::memory_order_seq_cst);
}

void StatusManager::AllocateTeraPluginLifo(const IrCameraHandle& handle) {
  DeviceStatus& device = m_Devices[GetIrCameraHandlePlayerNumber(handle)];
  device.lifo.Clear();
  device.lifoType = LifoType_TeraPlugin;
  std::atomic_thread_fence(std::memory_order_seq_cst);
}

void StatusManager::FreeLifo(const IrCameraHandle& handle) {
  DeviceStatus& device = m_Devices[GetIrCameraHandlePlayerNumber(handle)];

  switch (device.lifoType) {
    case LifoType_None:
      break;
    case LifoType_Moment:
      GetMomentLifo(handle)->~ProcessorStateLifo();
      std::atomic_thread_fence(std::memory_order_seq_cst);
      break;
    case LifoType_Clustering:
      GetClusteringLifo(handle)->~ProcessorStateLifo();
      std::atomic_thread_fence(std::memory_order_seq_cst);
      break;
    case LifoType_Pointing:
      GetPointingLifo(handle)->~ProcessorStateLifo();
      std::atomic_thread_fence(std::memory_order_seq_cst);
      break;
    case LifoType_TeraPlugin:
      GetTeraPluginLifo(handle)->~ProcessorStateLifo();
      std::atomic_thread_fence(std::memory_order_seq_cst);
      break;
    default:
      nn::detail::UnexpectedDefaultImpl();
  }

  device.lifoType = LifoType_None;
  std::atomic_thread_fence(std::memory_order_seq_cst);
}

ProcessorStateLifo* StatusManager::GetLifo(const IrCameraHandle& handle,
  LifoType type) const {
  const DeviceStatus& device =
    m_Devices[GetIrCameraHandlePlayerNumber(handle)];

  if (device.lifoType != type) {
    return nullptr;
  }

  return const_cast<ProcessorStateLifo*>(&device.lifo);
}

ProcessorStateLifo* StatusManager::GetMomentLifo(
  const IrCameraHandle& handle) const {
  return GetLifo(handle, LifoType_Moment);
}

ProcessorStateLifo* StatusManager::GetClusteringLifo(
  const IrCameraHandle& handle) const {
  return GetLifo(handle, LifoType_Clustering);
}

ProcessorStateLifo* StatusManager::GetPointingLifo(
  const IrCameraHandle& handle) const {
  return GetLifo(handle, LifoType_Pointing);
}

ProcessorStateLifo* StatusManager::GetTeraPluginLifo(
  const IrCameraHandle& handle) const {
  return GetLifo(handle, LifoType_TeraPlugin);
}

void StatusManager::ClearLifo(const IrCameraHandle& handle) {
  DeviceStatus& device = m_Devices[GetIrCameraHandlePlayerNumber(handle)];

  switch (device.lifoType) {
    case LifoType_None:
      break;
    case LifoType_Moment:
      GetMomentLifo(handle)->Clear();
      std::atomic_thread_fence(std::memory_order_seq_cst);
      break;
    case LifoType_Clustering:
      GetClusteringLifo(handle)->Clear();
      std::atomic_thread_fence(std::memory_order_seq_cst);
      break;
    case LifoType_Pointing:
      GetPointingLifo(handle)->Clear();
      std::atomic_thread_fence(std::memory_order_seq_cst);
      break;
    case LifoType_TeraPlugin:
      GetTeraPluginLifo(handle)->Clear();
      std::atomic_thread_fence(std::memory_order_seq_cst);
      break;
    default:
      nn::detail::UnexpectedDefaultImpl();
  }

  std::atomic_thread_fence(std::memory_order_seq_cst);
}

StatusManagerHolder::~StatusManagerHolder() {
}

Result StatusManagerHolder::Initialize() {
  NN_RESULT_DO(os::CreateSharedMemory(&m_SharedMemory, 0x8000,
    os::MemoryPermission_ReadWrite, os::MemoryPermission_ReadOnly));

  os::MapSharedMemory(&m_SharedMemory, os::MemoryPermission_ReadWrite);
  m_IsOwner = true;
  new (GetStatusManager()) StatusManager();
  std::atomic_thread_fence(std::memory_order_seq_cst);
  return {};
}

void StatusManagerHolder::Finalize() {
  if (m_IsOwner) {
    GetStatusManager()->~StatusManager();
    std::atomic_thread_fence(std::memory_order_seq_cst);
  }

  m_IsOwner = false;
  if (os::GetSharedMemoryAddress(&m_SharedMemory) != nullptr) {
    os::UnmapSharedMemory(&m_SharedMemory);
  }

  os::DestroySharedMemory(&m_SharedMemory);
}

StatusManager* StatusManagerHolder::GetStatusManager() const {
  return static_cast<StatusManager*>(
    os::GetSharedMemoryAddress(&m_SharedMemory));
}

void StatusManagerHolder::Clear() {
  if (m_IsOwner) {
    new (GetStatusManager()) StatusManager();
    std::atomic_thread_fence(std::memory_order_seq_cst);
  }
}

void StatusManagerHolder::Attach(uint32_t handle, bool managed) {
  os::AttachSharedMemory(&m_SharedMemory, 0x8000, handle, managed);
  os::MapSharedMemory(&m_SharedMemory, os::MemoryPermission_ReadOnly);
}

size_t StatusManagerHolder::GetSharedMemorySize() const {
  return os::GetSharedMemorySize(&m_SharedMemory);
}

uint32_t StatusManagerHolder::GetSharedMemoryHandle() const {
  return os::GetSharedMemoryHandle(&m_SharedMemory);
}

bool StatusManagerHolder::IsSharedMemoryMapped() const {
  return os::GetSharedMemoryAddress(&m_SharedMemory) != nullptr;
}

InternalErrorHandler::InternalErrorHandler() {
  os::detail::ClearMutexMembers(&m_Mutex);
  os::InitializeMutex(&m_Mutex, false, 0);
  for (IrCameraInternalStatus& status : m_Statuses) {
    status = IrCameraInternalStatus_Available;
  }
}

InternalErrorHandler::~InternalErrorHandler() {
  os::FinalizeMutex(&m_Mutex);
}

bool InternalErrorHandler::IsLibraryAppletCallEnabled(
  const IrCameraInternalStatus& status, const IrCameraHandle& handle) {
  os::LockMutex(&m_Mutex);

  IrCameraInternalStatus current = status;
  bool isEnabled = current != IrCameraInternalStatus_Available;
  for (IrCameraInternalStatus stored : m_Statuses) {
    if (stored == current) {
      isEnabled = false;
    }
  }

  m_Statuses[GetIrCameraHandlePlayerNumber(handle)] = current;
  os::UnlockMutex(&m_Mutex);
  return isEnabled;
}

void InternalErrorHandler::SetInternalStatus(
  const IrCameraInternalStatus& status, const IrCameraHandle& handle) {
  os::LockMutex(&m_Mutex);
  m_Statuses[GetIrCameraHandlePlayerNumber(handle)] = status;
  os::UnlockMutex(&m_Mutex);
}

}
