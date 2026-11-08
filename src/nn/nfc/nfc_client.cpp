#include "nn/nfc/nfc_interfaces.hpp"

namespace nn::nfc::client {

[[gnu::visibility("hidden")]] extern sf::SharedPointer<ISystem>
  g_SystemInterface;
[[gnu::visibility("hidden")]] extern sf::SharedPointer<IUser>
  g_UserInterface;

bool IsCreatedSystemInterface() {
  return g_SystemInterface.Get() != nullptr;
}

sf::SharedPointer<ISystem> GetSystemInterface() {
  return g_SystemInterface;
}

bool IsCreatedUserInterface() {
  return g_UserInterface.Get() != nullptr;
}

sf::SharedPointer<IUser> GetUserInterface() {
  return g_UserInterface;
}

sf::SharedPointer<IUser> GetUserInterfaceForCommon() {
  return g_UserInterface;
}

}
