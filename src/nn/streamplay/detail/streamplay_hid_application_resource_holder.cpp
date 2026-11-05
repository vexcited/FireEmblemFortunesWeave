#include "nn/streamplay/detail/streamplay_hid_application_resource_holder.hpp"

namespace nn::streamplay::detail {

HidApplicationResourceHolder::HidApplicationResourceHolder(uint32_t handle,
  bool isManaged, const HidSharedMemoryConfig& config) {
  os::AttachSharedMemory(&m_SharedMemory, config.size, handle, isManaged);
  const uint8_t* pAddress = static_cast<const uint8_t*>(
    os::MapSharedMemory(&m_SharedMemory, os::MemoryPermission_ReadOnly));
  m_Accessor.emplace(reinterpret_cast<const HidSharedMemoryFormat*>(
    pAddress + config.offset));
}

HidApplicationResourceHolder::~HidApplicationResourceHolder() {
  m_Accessor.reset();
  os::UnmapSharedMemory(&m_SharedMemory);
  os::DestroySharedMemory(&m_SharedMemory);
}

const HidSharedMemoryAccessor&
HidApplicationResourceHolder::GetSharedMemoryAccessorRef() const {
  return *m_Accessor;
}

}
