#pragma once

#include <atomic>

#include "nn/applet/applet_types.hpp"
#include "nn/hid/detail/hid_server.hpp"
#include "nn/hid/server/hid_shared_memory_holder.hpp"
#include "nn/os/synchronization.hpp"

namespace nn::hid::detail {

class AppletResourceHolder {
 public:
  AppletResourceHolder();

  Result SetAppletResourceUserId(applet::AppletResourceUserId aruid);
  Result Activate();
  Result Deactivate();
  server::SharedMemoryFormat* GetSharedMemoryAddress();

 private:
  os::SdkMutexType m_Mutex;
  bool m_IsAppletResourceUserIdSet;
  applet::AppletResourceUserId m_AppletResourceUserId;
  int m_ActivationCount;
  sf::SharedPointer<IAppletResource> m_AppletResource;
  server::SharedMemoryHolder m_SharedMemoryHolder;
  std::atomic<server::SharedMemoryFormat*> m_pSharedMemory;
};

AppletResourceHolder& GetAppletResourceHolder();

}
