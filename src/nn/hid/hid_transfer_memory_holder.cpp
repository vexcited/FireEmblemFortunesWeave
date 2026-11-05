#include <mutex>

#include "nn/diag/diag_abort.hpp"
#include "nn/hid/hid_transfer_memory_holder.hpp"

extern "C" int memset_s(void* pDestination, size_t destinationSize, int value,
  size_t size);

namespace nn::hid::utility {

namespace {

using Lock = std::lock_guard<os::SdkMutex>;

}

TransferMemoryHolder::TransferMemoryHolder()
  : m_Mutex(), m_Aruid(), m_pMappedAddress(nullptr), m_Size(0) {}

TransferMemoryHolder::~TransferMemoryHolder() {
  Finalize();
}

void TransferMemoryHolder::Initialize(uint32_t&& handle, size_t size,
  bool isManaged, os::MemoryPermission permission,
  const applet::AppletResourceUserId& aruid) {
  Lock lock(m_Mutex);
  os::AttachTransferMemory(&m_TransferMemory, size, handle, isManaged);
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    os::MapTransferMemory(&m_pMappedAddress, &m_TransferMemory, permission));
  m_Aruid.emplace(aruid);
  m_Size = size;
}

// The lent memory is wiped before it goes back to its owner.
void TransferMemoryHolder::Finalize() {
  Lock lock(m_Mutex);
  if (!IsInitializedImpl()) {
    return;
  }

  memset_s(m_pMappedAddress, m_Size, 0, m_Size);
  os::UnmapTransferMemory(&m_TransferMemory);
  os::DestroyTransferMemory(&m_TransferMemory);
  m_Aruid.reset();
  m_pMappedAddress = nullptr;
  m_Size = 0;
}

bool TransferMemoryHolder::IsInitialized() const {
  Lock lock(m_Mutex);
  return IsInitializedImpl();
}

bool TransferMemoryHolder::IsInitializedImpl() const {
  return m_Aruid.has_value();
}

std::optional<applet::AppletResourceUserId>
TransferMemoryHolder::GetAruid() const {
  Lock lock(m_Mutex);
  return m_Aruid;
}

void* TransferMemoryHolder::GetMappedAddress() {
  Lock lock(m_Mutex);
  return IsInitializedImpl() ? m_pMappedAddress : nullptr;
}

size_t TransferMemoryHolder::GetSize() const {
  return IsInitializedImpl() ? m_Size : 0;
}

}
