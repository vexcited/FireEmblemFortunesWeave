#include "nn/nfp/nfp_client.hpp"
#include "nn/sf/client_session.hpp"

namespace nn::nfp::client {

namespace {

sf::SharedPointer<detail::IUser> g_UserInterface;
sf::hipc::client::SessionManagerStorage g_UserSessionManager;

}

sf::SharedPointer<detail::IUser> GetUserInterface() {
  return g_UserInterface;
}

sf::SharedPointer<detail::IUser> GetUserInterfaceForCommon() {
  return g_UserInterface;
}

void DestroyUserInterface() {
  g_UserInterface.Reset();
  g_UserSessionManager.resize_mutex.Lock();
  sf::hipc::client::ResizeSessions(&g_UserSessionManager.manager, 0);
  g_UserSessionManager.resize_mutex.Unlock();
}

bool IsCreatedUserInterface() {
  return static_cast<bool>(g_UserInterface);
}

}
