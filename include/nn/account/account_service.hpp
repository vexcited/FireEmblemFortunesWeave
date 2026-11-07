#pragma once

#include <stdint.h>

#include "nn/account/account_device_migration.hpp"
#include "nn/account/account_network_service_account_administrator.hpp"
#include "nn/account/account_types.hpp"
#include "nn/account/detail/account_i_async_context.hpp"
#include "nn/os/system_event_class.hpp"
#include "nn/time/time_clock_snapshot.hpp"
#include "nn/result.hpp"
#include "nn/sf/native_handle.hpp"
#include "nn/sf/sf_buffers.hpp"
#include "nn/sf/shared_pointer.hpp"

namespace nn::arp {

struct ApplicationInstanceId {
  uint64_t value;
};

}

namespace nn::account {

struct ProfileDigest;
struct SignedDeviceIdentifier;

struct StableUserId {
  uint64_t value[2];
};

namespace detail {

class INotifier : public sf::IServiceObject {
 public:
  virtual void Reserved2() = 0;
  virtual void Reserved3() = 0;
  virtual Result GetSystemEvent(sf::Out<sf::NativeHandle> pOutHandle) = 0;
};
class ISessionObject : public sf::IServiceObject {};

}

namespace profile {

struct ProfileBase;
struct UserData;

class IProfile : public sf::IServiceObject {
 public:
  virtual void Reserved2() = 0;
  virtual void Reserved3() = 0;
  virtual Result Get(sf::Out<ProfileBase> pOutBase,
    sf::Out<UserData> pOutUserData) = 0;
  virtual Result GetBase(sf::Out<ProfileBase> pOutBase) = 0;
  virtual Result GetImageSize(sf::Out<uint32_t> pOutSize) = 0;
  virtual Result LoadImage(sf::Out<uint32_t> pOutSize,
    const sf::OutBuffer& outImage) = 0;
  virtual Result GetLargeImageSize(sf::Out<uint32_t> pOutSize) = 0;
  virtual Result LoadLargeImage(sf::Out<uint32_t> pOutSize,
    const sf::OutBuffer& outImage) = 0;
  virtual void Reserved10() = 0;
  virtual Result GetStableUserId(sf::Out<StableUserId> pOutId) = 0;
};

}

#define NN_ACCOUNT_RESERVED(index) virtual void Reserved##index() = 0

class IAccountServiceBase : public sf::IServiceObject {
 public:
  NN_ACCOUNT_RESERVED(2); NN_ACCOUNT_RESERVED(3);
  virtual Result GetUserCount(sf::Out<int32_t> pOutCount) = 0;
  virtual Result GetUserExistence(sf::Out<bool> pOutExistence,
    const Uid& uid) = 0;
  virtual Result ListAllUsers(const sf::OutArray<Uid>& pOutUsers) = 0;
  virtual Result ListOpenUsers(const sf::OutArray<Uid>& pOutUsers) = 0;
  virtual Result GetLastOpenedUser(sf::Out<Uid> pOutUid) = 0;
  virtual Result GetProfile(
    const sf::Out<sf::SharedPointer<profile::IProfile>>& pOutProfile,
    const Uid& uid) = 0;
  virtual Result GetProfileDigest(sf::Out<ProfileDigest> pOutDigest,
    const Uid& uid) = 0;
  virtual Result IsUserRegistrationRequestPermitted(
    sf::Out<bool> pOutIsPermitted, uint64_t processId) = 0;
  NN_ACCOUNT_RESERVED(12);
  virtual Result TrySelectUserWithoutInteraction(sf::Out<Uid> pOutUid,
    bool isNetworkServiceAccountRequired, uint32_t flags) = 0;
  virtual Result DebugActivateOpenContextRetention(
    const sf::Out<sf::SharedPointer<detail::ISessionObject>>& pOutSession) = 0;
};

class IAccountServiceForApplication : public IAccountServiceBase {
 public:
  NN_ACCOUNT_RESERVED(15); NN_ACCOUNT_RESERVED(16); NN_ACCOUNT_RESERVED(17);
  virtual Result CheckNetworkServiceAvailabilityAsync(
    const sf::Out<sf::SharedPointer<detail::IAsyncContext>>& pOutContext) = 0;
  virtual Result StoreSaveDataThumbnail(const Uid& uid,
    const sf::InBuffer& image) = 0;
  virtual Result DeleteSaveDataThumbnail(const Uid& uid) = 0;
  NN_ACCOUNT_RESERVED(21); NN_ACCOUNT_RESERVED(22);
  virtual Result ListOpenContextStoredUsers(
    const sf::OutArray<Uid>& pOutUsers) = 0;
  NN_ACCOUNT_RESERVED(24);
  virtual Result ListQualifiedUsers(const sf::OutArray<Uid>& pOutUsers) = 0;
};

class IAccountServiceForSystemService : public IAccountServiceBase {
 public:
  virtual Result GetUserRegistrationNotifier(
    const sf::Out<sf::SharedPointer<detail::INotifier>>& pOutNotifier) = 0;
  virtual Result GetUserStateChangeNotifier(
    const sf::Out<sf::SharedPointer<detail::INotifier>>& pOutNotifier) = 0;
  virtual Result GetBaasAccountManagerForSystemService(
    const sf::Out<sf::SharedPointer<baas::IManagerForSystemService>>&
      pOutManager,
    const Uid& uid) = 0;
  virtual Result GetBaasUserAvailabilityChangeNotifier(
    const sf::Out<sf::SharedPointer<detail::INotifier>>& pOutNotifier) = 0;
  virtual Result GetProfileUpdateNotifier(
    const sf::Out<sf::SharedPointer<detail::INotifier>>& pOutNotifier) = 0;
  virtual Result CheckNetworkServiceAvailabilityAsync(
    const sf::Out<sf::SharedPointer<detail::IAsyncContext>>& pOutContext,
    const SystemProgramIdentification& identification,
    uint64_t processId) = 0;
  virtual Result GetProfileSyncNotifier(
    const sf::Out<sf::SharedPointer<detail::INotifier>>& pOutNotifier) = 0;
  virtual Result StoreSaveDataThumbnail(const Uid& uid,
    uint64_t applicationId, const sf::InBuffer& image) = 0;
  virtual Result DeleteSaveDataThumbnail(const Uid& uid,
    uint64_t applicationId) = 0;
  virtual Result LoadSaveDataThumbnail(sf::Out<int32_t> pOutSize,
    const sf::OutBuffer& image, const Uid& uid, uint64_t applicationId) = 0;
  virtual Result GetSaveDataThumbnailExistence(sf::Out<bool> pOutExistence,
    const Uid& uid, uint64_t applicationId) = 0;
  virtual Result ListOpenUsersInApplication(const sf::OutArray<Uid>& pOutUsers,
    uint64_t applicationInstanceId) = 0;
  virtual Result ActivateOpenContextRetention(
    const sf::Out<sf::SharedPointer<detail::ISessionObject>>& pOutSession,
    uint64_t applicationInstanceId) = 0;
  virtual Result ListQualifiedUsers(const sf::OutArray<Uid>& pOutUsers,
    uint64_t applicationId) = 0;
  virtual Result EnsureSignedDeviceIdentifierCacheAsync(
    const sf::Out<sf::SharedPointer<detail::IAsyncContext>>& pOutContext) = 0;
  virtual Result LoadSignedDeviceIdentifierCache(
    sf::Out<SignedDeviceIdentifier> pOutIdentifier) = 0;
  virtual Result GetNasOp2MembershipStateChangeNotifier(
    const sf::Out<sf::SharedPointer<detail::INotifier>>& pOutNotifier) = 0;
  virtual Result GetPinCodeLength(sf::Out<int32_t> pOutLength,
    const Uid& uid) = 0;
  virtual Result GetPinCodeParity(sf::Out<int32_t> pOutCount,
    const sf::OutArray<bool>& parities, const Uid& uid) = 0;
  virtual Result VerifyPinCode(sf::Out<bool> pOutIsVerified, const Uid& uid,
    const sf::InBuffer& pinCode) = 0;
  virtual Result IsPinCodeVerificationForbidden(sf::Out<bool> pOutIsForbidden,
    const Uid& uid) = 0;
  virtual Result DebugInvalidateUserResourceCache(const Uid& uid) = 0;
  virtual Result DebugSetUserStateClose(const Uid& uid,
    uint64_t applicationInstanceId) = 0;
  virtual Result DebugSetUserStateOpen(const Uid& uid,
    uint64_t applicationInstanceId) = 0;
  NN_ACCOUNT_RESERVED(39);
};

class IAccountServiceForAdministrator
  : public IAccountServiceForSystemService {
 public:
  using ExportRequest = migration::IDeviceMigrationUserExportRequest;
  using ImportRequest = migration::IDeviceMigrationUserImportRequest;

  virtual Result BeginUserRegistration(sf::Out<Uid> pOutUid) = 0;
  virtual Result CompleteUserRegistration(const Uid& uid) = 0;
  virtual Result CancelUserRegistration(const Uid& uid) = 0;
  virtual Result DeleteUser(const Uid& uid) = 0;
  virtual Result SetUserPosition(const Uid& uid, int32_t position) = 0;
  virtual Result CompleteUserRegistrationForcibly(const Uid& uid) = 0;
  NN_ACCOUNT_RESERVED(46); NN_ACCOUNT_RESERVED(47); NN_ACCOUNT_RESERVED(48);
  NN_ACCOUNT_RESERVED(49); NN_ACCOUNT_RESERVED(50); NN_ACCOUNT_RESERVED(51);
  virtual Result AuthenticateServiceAsync(
    const sf::Out<sf::SharedPointer<detail::IAsyncContext>>& pOutContext) = 0;
  virtual Result GetBaasAccountAdministrator(
    const sf::Out<sf::SharedPointer<baas::IAdministrator>>& pOutAdministrator,
    const Uid& uid) = 0;
  virtual Result SynchronizeNetworkServiceAccountsSnapshotAsync(
    const sf::Out<sf::SharedPointer<detail::IAsyncContext>>& pOutContext) = 0;
  NN_ACCOUNT_RESERVED(55); NN_ACCOUNT_RESERVED(56); NN_ACCOUNT_RESERVED(57);
  NN_ACCOUNT_RESERVED(58);
  virtual Result SuspendBackgroundDaemon(
    const sf::Out<sf::SharedPointer<detail::ISessionObject>>& pOutSession) = 0;
  virtual Result CreateDeviceMigrationUserExportRequest(
    const sf::Out<sf::SharedPointer<ExportRequest>>& pOutRequest,
    bool isMigrationSaveDataRequired) = 0;
  virtual Result UploadNasCredential(
    const sf::Out<sf::SharedPointer<detail::IAsyncContext>>& pOutContext,
    const Uid& uid, int64_t credential) = 0;
  virtual Result CreateDeviceMigrationUserImportRequest(
    const sf::Out<sf::SharedPointer<ImportRequest>>& pOutRequest,
    sf::NativeHandle&& transferMemory, uint32_t size) = 0;
  virtual Result DeleteUserMigrationSaveData() = 0;
  virtual Result SetPinCode(const Uid& uid, const sf::InBuffer& pinCode) = 0;
  virtual Result GetPinCodeErrorCount(sf::Out<uint64_t> pOutCount,
    const Uid& uid) = 0;
  virtual Result SetPinCodeErrorCount(const Uid& uid, uint64_t count) = 0;
  virtual Result SetStartPenaltyTime(time::ClockSnapshot snapshot,
    const Uid& uid) = 0;
  virtual Result GetStartPenaltyTime(
    sf::Out<time::detail::SfClockSnapshot> pOutSnapshot, const Uid& uid) = 0;
  virtual Result SetUserUnqualifiedForDebug(uint64_t applicationId,
    const Uid& uid) = 0;
  virtual Result UnsetUserUnqualifiedForDebug(uint64_t applicationId,
    const Uid& uid) = 0;
  virtual Result ListUsersUnqualifiedForDebug(sf::Out<int32_t> pOutCount,
    const sf::OutArray<Uid>& users, uint64_t applicationId) = 0;
  virtual Result RefreshFirmwareSettingsForDebug() = 0;
};

#undef NN_ACCOUNT_RESERVED

namespace detail {

IAccountServiceBase* GetAccountServiceObjectBase();
IAccountServiceForApplication* GetAccountServiceObjectForApplication();
IAccountServiceForSystemService* GetAccountServiceObjectForSystemService();
IAccountServiceForAdministrator* GetAccountServiceObjectForAdministrator();

}

class Notifier {
 public:
  Notifier();
  explicit Notifier(detail::INotifier* pNotifier);
  Notifier(Notifier&& other);
  virtual ~Notifier();
  Notifier& operator=(Notifier&& other);

  void Swap(Notifier& other);
  Result GetSystemEvent(os::SystemEvent* pOutEvent);

 private:
  detail::INotifier* m_pNotifier;
};

class Declaration {
 public:
  explicit Declaration(detail::ISessionObject* pSession)
    : m_pSession(pSession) {}
  ~Declaration();

  void Swap(Declaration& other);

 private:
  detail::ISessionObject* m_pSession;
};

}
