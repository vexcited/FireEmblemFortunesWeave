#include "nn/prepo/detail/prepo_shim_library_global.hpp"

namespace nn::prepo::detail {

void ShimLibraryGlobal::Initialize() {
  m_Mutex.Lock();
  if (m_pSession == nullptr) {
    GetIpcSession();
  }
  m_Mutex.Unlock();
}

void ShimLibraryGlobal::GetIpcSession() {
  ipc::Initialize();
  m_pSession = ipc::GetPrepoService();
}

ipc::IPrepoService* ShimLibraryGlobal::GetSession() {
  m_Mutex.Lock();
  ipc::IPrepoService* pSession = m_pSession;
  if (pSession == nullptr) {
    ipc::Initialize();
    pSession = ipc::GetPrepoService();
    m_pSession = pSession;
  }
  m_Mutex.Unlock();
  return pSession;
}

}
