#include <string.h>

#include "nn/account/account_network_service_license_info.hpp"
#include "nn/account/account_profile_editor.hpp"
#include "nn/account/account_service.hpp"
#include "nn/account/detail/account_object_holder.hpp"
#include "nn/diag/diag_abort.hpp"

namespace nn::account {

Result OpenUser(UserHandle* pOutHandle, const Uid& uid);

namespace {

using detail::GetAccountServiceObjectBase;
using detail::GetAccountServiceObjectForAdministrator;

Result GetProfile(sf::SharedPointer<profile::IProfile>* pOutProfile,
  const Uid& uid) {
  return GetAccountServiceObjectBase()->GetProfile(
    sf::Out<sf::SharedPointer<profile::IProfile>>(pOutProfile), uid);
}

}

Result GetNickname(Nickname* pOutNickname, const Uid& uid) {
  sf::SharedPointer<profile::IProfile> profile;
  NN_RESULT_DO(GetProfile(&profile, uid));
  profile::ProfileBase base = {};
  NN_RESULT_DO(profile->GetBase(sf::Out<profile::ProfileBase>(&base)));
  strncpy(pOutNickname->name, base.nickname, sizeof(base.nickname));
  pOutNickname->name[sizeof(base.nickname)] = '\0';
  return Result{0};
}

Result LoadProfileImage(size_t* pOutSize, void* buffer, size_t size,
  const Uid& uid) {
  sf::SharedPointer<profile::IProfile> profile;
  NN_RESULT_DO(GetProfile(&profile, uid));
  uint32_t imageSize = 0;
  if (buffer == nullptr) {
    NN_RESULT_DO(profile->GetImageSize(sf::Out<uint32_t>(&imageSize)));
  }
  else {
    NN_RESULT_DO(profile->LoadImage(sf::Out<uint32_t>(&imageSize),
      sf::OutBuffer(buffer, size)));
  }
  *pOutSize = imageSize;
  return Result{0};
}

Result LoadProfileLargeImage(size_t* pOutSize, void* buffer, size_t size,
  const Uid& uid) {
  sf::SharedPointer<profile::IProfile> profile;
  NN_RESULT_DO(GetProfile(&profile, uid));
  uint32_t imageSize = 0;
  if (buffer == nullptr) {
    NN_RESULT_DO(profile->GetLargeImageSize(sf::Out<uint32_t>(&imageSize)));
  }
  else {
    NN_RESULT_DO(profile->LoadLargeImage(sf::Out<uint32_t>(&imageSize),
      sf::OutBuffer(buffer, size)));
  }
  *pOutSize = imageSize;
  return Result{0};
}

Result GetProfileUserData(char* buffer, size_t size, const Uid& uid) {
  static_cast<void>(size);
  sf::SharedPointer<profile::IProfile> profile;
  NN_RESULT_DO(GetProfile(&profile, uid));
  profile::ProfileBase base = {};
  profile::UserData userData = {};
  NN_RESULT_DO(profile->Get(sf::Out<profile::ProfileBase>(&base),
    sf::Out<profile::UserData>(&userData)));
  memcpy(buffer, &userData, sizeof(userData));
  return Result{0};
}

bool TryOpenPreselectedUser(UserHandle* pOutHandle) {
  const Uid preselectedUser = detail::GetInitializationInfo().preselectedUser;
  const bool isPreselected =
    preselectedUser.value[0] != 0 || preselectedUser.value[1] != 0;
  if (isPreselected) {
    NN_ABORT_UNLESS_RESULT_SUCCESS(OpenUser(pOutHandle,
      detail::GetInitializationInfo().preselectedUser));
  }
  return isPreselected;
}

void OpenPreselectedUser(UserHandle* pOutHandle) {
  const Uid preselectedUser = detail::GetInitializationInfo().preselectedUser;
  NN_ABORT_UNLESS(preselectedUser.value[0] != 0 ||
    preselectedUser.value[1] != 0);
  NN_ABORT_UNLESS_RESULT_SUCCESS(OpenUser(pOutHandle,
    detail::GetInitializationInfo().preselectedUser));
}

void CloseUser(const UserHandle& handle) {
  detail::ClientUserHandleStore::Delete(handle);
  handle.pManager->Release();
}

Declaration DebugEnableInterprogramOpenUserRetention() {
  sf::SharedPointer<detail::ISessionObject> session;
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    GetAccountServiceObjectBase()->DebugActivateOpenContextRetention(
      sf::Out<sf::SharedPointer<detail::ISessionObject>>(&session)));
  return Declaration(session.Detach());
}

Declaration SuspendBackgroundActivity() {
  sf::SharedPointer<detail::ISessionObject> session;
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    GetAccountServiceObjectForAdministrator()->SuspendBackgroundDaemon(
      sf::Out<sf::SharedPointer<detail::ISessionObject>>(&session)));
  return Declaration(session.Detach());
}

Result SetUserUnqualifiedForDebug(ApplicationId applicationId, Uid uid) {
  return GetAccountServiceObjectForAdministrator()->SetUserUnqualifiedForDebug(
    applicationId.value, uid);
}

}
