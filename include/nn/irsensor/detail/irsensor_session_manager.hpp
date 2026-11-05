#pragma once

#include <atomic>

#include "nn/applet/applet_types.hpp"
#include "nn/irsensor/detail/irsensor_session.hpp"
#include "nn/os/mutex.hpp"

namespace nn::irsensor::detail {

// The session of the calling applet is created on first use and lives in
// the manager storage until it is finalized.
class SessionManager {
public:
  SessionManager();
  ~SessionManager();

  IrSensorSession* GetSession(const applet::AppletResourceUserId& aruid);
  void FinalizeSession(const applet::AppletResourceUserId& aruid);

private:
  std::atomic<bool> m_IsInitialized;
  os::MutexType m_Mutex;
  alignas(IrSensorSession) uint8_t m_Storage[sizeof(IrSensorSession)];
};

SessionManager& GetSessionManager();

}
