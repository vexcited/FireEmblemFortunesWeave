#include "nn/hid/server/hid_shared_memory_holder.hpp"

namespace nn::hid::server {

namespace {

constexpr size_t SharedMemorySize = 0x40000;
constexpr size_t SharedMemoryAlignment = 0x1000;
constexpr size_t SharedMemoryFormatStatusOffset = 0x3e2c0;

size_t AlignSharedMemorySize(size_t size) {
  return (size + SharedMemoryAlignment - 1) & ~(SharedMemoryAlignment - 1);
}

}

Result InitializeSharedMemoryForRingLifo(os::SharedMemoryType* sharedMemory,
  size_t size) {
  const Result result = os::CreateSharedMemory(sharedMemory,
    AlignSharedMemorySize(size), os::MemoryPermission_ReadWrite,
    os::MemoryPermission_ReadOnly);
  if (result.IsFailure()) {
    return result;
  }
  os::MapSharedMemory(sharedMemory, os::MemoryPermission_ReadWrite);
  return result;
}

void AttachSharedMemoryForRingLifo(os::SharedMemoryType* sharedMemory,
  size_t size, uint32_t handle, bool managed) {
  os::AttachSharedMemory(sharedMemory, AlignSharedMemorySize(size), handle,
    managed);
  os::MapSharedMemory(sharedMemory, os::MemoryPermission_ReadOnly);
}

void FinalizeSharedMemoryForRingLifo(os::SharedMemoryType* sharedMemory) {
  if (os::GetSharedMemoryAddress(sharedMemory) != nullptr) {
    os::UnmapSharedMemory(sharedMemory);
  }
  os::DestroySharedMemory(sharedMemory);
}

void FinalizeSharedMemoryFormat(SharedMemoryFormat* pFormat) {
  *reinterpret_cast<int32_t*>(reinterpret_cast<uint8_t*>(pFormat) +
    SharedMemoryFormatStatusOffset) = 0;
}

SharedMemoryHolder::SharedMemoryHolder() :
  m_IsOwner(true), m_IsCreated(false), m_IsMapped(false), m_SharedMemory(),
  m_pAddress(nullptr) {}

SharedMemoryHolder::SharedMemoryHolder(SharedMemoryHolder&& other) :
  m_IsOwner(other.m_IsOwner), m_IsCreated(other.m_IsCreated),
  m_IsMapped(other.m_IsMapped), m_SharedMemory(other.m_SharedMemory),
  m_pAddress(other.m_pAddress) {
  other.m_IsOwner = false;
}

Result SharedMemoryHolder::Initialize() {
  const Result result = os::CreateSharedMemory(&m_SharedMemory,
    SharedMemorySize, os::MemoryPermission_ReadWrite,
    os::MemoryPermission_ReadOnly);
  if (result.IsFailure()) {
    return result;
  }
  os::MapSharedMemory(&m_SharedMemory, os::MemoryPermission_ReadWrite);
  m_IsCreated = true;
  m_IsMapped = true;
  m_pAddress = static_cast<SharedMemoryFormat*>(
    os::GetSharedMemoryAddress(&m_SharedMemory));
  return result;
}

void SharedMemoryHolder::Attach(uint32_t handle, bool managed) {
  os::AttachSharedMemory(&m_SharedMemory, SharedMemorySize, handle, managed);
  os::MapSharedMemory(&m_SharedMemory, os::MemoryPermission_ReadOnly);
  m_IsMapped = true;
  m_pAddress = static_cast<SharedMemoryFormat*>(
    os::GetSharedMemoryAddress(&m_SharedMemory));
}

void SharedMemoryHolder::Finalize() {
  if (m_pAddress != nullptr) {
    os::UnmapSharedMemory(&m_SharedMemory);
  }
  m_IsCreated = false;
  m_IsMapped = false;
  m_pAddress = nullptr;
  os::DestroySharedMemory(&m_SharedMemory);
}

bool SharedMemoryHolder::IsMapped() const {
  return m_IsMapped;
}

uint32_t SharedMemoryHolder::GetSharedMemoryHandle() const {
  return os::GetSharedMemoryHandle(&m_SharedMemory);
}

SharedMemoryFormat* SharedMemoryHolder::GetAddress() const {
  return m_pAddress;
}

}
