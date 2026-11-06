#include "nn/account/detail/account_object_holder.hpp"

namespace nn::account::detail {

void ObjectHolder::Release() {
  if (m_pBase != nullptr) {
    m_pBase->Release();
    m_pForSystemServiceWithProfileEditor = nullptr;
    m_pForAdministrator = nullptr;
    m_pForApplication = nullptr;
    m_pForSystemService = nullptr;
    m_pBase = nullptr;
    m_SessionManager.resize_mutex.Lock();
    sf::hipc::client::ResizeSessions(&m_SessionManager.manager, 0);
    m_SessionManager.resize_mutex.Unlock();
  }
}

Result ObjectHolder::AcquireForApplication() {
  const Result result = AcquireImpl(&m_pForApplication, "acc:u0");
  if (result.IsSuccess()) {
    m_pBase = m_pForApplication;
  }
  return result;
}

Result ObjectHolder::AcquireForSystemService() {
  const Result result = AcquireImpl(&m_pForSystemService, "acc:u1");
  if (result.IsSuccess()) {
    m_pBase = m_pForSystemService;
  }
  return result;
}

Result ObjectHolder::AcquireForAdministrator() {
  const Result result = AcquireImpl(&m_pForAdministrator, "acc:su");
  if (result.IsSuccess()) {
    IAccountServiceForAdministrator* pService = m_pForAdministrator;
    m_pForSystemService = pService;
    m_pForSystemServiceWithProfileEditor =
      static_cast<IAccountServiceForSystemServiceWithProfileEditor*>(
        static_cast<IAccountServiceForSystemService*>(pService));
    m_pBase = pService;
  }
  return result;
}

Result ObjectHolder::AcquireForSystemProcess() {
  const Result result = AcquireImpl(&m_pForSystemService, "acc:e:u1");
  if (result.IsSuccess()) {
    m_pBase = m_pForSystemService;
  }
  return result;
}

Result ObjectHolder::AcquireForSystemProcessWithProfileEditor() {
  const Result result =
    AcquireImpl(&m_pForSystemServiceWithProfileEditor, "acc:e:u2");
  if (result.IsSuccess()) {
    IAccountServiceForSystemServiceWithProfileEditor* pService =
      m_pForSystemServiceWithProfileEditor;
    m_pForSystemService = pService;
    m_pBase = pService;
  }
  return result;
}

Result ObjectHolder::AcquireForSystemProcessAsAdministrator() {
  const Result result = AcquireImpl(&m_pForAdministrator, "acc:e:su");
  if (result.IsSuccess()) {
    IAccountServiceForAdministrator* pService = m_pForAdministrator;
    m_pForSystemService = pService;
    m_pForSystemServiceWithProfileEditor =
      static_cast<IAccountServiceForSystemServiceWithProfileEditor*>(
        static_cast<IAccountServiceForSystemService*>(pService));
    m_pBase = pService;
  }
  return result;
}

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
