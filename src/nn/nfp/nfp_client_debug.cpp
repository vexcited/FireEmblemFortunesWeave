#include "nn/nfp/nfp_client.hpp"
#include "nn/sf/client_session.hpp"

namespace nn::nfp::client {

namespace {

sf::SharedPointer<detail::IDebug> g_DebugInterface;
sf::hipc::client::SessionManagerStorage g_DebugSessionManager;

}

sf::SharedPointer<detail::IDebug> GetDebugInterface() {
  return g_DebugInterface;
}

void DestroyDebugInterface() {
  g_DebugInterface.Reset();
  g_DebugSessionManager.resize_mutex.Lock();
  sf::hipc::client::ResizeSessions(&g_DebugSessionManager.manager, 0);
  g_DebugSessionManager.resize_mutex.Unlock();
}

bool IsCreatedDebugInterface() {
  return static_cast<bool>(g_DebugInterface);
}

}
