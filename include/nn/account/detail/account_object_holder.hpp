#pragma once

#include <stdint.h>

#include "nn/account/account_service.hpp"
#include "nn/account/account_types.hpp"
#include "nn/result.hpp"
#include "nn/sf/client_session.hpp"
#include "nn/sf/shared_pointer.hpp"
#include "nn/util/optional.hpp"

namespace nn::account {

class IAccountServiceForSystemServiceWithProfileEditor
  : public IAccountServiceForSystemService {};

struct UserHandle;

}

namespace nn::account::detail {

struct InitializationInfo {
  Uid preselectedUser;
  // Only the preselected user may be opened.
  bool isPreselectionEnforced;
  uint8_t reserved[7];
};

class ObjectHolder {
 public:
  ObjectHolder();
  ~ObjectHolder();

  void Release();
  Result AcquireForApplication();
  Result AcquireForSystemService();
  Result AcquireForAdministrator();
  Result AcquireForSystemProcess();
  Result AcquireForSystemProcessWithProfileEditor();
  Result AcquireForSystemProcessAsAdministrator();
  Result InitializeWith(
    sf::SharedPointer<IAccountServiceForAdministrator>&& service);

  IAccountServiceBase* GetBase() const;
  IAccountServiceForApplication* GetForApplication() const;
  IAccountServiceForSystemService* GetForSystemService() const;
  IAccountServiceForSystemServiceWithProfileEditor*
  GetForSystemServiceWithProfileEditor() const;
  IAccountServiceForAdministrator* GetForAdministrator() const;

 private:
  template <typename Interface>
  Result AcquireImpl(Interface** pOutService, const char* serviceName);

  IAccountServiceBase* m_pBase;
  IAccountServiceForApplication* m_pForApplication;
  IAccountServiceForSystemService* m_pForSystemService;
  IAccountServiceForSystemServiceWithProfileEditor*
    m_pForSystemServiceWithProfileEditor;
  IAccountServiceForAdministrator* m_pForAdministrator;
  sf::hipc::client::SessionManagerStorage m_SessionManager;
};

class ClientUserHandleStore {
 public:
  static void Clear();
  static void Add(const UserHandle& handle);
  static void Delete(const UserHandle& handle);
  static void List(int* pOutCount, UserHandle* pOutHandles, int count);

 private:
  static util::optional<UserHandle> s_Handles[8];
};

UserHandle MakeUserHandle(const Uid& uid,
  const baas::IManagerForApplication* pManager);

void InitializeForApplication();
void InitializeForSystemService();
void InitializeForAdministrator();
void InitializeForSystemProcess();
void InitializeForSystemProcessWithProfileEditor();
void InitializeForSystemProcessAsAdministrator();
void InitializeWith(
  sf::SharedPointer<IAccountServiceForAdministrator>&& service);
void Finalize();
bool IsInitialized();
InitializationInfo GetInitializationInfo();
IAccountServiceForSystemServiceWithProfileEditor*
GetAccountServiceObjectForSystemServiceWithProfileEditor();

}
