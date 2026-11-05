#include "nn/ssl/detail/ssl_service.hpp"
#include "nn/ssl/ssl_result.hpp"

namespace nn::ssl::detail {

namespace {

constexpr uint32_t MaxConcurrencyLimit = 16;
constexpr uint32_t InterfaceVersion = 5;

}

nn::sf::SharedPointer<sf::ISslService> ServiceSession::g_ServiceSession;
nn::sf::SharedPointer<sf::ISslServiceForSystem>
  ServiceSession::g_SystemServiceSession;

Result ServiceSession::Initialize(uint32_t concurrencyLimit,
  Privilege privilege) {
  if (g_ServiceSession.Get() != nullptr) {
    return ResultLibraryAlreadyInitialized();
  }

  if (concurrencyLimit < 1 || concurrencyLimit > MaxConcurrencyLimit) {
    return ResultInvalidConcurrencyLimit();
  }

  bool isSystem = privilege == Privilege::System ||
    privilege == Privilege::SystemOrUser;
  Result result = ISslServiceFactory::Initialize(concurrencyLimit, isSystem);
  if (result.IsFailure()) {
    return result;
  }

  ISslServiceFactory factory;
  if (isSystem) {
    result = factory.CreateISslServiceForSystem(&g_SystemServiceSession);
    if (result.IsFailure()) {
      return result;
    }

    // The system interface also serves every user command.
    g_ServiceSession = g_SystemServiceSession;
  }
  else {
    result = factory.CreateISslService(&g_ServiceSession);
    if (result.IsFailure()) {
      return result;
    }
  }

  return g_ServiceSession->SetInterfaceVersion(InterfaceVersion);
}

Result ServiceSession::Finalize() {
  g_ServiceSession.Reset();
  g_SystemServiceSession.Reset();
  return ISslServiceFactory::Finalize();
}

bool ServiceSession::IsInitialized() {
  return g_ServiceSession.Get() != nullptr;
}

nn::sf::SharedPointer<sf::ISslService>* ServiceSession::GetServiceSession() {
  return &g_ServiceSession;
}

bool ServiceSession::IsInitializedForSystem() {
  return g_SystemServiceSession.Get() != nullptr;
}

nn::sf::SharedPointer<sf::ISslServiceForSystem>*
ServiceSession::GetServiceSessionForSystem() {
  return &g_SystemServiceSession;
}

}
