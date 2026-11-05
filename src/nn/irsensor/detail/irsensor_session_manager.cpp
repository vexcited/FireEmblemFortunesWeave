#include "nn/irsensor/detail/irsensor_session_manager.hpp"

#include <new>

namespace nn::irsensor::detail {

SessionManager::SessionManager() {
  m_IsInitialized = false;
  os::InitializeMutex(&m_Mutex, false, 0);
}

SessionManager::~SessionManager() {}

IrSensorSession* SessionManager::GetSession(
  const applet::AppletResourceUserId& aruid) {
  if (!m_IsInitialized) {
    os::LockMutex(&m_Mutex);
    if (!m_IsInitialized) {
      new (m_Storage) IrSensorSession(aruid);
      m_IsInitialized = true;
    }
    os::UnlockMutex(&m_Mutex);
  }
  return reinterpret_cast<IrSensorSession*>(m_Storage);
}

void SessionManager::FinalizeSession(
  const applet::AppletResourceUserId& /* aruid */) {
  os::LockMutex(&m_Mutex);
  if (m_IsInitialized == true) {
    reinterpret_cast<IrSensorSession*>(m_Storage)->
      IrSensorSession::~IrSensorSession();
    m_IsInitialized = false;
  }
  os::UnlockMutex(&m_Mutex);
}

SessionManager& GetSessionManager() {
  static SessionManager s_SessionManager;
  return s_SessionManager;
}

}
