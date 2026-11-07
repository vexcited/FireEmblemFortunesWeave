#include "nn/account/account_baas_access_token.hpp"
#include "nn/account/account_network_service_account_administrator.hpp"
#include "nn/account/account_network_service_account_manager.hpp"
#include "nn/account/account_network_service_license_info.hpp"
#include "nn/account/account_service.hpp"
#include "nn/diag/diag_abort.hpp"
#include "nn/span.hpp"

namespace nn::account {

namespace detail {

void InitializeForApplication();
void InitializeForMicroApplication();
void InitializeForSystemService();
void InitializeForAdministrator();
void InitializeForSystemProcess();
void InitializeForSystemProcessWithProfileEditor();
void InitializeForSystemProcessAsAdministrator();
void InitializeWith(
  sf::SharedPointer<IAccountServiceForAdministrator>&& service);
void Finalize();
Uid GetUserId(const UserHandle& handle);

}

void Initialize();
void InitializeForMicroApplication();
void InitializeForSystemService();
void InitializeForAdministrator();
void InitializeForSystemProcess();
void InitializeForSystemProcessWithProfileEditor();
void InitializeForSystemProcessAsAdministrator();
void InitializeWith(
  sf::SharedPointer<IAccountServiceForAdministrator>&& service);
void Finalize();
Result GetUserId(Uid* pOutUid, const UserHandle& handle);
Result ListAllUsers(int* pOutActualLength, Uid* pOutUsers, int count);
Result ListOpenUsers(int* pOutActualLength, Uid* pOutUsers, int count);
Result ListOpenUsers(int* pOutActualLength, Uid* pOutUsers, int count,
  const arp::ApplicationInstanceId& applicationInstanceId);
Result ListQualifiedUsers(int* pOutActualLength, Uid* pOutUsers, int count);
void ListPushedOpenUsers(Uid* pOutUsers, int count);
Result ListQualifiedUsers(int* pOutActualLength, Uid* pOutUsers, int count,
  const ApplicationId& applicationId);
Result GetUserCount(int* pOutCount);
Result GetUserExistence(bool* pOutExistence, const Uid& uid);
Result GetLastOpenedUser(Uid* pOutUid);
Result GetProfileDigest(ProfileDigest* pOutDigest, const Uid& uid);
Result IsUserRegistrationRequestPermitted(bool* pOutIsPermitted);
Result GetStableUserId(StableUserId* pOutId, const Uid& uid);
Result CheckNetworkServiceAvailabilityAsync(AsyncContext* pOutContext);
Result StoreSaveDataThumbnailImage(const Uid& uid, const void* image,
  size_t size);
Result DeleteSaveDataThumbnailImage(const Uid& uid);
Result GetUserRegistrationNotifier(Notifier* pOutNotifier);
Result GetUserStateChangeNotifier(Notifier* pOutNotifier);
Result GetProfileUpdateNotifier(Notifier* pOutNotifier);
Result GetProfileSyncNotifier(Notifier* pOutNotifier);
Result GetNetworkServiceAccountAvailabilityChangeNotifier(
  Notifier* pOutNotifier);
Result GetNasOp2MembershipStateChangeNotifier(Notifier* pOutNotifier);
Result GetNetworkServiceAccountManager(
  NetworkServiceAccountManager* pOutManager, const Uid& uid);
Result CheckNetworkServiceAvailabilityAsync(AsyncContext* pOutContext,
  const SystemProgramIdentification& identification);
Result StoreSaveDataThumbnailImage(const Uid& uid,
  const ApplicationId& applicationId, const void* image, size_t size);
Result DeleteSaveDataThumbnailImage(const Uid& uid,
  const ApplicationId& applicationId);
Result LoadSaveDataThumbnailImage(void* image, size_t size, const Uid& uid,
  const ApplicationId& applicationId);
Result GetSaveDataThumbnailImageExistence(bool* pOutExistence,
  const Uid& uid, const ApplicationId& applicationId);
Declaration EnableInterProgramOpenUserRetention(
  const arp::ApplicationInstanceId& applicationInstanceId);
AsyncContext EnsureSignedDeviceIdentifierCacheForNintendoAccountAsync();
bool LoadSignedDeviceIdentifierCacheForNintendoAccount(
  SignedDeviceIdentifier* pOutIdentifier);
void DebugInvalidateUserResourceCache(const Uid& uid);
Result DebugSetUserStateOpen(const Uid& uid,
  const arp::ApplicationInstanceId& applicationInstanceId);
Result DebugSetUserStateClose(const Uid& uid,
  const arp::ApplicationInstanceId& applicationInstanceId);
Result BeginUserRegistration(Uid* pOutUid);
Result CompleteUserRegistration(const Uid& uid);
Result CompleteUserRegistrationForcibly(const Uid& uid);
Result CancelUserRegistration(const Uid& uid);
Result DeleteUser(const Uid& uid);
Result SetUserPosition(const Uid& uid, int position);
Result AuthenticateServiceAsync(AsyncContext* pOutContext);
Result GetNetworkServiceAccountAdministrator(
  NetworkServiceAccountAdministrator* pOutAdministrator, const Uid& uid);
Result SynchronizeNetworkServiceAccountsSnapshotAsync(
  AsyncContext* pOutContext);
Result CreateDeviceMigrationUserExporter(
  DeviceMigrationUserExporter* pOutExporter, bool isMigrationSaveDataRequired);
Result UploadNasCredential(AsyncContext* pOutContext, const Uid& uid,
  int64_t credential);
Result DeleteUserMigrationSaveData();
Result CreateDeviceMigrationUserImporter(
  DeviceMigrationUserImporter* pOutImporter, sf::NativeHandle&& transferMemory,
  size_t size);
Result UnsetUserUnqualifiedForDebug(ApplicationId applicationId, Uid uid);
Result ListUsersUnqualifiedForDebug(int* pOutCount, Span<Uid> users,
  ApplicationId applicationId);
Result RefreshFirmwareSettingsForDebug();

namespace {

using detail::GetAccountServiceObjectBase;
using detail::GetAccountServiceObjectForAdministrator;
using detail::GetAccountServiceObjectForApplication;
using detail::GetAccountServiceObjectForSystemService;

using AsyncContextOut = sf::Out<sf::SharedPointer<detail::IAsyncContext>>;
using NotifierOut = sf::Out<sf::SharedPointer<detail::INotifier>>;

}

void Initialize() {
  detail::InitializeForApplication();
}

void InitializeForMicroApplication() {
  detail::InitializeForMicroApplication();
}

void InitializeForSystemService() {
  detail::InitializeForSystemService();
}

void InitializeForAdministrator() {
  detail::InitializeForAdministrator();
}

void InitializeForSystemProcess() {
  detail::InitializeForSystemProcess();
}

void InitializeForSystemProcessWithProfileEditor() {
  detail::InitializeForSystemProcessWithProfileEditor();
}

void InitializeForSystemProcessAsAdministrator() {
  detail::InitializeForSystemProcessAsAdministrator();
}

void InitializeWith(
  sf::SharedPointer<IAccountServiceForAdministrator>&& service) {
  detail::InitializeWith(static_cast<
    sf::SharedPointer<IAccountServiceForAdministrator>&&>(service));
}

void Finalize() {
  detail::Finalize();
}

namespace {

constexpr int kUserCountMax = 8;

// The service lists the valid users first, the rest of the copy is invalid.
[[gnu::always_inline]] inline int CopyValidUsers(Uid* pOutUsers, int count,
  const Uid (&users)[kUserCountMax]) {
  int actual = 0;
  while (actual < kUserCountMax &&
    (users[actual].value[0] | users[actual].value[1]) != 0) {
    actual++;
  }
  const Uid invalid = {};
  for (int i = 0; i < count; i++) {
    pOutUsers[i] = i < actual ? users[i] : invalid;
  }
  return actual;
}

[[gnu::always_inline]] inline void CopyUsers(int* pOutActualLength,
  Uid* pOutUsers, int count, const Uid (&users)[kUserCountMax]) {
  *pOutActualLength = CopyValidUsers(pOutUsers, count, users);
}

}

Result ListAllUsers(int* pOutActualLength, Uid* pOutUsers, int count) {
  Uid users[kUserCountMax] = {};
  NN_RESULT_DO(GetAccountServiceObjectBase()->ListAllUsers(
    sf::OutArray<Uid>(users, kUserCountMax)));
  CopyUsers(pOutActualLength, pOutUsers, count, users);
  return Result{0};
}

Result ListOpenUsers(int* pOutActualLength, Uid* pOutUsers, int count) {
  Uid users[kUserCountMax] = {};
  NN_RESULT_DO(GetAccountServiceObjectBase()->ListOpenUsers(
    sf::OutArray<Uid>(users, kUserCountMax)));
  CopyUsers(pOutActualLength, pOutUsers, count, users);
  return Result{0};
}

Result ListOpenUsers(int* pOutActualLength, Uid* pOutUsers, int count,
  const arp::ApplicationInstanceId& applicationInstanceId) {
  Uid users[kUserCountMax] = {};
  NN_RESULT_DO(
    GetAccountServiceObjectForSystemService()->ListOpenUsersInApplication(
      sf::OutArray<Uid>(users, kUserCountMax), applicationInstanceId.value));
  CopyUsers(pOutActualLength, pOutUsers, count, users);
  return Result{0};
}

Result ListQualifiedUsers(int* pOutActualLength, Uid* pOutUsers, int count) {
  Uid users[kUserCountMax] = {};
  NN_RESULT_DO(GetAccountServiceObjectForApplication()->ListQualifiedUsers(
    sf::OutArray<Uid>(users, kUserCountMax)));
  CopyUsers(pOutActualLength, pOutUsers, count, users);
  return Result{0};
}

Result ListQualifiedUsers(int* pOutActualLength, Uid* pOutUsers, int count,
  const ApplicationId& applicationId) {
  Uid users[kUserCountMax] = {};
  NN_RESULT_DO(GetAccountServiceObjectForSystemService()->ListQualifiedUsers(
    sf::OutArray<Uid>(users, kUserCountMax), applicationId.value));
  CopyUsers(pOutActualLength, pOutUsers, count, users);
  return Result{0};
}

namespace detail {

// Set by InitializeBaasAccessTokenAccessor, which is not recovered yet.
extern sf::SharedPointer<IBaasAccessTokenAccessor> g_BaasAccessTokenAccessor;

}

namespace {

sf::SharedPointer<IBaasAccessTokenAccessor> GetBaasAccessTokenAccessor() {
  return detail::g_BaasAccessTokenAccessor;
}

}

Result GetBaasDeviceAccountId(uint64_t* pOutId, const Uid& uid) {
  return GetBaasAccessTokenAccessor()->GetDeviceAccountId(
    sf::Out<uint64_t>(pOutId), uid);
}

Result LoadBaasAccessTokenCache(size_t* pOutSize, char* buffer, size_t size,
  const Uid& uid) {
  uint32_t loaded = 0;
  const Result result = GetBaasAccessTokenAccessor()->LoadCache(
    sf::Out<uint32_t>(&loaded), sf::OutBuffer(buffer, size), uid);
  NN_RESULT_DO(result);
  *pOutSize = loaded;
  return Result{0};
}

void ListPushedOpenUsers(Uid* pOutUsers, int count) {
  Uid users[kUserCountMax] = {};
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    GetAccountServiceObjectForApplication()->ListOpenContextStoredUsers(
      sf::OutArray<Uid>(users, kUserCountMax)));
  CopyValidUsers(pOutUsers, count, users);
}

Result GetUserCount(int* pOutCount) {
  int32_t count = 0;
  NN_RESULT_DO(
    GetAccountServiceObjectBase()->GetUserCount(sf::Out<int32_t>(&count)));
  *pOutCount = count;
  return Result{0};
}

Result GetUserExistence(bool* pOutExistence, const Uid& uid) {
  return GetAccountServiceObjectBase()->GetUserExistence(
    sf::Out<bool>(pOutExistence), uid);
}

Result GetLastOpenedUser(Uid* pOutUid) {
  return GetAccountServiceObjectBase()->GetLastOpenedUser(
    sf::Out<Uid>(pOutUid));
}

Result GetProfileDigest(ProfileDigest* pOutDigest, const Uid& uid) {
  return GetAccountServiceObjectBase()->GetProfileDigest(
    sf::Out<ProfileDigest>(pOutDigest), uid);
}

Result IsUserRegistrationRequestPermitted(bool* pOutIsPermitted) {
  return GetAccountServiceObjectBase()->IsUserRegistrationRequestPermitted(
    sf::Out<bool>(pOutIsPermitted), 0);
}

Result GetStableUserId(StableUserId* pOutId, const Uid& uid) {
  sf::SharedPointer<profile::IProfile> profile;
  NN_RESULT_DO(GetAccountServiceObjectBase()->GetProfile(
    sf::Out<sf::SharedPointer<profile::IProfile>>(&profile), uid));
  StableUserId id = {};
  NN_RESULT_DO(profile->GetStableUserId(sf::Out<StableUserId>(&id)));
  *pOutId = id;
  return Result{0};
}

Result GetUserId(Uid* pOutUid, const UserHandle& handle) {
  *pOutUid = detail::GetUserId(handle);
  return Result{0};
}

Result CheckNetworkServiceAvailabilityAsync(AsyncContext* pOutContext) {
  sf::SharedPointer<detail::IAsyncContext> context;
  NN_RESULT_DO(
    GetAccountServiceObjectForApplication()
      ->CheckNetworkServiceAvailabilityAsync(AsyncContextOut(&context)));
  *pOutContext = AsyncContext(context.Detach());
  return Result{0};
}

Result EnsureBaasAccessTokenCacheAsync(AsyncContext* pOutContext,
  const Uid& uid) {
  sf::SharedPointer<detail::IAsyncContext> context;
  const Result result = GetBaasAccessTokenAccessor()->EnsureCacheAsync(
    AsyncContextOut(&context), uid);
  NN_RESULT_DO(result);
  *pOutContext = AsyncContext(context.Detach(), uid);
  return Result{0};
}

Result StoreSaveDataThumbnailImage(const Uid& uid, const void* image,
  size_t size) {
  return GetAccountServiceObjectForApplication()->StoreSaveDataThumbnail(uid,
    sf::InBuffer(image, size));
}

Result DeleteSaveDataThumbnailImage(const Uid& uid) {
  return GetAccountServiceObjectForApplication()->DeleteSaveDataThumbnail(
    uid);
}

#define NN_ACCOUNT_DEFINE_NOTIFIER_GETTER(name, method) \
  Result name(Notifier* pOutNotifier) { \
    sf::SharedPointer<detail::INotifier> notifier; \
    NN_RESULT_DO(GetAccountServiceObjectForSystemService()->method( \
      NotifierOut(&notifier))); \
    *pOutNotifier = Notifier(notifier.Detach()); \
    return Result{0}; \
  }

NN_ACCOUNT_DEFINE_NOTIFIER_GETTER(GetUserRegistrationNotifier,
  GetUserRegistrationNotifier)
NN_ACCOUNT_DEFINE_NOTIFIER_GETTER(GetUserStateChangeNotifier,
  GetUserStateChangeNotifier)
NN_ACCOUNT_DEFINE_NOTIFIER_GETTER(GetProfileUpdateNotifier,
  GetProfileUpdateNotifier)
NN_ACCOUNT_DEFINE_NOTIFIER_GETTER(GetProfileSyncNotifier,
  GetProfileSyncNotifier)
NN_ACCOUNT_DEFINE_NOTIFIER_GETTER(
  GetNetworkServiceAccountAvailabilityChangeNotifier,
  GetBaasUserAvailabilityChangeNotifier)
NN_ACCOUNT_DEFINE_NOTIFIER_GETTER(GetNasOp2MembershipStateChangeNotifier,
  GetNasOp2MembershipStateChangeNotifier)

#undef NN_ACCOUNT_DEFINE_NOTIFIER_GETTER

Result GetNetworkServiceAccountManager(
  NetworkServiceAccountManager* pOutManager, const Uid& uid) {
  sf::SharedPointer<baas::IManagerForSystemService> manager;
  NN_RESULT_DO(
    GetAccountServiceObjectForSystemService()
      ->GetBaasAccountManagerForSystemService(
        sf::Out<sf::SharedPointer<baas::IManagerForSystemService>>(&manager),
        uid));
  NetworkServiceAccountManager temporary(uid, manager.Detach());
  pOutManager->Swap(temporary);
  return Result{0};
}

Result CheckNetworkServiceAvailabilityAsync(AsyncContext* pOutContext,
  const SystemProgramIdentification& identification) {
  sf::SharedPointer<detail::IAsyncContext> context;
  NN_RESULT_DO(
    GetAccountServiceObjectForSystemService()
      ->CheckNetworkServiceAvailabilityAsync(AsyncContextOut(&context),
        identification, 0));
  *pOutContext = AsyncContext(context.Detach());
  return Result{0};
}

Result StoreSaveDataThumbnailImage(const Uid& uid,
  const ApplicationId& applicationId, const void* image, size_t size) {
  return GetAccountServiceObjectForSystemService()->StoreSaveDataThumbnail(
    uid, applicationId.value, sf::InBuffer(image, size));
}

Result DeleteSaveDataThumbnailImage(const Uid& uid,
  const ApplicationId& applicationId) {
  return GetAccountServiceObjectForSystemService()->DeleteSaveDataThumbnail(
    uid, applicationId.value);
}

Result LoadSaveDataThumbnailImage(void* image, size_t size, const Uid& uid,
  const ApplicationId& applicationId) {
  int32_t loadedSize = 0;
  return GetAccountServiceObjectForSystemService()->LoadSaveDataThumbnail(
    sf::Out<int32_t>(&loadedSize), sf::OutBuffer(image, size), uid,
    applicationId.value);
}

Result GetSaveDataThumbnailImageExistence(bool* pOutExistence,
  const Uid& uid, const ApplicationId& applicationId) {
  return GetAccountServiceObjectForSystemService()
    ->GetSaveDataThumbnailExistence(sf::Out<bool>(pOutExistence), uid,
      applicationId.value);
}

Declaration EnableInterProgramOpenUserRetention(
  const arp::ApplicationInstanceId& applicationInstanceId) {
  sf::SharedPointer<detail::ISessionObject> session;
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    GetAccountServiceObjectForSystemService()->ActivateOpenContextRetention(
      sf::Out<sf::SharedPointer<detail::ISessionObject>>(&session),
      applicationInstanceId.value));
  return Declaration(session.Detach());
}

AsyncContext EnsureSignedDeviceIdentifierCacheForNintendoAccountAsync() {
  sf::SharedPointer<detail::IAsyncContext> context;
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    GetAccountServiceObjectForSystemService()
      ->EnsureSignedDeviceIdentifierCacheAsync(AsyncContextOut(&context)));
  return AsyncContext(context.Detach());
}

bool LoadSignedDeviceIdentifierCacheForNintendoAccount(
  SignedDeviceIdentifier* pOutIdentifier) {
  return GetAccountServiceObjectForSystemService()
    ->LoadSignedDeviceIdentifierCache(
      sf::Out<SignedDeviceIdentifier>(pOutIdentifier))
    .IsSuccess();
}

void DebugInvalidateUserResourceCache(const Uid& uid) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    GetAccountServiceObjectForSystemService()
      ->DebugInvalidateUserResourceCache(uid));
}

Result DebugSetUserStateOpen(const Uid& uid,
  const arp::ApplicationInstanceId& applicationInstanceId) {
  return GetAccountServiceObjectForSystemService()->DebugSetUserStateOpen(
    uid, applicationInstanceId.value);
}

Result DebugSetUserStateClose(const Uid& uid,
  const arp::ApplicationInstanceId& applicationInstanceId) {
  return GetAccountServiceObjectForSystemService()->DebugSetUserStateClose(
    uid, applicationInstanceId.value);
}

Result BeginUserRegistration(Uid* pOutUid) {
  return GetAccountServiceObjectForAdministrator()->BeginUserRegistration(
    sf::Out<Uid>(pOutUid));
}

Result CompleteUserRegistration(const Uid& uid) {
  return GetAccountServiceObjectForAdministrator()->CompleteUserRegistration(
    uid);
}

Result CompleteUserRegistrationForcibly(const Uid& uid) {
  return GetAccountServiceObjectForAdministrator()
    ->CompleteUserRegistrationForcibly(uid);
}

Result CancelUserRegistration(const Uid& uid) {
  return GetAccountServiceObjectForAdministrator()->CancelUserRegistration(
    uid);
}

Result DeleteUser(const Uid& uid) {
  return GetAccountServiceObjectForAdministrator()->DeleteUser(uid);
}

Result SetUserPosition(const Uid& uid, int position) {
  return GetAccountServiceObjectForAdministrator()->SetUserPosition(uid,
    position);
}

Result AuthenticateServiceAsync(AsyncContext* pOutContext) {
  sf::SharedPointer<detail::IAsyncContext> context;
  NN_RESULT_DO(
    GetAccountServiceObjectForAdministrator()->AuthenticateServiceAsync(
      AsyncContextOut(&context)));
  *pOutContext = AsyncContext(context.Detach());
  return Result{0};
}

Result GetNetworkServiceAccountAdministrator(
  NetworkServiceAccountAdministrator* pOutAdministrator, const Uid& uid) {
  sf::SharedPointer<baas::IAdministrator> administrator;
  NN_RESULT_DO(
    GetAccountServiceObjectForAdministrator()->GetBaasAccountAdministrator(
      sf::Out<sf::SharedPointer<baas::IAdministrator>>(&administrator), uid));
  NetworkServiceAccountAdministrator temporary(uid, administrator.Detach());
  pOutAdministrator->Swap(temporary);
  return Result{0};
}

Result SynchronizeNetworkServiceAccountsSnapshotAsync(
  AsyncContext* pOutContext) {
  sf::SharedPointer<detail::IAsyncContext> context;
  NN_RESULT_DO(
    GetAccountServiceObjectForAdministrator()
      ->SynchronizeNetworkServiceAccountsSnapshotAsync(
        AsyncContextOut(&context)));
  *pOutContext = AsyncContext(context.Detach());
  return Result{0};
}

Result CreateDeviceMigrationUserExporter(
  DeviceMigrationUserExporter* pOutExporter, bool isMigrationSaveDataRequired) {
  using Request = migration::IDeviceMigrationUserExportRequest;
  sf::SharedPointer<Request> request;
  NN_RESULT_DO(
    GetAccountServiceObjectForAdministrator()
      ->CreateDeviceMigrationUserExportRequest(
        sf::Out<sf::SharedPointer<Request>>(&request),
        isMigrationSaveDataRequired));
  *pOutExporter = DeviceMigrationUserExporter(request.Detach());
  return Result{0};
}

Result UploadNasCredential(AsyncContext* pOutContext, const Uid& uid,
  int64_t credential) {
  sf::SharedPointer<detail::IAsyncContext> context;
  NN_RESULT_DO(GetAccountServiceObjectForAdministrator()->UploadNasCredential(
    AsyncContextOut(&context), uid, credential));
  *pOutContext = AsyncContext(context.Detach());
  return Result{0};
}

Result DeleteUserMigrationSaveData() {
  return GetAccountServiceObjectForAdministrator()
    ->DeleteUserMigrationSaveData();
}

Result CreateDeviceMigrationUserImporter(
  DeviceMigrationUserImporter* pOutImporter, sf::NativeHandle&& transferMemory,
  size_t size) {
  using Request = migration::IDeviceMigrationUserImportRequest;
  sf::SharedPointer<Request> request;
  NN_RESULT_DO(
    GetAccountServiceObjectForAdministrator()
      ->CreateDeviceMigrationUserImportRequest(
        sf::Out<sf::SharedPointer<Request>>(&request),
        static_cast<sf::NativeHandle&&>(transferMemory),
        static_cast<uint32_t>(size)));
  *pOutImporter = DeviceMigrationUserImporter(request.Detach());
  return Result{0};
}

Result UnsetUserUnqualifiedForDebug(ApplicationId applicationId, Uid uid) {
  return GetAccountServiceObjectForAdministrator()
    ->UnsetUserUnqualifiedForDebug(applicationId.value, uid);
}

Result ListUsersUnqualifiedForDebug(int* pOutCount, Span<Uid> users,
  ApplicationId applicationId) {
  int32_t count = 0;
  NN_RESULT_DO(
    GetAccountServiceObjectForAdministrator()->ListUsersUnqualifiedForDebug(
      sf::Out<int32_t>(&count),
      sf::OutArray<Uid>(users.data, users.size), applicationId.value));
  *pOutCount = count;
  return Result{0};
}

Result RefreshFirmwareSettingsForDebug() {
  return GetAccountServiceObjectForAdministrator()
    ->RefreshFirmwareSettingsForDebug();
}

Declaration::~Declaration() {
  if (m_pSession != nullptr) {
    m_pSession->Release();
  }
}

void Declaration::Swap(Declaration& other) {
  detail::ISessionObject* pSession = m_pSession;
  m_pSession = other.m_pSession;
  other.m_pSession = pSession;
}

}
