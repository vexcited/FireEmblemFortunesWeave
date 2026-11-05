#include "nn/nfp/nfp_client.hpp"
#include "nn/sf/client_session.hpp"

namespace nn::nfp::client {

namespace {

sf::SharedPointer<detail::ISystem> g_SystemInterface;
sf::hipc::client::SessionManagerStorage g_SystemSessionManager;

}

sf::SharedPointer<detail::ISystem> GetSystemInterface() {
  return g_SystemInterface;
}

void DestroySystemInterface() {
  g_SystemInterface.Reset();
  g_SystemSessionManager.resize_mutex.Lock();
  sf::hipc::client::ResizeSessions(&g_SystemSessionManager.manager, 0);
  g_SystemSessionManager.resize_mutex.Unlock();
}

bool IsCreatedSystemInterface() {
  return static_cast<bool>(g_SystemInterface);
}

}
