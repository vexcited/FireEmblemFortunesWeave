#include <string.h>

#include "nn/account/account_network_service_license_info.hpp"
#include "nn/account/account_profile_editor.hpp"
#include "nn/account/account_service.hpp"
#include "nn/account/detail/account_object_holder.hpp"
#include "nn/diag/diag_abort.hpp"

namespace nn::aoc {

Result CheckAddOnContentMountStatus();

}

namespace nn::account {

Result OpenUser(UserHandle* pOutHandle, const Uid& uid);
Result ListQualifiedUsers(int* pOutActualLength, Uid* pOutUsers, int count);
Result ShowUserQualificationPromoter(const Uid& uid);

namespace {

using detail::GetAccountServiceObjectBase;
using detail::GetAccountServiceObjectForAdministrator;
using detail::GetAccountServiceObjectForApplication;

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

Result OpenUser(UserHandle* pOutHandle, const Uid& uid) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(aoc::CheckAddOnContentMountStatus());
  const detail::InitializationInfo info = detail::GetInitializationInfo();
  if (info.isPreselectionEnforced) {
    NN_ABORT_UNLESS(info.preselectedUser.value[0] == uid.value[0] &&
      info.preselectedUser.value[1] == uid.value[1]);
  }
  sf::SharedPointer<baas::IManagerForApplication> manager;
  const Result result =
    GetAccountServiceObjectForApplication()->GetBaasAccountManagerForApplication(
      sf::Out<sf::SharedPointer<baas::IManagerForApplication>>(&manager), uid);
  if (result.IsFailure()) {
    // The account descriptions 104 and 105 abort, the others return.
    if ((result.value & 0x3fffff & ~0x200u) == 0xd07c) {
      NN_ABORT_UNLESS_RESULT_SUCCESS(result);
    }
    return result;
  }
  const UserHandle handle = detail::MakeUserHandle(uid, manager.Detach());
  detail::ClientUserHandleStore::Add(handle);
  *pOutHandle = handle;
  return Result{0};
}

Result PromoteQualification(const Uid& uid) {
  int count = 0;
  Uid users[8] = {};
  NN_ABORT_UNLESS_RESULT_SUCCESS(ListQualifiedUsers(&count, users, 8));
  const Uid* end = users + count;
  const Uid* it = users;
  for (; it != end; ++it) {
    if (it->value[0] == uid.value[0] && it->value[1] == uid.value[1]) {
      break;
    }
  }
  if (it != end) {
    return Result{0};
  }
  return ShowUserQualificationPromoter(uid);
}

// Stores every open user for the next program and closes it.
void PushOpenUsers() {
  int count = 0;
  UserHandle handles[8] = {};
  detail::ClientUserHandleStore::List(&count, handles, 8);
  for (int i = 0; i < count; i++) {
    NN_ABORT_UNLESS_RESULT_SUCCESS(handles[i].pManager->StoreOpenContext());
    detail::ClientUserHandleStore::Delete(handles[i]);
    handles[i].pManager->Release();
  }
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
