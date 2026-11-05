#pragma once

#include <stdint.h>

#include "nn/account/account_service.hpp"
#include "nn/account/account_types.hpp"
#include "nn/result.hpp"
#include "nn/sf/shared_pointer.hpp"

namespace nn::account {

class IAccountServiceForSystemServiceWithProfileEditor
  : public IAccountServiceForSystemService {};

}

namespace nn::account::detail {

struct InitializationInfo {
  Uid preselectedUser;
  uint64_t reserved;
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
  IAccountServiceBase* m_pBase;
  IAccountServiceForApplication* m_pForApplication;
  IAccountServiceForSystemService* m_pForSystemService;
  IAccountServiceForSystemServiceWithProfileEditor*
    m_pForSystemServiceWithProfileEditor;
  IAccountServiceForAdministrator* m_pForAdministrator;
  uint8_t m_SessionManager[0x88];
};

class ClientUserHandleStore {
 public:
  static void Clear();
};

void Finalize();
bool IsInitialized();
InitializationInfo GetInitializationInfo();
IAccountServiceForSystemServiceWithProfileEditor*
GetAccountServiceObjectForSystemServiceWithProfileEditor();

}
