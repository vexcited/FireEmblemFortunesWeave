#include "nn/account/account_procedures.hpp"
#include "nn/diag/diag_abort.hpp"

namespace nn::account {

namespace {

const Uid InvalidUid = {};

using LinkageApi = nas::IOAuthProcedureForNintendoAccountLinkage;
using ReauthenticationApi =
  nas::IOAuthProcedureForNintendoAccountReauthentication;
using ExternalNsaApi = nas::IOAuthProcedureForExternalNsa;
using DownloadApi = nas::IOAuthProcedureForDeviceMigrationDownload;
using RegistrationApi = nas::IOAuthProcedureForUserRegistration;
using OperatingUserApi =
  nas::IOAuthProcedureForDeviceMigrationOperatingUserAuthentication;

// Module 124, description 302.
const Result ResultNullAsyncContext = {(302 << 9) | 124};

template <typename T>
T* GetProcedure(const detail::OAuthProcedureBase& procedure) {
  return static_cast<T*>(procedure.GetPtr());
}

}

NintendoAccountLinkageProcedure::
  NintendoAccountLinkageProcedure()
  : OAuthProcedureBase() {}

NintendoAccountLinkageProcedure::
  NintendoAccountLinkageProcedure(const Uid& uid,
    nas::IOAuthProcedureForNintendoAccountLinkage* pProcedure)
  : OAuthProcedureBase(uid, pProcedure) {}

[[gnu::noinline]] NintendoAccountLinkageProcedure::
  NintendoAccountLinkageProcedure(
    NintendoAccountLinkageProcedure&& other)
  : OAuthProcedureBase(static_cast<OAuthProcedureBase&&>(other)) {}

void NintendoAccountLinkageProcedure::Swap(
  NintendoAccountLinkageProcedure& other) {
  OAuthProcedureBase::Swap(other);
}

NintendoAccountLinkageStateUpdateProcedure::
  NintendoAccountLinkageStateUpdateProcedure()
  : OAuthProcedureBase() {}

NintendoAccountLinkageStateUpdateProcedure::
  NintendoAccountLinkageStateUpdateProcedure(const Uid& uid,
    http::IOAuthProcedure* pProcedure)
  : OAuthProcedureBase(uid, pProcedure) {}

[[gnu::noinline]] NintendoAccountLinkageStateUpdateProcedure::
  NintendoAccountLinkageStateUpdateProcedure(
    NintendoAccountLinkageStateUpdateProcedure&& other)
  : OAuthProcedureBase(static_cast<OAuthProcedureBase&&>(other)) {}

void NintendoAccountLinkageStateUpdateProcedure::Swap(
  NintendoAccountLinkageStateUpdateProcedure& other) {
  OAuthProcedureBase::Swap(other);
}

NintendoAccountApplicationAuthorizationProcedure::
  NintendoAccountApplicationAuthorizationProcedure()
  : OAuthProcedureBase() {}

NintendoAccountApplicationAuthorizationProcedure::
  NintendoAccountApplicationAuthorizationProcedure(const Uid& uid,
    http::IOAuthProcedure* pProcedure)
  : OAuthProcedureBase(uid, pProcedure) {}

[[gnu::noinline]] NintendoAccountApplicationAuthorizationProcedure::
  NintendoAccountApplicationAuthorizationProcedure(
    NintendoAccountApplicationAuthorizationProcedure&& other)
  : OAuthProcedureBase(static_cast<OAuthProcedureBase&&>(other)) {}

void NintendoAccountApplicationAuthorizationProcedure::Swap(
  NintendoAccountApplicationAuthorizationProcedure& other) {
  OAuthProcedureBase::Swap(other);
}

NintendoAccountReauthenticationProcedure::
  NintendoAccountReauthenticationProcedure()
  : OAuthProcedureBase() {}

NintendoAccountReauthenticationProcedure::
  NintendoAccountReauthenticationProcedure(const Uid& uid,
    nas::IOAuthProcedureForNintendoAccountReauthentication* pProcedure)
  : OAuthProcedureBase(uid, pProcedure) {}

[[gnu::noinline]] NintendoAccountReauthenticationProcedure::
  NintendoAccountReauthenticationProcedure(
    NintendoAccountReauthenticationProcedure&& other)
  : OAuthProcedureBase(static_cast<OAuthProcedureBase&&>(other)) {}

void NintendoAccountReauthenticationProcedure::Swap(
  NintendoAccountReauthenticationProcedure& other) {
  OAuthProcedureBase::Swap(other);
}

ExternalNetworkServiceAccountIntroducingProcedure::
  ExternalNetworkServiceAccountIntroducingProcedure()
  : OAuthProcedureBase() {}

ExternalNetworkServiceAccountIntroducingProcedure::
  ExternalNetworkServiceAccountIntroducingProcedure(
    nas::IOAuthProcedureForExternalNsa* pProcedure)
  : OAuthProcedureBase(InvalidUid, pProcedure) {}

[[gnu::noinline]] ExternalNetworkServiceAccountIntroducingProcedure::
  ExternalNetworkServiceAccountIntroducingProcedure(
    ExternalNetworkServiceAccountIntroducingProcedure&& other)
  : OAuthProcedureBase(static_cast<OAuthProcedureBase&&>(other)) {}

void ExternalNetworkServiceAccountIntroducingProcedure::Swap(
  ExternalNetworkServiceAccountIntroducingProcedure& other) {
  OAuthProcedureBase::Swap(other);
}

DeviceMigrationOperatingUserAuthenticationProcedure::
  DeviceMigrationOperatingUserAuthenticationProcedure()
  : OAuthProcedureBase() {}

DeviceMigrationOperatingUserAuthenticationProcedure::
  DeviceMigrationOperatingUserAuthenticationProcedure(
    DeviceMigrationOperatingUserAuthenticationProcedure::Interface* pProcedure)
  : OAuthProcedureBase(InvalidUid, pProcedure) {}

[[gnu::noinline]] DeviceMigrationOperatingUserAuthenticationProcedure::
  DeviceMigrationOperatingUserAuthenticationProcedure(
    DeviceMigrationOperatingUserAuthenticationProcedure&& other)
  : OAuthProcedureBase(static_cast<OAuthProcedureBase&&>(other)) {}

void DeviceMigrationOperatingUserAuthenticationProcedure::Swap(
  DeviceMigrationOperatingUserAuthenticationProcedure& other) {
  OAuthProcedureBase::Swap(other);
}

DeviceMigrationDownloadProcedure::
  DeviceMigrationDownloadProcedure()
  : OAuthProcedureBase() {}

DeviceMigrationDownloadProcedure::
  DeviceMigrationDownloadProcedure(
    nas::IOAuthProcedureForDeviceMigrationDownload* pProcedure)
  : OAuthProcedureBase(InvalidUid, pProcedure) {}

[[gnu::noinline]] DeviceMigrationDownloadProcedure::
  DeviceMigrationDownloadProcedure(
    DeviceMigrationDownloadProcedure&& other)
  : OAuthProcedureBase(static_cast<OAuthProcedureBase&&>(other)) {}

void DeviceMigrationDownloadProcedure::Swap(
  DeviceMigrationDownloadProcedure& other) {
  OAuthProcedureBase::Swap(other);
}

UserRegistrationProcedure::
  UserRegistrationProcedure()
  : OAuthProcedureBase() {}

UserRegistrationProcedure::
  UserRegistrationProcedure(
    nas::IOAuthProcedureForUserRegistration* pProcedure)
  : OAuthProcedureBase(InvalidUid, pProcedure) {}

[[gnu::noinline]] UserRegistrationProcedure::
  UserRegistrationProcedure(
    UserRegistrationProcedure&& other)
  : OAuthProcedureBase(static_cast<OAuthProcedureBase&&>(other)) {}

void UserRegistrationProcedure::Swap(
  UserRegistrationProcedure& other) {
  OAuthProcedureBase::Swap(other);
}

UserCreationProcedure::
  UserCreationProcedure()
  : OAuthProcedureBase() {}

UserCreationProcedure::
  UserCreationProcedure(
    nas::IOAuthProcedureForUserRegistration* pProcedure)
  : OAuthProcedureBase(InvalidUid, pProcedure) {}

[[gnu::noinline]] UserCreationProcedure::
  UserCreationProcedure(
    UserCreationProcedure&& other)
  : OAuthProcedureBase(static_cast<OAuthProcedureBase&&>(other)) {}

void UserCreationProcedure::Swap(
  UserCreationProcedure& other) {
  OAuthProcedureBase::Swap(other);
}

Result NintendoAccountLinkageProcedure::GetRequest(RequestUrl* pOutRequestUrl,
  CallbackUri* pOutCallbackUri, NintendoAccountAuthorizationPageTheme theme) {
  NN_ABORT_UNLESS_NOT_NULL(GetPtr());
  return GetProcedure<LinkageApi>(*this)
    ->GetRequestWithTheme(sf::Out<RequestUrl>(pOutRequestUrl),
      sf::Out<CallbackUri>(pOutCallbackUri), theme);
}

Result NintendoAccountLinkageProcedure::IsNetworkServiceAccountReplaced(
  bool* pOutIsReplaced) {
  NN_ABORT_UNLESS_NOT_NULL(GetPtr());
  return GetProcedure<LinkageApi>(*this)
    ->IsNetworkServiceAccountReplaced(sf::Out<bool>(pOutIsReplaced));
}

Result NintendoAccountReauthenticationProcedure::GetRequest(
  RequestUrl* pOutRequestUrl, CallbackUri* pOutCallbackUri,
  NintendoAccountReauthenticationPageType pageType) {
  NN_ABORT_UNLESS_NOT_NULL(GetPtr());
  return GetProcedure<ReauthenticationApi>(*this)
    ->GetRequestWithPageType(sf::Out<RequestUrl>(pOutRequestUrl),
      sf::Out<CallbackUri>(pOutCallbackUri), pageType);
}

Result NintendoAccountReauthenticationProcedure::GetSkipIdentification(
  bool* pOutIsSkipped) {
  return GetProcedure<ReauthenticationApi>(*this)
    ->GetSkipIdentification(sf::Out<bool>(pOutIsSkipped));
}

Result ExternalNetworkServiceAccountIntroducingProcedure::GetRequestForMoving(
  RequestUrl* pOutRequestUrl, CallbackUri* pOutCallbackUri) {
  return GetProcedure<ExternalNsaApi>(*this)->GetRequestForMoving(
    sf::Out<RequestUrl>(pOutRequestUrl),
    sf::Out<CallbackUri>(pOutCallbackUri));
}

Result ExternalNetworkServiceAccountIntroducingProcedure::GetNickname(
  Nickname* pOutNickname) const {
  return GetProcedure<ExternalNsaApi>(*this)->GetNickname(
    sf::OutBuffer(pOutNickname->name, sizeof(Nickname)));
}

Result ExternalNetworkServiceAccountIntroducingProcedure::GetProfileImage(
  size_t* pOutSize, void* buffer, size_t size) const {
  uint32_t imageSize = 0;
  NN_RESULT_DO(GetProcedure<ExternalNsaApi>(*this)->GetProfileImage(
    sf::Out<uint32_t>(&imageSize), sf::OutBuffer(buffer, size)));
  *pOutSize = imageSize;
  return Result{0};
}

Result ExternalNetworkServiceAccountIntroducingProcedure::GetProfileLargeImage(
  size_t* pOutSize, void* buffer, size_t size) const {
  uint32_t imageSize = 0;
  NN_RESULT_DO(GetProcedure<ExternalNsaApi>(*this)->GetProfileLargeImage(
    sf::Out<uint32_t>(&imageSize), sf::OutBuffer(buffer, size)));
  *pOutSize = imageSize;
  return Result{0};
}

Result ExternalNetworkServiceAccountIntroducingProcedure::
  GetNetworkServiceAccountId(
  NetworkServiceAccountId* pOutId) const {
  return GetProcedure<ExternalNsaApi>(*this)->GetAccountId(
    sf::Out<NetworkServiceAccountId>(pOutId));
}

Result ExternalNetworkServiceAccountIntroducingProcedure::
  GetLinkedNintendoAccountId(
  NintendoAccountId* pOutId) const {
  return GetProcedure<ExternalNsaApi>(*this)->GetLinkedNintendoAccountId(
    sf::Out<NintendoAccountId>(pOutId));
}

Result DeviceMigrationOperatingUserAuthenticationProcedure::
  GetTemporaryUserIdForTemporarySession(uint64_t* pOutId) const {
  return GetProcedure<OperatingUserApi>(*this)
    ->GetTemporaryUserIdForTemporarySession(
    sf::Out<uint64_t>(pOutId));
}

Result DeviceMigrationDownloadProcedure::
  GetTemporaryUserIdForTemporarySession(uint64_t* pOutId) const {
  return GetProcedure<DownloadApi>(*this)
    ->GetTemporaryUserIdForTemporarySession(
    sf::Out<uint64_t>(pOutId));
}

Result UserRegistrationProcedure::GetNickname(
  Nickname* pOutNickname) const {
  return GetProcedure<RegistrationApi>(*this)->GetNickname(
    sf::OutBuffer(pOutNickname->name, sizeof(Nickname)));
}

Result UserRegistrationProcedure::GetProfileImage(
  size_t* pOutSize, void* buffer, size_t size) const {
  uint32_t imageSize = 0;
  NN_RESULT_DO(GetProcedure<RegistrationApi>(*this)->GetProfileImage(
    sf::Out<uint32_t>(&imageSize), sf::OutBuffer(buffer, size)));
  *pOutSize = imageSize;
  return Result{0};
}

Result UserRegistrationProcedure::GetProfileLargeImage(
  size_t* pOutSize, void* buffer, size_t size) const {
  uint32_t imageSize = 0;
  NN_RESULT_DO(GetProcedure<RegistrationApi>(*this)->GetProfileLargeImage(
    sf::Out<uint32_t>(&imageSize), sf::OutBuffer(buffer, size)));
  *pOutSize = imageSize;
  return Result{0};
}

Result UserRegistrationProcedure::GetNetworkServiceAccountId(
  NetworkServiceAccountId* pOutId) const {
  return GetProcedure<RegistrationApi>(*this)->GetAccountId(
    sf::Out<NetworkServiceAccountId>(pOutId));
}

Result UserRegistrationProcedure::GetLinkedNintendoAccountId(
  NintendoAccountId* pOutId) const {
  return GetProcedure<RegistrationApi>(*this)->GetLinkedNintendoAccountId(
    sf::Out<NintendoAccountId>(pOutId));
}

Result UserRegistrationProcedure::RegisterUserAsync(
  AsyncContext* pOutContext) {
  sf::SharedPointer<detail::IAsyncContext> context;
  NN_RESULT_DO(GetProcedure<RegistrationApi>(*this)->RegisterUserAsync(
    sf::Out<sf::SharedPointer<detail::IAsyncContext>>(&context)));
  if (!context) {
    return ResultNullAsyncContext;
  }
  *pOutContext = AsyncContext(context.Detach());
  return Result{0};
}

Uid UserRegistrationProcedure::GetUid() const {
  Uid uid = {};
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    GetProcedure<RegistrationApi>(*this)->GetUid(sf::Out<Uid>(&uid)));
  return uid;
}

Result UserCreationProcedure::ApplyResponseAsync(
  AsyncContext* pOutContext,
  const char* response, size_t size) {
  sf::SharedPointer<detail::IAsyncContext> context;
  NN_RESULT_DO(GetProcedure<RegistrationApi>(*this)
    ->ApplyResponseForUserCreationAsync(
    sf::Out<sf::SharedPointer<detail::IAsyncContext>>(&context),
    sf::InBuffer(response, size)));
  if (!context) {
    return ResultNullAsyncContext;
  }
  *pOutContext = AsyncContext(context.Detach());
  return Result{0};
}

bool UserCreationProcedure::IsProfileAvailable() const {
  bool isAvailable = false;
  NN_ABORT_UNLESS_RESULT_SUCCESS(GetProcedure<RegistrationApi>(*this)
    ->IsProfileAvailable(
    sf::Out<bool>(&isAvailable)));
  return isAvailable;
}

Result UserCreationProcedure::GetNickname(
  Nickname* pOutNickname) const {
  return GetProcedure<RegistrationApi>(*this)->GetNickname(
    sf::OutBuffer(pOutNickname->name, sizeof(Nickname)));
}

Result UserCreationProcedure::GetProfileImage(
  size_t* pOutSize, void* buffer, size_t size) const {
  uint32_t imageSize = 0;
  NN_RESULT_DO(GetProcedure<RegistrationApi>(*this)->GetProfileImage(
    sf::Out<uint32_t>(&imageSize), sf::OutBuffer(buffer, size)));
  *pOutSize = imageSize;
  return Result{0};
}

Result UserCreationProcedure::GetProfileLargeImage(
  size_t* pOutSize, void* buffer, size_t size) const {
  uint32_t imageSize = 0;
  NN_RESULT_DO(GetProcedure<RegistrationApi>(*this)->GetProfileLargeImage(
    sf::Out<uint32_t>(&imageSize), sf::OutBuffer(buffer, size)));
  *pOutSize = imageSize;
  return Result{0};
}

Result UserCreationProcedure::GetNetworkServiceAccountId(
  NetworkServiceAccountId* pOutId) const {
  return GetProcedure<RegistrationApi>(*this)->GetAccountId(
    sf::Out<NetworkServiceAccountId>(pOutId));
}

Result UserCreationProcedure::GetLinkedNintendoAccountId(
  NintendoAccountId* pOutId) const {
  return GetProcedure<RegistrationApi>(*this)->GetLinkedNintendoAccountId(
    sf::Out<NintendoAccountId>(pOutId));
}

Result UserCreationProcedure::RegisterUserAsync(
  AsyncContext* pOutContext) {
  sf::SharedPointer<detail::IAsyncContext> context;
  NN_RESULT_DO(GetProcedure<RegistrationApi>(*this)
    ->RegisterUserForCreationAsync(
    sf::Out<sf::SharedPointer<detail::IAsyncContext>>(&context)));
  if (!context) {
    return ResultNullAsyncContext;
  }
  *pOutContext = AsyncContext(context.Detach());
  return Result{0};
}

Result UserCreationProcedure::SuspendAfterApplyResponse(
  SessionId* pOutSessionId) {
  SessionId sessionId = {};
  NN_RESULT_DO(GetProcedure<RegistrationApi>(*this)->SuspendAfterApplyResponse(
    sf::Out<SessionId>(&sessionId)));
  *pOutSessionId = sessionId;
  return Result{0};
}

Result UserCreationProcedure::RegisterUserWithProfileAsync(
  AsyncContext* pOutContext,
  const Nickname& nickname, const void* image, size_t size) {
  sf::SharedPointer<detail::IAsyncContext> context;
  NN_RESULT_DO(GetProcedure<RegistrationApi>(*this)
    ->RegisterUserWithProfileAsync(
    sf::Out<sf::SharedPointer<detail::IAsyncContext>>(&context),
    nickname, sf::InBuffer(image, size)));
  if (!context) {
    return ResultNullAsyncContext;
  }
  *pOutContext = AsyncContext(context.Detach());
  return Result{0};
}

Result UserCreationProcedure::RegisterUserWithLargeImageProfileAsync(
  AsyncContext* pOutContext,
  const Nickname& nickname, const void* image, size_t size) {
  sf::SharedPointer<detail::IAsyncContext> context;
  NN_RESULT_DO(GetProcedure<RegistrationApi>(*this)
    ->RegisterUserWithLargeImageProfileAsync(
    sf::Out<sf::SharedPointer<detail::IAsyncContext>>(&context),
    nickname, sf::InBuffer(image, size)));
  if (!context) {
    return ResultNullAsyncContext;
  }
  *pOutContext = AsyncContext(context.Detach());
  return Result{0};
}

Uid UserCreationProcedure::GetUid() const {
  Uid uid = {};
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    GetProcedure<RegistrationApi>(*this)->GetUid(sf::Out<Uid>(&uid)));
  return uid;
}


// Lives apart from the base class, so its calls go through the export table.
detail::OAuthProcedureBase& detail::OAuthProcedureBase::operator=(
  OAuthProcedureBase&& other) {
  OAuthProcedureBase temporary(std::move(other));
  std::swap(m_Uid, temporary.m_Uid);
  std::swap(m_pProcedure, temporary.m_pProcedure);
  return *this;
}

// Each move assignment swaps with a temporary built from the source.
NintendoAccountLinkageProcedure& NintendoAccountLinkageProcedure::operator=(
  NintendoAccountLinkageProcedure&& other) {
  NintendoAccountLinkageProcedure temporary(std::move(other));
  Swap(temporary);
  return *this;
}

NintendoAccountLinkageStateUpdateProcedure&
NintendoAccountLinkageStateUpdateProcedure::operator=(
  NintendoAccountLinkageStateUpdateProcedure&& other) {
  NintendoAccountLinkageStateUpdateProcedure temporary(std::move(other));
  Swap(temporary);
  return *this;
}

NintendoAccountApplicationAuthorizationProcedure&
NintendoAccountApplicationAuthorizationProcedure::operator=(
  NintendoAccountApplicationAuthorizationProcedure&& other) {
  NintendoAccountApplicationAuthorizationProcedure temporary(std::move(other));
  Swap(temporary);
  return *this;
}

NintendoAccountReauthenticationProcedure&
NintendoAccountReauthenticationProcedure::operator=(
  NintendoAccountReauthenticationProcedure&& other) {
  NintendoAccountReauthenticationProcedure temporary(std::move(other));
  Swap(temporary);
  return *this;
}

ExternalNetworkServiceAccountIntroducingProcedure&
ExternalNetworkServiceAccountIntroducingProcedure::operator=(
  ExternalNetworkServiceAccountIntroducingProcedure&& other) {
  ExternalNetworkServiceAccountIntroducingProcedure temporary(std::move(other));
  Swap(temporary);
  return *this;
}

DeviceMigrationOperatingUserAuthenticationProcedure&
DeviceMigrationOperatingUserAuthenticationProcedure::operator=(
  DeviceMigrationOperatingUserAuthenticationProcedure&& other) {
  DeviceMigrationOperatingUserAuthenticationProcedure temporary(
    std::move(other));
  Swap(temporary);
  return *this;
}

DeviceMigrationDownloadProcedure& DeviceMigrationDownloadProcedure::operator=(
  DeviceMigrationDownloadProcedure&& other) {
  DeviceMigrationDownloadProcedure temporary(std::move(other));
  Swap(temporary);
  return *this;
}

UserRegistrationProcedure& UserRegistrationProcedure::operator=(
  UserRegistrationProcedure&& other) {
  UserRegistrationProcedure temporary(std::move(other));
  Swap(temporary);
  return *this;
}

UserCreationProcedure& UserCreationProcedure::operator=(
  UserCreationProcedure&& other) {
  UserCreationProcedure temporary(std::move(other));
  Swap(temporary);
  return *this;
}

}
