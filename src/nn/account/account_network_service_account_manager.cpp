#include <string.h>

#include "nn/account/account_network_service_account_administrator.hpp"
#include "nn/account/account_network_service_account_manager.hpp"
#include "nn/diag/diag_abort.hpp"
#include "nn/diag/unexpected_default.hpp"

namespace nn::account {

namespace {

const int UiMode_EnsureNetworkServiceAccountAvailable = 2;

// Account results are module 124, descriptions 200 to 269 report an
// unavailable network service account.
bool IsResultNetworkServiceAccountUnavailable(Result result) {
  const uint32_t module = result.value & 0x1ff;
  const uint32_t description = (result.value >> 9) & 0x1fff;
  return module == 124 && description >= 200 && description < 270;
}

// Module 124, description 302.
const Result ResultNullAsyncContext = {(302 << 9) | 124};

AsyncContext MakeAsyncContext(
  sf::SharedPointer<detail::IAsyncContext>& context, const Uid& uid) {
  return AsyncContext(context.Detach(), uid);
}

}

NetworkServiceAccountManager::NetworkServiceAccountManager()
  : m_Uid(), m_pManager(nullptr) {}

NetworkServiceAccountManager::NetworkServiceAccountManager(const Uid& uid,
  baas::IManagerForSystemService* pManager)
  : m_Uid(uid), m_pManager(pManager) {}

// The deleting destructor calls this one out of line.
[[gnu::noinline]]
NetworkServiceAccountManager::~NetworkServiceAccountManager() {
  if (m_pManager != nullptr) {
    m_pManager->Release();
  }
}

void NetworkServiceAccountManager::Swap(NetworkServiceAccountManager& other) {
  const Uid uid = m_Uid;
  m_Uid = other.m_Uid;
  other.m_Uid = uid;

  baas::IManagerForSystemService* pManager = m_pManager;
  m_pManager = other.m_pManager;
  other.m_pManager = pManager;
}

baas::IManagerForSystemService* NetworkServiceAccountManager::GetPtr() const {
  return m_pManager;
}

Result NetworkServiceAccountManager::EnsureNetworkServiceAccountAvailable(
  NintendoAccountStartupDialogType dialogType) {
  const Result result = m_pManager->CheckAvailability();
  if (IsResultNetworkServiceAccountUnavailable(result)) {
    UiSettings settings = {};
    settings.mode = UiMode_EnsureNetworkServiceAccountAvailable;
    settings.uid = m_Uid;
    settings.dialogType = dialogType;
    return detail::StartPselApplet(settings, false);
  }
  return result;
}

Result NetworkServiceAccountManager::CheckNetworkServiceAccountAvailability() {
  return m_pManager->CheckAvailability();
}

Result NetworkServiceAccountManager::IsNetworkServiceAccountAvailable(
  bool* pOutIsAvailable) const {
  const Result result = m_pManager->CheckAvailability();
  if (result.IsSuccess() || IsResultNetworkServiceAccountUnavailable(result)) {
    *pOutIsAvailable = result.IsSuccess();
    return Result{0};
  }
  return result;
}

Result NetworkServiceAccountManager::GetNetworkServiceAccountId(
  NetworkServiceAccountId* pOutId) const {
  return m_pManager->GetAccountId(sf::Out<NetworkServiceAccountId>(pOutId));
}

Result NetworkServiceAccountManager::GetNintendoAccountId(
  NintendoAccountId* pOutId) const {
  return m_pManager->GetNintendoAccountId(sf::Out<NintendoAccountId>(pOutId));
}

Result NetworkServiceAccountManager::LoadCachedNintendoAccountInfo(
  CachedNintendoAccountInfoForSystemService* pOutInfo, void* buffer,
  size_t size) {
  return m_pManager->LoadCachedNintendoAccountInfo(
    sf::Out<NintendoAccountId>(&pOutInfo->m_Id),
    sf::Out<CachedNintendoAccountInfoForSystemService::Info>(
      &pOutInfo->m_Info),
    sf::OutBuffer(buffer, size));
}

Result NetworkServiceAccountManager::RefreshCachedNintendoAccountInfoAsync(
  AsyncContext* pOutContext) {
  sf::SharedPointer<detail::IAsyncContext> context;
  NN_RESULT_DO(m_pManager->RefreshCachedNintendoAccountInfoAsync(
    sf::Out<sf::SharedPointer<detail::IAsyncContext>>(&context)));
  *pOutContext = MakeAsyncContext(context, m_Uid);
  return Result{0};
}

Result NetworkServiceAccountManager::
  RefreshCachedNintendoAccountInfoAsyncIfTimeElapsed(
  bool* pOutIsRequested, AsyncContext* pOutContext, TimeSpan threshold) {
  sf::SharedPointer<detail::IAsyncContext> context;
  NN_RESULT_DO(m_pManager->RefreshCachedNintendoAccountInfoAsyncIfTimeElapsed(
    sf::Out<bool>(pOutIsRequested),
    sf::Out<sf::SharedPointer<detail::IAsyncContext>>(&context),
    static_cast<uint32_t>(threshold.nanoseconds / 1000000000)));
  *pOutContext = *pOutIsRequested ? MakeAsyncContext(context, m_Uid)
                                  : AsyncContext();
  return Result{0};
}

Result NetworkServiceAccountManager::LoadCachedNintendoAccountVerificationUrl(
  time::PosixTime* pOutExpiration, time::PosixTime* pOutRetryTime,
  size_t* pOutLength, char* buffer, size_t size) {
  NN_RESULT_DO(m_pManager->LoadCachedNintendoAccountVerificationUrl(
    sf::Out<time::PosixTime>(pOutExpiration),
    sf::Out<time::PosixTime>(pOutRetryTime), sf::OutBuffer(buffer, size)));
  *pOutLength = strnlen(buffer, size);
  return Result{0};
}

Result
NetworkServiceAccountManager::RefreshCachedNintendoAccountVerificationUrlAsync(
  AsyncContext* pOutContext) {
  sf::SharedPointer<detail::IAsyncContext> context;
  NN_RESULT_DO(m_pManager->RefreshCachedNintendoAccountVerificationUrlAsync(
    sf::Out<sf::SharedPointer<detail::IAsyncContext>>(&context)));
  *pOutContext = MakeAsyncContext(context, m_Uid);
  return Result{0};
}

Result NetworkServiceAccountManager::
  RefreshCachedNintendoAccountVerificationUrlAsyncIfTimeElapsed(
    bool* pOutIsRequested, AsyncContext* pOutContext, TimeSpan threshold) {
  sf::SharedPointer<detail::IAsyncContext> context;
  NN_RESULT_DO(
    m_pManager->RefreshCachedNintendoAccountVerificationUrlAsyncIfTimeElapsed(
      sf::Out<bool>(pOutIsRequested),
      sf::Out<sf::SharedPointer<detail::IAsyncContext>>(&context),
      static_cast<uint32_t>(threshold.nanoseconds / 1000000000)));
  *pOutContext = *pOutIsRequested ? MakeAsyncContext(context, m_Uid)
                                  : AsyncContext();
  return Result{0};
}

Result NetworkServiceAccountManager::GetCachedNetworkServiceLicenseInfo(
  CachedNetworkServiceLicenseInfo* pOutInfo) const {
  uint32_t license = 0;
  uint32_t state = 0;
  time::PosixTime expiration = {};
  NN_RESULT_DO(m_pManager->GetCachedNetworkServiceLicenseInfo(
    sf::Out<uint32_t>(&license), sf::Out<uint32_t>(&state),
    sf::Out<time::PosixTime>(&expiration)));

  NetworkServiceLicense outLicense;
  switch (license) {
    case 0:
      outLicense = NetworkServiceLicense_None;
      break;
    case 1:
      outLicense = NetworkServiceLicense_Common;
      break;
    default:
      nn::detail::UnexpectedDefaultImpl();
  }

  NetworkServiceLicenseState outState;
  switch (state) {
    case 0:
      outState = NetworkServiceLicenseState_None;
      break;
    case 1:
      outState = NetworkServiceLicenseState_Available;
      break;
    default:
      nn::detail::UnexpectedDefaultImpl();
  }

  pOutInfo->license = outLicense;
  pOutInfo->state = outState;
  return Result{0};
}

Result NetworkServiceAccountManager::
  RefreshCachedNetworkServiceLicenseInfoAsyncIfTimeElapsed(
    bool* pOutIsRequested, AsyncContext* pOutContext, TimeSpan threshold) {
  sf::SharedPointer<detail::IAsyncContext> context;
  NN_RESULT_DO(
    m_pManager->RefreshCachedNetworkServiceLicenseInfoAsyncIfTimeElapsed(
      sf::Out<bool>(pOutIsRequested),
      sf::Out<sf::SharedPointer<detail::IAsyncContext>>(&context),
      static_cast<uint32_t>(threshold.nanoseconds / 1000000000)));
  *pOutContext = *pOutIsRequested ? MakeAsyncContext(context, m_Uid)
                                  : AsyncContext();
  return Result{0};
}

Result NetworkServiceAccountManager::
  EnsureNetworkServiceAccountIdTokenCacheAsync(
  AsyncContext* pOutContext) {
  sf::SharedPointer<detail::IAsyncContext> context;
  NN_RESULT_DO(m_pManager->EnsureIdTokenCacheAsync(
    sf::Out<sf::SharedPointer<detail::IAsyncContext>>(&context)));
  *pOutContext = MakeAsyncContext(context, m_Uid);
  return Result{0};
}

Result NetworkServiceAccountManager::LoadNetworkServiceAccountIdTokenCache(
  size_t* pOutSize, char* buffer, size_t size) {
  uint32_t tokenSize = 0;
  NN_RESULT_DO(m_pManager->LoadIdTokenCache(sf::Out<uint32_t>(&tokenSize),
    sf::OutBuffer(buffer, size)));
  *pOutSize = tokenSize;
  return Result{0};
}

void NetworkServiceAccountManager::
  RequiresUpdateNetworkServiceAccountIdTokenCache() {
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    m_pManager->RequiresUpdateNetworkServiceAccountIdTokenCache());
}

void NetworkServiceAccountManager::
  RequireReauthenticationOfNetworkServiceAccount() {
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    m_pManager->RequireReauthenticationOfNetworkServiceAccount());
}

Result NetworkServiceAccountManager::RefreshNotificationTokenAsync(
  AsyncContext* pOutContext) {
  sf::SharedPointer<detail::IAsyncContext> context;
  NN_RESULT_DO(m_pManager->RefreshNotificationTokenAsync(
    sf::Out<sf::SharedPointer<detail::IAsyncContext>>(&context)));
  *pOutContext = MakeAsyncContext(context, m_Uid);
  return Result{0};
}

Result
NetworkServiceAccountManager::CalculateNintendoAccountAuthenticationFingerprint(
  NintendoAccountAuthenticationFingerprint* pOutFingerprint) {
  return m_pManager->CalculateNintendoAccountAuthenticationFingerprint(
    sf::Out<NintendoAccountAuthenticationFingerprint>(pOutFingerprint));
}

Result NetworkServiceAccountManager::SetSystemProgramIdentification(
  const SystemProgramIdentification& identification) {
  return m_pManager->SetSystemProgramIdentification(identification, 0);
}


NetworkServiceAccountAdministrator::NetworkServiceAccountAdministrator()
  : NetworkServiceAccountManager() {}

NetworkServiceAccountAdministrator::NetworkServiceAccountAdministrator(
  const Uid& uid, baas::IAdministrator* pAdministrator)
  : NetworkServiceAccountManager(uid, pAdministrator) {}

void NetworkServiceAccountAdministrator::Swap(
  NetworkServiceAccountAdministrator& other) {
  NetworkServiceAccountManager::Swap(other);
}

Result NetworkServiceAccountAdministrator::IsNetworkServiceAccountRegistered(
  bool* pOutIsRegistered) const {
  return GetAdministrator()->IsRegistered(sf::Out<bool>(pOutIsRegistered));
}

#define NN_ACCOUNT_DEFINE_ASYNC(name) \
  Result NetworkServiceAccountAdministrator::name( \
    AsyncContext* pOutContext) { \
    sf::SharedPointer<detail::IAsyncContext> context; \
    NN_RESULT_DO(GetAdministrator()->name( \
      sf::Out<sf::SharedPointer<detail::IAsyncContext>>(&context))); \
    const Uid uid = m_Uid; \
    *pOutContext = AsyncContext(context.Detach(), uid); \
    return Result{0}; \
  }

NN_ACCOUNT_DEFINE_ASYNC(RegisterAsync)
NN_ACCOUNT_DEFINE_ASYNC(UnregisterAsync)
NN_ACCOUNT_DEFINE_ASYNC(SynchronizeProfileAsync)
NN_ACCOUNT_DEFINE_ASYNC(DownloadProfileAsync)
NN_ACCOUNT_DEFINE_ASYNC(CheckRequiredLicenseForLexAsync)
NN_ACCOUNT_DEFINE_ASYNC(TryRecoverNintendoAccountUserStateAsync)

#undef NN_ACCOUNT_DEFINE_ASYNC

Result NetworkServiceAccountAdministrator::DeleteRegistrationInfoLocally() {
  return GetAdministrator()->DeleteRegistrationInfoLocally();
}

Result NetworkServiceAccountAdministrator::SynchronizeProfileAsyncIfTimeElapsed(
  bool* pOutIsRequested, AsyncContext* pOutContext, TimeSpan threshold) {
  sf::SharedPointer<detail::IAsyncContext> context;
  NN_RESULT_DO(GetAdministrator()->SynchronizeProfileAsyncIfTimeElapsed(
    sf::Out<bool>(pOutIsRequested),
    sf::Out<sf::SharedPointer<detail::IAsyncContext>>(&context),
    static_cast<uint32_t>(threshold.nanoseconds / 1000000000)));
  if (*pOutIsRequested) {
    const Uid uid = m_Uid;
    *pOutContext = AsyncContext(context.Detach(), uid);
  }
  else {
    *pOutContext = AsyncContext();
  }
  return Result{0};
}

Result NetworkServiceAccountAdministrator::UploadProfileAsync(
  AsyncContext* pOutContext) {
  sf::SharedPointer<detail::IAsyncContext> context;
  NN_RESULT_DO(GetAdministrator()->UploadProfileAsync(
    sf::Out<sf::SharedPointer<detail::IAsyncContext>>(&context)));
  if (!context) {
    return ResultNullAsyncContext;
  }
  const Uid uid = m_Uid;
  *pOutContext = AsyncContext(context.Detach(), uid);
  return Result{0};
}

Result NetworkServiceAccountAdministrator::IsLinkedWithNintendoAccount(
  bool* pOutIsLinked) const {
  return GetAdministrator()->IsLinkedWithNintendoAccount(
    sf::Out<bool>(pOutIsLinked));
}

Result NetworkServiceAccountAdministrator::GetRequestForNintendoAccountInfoView(
  RequestUrl* pOutRequest) const {
  return GetAdministrator()->GetRequestForNintendoAccountInfoView(
    sf::Out<RequestUrl>(pOutRequest));
}

Result NetworkServiceAccountAdministrator::GetRequestForAnalyticsOptIn(
  RequestUrl* pOutRequest, NintendoAccountAnalyticsOptInTarget target) const {
  return GetAdministrator()->GetRequestForAnalyticsOptIn(
    sf::Out<RequestUrl>(pOutRequest), target);
}

Result
  NetworkServiceAccountAdministrator::GetRequiredLicenseCacheForOnlinePlay(
  NetworkServiceLicenseKind* pOutKind,
  const ApplicationId& applicationId) const {
  uint32_t kind = 0;
  NN_RESULT_DO(GetAdministrator()->GetRequiredLicenseCacheForOnlinePlay(
    sf::Out<uint32_t>(&kind), applicationId.value));
  switch (kind) {
    case 0:
      *pOutKind = NetworkServiceLicenseKind_None;
      break;
    case 1:
      *pOutKind = NetworkServiceLicenseKind_Common;
      break;
    default:
      nn::detail::UnexpectedDefaultImpl();
  }
  return Result{0};
}

Result NetworkServiceAccountAdministrator::
  IsRequiredLicenseCacheRefreshRequiredForOnlinePlay(bool* pOutIsRequired,
  const ApplicationId& applicationId) const {
  return GetAdministrator()->IsRequiredLicenseCacheRefreshRequiredForOnlinePlay(
    sf::Out<bool>(pOutIsRequired), applicationId.value);
}

Result NetworkServiceAccountAdministrator::GetRequiredLicenseCacheForLogin(
  NetworkServiceLicenseKind* pOutKind,
  const ApplicationId& applicationId) const {
  uint32_t kind = 0;
  NN_RESULT_DO(GetAdministrator()->GetRequiredLicenseCacheForLogin(
    sf::Out<uint32_t>(&kind), applicationId.value));
  switch (kind) {
    case 0:
      *pOutKind = NetworkServiceLicenseKind_None;
      break;
    case 1:
      *pOutKind = NetworkServiceLicenseKind_Common;
      break;
    default:
      nn::detail::UnexpectedDefaultImpl();
  }
  return Result{0};
}

Result NetworkServiceAccountAdministrator::
  RefreshRequiredLicenseCacheForOnlinePlayAync(
  AsyncContext* pOutContext, const ApplicationId& applicationId) {
  sf::SharedPointer<detail::IAsyncContext> context;
  NN_RESULT_DO(
    GetAdministrator()->RefreshRequiredLicenseCacheForOnlinePlayAsync(
      sf::Out<sf::SharedPointer<detail::IAsyncContext>>(&context),
      applicationId.value));
  const Uid uid = m_Uid;
  *pOutContext = AsyncContext(context.Detach(), uid);
  return Result{0};
}

Result NetworkServiceAccountAdministrator::InvalidateRequiredLicenseCache(
  const ApplicationId& applicationId) {
  return GetAdministrator()->InvalidateRequiredLicenseCache(
    applicationId.value);
}

Result NetworkServiceAccountAdministrator::DebugUnlinkNintendoAccountAsync(
  AsyncContext* pOutContext) {
  sf::SharedPointer<detail::IAsyncContext> context;
  NN_RESULT_DO(GetAdministrator()->DebugUnlinkNintendoAccountAsync(
    sf::Out<sf::SharedPointer<detail::IAsyncContext>>(&context)));
  if (!context) {
    return ResultNullAsyncContext;
  }
  const Uid uid = m_Uid;
  *pOutContext = AsyncContext(context.Detach(), uid);
  return Result{0};
}

Result NetworkServiceAccountAdministrator::GetAuthenticationInfoForWin(
  NetworkServiceAccountAuthenticationInfo* pOutInfo) const {
  return GetAdministrator()->GetAuthenticationInfoForWin(
    sf::Out<NetworkServiceAccountId>(&pOutInfo->accountId),
    sf::Out<uint64_t>(&pOutInfo->deviceAccountId),
    sf::OutBuffer(pOutInfo->token, sizeof(pOutInfo->token)));
}

Result NetworkServiceAccountAdministrator::ImportAsyncForWin(
  AsyncContext* pOutContext,
  const NetworkServiceAccountAuthenticationInfo& info) {
  sf::SharedPointer<detail::IAsyncContext> context;
  NN_RESULT_DO(GetAdministrator()->ImportAsyncForWin(
    sf::Out<sf::SharedPointer<detail::IAsyncContext>>(&context),
    info.accountId, info.deviceAccountId,
    sf::InBuffer(info.token, sizeof(info.token))));
  const Uid uid = m_Uid;
  *pOutContext = AsyncContext(context.Detach(), uid);
  return Result{0};
}


// Each procedure takes the service object and the user of this manager.
#define NN_ACCOUNT_DEFINE_CREATE(owner, service, name, Procedure, Interface) \
  Result owner::name(Procedure* pOutProcedure) { \
    sf::SharedPointer<Interface> procedure; \
    NN_RESULT_DO(service->name( \
      sf::Out<sf::SharedPointer<Interface>>(&procedure))); \
    const Uid uid = m_Uid; \
    *pOutProcedure = Procedure(uid, procedure.Detach()); \
    return Result{0}; \
  }

#define NN_ACCOUNT_DEFINE_RESUME(owner, service, name, Procedure, Interface) \
  Result owner::name(Procedure* pOutProcedure, const SessionId& sessionId) { \
    sf::SharedPointer<Interface> procedure; \
    const SessionId id = sessionId; \
    NN_RESULT_DO(service->name( \
      sf::Out<sf::SharedPointer<Interface>>(&procedure), id)); \
    const Uid uid = m_Uid; \
    *pOutProcedure = Procedure(uid, procedure.Detach()); \
    return Result{0}; \
  }

NN_ACCOUNT_DEFINE_CREATE(NetworkServiceAccountManager, m_pManager,
  CreateProcedureToReauthenticateNintendoAccount,
  NintendoAccountReauthenticationProcedure,
  nas::IOAuthProcedureForNintendoAccountReauthentication)
NN_ACCOUNT_DEFINE_RESUME(NetworkServiceAccountManager, m_pManager,
  ResumeProcedureToReauthenticateNintendoAccount,
  NintendoAccountReauthenticationProcedure,
  nas::IOAuthProcedureForNintendoAccountReauthentication)
NN_ACCOUNT_DEFINE_CREATE(NetworkServiceAccountAdministrator,
  GetAdministrator(), CreateProcedureToLinkWithNintendoAccount,
  NintendoAccountLinkageProcedure,
  nas::IOAuthProcedureForNintendoAccountLinkage)
NN_ACCOUNT_DEFINE_RESUME(NetworkServiceAccountAdministrator,
  GetAdministrator(), ResumeProcedureToLinkWithNintendoAccount,
  NintendoAccountLinkageProcedure,
  nas::IOAuthProcedureForNintendoAccountLinkage)
NN_ACCOUNT_DEFINE_CREATE(NetworkServiceAccountAdministrator,
  GetAdministrator(), CreateProcedureToUpdateLinkageStateOfNintendoAccount,
  NintendoAccountLinkageStateUpdateProcedure, http::IOAuthProcedure)
NN_ACCOUNT_DEFINE_RESUME(NetworkServiceAccountAdministrator,
  GetAdministrator(), ResumeProcedureToUpdateLinkageStateOfNintendoAccount,
  NintendoAccountLinkageStateUpdateProcedure, http::IOAuthProcedure)
NN_ACCOUNT_DEFINE_CREATE(NetworkServiceAccountAdministrator,
  GetAdministrator(), CreateProcedureToLinkNnidWithNintendoAccount,
  detail::SimpleOAuthProcedureBase, http::IOAuthProcedure)
NN_ACCOUNT_DEFINE_RESUME(NetworkServiceAccountAdministrator,
  GetAdministrator(), ResumeProcedureToLinkNnidWithNintendoAccount,
  detail::SimpleOAuthProcedureBase, http::IOAuthProcedure)
NN_ACCOUNT_DEFINE_RESUME(NetworkServiceAccountAdministrator,
  GetAdministrator(),
  ProxyProcedureToAcquireApplicationAuthorizationForNintendoAccount,
  NintendoAccountApplicationAuthorizationProcedure, http::IOAuthProcedure)

#undef NN_ACCOUNT_DEFINE_RESUME
#undef NN_ACCOUNT_DEFINE_CREATE

Result
  NetworkServiceAccountManager::RefreshCachedNetworkServiceLicenseInfoAsync(
  AsyncContext* pOutContext) {
  sf::SharedPointer<detail::IAsyncContext> context;
  NN_RESULT_DO(m_pManager->RefreshCachedNetworkServiceLicenseInfoAsync(
    sf::Out<sf::SharedPointer<detail::IAsyncContext>>(&context)));
  *pOutContext = AsyncContext(context.Detach(), m_Uid);
  return Result{0};
}
}
