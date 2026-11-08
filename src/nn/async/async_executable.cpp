#include "nn/async/async_detail.hpp"

namespace nn::async {

Executable::Executable() {
  detail::ClearMutexType(&m_Mutex);
  os::InitializeMutex(&m_Mutex, false, 0);
  m_State = 0;
}

Executable::~Executable() {
  os::FinalizeMutex(&m_Mutex);
}

}
