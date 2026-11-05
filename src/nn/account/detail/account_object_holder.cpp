#include "nn/account/detail/account_object_holder.hpp"

namespace nn::account::detail {

Result ObjectHolder::InitializeWith(
  sf::SharedPointer<IAccountServiceForAdministrator>&& service) {
  IAccountServiceForAdministrator* pService = service.Detach();
  m_pForSystemServiceWithProfileEditor =
    static_cast<IAccountServiceForSystemServiceWithProfileEditor*>(
      static_cast<IAccountServiceForSystemService*>(pService));
  m_pForAdministrator = pService;
  m_pForSystemService = pService;
  m_pBase = pService;
  return Result{0};
}

IAccountServiceBase* ObjectHolder::GetBase() const {
  return m_pBase;
}

IAccountServiceForApplication* ObjectHolder::GetForApplication() const {
  return m_pForApplication;
}

IAccountServiceForSystemService* ObjectHolder::GetForSystemService() const {
  return m_pForSystemService;
}

IAccountServiceForSystemServiceWithProfileEditor*
ObjectHolder::GetForSystemServiceWithProfileEditor() const {
  return m_pForSystemServiceWithProfileEditor;
}

IAccountServiceForAdministrator* ObjectHolder::GetForAdministrator() const {
  return m_pForAdministrator;
}

}
