#include "nn/hid/detail/hid_nmouse_accessor.hpp"

namespace nn::hid::detail {

namespace {

constexpr size_t ShowingCursorOffset = 0x8e68;

}

NmouseTransferMemoryAccessor::NmouseTransferMemoryAccessor() :
  m_pMemory(nullptr) {}

NmouseTransferMemoryAccessor::~NmouseTransferMemoryAccessor() {}

Result NmouseTransferMemoryAccessor::InitializeTransferMemory(void* address) {
  m_pMemory = static_cast<uint8_t*>(address);
  return Result{};
}

Result NmouseTransferMemoryAccessor::FinalizeTransferMemory() {
  m_pMemory = nullptr;
  return Result{};
}

bool NmouseTransferMemoryAccessor::IsInitialized() const {
  return m_pMemory != nullptr;
}

Result NmouseTransferMemoryAccessor::IsEnabledShowingCursor(
  bool* pOutIsEnabled) const {
  *pOutIsEnabled =
    *reinterpret_cast<const bool*>(m_pMemory + ShowingCursorOffset);
  return Result{};
}

}
