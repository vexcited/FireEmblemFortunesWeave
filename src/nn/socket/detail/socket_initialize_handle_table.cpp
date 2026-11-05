#include "nn/socket/detail/socket_initialize_handle_table.hpp"

namespace nn::socket::detail {

int InitializeHandleTable::AcquireHandleForConcurrency(int concurrency) {
  for (int i = 0; i < HandleCountMax; ++i) {
    m_NextHandle = (m_NextHandle + 1) % HandleCountMax;
    if (m_Concurrency[m_NextHandle] == 0) {
      m_Concurrency[m_NextHandle] = concurrency;
      ++m_Count;
      return m_NextHandle;
    }
  }
  return -1;
}

int InitializeHandleTable::GetConcurrencyAndReleaseHandle(int handle) {
  if (static_cast<uint32_t>(handle) < HandleCountMax) {
    int concurrency = m_Concurrency[handle];
    if (concurrency != 0) {
      m_Concurrency[handle] = 0;
      --m_Count;
      return concurrency;
    }
  }
  return -1;
}

}
