#include <stddef.h>

#include <utility>

#include "nn/account/account_device_migration.hpp"
#include "nn/account/account_external_network_service_account_registrar.hpp"
#include "nn/account/account_network_service_account_administrator.hpp"
#include "nn/account/account_network_service_account_manager.hpp"
#include "nn/account/account_network_service_license_info.hpp"
#include "nn/account/account_procedures.hpp"
#include "nn/account/account_profile_editor.hpp"
#include "nn/account/account_request_context.hpp"
#include "nn/account/account_service.hpp"
#include "nn/account/detail/account_i_async_context.hpp"
#include "nn/account/detail/account_oauth_procedure.hpp"
#include "nn/account/detail/account_object_holder.hpp"
#include "nn/prepo/prepo_play_report.hpp"
#include "nn/sf/cmif/client/cmif_proxy_factory.hpp"

namespace nn::sf {

template <typename Allocator>
class StatelessAllocationPolicy;

template <size_t Size, typename Tag>
class ExpHeapStaticAllocator;

}

// The original tags live in anonymous namespaces of the client units.

namespace nn::account::detail {

struct ObjectHolderAllocatorTag;

}

namespace nn::sf::cmif::client::detail {

template <typename Kind, typename AllocationPolicy, typename Modifier>
class CmifProxyImpl<account::IAccountServiceForAdministrator, Kind,
  AllocationPolicy, account::IAccountServiceForAdministrator, Modifier>
  : public CmifProxyImplBase<account::IAccountServiceForAdministrator, Kind> {
public:
  Result GetUserCount(sf::Out<int32_t> pOutCount) override {
    return ProxyMethodInvoker<Kind, false,
      void(sf::Out<int32_t>)>::Invoke(&this->m_State, 0, pOutCount);
  }

  Result GetUserExistence(sf::Out<bool> pOutExistence,
    const account::Uid& uid) override {
    return ProxyMethodInvoker<Kind, false,
      void(sf::Out<bool>, const account::Uid&)>::Invoke(&this->m_State, 1,
      pOutExistence, uid);
  }

  Result GetLastOpenedUser(sf::Out<account::Uid> pOutUid) override {
    return ProxyMethodInvoker<Kind, false,
      void(sf::Out<account::Uid>)>::Invoke(&this->m_State, 4, pOutUid);
  }

  Result GetProfile(
    const sf::Out<sf::SharedPointer<account::profile::IProfile>>& pOutProfile,
    const account::Uid& uid) override {
    return InvokeWithStatelessOutObject<Kind, false, 5, AllocationPolicy>(
      &this->m_State, pOutProfile, uid);
  }

  Result IsUserRegistrationRequestPermitted(sf::Out<bool> pOutIsPermitted,
    uint64_t processId) override {
    return ProxyMethodInvoker<Kind, true,
      void(sf::Out<bool>, uint64_t)>::Invoke(&this->m_State, 50,
      pOutIsPermitted, processId);
  }

  Result TrySelectUserWithoutInteraction(sf::Out<account::Uid> pOutUid,
    bool isNetworkServiceAccountRequired, uint32_t flags) override {
    return ProxyMethodInvoker<Kind, false,
      void(sf::Out<account::Uid>, bool, uint32_t)>::Invoke(&this->m_State, 52,
      pOutUid, isNetworkServiceAccountRequired, flags);
  }

  Result DebugActivateOpenContextRetention(
    const sf::Out<sf::SharedPointer<account::detail::ISessionObject>>&
      pOutSession) override {
    return InvokeWithStatelessOutObject<Kind, false, 99, AllocationPolicy>(
      &this->m_State, pOutSession);
  }

  Result GetUserRegistrationNotifier(
    const sf::Out<sf::SharedPointer<account::detail::INotifier>>&
      pOutNotifier) override {
    return InvokeWithStatelessOutObject<Kind, false, 100, AllocationPolicy>(
      &this->m_State, pOutNotifier);
  }

  Result GetUserStateChangeNotifier(
    const sf::Out<sf::SharedPointer<account::detail::INotifier>>&
      pOutNotifier) override {
    return InvokeWithStatelessOutObject<Kind, false, 101, AllocationPolicy>(
      &this->m_State, pOutNotifier);
  }

  Result GetBaasAccountManagerForSystemService(
    const sf::Out<sf::SharedPointer<account::baas::IManagerForSystemService>>&
      pOutManager,
    const account::Uid& uid) override {
    return InvokeWithStatelessOutObject<Kind, false, 102, AllocationPolicy>(
      &this->m_State, pOutManager, uid);
  }

  Result GetBaasUserAvailabilityChangeNotifier(
    const sf::Out<sf::SharedPointer<account::detail::INotifier>>&
      pOutNotifier) override {
    return InvokeWithStatelessOutObject<Kind, false, 103, AllocationPolicy>(
      &this->m_State, pOutNotifier);
  }

  Result GetProfileUpdateNotifier(
    const sf::Out<sf::SharedPointer<account::detail::INotifier>>&
      pOutNotifier) override {
    return InvokeWithStatelessOutObject<Kind, false, 104, AllocationPolicy>(
      &this->m_State, pOutNotifier);
  }

  Result GetProfileSyncNotifier(
    const sf::Out<sf::SharedPointer<account::detail::INotifier>>&
      pOutNotifier) override {
    return InvokeWithStatelessOutObject<Kind, false, 106, AllocationPolicy>(
      &this->m_State, pOutNotifier);
  }

  Result StoreSaveDataThumbnail(const account::Uid& uid, uint64_t applicationId,
    const sf::InBuffer& image) override {
    return ProxyMethodInvoker<Kind, false,
      void(const account::Uid&, uint64_t, const sf::InBuffer&)>::Invoke(
      &this->m_State, 110, uid, applicationId, image);
  }

  Result DeleteSaveDataThumbnail(const account::Uid& uid,
    uint64_t applicationId) override {
    return ProxyMethodInvoker<Kind, false,
      void(const account::Uid&, uint64_t)>::Invoke(&this->m_State, 111, uid,
      applicationId);
  }

  Result LoadSaveDataThumbnail(sf::Out<int32_t> pOutSize,
    const sf::OutBuffer& image, const account::Uid& uid,
    uint64_t applicationId) override {
    return ProxyMethodInvoker<Kind, false,
      void(sf::Out<int32_t>, const sf::OutBuffer&, const account::Uid&,
      uint64_t)>::Invoke(&this->m_State, 112, pOutSize, image, uid,
      applicationId);
  }

  Result GetSaveDataThumbnailExistence(sf::Out<bool> pOutExistence,
    const account::Uid& uid, uint64_t applicationId) override {
    return ProxyMethodInvoker<Kind, false,
      void(sf::Out<bool>, const account::Uid&, uint64_t)>::Invoke(
      &this->m_State, 113, pOutExistence, uid, applicationId);
  }

  Result ActivateOpenContextRetention(
    const sf::Out<sf::SharedPointer<account::detail::ISessionObject>>&
      pOutSession,
    uint64_t applicationInstanceId) override {
    return InvokeWithStatelessOutObject<Kind, false, 130, AllocationPolicy>(
      &this->m_State, pOutSession, applicationInstanceId);
  }

  Result EnsureSignedDeviceIdentifierCacheAsync(
    const sf::Out<sf::SharedPointer<account::detail::IAsyncContext>>&
      pOutContext) override {
    return InvokeWithStatelessOutObject<Kind, false, 151, AllocationPolicy>(
      &this->m_State, pOutContext);
  }

  Result GetNasOp2MembershipStateChangeNotifier(
    const sf::Out<sf::SharedPointer<account::detail::INotifier>>&
      pOutNotifier) override {
    return InvokeWithStatelessOutObject<Kind, false, 170, AllocationPolicy>(
      &this->m_State, pOutNotifier);
  }

  Result GetPinCodeLength(sf::Out<int32_t> pOutLength,
    const account::Uid& uid) override {
    return ProxyMethodInvoker<Kind, false,
      void(sf::Out<int32_t>, const account::Uid&)>::Invoke(&this->m_State, 401,
      pOutLength, uid);
  }

  Result GetPinCodeParity(sf::Out<int32_t> pOutCount,
    const sf::OutArray<bool>& parities, const account::Uid& uid) override {
    return ProxyMethodInvoker<Kind, false,
      void(sf::Out<int32_t>, const sf::OutArray<bool>&,
      const account::Uid&)>::Invoke(&this->m_State, 403, pOutCount, parities,
      uid);
  }

  Result VerifyPinCode(sf::Out<bool> pOutIsVerified, const account::Uid& uid,
    const sf::InBuffer& pinCode) override {
    return ProxyMethodInvoker<Kind, false,
      void(sf::Out<bool>, const account::Uid&, const sf::InBuffer&)>::Invoke(
      &this->m_State, 404, pOutIsVerified, uid, pinCode);
  }

  Result IsPinCodeVerificationForbidden(sf::Out<bool> pOutIsForbidden,
    const account::Uid& uid) override {
    return ProxyMethodInvoker<Kind, false,
      void(sf::Out<bool>, const account::Uid&)>::Invoke(&this->m_State, 405,
      pOutIsForbidden, uid);
  }

  Result DebugInvalidateUserResourceCache(const account::Uid& uid) override {
    return ProxyMethodInvoker<Kind, false,
      void(const account::Uid&)>::Invoke(&this->m_State, 997, uid);
  }

  Result DebugSetUserStateClose(const account::Uid& uid,
    uint64_t applicationInstanceId) override {
    return ProxyMethodInvoker<Kind, false,
      void(const account::Uid&, uint64_t)>::Invoke(&this->m_State, 998, uid,
      applicationInstanceId);
  }

  Result DebugSetUserStateOpen(const account::Uid& uid,
    uint64_t applicationInstanceId) override {
    return ProxyMethodInvoker<Kind, false,
      void(const account::Uid&, uint64_t)>::Invoke(&this->m_State, 999, uid,
      applicationInstanceId);
  }

  Result BeginUserRegistration(sf::Out<account::Uid> pOutUid) override {
    return ProxyMethodInvoker<Kind, false,
      void(sf::Out<account::Uid>)>::Invoke(&this->m_State, 200, pOutUid);
  }

  Result CompleteUserRegistration(const account::Uid& uid) override {
    return ProxyMethodInvoker<Kind, false,
      void(const account::Uid&)>::Invoke(&this->m_State, 201, uid);
  }

  Result CancelUserRegistration(const account::Uid& uid) override {
    return ProxyMethodInvoker<Kind, false,
      void(const account::Uid&)>::Invoke(&this->m_State, 202, uid);
  }

  Result DeleteUser(const account::Uid& uid) override {
    return ProxyMethodInvoker<Kind, false,
      void(const account::Uid&)>::Invoke(&this->m_State, 203, uid);
  }

  Result SetUserPosition(const account::Uid& uid, int32_t position) override {
    return ProxyMethodInvoker<Kind, false,
      void(const account::Uid&, int32_t)>::Invoke(&this->m_State, 204, uid,
      position);
  }

  Result CompleteUserRegistrationForcibly(const account::Uid& uid) override {
    return ProxyMethodInvoker<Kind, false,
      void(const account::Uid&)>::Invoke(&this->m_State, 206, uid);
  }

  Result AuthenticateServiceAsync(
    const sf::Out<sf::SharedPointer<account::detail::IAsyncContext>>&
      pOutContext) override {
    return InvokeWithStatelessOutObject<Kind, false, 230, AllocationPolicy>(
      &this->m_State, pOutContext);
  }

  Result GetBaasAccountAdministrator(
    const sf::Out<sf::SharedPointer<account::baas::IAdministrator>>&
      pOutAdministrator,
    const account::Uid& uid) override {
    return InvokeWithStatelessOutObject<Kind, false, 250, AllocationPolicy>(
      &this->m_State, pOutAdministrator, uid);
  }

  Result SynchronizeNetworkServiceAccountsSnapshotAsync(
    const sf::Out<sf::SharedPointer<account::detail::IAsyncContext>>&
      pOutContext) override {
    return InvokeWithStatelessOutObject<Kind, false, 251, AllocationPolicy>(
      &this->m_State, pOutContext);
  }

  Result SuspendBackgroundDaemon(
    const sf::Out<sf::SharedPointer<account::detail::ISessionObject>>&
      pOutSession) override {
    return InvokeWithStatelessOutObject<Kind, false, 299, AllocationPolicy>(
      &this->m_State, pOutSession);
  }

  Result CreateDeviceMigrationUserExportRequest(
    const sf::Out<sf::SharedPointer<
      account::migration::IDeviceMigrationUserExportRequest>>& pOutRequest,
    bool isMigrationSaveDataRequired) override {
    return InvokeWithStatelessOutObject<Kind, false, 350, AllocationPolicy>(
      &this->m_State, pOutRequest, isMigrationSaveDataRequired);
  }

  Result UploadNasCredential(
    const sf::Out<sf::SharedPointer<account::detail::IAsyncContext>>&
      pOutContext,
    const account::Uid& uid, int64_t credential) override {
    return InvokeWithStatelessOutObject<Kind, false, 351, AllocationPolicy>(
      &this->m_State, pOutContext, uid, credential);
  }

  Result DeleteUserMigrationSaveData() override {
    return ProxyMethodInvoker<Kind, false,
      void()>::Invoke(&this->m_State, 353);
  }

  Result SetPinCode(const account::Uid& uid,
    const sf::InBuffer& pinCode) override {
    return ProxyMethodInvoker<Kind, false,
      void(const account::Uid&, const sf::InBuffer&)>::Invoke(&this->m_State,
      400, uid, pinCode);
  }

  Result GetPinCodeErrorCount(sf::Out<uint64_t> pOutCount,
    const account::Uid& uid) override {
    return ProxyMethodInvoker<Kind, false,
      void(sf::Out<uint64_t>, const account::Uid&)>::Invoke(&this->m_State, 410,
      pOutCount, uid);
  }

  Result SetPinCodeErrorCount(const account::Uid& uid,
    uint64_t count) override {
    return ProxyMethodInvoker<Kind, false,
      void(const account::Uid&, uint64_t)>::Invoke(&this->m_State, 413, uid,
      count);
  }

  Result SetUserUnqualifiedForDebug(uint64_t applicationId,
    const account::Uid& uid) override {
    return ProxyMethodInvoker<Kind, false,
      void(uint64_t, const account::Uid&)>::Invoke(&this->m_State, 900,
      applicationId, uid);
  }

  Result UnsetUserUnqualifiedForDebug(uint64_t applicationId,
    const account::Uid& uid) override {
    return ProxyMethodInvoker<Kind, false,
      void(uint64_t, const account::Uid&)>::Invoke(&this->m_State, 901,
      applicationId, uid);
  }

  Result ListUsersUnqualifiedForDebug(sf::Out<int32_t> pOutCount,
    const sf::OutArray<account::Uid>& users, uint64_t applicationId) override {
    return ProxyMethodInvoker<Kind, false,
      void(sf::Out<int32_t>, const sf::OutArray<account::Uid>&,
      uint64_t)>::Invoke(&this->m_State, 902, pOutCount, users, applicationId);
  }

  Result RefreshFirmwareSettingsForDebug() override {
    return ProxyMethodInvoker<Kind, false,
      void()>::Invoke(&this->m_State, 910);
  }
};

template <typename Kind, typename AllocationPolicy, typename Modifier>
class CmifProxyImpl<account::IAccountServiceForApplication, Kind,
  AllocationPolicy, account::IAccountServiceForApplication, Modifier>
  : public CmifProxyImplBase<account::IAccountServiceForApplication, Kind> {
public:
  Result GetUserCount(sf::Out<int32_t> pOutCount) override {
    return ProxyMethodInvoker<Kind, false,
      void(sf::Out<int32_t>)>::Invoke(&this->m_State, 0, pOutCount);
  }

  Result GetUserExistence(sf::Out<bool> pOutExistence,
    const account::Uid& uid) override {
    return ProxyMethodInvoker<Kind, false,
      void(sf::Out<bool>, const account::Uid&)>::Invoke(&this->m_State, 1,
      pOutExistence, uid);
  }

  Result GetLastOpenedUser(sf::Out<account::Uid> pOutUid) override {
    return ProxyMethodInvoker<Kind, false,
      void(sf::Out<account::Uid>)>::Invoke(&this->m_State, 4, pOutUid);
  }

  Result GetProfile(
    const sf::Out<sf::SharedPointer<account::profile::IProfile>>& pOutProfile,
    const account::Uid& uid) override {
    return InvokeWithStatelessOutObject<Kind, false, 5, AllocationPolicy>(
      &this->m_State, pOutProfile, uid);
  }

  Result IsUserRegistrationRequestPermitted(sf::Out<bool> pOutIsPermitted,
    uint64_t processId) override {
    return ProxyMethodInvoker<Kind, true,
      void(sf::Out<bool>, uint64_t)>::Invoke(&this->m_State, 50,
      pOutIsPermitted, processId);
  }

  Result TrySelectUserWithoutInteraction(sf::Out<account::Uid> pOutUid,
    bool isNetworkServiceAccountRequired, uint32_t flags) override {
    return ProxyMethodInvoker<Kind, false,
      void(sf::Out<account::Uid>, bool, uint32_t)>::Invoke(&this->m_State, 52,
      pOutUid, isNetworkServiceAccountRequired, flags);
  }

  Result DebugActivateOpenContextRetention(
    const sf::Out<sf::SharedPointer<account::detail::ISessionObject>>&
      pOutSession) override {
    return InvokeWithStatelessOutObject<Kind, false, 99, AllocationPolicy>(
      &this->m_State, pOutSession);
  }

  Result CheckNetworkServiceAvailabilityAsync(
    const sf::Out<sf::SharedPointer<account::detail::IAsyncContext>>&
      pOutContext) override {
    return InvokeWithStatelessOutObject<Kind, false, 103, AllocationPolicy>(
      &this->m_State, pOutContext);
  }

  Result StoreSaveDataThumbnail(const account::Uid& uid,
    const sf::InBuffer& image) override {
    return ProxyMethodInvoker<Kind, false,
      void(const account::Uid&, const sf::InBuffer&)>::Invoke(&this->m_State,
      110, uid, image);
  }

  Result DeleteSaveDataThumbnail(const account::Uid& uid) override {
    return ProxyMethodInvoker<Kind, false,
      void(const account::Uid&)>::Invoke(&this->m_State, 111, uid);
  }
};

template <typename Kind, typename AllocationPolicy, typename Modifier>
class CmifProxyImpl<account::IAccountServiceForSystemService, Kind,
  AllocationPolicy, account::IAccountServiceForSystemService, Modifier>
  : public CmifProxyImplBase<account::IAccountServiceForSystemService, Kind> {
public:
  Result GetUserCount(sf::Out<int32_t> pOutCount) override {
    return ProxyMethodInvoker<Kind, false,
      void(sf::Out<int32_t>)>::Invoke(&this->m_State, 0, pOutCount);
  }

  Result GetUserExistence(sf::Out<bool> pOutExistence,
    const account::Uid& uid) override {
    return ProxyMethodInvoker<Kind, false,
      void(sf::Out<bool>, const account::Uid&)>::Invoke(&this->m_State, 1,
      pOutExistence, uid);
  }

  Result GetLastOpenedUser(sf::Out<account::Uid> pOutUid) override {
    return ProxyMethodInvoker<Kind, false,
      void(sf::Out<account::Uid>)>::Invoke(&this->m_State, 4, pOutUid);
  }

  Result GetProfile(
    const sf::Out<sf::SharedPointer<account::profile::IProfile>>& pOutProfile,
    const account::Uid& uid) override {
    return InvokeWithStatelessOutObject<Kind, false, 5, AllocationPolicy>(
      &this->m_State, pOutProfile, uid);
  }

  Result IsUserRegistrationRequestPermitted(sf::Out<bool> pOutIsPermitted,
    uint64_t processId) override {
    return ProxyMethodInvoker<Kind, true,
      void(sf::Out<bool>, uint64_t)>::Invoke(&this->m_State, 50,
      pOutIsPermitted, processId);
  }

  Result TrySelectUserWithoutInteraction(sf::Out<account::Uid> pOutUid,
    bool isNetworkServiceAccountRequired, uint32_t flags) override {
    return ProxyMethodInvoker<Kind, false,
      void(sf::Out<account::Uid>, bool, uint32_t)>::Invoke(&this->m_State, 52,
      pOutUid, isNetworkServiceAccountRequired, flags);
  }

  Result DebugActivateOpenContextRetention(
    const sf::Out<sf::SharedPointer<account::detail::ISessionObject>>&
      pOutSession) override {
    return InvokeWithStatelessOutObject<Kind, false, 99, AllocationPolicy>(
      &this->m_State, pOutSession);
  }

  Result GetUserRegistrationNotifier(
    const sf::Out<sf::SharedPointer<account::detail::INotifier>>&
      pOutNotifier) override {
    return InvokeWithStatelessOutObject<Kind, false, 100, AllocationPolicy>(
      &this->m_State, pOutNotifier);
  }

  Result GetUserStateChangeNotifier(
    const sf::Out<sf::SharedPointer<account::detail::INotifier>>&
      pOutNotifier) override {
    return InvokeWithStatelessOutObject<Kind, false, 101, AllocationPolicy>(
      &this->m_State, pOutNotifier);
  }

  Result GetBaasAccountManagerForSystemService(
    const sf::Out<sf::SharedPointer<account::baas::IManagerForSystemService>>&
      pOutManager,
    const account::Uid& uid) override {
    return InvokeWithStatelessOutObject<Kind, false, 102, AllocationPolicy>(
      &this->m_State, pOutManager, uid);
  }

  Result GetBaasUserAvailabilityChangeNotifier(
    const sf::Out<sf::SharedPointer<account::detail::INotifier>>&
      pOutNotifier) override {
    return InvokeWithStatelessOutObject<Kind, false, 103, AllocationPolicy>(
      &this->m_State, pOutNotifier);
  }

  Result GetProfileUpdateNotifier(
    const sf::Out<sf::SharedPointer<account::detail::INotifier>>&
      pOutNotifier) override {
    return InvokeWithStatelessOutObject<Kind, false, 104, AllocationPolicy>(
      &this->m_State, pOutNotifier);
  }

  Result GetProfileSyncNotifier(
    const sf::Out<sf::SharedPointer<account::detail::INotifier>>&
      pOutNotifier) override {
    return InvokeWithStatelessOutObject<Kind, false, 106, AllocationPolicy>(
      &this->m_State, pOutNotifier);
  }

  Result StoreSaveDataThumbnail(const account::Uid& uid, uint64_t applicationId,
    const sf::InBuffer& image) override {
    return ProxyMethodInvoker<Kind, false,
      void(const account::Uid&, uint64_t, const sf::InBuffer&)>::Invoke(
      &this->m_State, 110, uid, applicationId, image);
  }

  Result DeleteSaveDataThumbnail(const account::Uid& uid,
    uint64_t applicationId) override {
    return ProxyMethodInvoker<Kind, false,
      void(const account::Uid&, uint64_t)>::Invoke(&this->m_State, 111, uid,
      applicationId);
  }

  Result LoadSaveDataThumbnail(sf::Out<int32_t> pOutSize,
    const sf::OutBuffer& image, const account::Uid& uid,
    uint64_t applicationId) override {
    return ProxyMethodInvoker<Kind, false,
      void(sf::Out<int32_t>, const sf::OutBuffer&, const account::Uid&,
      uint64_t)>::Invoke(&this->m_State, 112, pOutSize, image, uid,
      applicationId);
  }

  Result GetSaveDataThumbnailExistence(sf::Out<bool> pOutExistence,
    const account::Uid& uid, uint64_t applicationId) override {
    return ProxyMethodInvoker<Kind, false,
      void(sf::Out<bool>, const account::Uid&, uint64_t)>::Invoke(
      &this->m_State, 113, pOutExistence, uid, applicationId);
  }

  Result ActivateOpenContextRetention(
    const sf::Out<sf::SharedPointer<account::detail::ISessionObject>>&
      pOutSession,
    uint64_t applicationInstanceId) override {
    return InvokeWithStatelessOutObject<Kind, false, 130, AllocationPolicy>(
      &this->m_State, pOutSession, applicationInstanceId);
  }

  Result EnsureSignedDeviceIdentifierCacheAsync(
    const sf::Out<sf::SharedPointer<account::detail::IAsyncContext>>&
      pOutContext) override {
    return InvokeWithStatelessOutObject<Kind, false, 151, AllocationPolicy>(
      &this->m_State, pOutContext);
  }

  Result GetNasOp2MembershipStateChangeNotifier(
    const sf::Out<sf::SharedPointer<account::detail::INotifier>>&
      pOutNotifier) override {
    return InvokeWithStatelessOutObject<Kind, false, 170, AllocationPolicy>(
      &this->m_State, pOutNotifier);
  }

  Result GetPinCodeLength(sf::Out<int32_t> pOutLength,
    const account::Uid& uid) override {
    return ProxyMethodInvoker<Kind, false,
      void(sf::Out<int32_t>, const account::Uid&)>::Invoke(&this->m_State, 401,
      pOutLength, uid);
  }

  Result GetPinCodeParity(sf::Out<int32_t> pOutCount,
    const sf::OutArray<bool>& parities, const account::Uid& uid) override {
    return ProxyMethodInvoker<Kind, false,
      void(sf::Out<int32_t>, const sf::OutArray<bool>&,
      const account::Uid&)>::Invoke(&this->m_State, 403, pOutCount, parities,
      uid);
  }

  Result VerifyPinCode(sf::Out<bool> pOutIsVerified, const account::Uid& uid,
    const sf::InBuffer& pinCode) override {
    return ProxyMethodInvoker<Kind, false,
      void(sf::Out<bool>, const account::Uid&, const sf::InBuffer&)>::Invoke(
      &this->m_State, 404, pOutIsVerified, uid, pinCode);
  }

  Result IsPinCodeVerificationForbidden(sf::Out<bool> pOutIsForbidden,
    const account::Uid& uid) override {
    return ProxyMethodInvoker<Kind, false,
      void(sf::Out<bool>, const account::Uid&)>::Invoke(&this->m_State, 405,
      pOutIsForbidden, uid);
  }

  Result DebugInvalidateUserResourceCache(const account::Uid& uid) override {
    return ProxyMethodInvoker<Kind, false,
      void(const account::Uid&)>::Invoke(&this->m_State, 997, uid);
  }

  Result DebugSetUserStateClose(const account::Uid& uid,
    uint64_t applicationInstanceId) override {
    return ProxyMethodInvoker<Kind, false,
      void(const account::Uid&, uint64_t)>::Invoke(&this->m_State, 998, uid,
      applicationInstanceId);
  }

  Result DebugSetUserStateOpen(const account::Uid& uid,
    uint64_t applicationInstanceId) override {
    return ProxyMethodInvoker<Kind, false,
      void(const account::Uid&, uint64_t)>::Invoke(&this->m_State, 999, uid,
      applicationInstanceId);
  }
};

template <typename Kind, typename AllocationPolicy, typename Modifier>
class CmifProxyImpl<account::IAccountServiceForSystemServiceWithProfileEditor,
  Kind, AllocationPolicy,
  account::IAccountServiceForSystemServiceWithProfileEditor, Modifier>
  : public CmifProxyImplBase<
      account::IAccountServiceForSystemServiceWithProfileEditor, Kind> {
public:
  Result GetUserCount(sf::Out<int32_t> pOutCount) override {
    return ProxyMethodInvoker<Kind, false,
      void(sf::Out<int32_t>)>::Invoke(&this->m_State, 0, pOutCount);
  }

  Result GetUserExistence(sf::Out<bool> pOutExistence,
    const account::Uid& uid) override {
    return ProxyMethodInvoker<Kind, false,
      void(sf::Out<bool>, const account::Uid&)>::Invoke(&this->m_State, 1,
      pOutExistence, uid);
  }

  Result GetLastOpenedUser(sf::Out<account::Uid> pOutUid) override {
    return ProxyMethodInvoker<Kind, false,
      void(sf::Out<account::Uid>)>::Invoke(&this->m_State, 4, pOutUid);
  }

  Result GetProfile(
    const sf::Out<sf::SharedPointer<account::profile::IProfile>>& pOutProfile,
    const account::Uid& uid) override {
    return InvokeWithStatelessOutObject<Kind, false, 5, AllocationPolicy>(
      &this->m_State, pOutProfile, uid);
  }

  Result IsUserRegistrationRequestPermitted(sf::Out<bool> pOutIsPermitted,
    uint64_t processId) override {
    return ProxyMethodInvoker<Kind, true,
      void(sf::Out<bool>, uint64_t)>::Invoke(&this->m_State, 50,
      pOutIsPermitted, processId);
  }

  Result TrySelectUserWithoutInteraction(sf::Out<account::Uid> pOutUid,
    bool isNetworkServiceAccountRequired, uint32_t flags) override {
    return ProxyMethodInvoker<Kind, false,
      void(sf::Out<account::Uid>, bool, uint32_t)>::Invoke(&this->m_State, 52,
      pOutUid, isNetworkServiceAccountRequired, flags);
  }

  Result DebugActivateOpenContextRetention(
    const sf::Out<sf::SharedPointer<account::detail::ISessionObject>>&
      pOutSession) override {
    return InvokeWithStatelessOutObject<Kind, false, 99, AllocationPolicy>(
      &this->m_State, pOutSession);
  }

  Result GetUserRegistrationNotifier(
    const sf::Out<sf::SharedPointer<account::detail::INotifier>>&
      pOutNotifier) override {
    return InvokeWithStatelessOutObject<Kind, false, 100, AllocationPolicy>(
      &this->m_State, pOutNotifier);
  }

  Result GetUserStateChangeNotifier(
    const sf::Out<sf::SharedPointer<account::detail::INotifier>>&
      pOutNotifier) override {
    return InvokeWithStatelessOutObject<Kind, false, 101, AllocationPolicy>(
      &this->m_State, pOutNotifier);
  }

  Result GetBaasAccountManagerForSystemService(
    const sf::Out<sf::SharedPointer<account::baas::IManagerForSystemService>>&
      pOutManager,
    const account::Uid& uid) override {
    return InvokeWithStatelessOutObject<Kind, false, 102, AllocationPolicy>(
      &this->m_State, pOutManager, uid);
  }

  Result GetBaasUserAvailabilityChangeNotifier(
    const sf::Out<sf::SharedPointer<account::detail::INotifier>>&
      pOutNotifier) override {
    return InvokeWithStatelessOutObject<Kind, false, 103, AllocationPolicy>(
      &this->m_State, pOutNotifier);
  }

  Result GetProfileUpdateNotifier(
    const sf::Out<sf::SharedPointer<account::detail::INotifier>>&
      pOutNotifier) override {
    return InvokeWithStatelessOutObject<Kind, false, 104, AllocationPolicy>(
      &this->m_State, pOutNotifier);
  }

  Result GetProfileSyncNotifier(
    const sf::Out<sf::SharedPointer<account::detail::INotifier>>&
      pOutNotifier) override {
    return InvokeWithStatelessOutObject<Kind, false, 106, AllocationPolicy>(
      &this->m_State, pOutNotifier);
  }

  Result StoreSaveDataThumbnail(const account::Uid& uid, uint64_t applicationId,
    const sf::InBuffer& image) override {
    return ProxyMethodInvoker<Kind, false,
      void(const account::Uid&, uint64_t, const sf::InBuffer&)>::Invoke(
      &this->m_State, 110, uid, applicationId, image);
  }

  Result DeleteSaveDataThumbnail(const account::Uid& uid,
    uint64_t applicationId) override {
    return ProxyMethodInvoker<Kind, false,
      void(const account::Uid&, uint64_t)>::Invoke(&this->m_State, 111, uid,
      applicationId);
  }

  Result LoadSaveDataThumbnail(sf::Out<int32_t> pOutSize,
    const sf::OutBuffer& image, const account::Uid& uid,
    uint64_t applicationId) override {
    return ProxyMethodInvoker<Kind, false,
      void(sf::Out<int32_t>, const sf::OutBuffer&, const account::Uid&,
      uint64_t)>::Invoke(&this->m_State, 112, pOutSize, image, uid,
      applicationId);
  }

  Result GetSaveDataThumbnailExistence(sf::Out<bool> pOutExistence,
    const account::Uid& uid, uint64_t applicationId) override {
    return ProxyMethodInvoker<Kind, false,
      void(sf::Out<bool>, const account::Uid&, uint64_t)>::Invoke(
      &this->m_State, 113, pOutExistence, uid, applicationId);
  }

  Result ActivateOpenContextRetention(
    const sf::Out<sf::SharedPointer<account::detail::ISessionObject>>&
      pOutSession,
    uint64_t applicationInstanceId) override {
    return InvokeWithStatelessOutObject<Kind, false, 130, AllocationPolicy>(
      &this->m_State, pOutSession, applicationInstanceId);
  }

  Result EnsureSignedDeviceIdentifierCacheAsync(
    const sf::Out<sf::SharedPointer<account::detail::IAsyncContext>>&
      pOutContext) override {
    return InvokeWithStatelessOutObject<Kind, false, 151, AllocationPolicy>(
      &this->m_State, pOutContext);
  }

  Result GetNasOp2MembershipStateChangeNotifier(
    const sf::Out<sf::SharedPointer<account::detail::INotifier>>&
      pOutNotifier) override {
    return InvokeWithStatelessOutObject<Kind, false, 170, AllocationPolicy>(
      &this->m_State, pOutNotifier);
  }

  Result GetPinCodeLength(sf::Out<int32_t> pOutLength,
    const account::Uid& uid) override {
    return ProxyMethodInvoker<Kind, false,
      void(sf::Out<int32_t>, const account::Uid&)>::Invoke(&this->m_State, 401,
      pOutLength, uid);
  }

  Result GetPinCodeParity(sf::Out<int32_t> pOutCount,
    const sf::OutArray<bool>& parities, const account::Uid& uid) override {
    return ProxyMethodInvoker<Kind, false,
      void(sf::Out<int32_t>, const sf::OutArray<bool>&,
      const account::Uid&)>::Invoke(&this->m_State, 403, pOutCount, parities,
      uid);
  }

  Result VerifyPinCode(sf::Out<bool> pOutIsVerified, const account::Uid& uid,
    const sf::InBuffer& pinCode) override {
    return ProxyMethodInvoker<Kind, false,
      void(sf::Out<bool>, const account::Uid&, const sf::InBuffer&)>::Invoke(
      &this->m_State, 404, pOutIsVerified, uid, pinCode);
  }

  Result IsPinCodeVerificationForbidden(sf::Out<bool> pOutIsForbidden,
    const account::Uid& uid) override {
    return ProxyMethodInvoker<Kind, false,
      void(sf::Out<bool>, const account::Uid&)>::Invoke(&this->m_State, 405,
      pOutIsForbidden, uid);
  }

  Result DebugInvalidateUserResourceCache(const account::Uid& uid) override {
    return ProxyMethodInvoker<Kind, false,
      void(const account::Uid&)>::Invoke(&this->m_State, 997, uid);
  }

  Result DebugSetUserStateClose(const account::Uid& uid,
    uint64_t applicationInstanceId) override {
    return ProxyMethodInvoker<Kind, false,
      void(const account::Uid&, uint64_t)>::Invoke(&this->m_State, 998, uid,
      applicationInstanceId);
  }

  Result DebugSetUserStateOpen(const account::Uid& uid,
    uint64_t applicationInstanceId) override {
    return ProxyMethodInvoker<Kind, false,
      void(const account::Uid&, uint64_t)>::Invoke(&this->m_State, 999, uid,
      applicationInstanceId);
  }
};

template <typename Kind, typename AllocationPolicy, typename Modifier>
class CmifProxyImpl<account::baas::IAdministrator, Kind, AllocationPolicy,
  account::baas::IAdministrator, Modifier>
  : public CmifProxyImplBase<account::baas::IAdministrator, Kind> {
public:
  Result CheckAvailability() override {
    return ProxyMethodInvoker<Kind, false,
      void()>::Invoke(&this->m_State, 0);
  }

  Result GetAccountId(
    sf::Out<account::NetworkServiceAccountId> pOutId) override {
    return ProxyMethodInvoker<Kind, false,
      void(sf::Out<account::NetworkServiceAccountId>)>::Invoke(&this->m_State,
      1, pOutId);
  }

  Result EnsureIdTokenCacheAsync(
    const sf::Out<sf::SharedPointer<account::detail::IAsyncContext>>&
      pOutContext) override {
    return InvokeWithStatelessOutObject<Kind, false, 2, AllocationPolicy>(
      &this->m_State, pOutContext);
  }

  Result LoadIdTokenCache(sf::Out<uint32_t> pOutSize,
    const sf::OutBuffer& buffer) override {
    return ProxyMethodInvoker<Kind, false,
      void(sf::Out<uint32_t>, const sf::OutBuffer&)>::Invoke(&this->m_State, 4,
      pOutSize, buffer);
  }

  Result RefreshNotificationTokenAsync(
    const sf::Out<sf::SharedPointer<account::detail::IAsyncContext>>&
      pOutContext) override {
    return InvokeWithStatelessOutObject<Kind, false, 101, AllocationPolicy>(
      &this->m_State, pOutContext);
  }

  Result GetRequiredLicenseCacheForLogin(sf::Out<uint32_t> pOutKind,
    uint64_t applicationId) override {
    return ProxyMethodInvoker<Kind, false,
      void(sf::Out<uint32_t>, uint64_t)>::Invoke(&this->m_State, 110, pOutKind,
      applicationId);
  }

  Result InvalidateRequiredLicenseCache(uint64_t applicationId) override {
    return ProxyMethodInvoker<Kind, false,
      void(uint64_t)>::Invoke(&this->m_State, 111, applicationId);
  }

  Result GetNintendoAccountId(
    sf::Out<account::NintendoAccountId> pOutId) override {
    return ProxyMethodInvoker<Kind, false,
      void(sf::Out<account::NintendoAccountId>)>::Invoke(&this->m_State, 120,
      pOutId);
  }

  Result RefreshCachedNintendoAccountInfoAsync(
    const sf::Out<sf::SharedPointer<account::detail::IAsyncContext>>&
      pOutContext) override {
    return InvokeWithStatelessOutObject<Kind, false, 131, AllocationPolicy>(
      &this->m_State, pOutContext);
  }

  Result LoadCachedNintendoAccountVerificationUrl(
    sf::Out<time::PosixTime> pOutExpiration,
    sf::Out<time::PosixTime> pOutRetryTime, const sf::OutBuffer& url) override {
    return ProxyMethodInvoker<Kind, false,
      void(sf::Out<time::PosixTime>, sf::Out<time::PosixTime>,
      const sf::OutBuffer&)>::Invoke(&this->m_State, 133, pOutExpiration,
      pOutRetryTime, url);
  }

  Result RefreshCachedNintendoAccountVerificationUrlAsync(
    const sf::Out<sf::SharedPointer<account::detail::IAsyncContext>>&
      pOutContext) override {
    return InvokeWithStatelessOutObject<Kind, false, 134, AllocationPolicy>(
      &this->m_State, pOutContext);
  }

  Result RefreshCachedNetworkServiceLicenseInfoAsync(
    const sf::Out<sf::SharedPointer<account::detail::IAsyncContext>>&
      pOutContext) override {
    return InvokeWithStatelessOutObject<Kind, false, 141, AllocationPolicy>(
      &this->m_State, pOutContext);
  }

  Result GetCachedNetworkServiceLicenseInfo(sf::Out<uint32_t> pOutLicense,
    sf::Out<uint32_t> pOutState,
    sf::Out<time::PosixTime> pOutExpiration) override {
    return ProxyMethodInvoker<Kind, false,
      void(sf::Out<uint32_t>, sf::Out<uint32_t>,
      sf::Out<time::PosixTime>)>::Invoke(&this->m_State, 143, pOutLicense,
      pOutState, pOutExpiration);
  }

  Result RequiresUpdateNetworkServiceAccountIdTokenCache() override {
    return ProxyMethodInvoker<Kind, false,
      void()>::Invoke(&this->m_State, 160);
  }

  Result RequireReauthenticationOfNetworkServiceAccount() override {
    return ProxyMethodInvoker<Kind, false,
      void()>::Invoke(&this->m_State, 161);
  }

  Result IsRegistered(sf::Out<bool> pOutIsRegistered) override {
    return ProxyMethodInvoker<Kind, false,
      void(sf::Out<bool>)>::Invoke(&this->m_State, 200, pOutIsRegistered);
  }

  Result RegisterAsync(
    const sf::Out<sf::SharedPointer<account::detail::IAsyncContext>>&
      pOutContext) override {
    return InvokeWithStatelessOutObject<Kind, false, 201, AllocationPolicy>(
      &this->m_State, pOutContext);
  }

  Result UnregisterAsync(
    const sf::Out<sf::SharedPointer<account::detail::IAsyncContext>>&
      pOutContext) override {
    return InvokeWithStatelessOutObject<Kind, false, 202, AllocationPolicy>(
      &this->m_State, pOutContext);
  }

  Result DeleteRegistrationInfoLocally() override {
    return ProxyMethodInvoker<Kind, false,
      void()>::Invoke(&this->m_State, 203);
  }

  Result SynchronizeProfileAsync(
    const sf::Out<sf::SharedPointer<account::detail::IAsyncContext>>&
      pOutContext) override {
    return InvokeWithStatelessOutObject<Kind, false, 220, AllocationPolicy>(
      &this->m_State, pOutContext);
  }

  Result UploadProfileAsync(
    const sf::Out<sf::SharedPointer<account::detail::IAsyncContext>>&
      pOutContext) override {
    return InvokeWithStatelessOutObject<Kind, false, 221, AllocationPolicy>(
      &this->m_State, pOutContext);
  }

  Result DownloadProfileAsync(
    const sf::Out<sf::SharedPointer<account::detail::IAsyncContext>>&
      pOutContext) override {
    return InvokeWithStatelessOutObject<Kind, false, 223, AllocationPolicy>(
      &this->m_State, pOutContext);
  }

  Result IsLinkedWithNintendoAccount(sf::Out<bool> pOutIsLinked) override {
    return ProxyMethodInvoker<Kind, false,
      void(sf::Out<bool>)>::Invoke(&this->m_State, 250, pOutIsLinked);
  }

  Result TryRecoverNintendoAccountUserStateAsync(
    const sf::Out<sf::SharedPointer<account::detail::IAsyncContext>>&
      pOutContext) override {
    return InvokeWithStatelessOutObject<Kind, false, 300, AllocationPolicy>(
      &this->m_State, pOutContext);
  }

  Result RefreshRequiredLicenseCacheForOnlinePlayAsync(
    const sf::Out<sf::SharedPointer<account::detail::IAsyncContext>>&
      pOutContext,
    uint64_t applicationId) override {
    return InvokeWithStatelessOutObject<Kind, false, 401, AllocationPolicy>(
      &this->m_State, pOutContext, applicationId);
  }

  Result CheckRequiredLicenseForLexAsync(
    const sf::Out<sf::SharedPointer<account::detail::IAsyncContext>>&
      pOutContext) override {
    return InvokeWithStatelessOutObject<Kind, false, 410, AllocationPolicy>(
      &this->m_State, pOutContext);
  }

  Result GetAuthenticationInfoForWin(
    sf::Out<account::NetworkServiceAccountId> pOutAccountId,
    sf::Out<uint64_t> pOutDeviceAccountId,
    const sf::OutBuffer& token) override {
    return ProxyMethodInvoker<Kind, false,
      void(sf::Out<account::NetworkServiceAccountId>, sf::Out<uint64_t>,
      const sf::OutBuffer&)>::Invoke(&this->m_State, 900, pOutAccountId,
      pOutDeviceAccountId, token);
  }

  Result DebugUnlinkNintendoAccountAsync(
    const sf::Out<sf::SharedPointer<account::detail::IAsyncContext>>&
      pOutContext) override {
    return InvokeWithStatelessOutObject<Kind, false, 997, AllocationPolicy>(
      &this->m_State, pOutContext);
  }
};

template <typename Kind, typename AllocationPolicy, typename Modifier>
class CmifProxyImpl<account::baas::IAsyncContextForLoginForOnlinePlay, Kind,
  AllocationPolicy, account::baas::IAsyncContextForLoginForOnlinePlay, Modifier>
  : public CmifProxyImplBase<
      account::baas::IAsyncContextForLoginForOnlinePlay, Kind> {
public:
  Result Cancel() override {
    return ProxyMethodInvoker<Kind, false,
      void()>::Invoke(&this->m_State, 1);
  }

  Result HasDone(sf::Out<bool> pOutIsDone) override {
    return ProxyMethodInvoker<Kind, false,
      void(sf::Out<bool>)>::Invoke(&this->m_State, 2, pOutIsDone);
  }

  Result GetResult() override {
    return ProxyMethodInvoker<Kind, false,
      void()>::Invoke(&this->m_State, 3);
  }

  Result GetNetworkServiceLicenseKind(sf::Out<uint32_t> pOutKind) override {
    return ProxyMethodInvoker<Kind, false,
      void(sf::Out<uint32_t>)>::Invoke(&this->m_State, 100, pOutKind);
  }
};

template <typename Kind, typename AllocationPolicy, typename Modifier>
class CmifProxyImpl<account::baas::IFloatingRegistrationRequest, Kind,
  AllocationPolicy, account::baas::IFloatingRegistrationRequest, Modifier>
  : public CmifProxyImplBase<
      account::baas::IFloatingRegistrationRequest, Kind> {
public:
  Result GetSessionId(sf::Out<account::SessionId> pOutSessionId) override {
    return ProxyMethodInvoker<Kind, false,
      void(sf::Out<account::SessionId>)>::Invoke(&this->m_State, 0,
      pOutSessionId);
  }

  Result GetAccountId(
    sf::Out<account::NetworkServiceAccountId> pOutId) override {
    return ProxyMethodInvoker<Kind, false,
      void(sf::Out<account::NetworkServiceAccountId>)>::Invoke(&this->m_State,
      12, pOutId);
  }

  Result GetNickname(const sf::OutArray<char>& outNickname) override {
    return ProxyMethodInvoker<Kind, false,
      void(const sf::OutArray<char>&)>::Invoke(&this->m_State, 14, outNickname);
  }

  Result GetProfileImage(sf::Out<uint32_t> pOutSize,
    const sf::OutBuffer& outImage) override {
    return ProxyMethodInvoker<Kind, false,
      void(sf::Out<uint32_t>, const sf::OutBuffer&)>::Invoke(&this->m_State, 15,
      pOutSize, outImage);
  }

  Result GetProfileLargeImage(sf::Out<uint32_t> pOutSize,
    const sf::OutBuffer& outImage) override {
    return ProxyMethodInvoker<Kind, false,
      void(sf::Out<uint32_t>, const sf::OutBuffer&)>::Invoke(&this->m_State, 16,
      pOutSize, outImage);
  }

  Result LoadIdTokenCache(sf::Out<uint32_t> pOutSize,
    const sf::OutBuffer& outToken) override {
    return ProxyMethodInvoker<Kind, false,
      void(sf::Out<uint32_t>, const sf::OutBuffer&)>::Invoke(&this->m_State, 21,
      pOutSize, outToken);
  }

  Result RegisterUser(sf::Out<account::Uid> pOutUid) override {
    return ProxyMethodInvoker<Kind, false,
      void(sf::Out<account::Uid>)>::Invoke(&this->m_State, 100, pOutUid);
  }

  Result RegisterUserWithUid(const account::Uid& uid) override {
    return ProxyMethodInvoker<Kind, false,
      void(const account::Uid&)>::Invoke(&this->m_State, 101, uid);
  }

  Result RegisterNetworkServiceAccountAsync(
    const sf::Out<sf::SharedPointer<account::detail::IAsyncContext>>&
      pOutContext) override {
    return InvokeWithStatelessOutObject<Kind, false, 102, AllocationPolicy>(
      &this->m_State, pOutContext);
  }

  Result RegisterNetworkServiceAccountWithUidAsync(
    const sf::Out<sf::SharedPointer<account::detail::IAsyncContext>>&
      pOutContext,
    const account::Uid& uid) override {
    return InvokeWithStatelessOutObject<Kind, false, 103, AllocationPolicy>(
      &this->m_State, pOutContext, uid);
  }

  Result EnsureIdTokenCacheAsync(
    const sf::Out<sf::SharedPointer<account::detail::IAsyncContext>>&
      pOutContext) override {
    return InvokeWithStatelessOutObject<Kind, false, 111, AllocationPolicy>(
      &this->m_State, pOutContext);
  }
};

template <typename Kind, typename AllocationPolicy, typename Modifier>
class CmifProxyImpl<account::baas::IManagerForApplication, Kind,
  AllocationPolicy, account::baas::IManagerForApplication, Modifier>
  : public CmifProxyImplBase<account::baas::IManagerForApplication, Kind> {
public:
  Result CheckAvailability() override {
    return ProxyMethodInvoker<Kind, false,
      void()>::Invoke(&this->m_State, 0);
  }

  Result GetAccountId(
    sf::Out<account::NetworkServiceAccountId> pOutId) override {
    return ProxyMethodInvoker<Kind, false,
      void(sf::Out<account::NetworkServiceAccountId>)>::Invoke(&this->m_State,
      1, pOutId);
  }

  Result EnsureIdTokenCacheAsync(
    const sf::Out<sf::SharedPointer<account::detail::IAsyncContext>>&
      pOutContext) override {
    return InvokeWithStatelessOutObject<Kind, false, 2, AllocationPolicy>(
      &this->m_State, pOutContext);
  }

  Result LoadIdTokenCache(sf::Out<uint32_t> pOutSize,
    const sf::OutBuffer& buffer) override {
    return ProxyMethodInvoker<Kind, false,
      void(sf::Out<uint32_t>, const sf::OutBuffer&)>::Invoke(&this->m_State, 4,
      pOutSize, buffer);
  }

  Result LoadNetworkServiceLicenseKindAsync(
    const sf::Out<sf::SharedPointer<
      account::baas::IAsyncContextForLoginForOnlinePlay>>&
        pOutContext) override {
    return InvokeWithStatelessOutObject<Kind, false, 170, AllocationPolicy>(
      &this->m_State, pOutContext);
  }
};

template <typename Kind, typename AllocationPolicy, typename Modifier>
class CmifProxyImpl<account::baas::IManagerForSystemService, Kind,
  AllocationPolicy, account::baas::IManagerForSystemService, Modifier>
  : public CmifProxyImplBase<account::baas::IManagerForSystemService, Kind> {
public:
  Result CheckAvailability() override {
    return ProxyMethodInvoker<Kind, false,
      void()>::Invoke(&this->m_State, 0);
  }

  Result GetAccountId(
    sf::Out<account::NetworkServiceAccountId> pOutId) override {
    return ProxyMethodInvoker<Kind, false,
      void(sf::Out<account::NetworkServiceAccountId>)>::Invoke(&this->m_State,
      1, pOutId);
  }

  Result EnsureIdTokenCacheAsync(
    const sf::Out<sf::SharedPointer<account::detail::IAsyncContext>>&
      pOutContext) override {
    return InvokeWithStatelessOutObject<Kind, false, 2, AllocationPolicy>(
      &this->m_State, pOutContext);
  }

  Result LoadIdTokenCache(sf::Out<uint32_t> pOutSize,
    const sf::OutBuffer& buffer) override {
    return ProxyMethodInvoker<Kind, false,
      void(sf::Out<uint32_t>, const sf::OutBuffer&)>::Invoke(&this->m_State, 4,
      pOutSize, buffer);
  }

  Result RefreshNotificationTokenAsync(
    const sf::Out<sf::SharedPointer<account::detail::IAsyncContext>>&
      pOutContext) override {
    return InvokeWithStatelessOutObject<Kind, false, 101, AllocationPolicy>(
      &this->m_State, pOutContext);
  }

  Result GetRequiredLicenseCacheForLogin(sf::Out<uint32_t> pOutKind,
    uint64_t applicationId) override {
    return ProxyMethodInvoker<Kind, false,
      void(sf::Out<uint32_t>, uint64_t)>::Invoke(&this->m_State, 110, pOutKind,
      applicationId);
  }

  Result InvalidateRequiredLicenseCache(uint64_t applicationId) override {
    return ProxyMethodInvoker<Kind, false,
      void(uint64_t)>::Invoke(&this->m_State, 111, applicationId);
  }

  Result GetNintendoAccountId(
    sf::Out<account::NintendoAccountId> pOutId) override {
    return ProxyMethodInvoker<Kind, false,
      void(sf::Out<account::NintendoAccountId>)>::Invoke(&this->m_State, 120,
      pOutId);
  }

  Result RefreshCachedNintendoAccountInfoAsync(
    const sf::Out<sf::SharedPointer<account::detail::IAsyncContext>>&
      pOutContext) override {
    return InvokeWithStatelessOutObject<Kind, false, 131, AllocationPolicy>(
      &this->m_State, pOutContext);
  }

  Result LoadCachedNintendoAccountVerificationUrl(
    sf::Out<time::PosixTime> pOutExpiration,
    sf::Out<time::PosixTime> pOutRetryTime, const sf::OutBuffer& url) override {
    return ProxyMethodInvoker<Kind, false,
      void(sf::Out<time::PosixTime>, sf::Out<time::PosixTime>,
      const sf::OutBuffer&)>::Invoke(&this->m_State, 133, pOutExpiration,
      pOutRetryTime, url);
  }

  Result RefreshCachedNintendoAccountVerificationUrlAsync(
    const sf::Out<sf::SharedPointer<account::detail::IAsyncContext>>&
      pOutContext) override {
    return InvokeWithStatelessOutObject<Kind, false, 134, AllocationPolicy>(
      &this->m_State, pOutContext);
  }

  Result RefreshCachedNetworkServiceLicenseInfoAsync(
    const sf::Out<sf::SharedPointer<account::detail::IAsyncContext>>&
      pOutContext) override {
    return InvokeWithStatelessOutObject<Kind, false, 141, AllocationPolicy>(
      &this->m_State, pOutContext);
  }

  Result GetCachedNetworkServiceLicenseInfo(sf::Out<uint32_t> pOutLicense,
    sf::Out<uint32_t> pOutState,
    sf::Out<time::PosixTime> pOutExpiration) override {
    return ProxyMethodInvoker<Kind, false,
      void(sf::Out<uint32_t>, sf::Out<uint32_t>,
      sf::Out<time::PosixTime>)>::Invoke(&this->m_State, 143, pOutLicense,
      pOutState, pOutExpiration);
  }

  Result RequiresUpdateNetworkServiceAccountIdTokenCache() override {
    return ProxyMethodInvoker<Kind, false,
      void()>::Invoke(&this->m_State, 160);
  }

  Result RequireReauthenticationOfNetworkServiceAccount() override {
    return ProxyMethodInvoker<Kind, false,
      void()>::Invoke(&this->m_State, 161);
  }
};

template <typename Kind, typename AllocationPolicy, typename Modifier>
class CmifProxyImpl<account::detail::IAsyncContext, Kind, AllocationPolicy,
  account::detail::IAsyncContext, Modifier>
  : public CmifProxyImplBase<account::detail::IAsyncContext, Kind> {
public:
  Result Cancel() override {
    return ProxyMethodInvoker<Kind, false,
      void()>::Invoke(&this->m_State, 1);
  }

  Result HasDone(sf::Out<bool> pOutIsDone) override {
    return ProxyMethodInvoker<Kind, false,
      void(sf::Out<bool>)>::Invoke(&this->m_State, 2, pOutIsDone);
  }

  Result GetResult() override {
    return ProxyMethodInvoker<Kind, false,
      void()>::Invoke(&this->m_State, 3);
  }
};

template <typename Kind, typename AllocationPolicy, typename Modifier>
class CmifProxyImpl<account::http::IOAuthProcedure, Kind, AllocationPolicy,
  account::http::IOAuthProcedure, Modifier>
  : public CmifProxyImplBase<account::http::IOAuthProcedure, Kind> {
public:
  Result PrepareAsync(
    const sf::Out<sf::SharedPointer<account::detail::IAsyncContext>>&
      pOutContext) override {
    return InvokeWithStatelessOutObject<Kind, false, 0, AllocationPolicy>(
      &this->m_State, pOutContext);
  }

  Result ApplyResponse(const sf::InBuffer& response) override {
    return ProxyMethodInvoker<Kind, false,
      void(const sf::InBuffer&)>::Invoke(&this->m_State, 2, response);
  }

  Result Suspend(sf::Out<account::SessionId> pOutSessionId) override {
    return ProxyMethodInvoker<Kind, false,
      void(sf::Out<account::SessionId>)>::Invoke(&this->m_State, 10,
      pOutSessionId);
  }
};

template <typename Kind, typename AllocationPolicy, typename Modifier>
class CmifProxyImpl<account::migration::IDeviceMigrationUserImportRequest, Kind,
  AllocationPolicy, account::migration::IDeviceMigrationUserImportRequest,
  Modifier>
  : public CmifProxyImplBase<
      account::migration::IDeviceMigrationUserImportRequest, Kind> {
public:
  Result GetOAuthProcedureSessionId(
    sf::Out<account::SessionId> pOutId) override {
    return ProxyMethodInvoker<Kind, false,
      void(sf::Out<account::SessionId>)>::Invoke(&this->m_State, 0, pOutId);
  }

  Result EnsureOperatingUserIdTokenCacheAsync(
    const sf::Out<sf::SharedPointer<account::detail::IAsyncContext>>&
      pOutContext) override {
    return InvokeWithStatelessOutObject<Kind, false, 21, AllocationPolicy>(
      &this->m_State, pOutContext);
  }

  Result LoadOperatingUserIdTokenCache(sf::Out<uint32_t> pOutSize,
    const sf::OutBuffer& buffer) override {
    return ProxyMethodInvoker<Kind, false,
      void(sf::Out<uint32_t>, const sf::OutBuffer&)>::Invoke(&this->m_State, 22,
      pOutSize, buffer);
  }

  Result GetOperatingUserAccountId(
    sf::Out<account::NetworkServiceAccountId> pOutId) override {
    return ProxyMethodInvoker<Kind, false,
      void(sf::Out<account::NetworkServiceAccountId>)>::Invoke(&this->m_State,
      23, pOutId);
  }

  Result GetOperatingUserNickname(const sf::OutBuffer& nickname) override {
    return ProxyMethodInvoker<Kind, false,
      void(const sf::OutBuffer&)>::Invoke(&this->m_State, 24, nickname);
  }

  Result GetOperatingUserProfileImage(sf::Out<uint32_t> pOutSize,
    const sf::OutBuffer& image) override {
    return ProxyMethodInvoker<Kind, false,
      void(sf::Out<uint32_t>, const sf::OutBuffer&)>::Invoke(&this->m_State, 25,
      pOutSize, image);
  }

  Result GetOperatingUserProfileLargeImage(sf::Out<uint32_t> pOutSize,
    const sf::OutBuffer& image) override {
    return ProxyMethodInvoker<Kind, false,
      void(sf::Out<uint32_t>, const sf::OutBuffer&)>::Invoke(&this->m_State, 26,
      pOutSize, image);
  }

  Result IsOperatingUserAnalyticsPermissionInternalAnalysisPermitted(
    sf::Out<bool> pOutIsPermitted) override {
    return ProxyMethodInvoker<Kind, false,
      void(sf::Out<bool>)>::Invoke(&this->m_State, 27, pOutIsPermitted);
  }

  Result SetTransferEventId(int64_t eventId) override {
    return ProxyMethodInvoker<Kind, false,
      void(int64_t)>::Invoke(&this->m_State, 30, eventId);
  }
};

template <typename Kind, typename AllocationPolicy, typename Modifier>
class CmifProxyImpl<account::nas::IAuthorizationRequest, Kind, AllocationPolicy,
  account::nas::IAuthorizationRequest, Modifier>
  : public CmifProxyImplBase<account::nas::IAuthorizationRequest, Kind> {
public:
  Result InvokeWithoutInteractionAsync(
    const sf::Out<sf::SharedPointer<account::detail::IAsyncContext>>&
      pOutContext) override {
    return InvokeWithStatelessOutObject<Kind, false, 10, AllocationPolicy>(
      &this->m_State, pOutContext);
  }

  Result IsAuthorized(sf::Out<bool> pOutIsAuthorized) override {
    return ProxyMethodInvoker<Kind, false,
      void(sf::Out<bool>)>::Invoke(&this->m_State, 19, pOutIsAuthorized);
  }

  Result GetAuthorizationCode(sf::Out<uint32_t> pOutSize,
    const sf::OutBuffer& code) override {
    return ProxyMethodInvoker<Kind, false,
      void(sf::Out<uint32_t>, const sf::OutBuffer&)>::Invoke(&this->m_State, 20,
      pOutSize, code);
  }

  Result GetIdToken(sf::Out<uint32_t> pOutSize,
    const sf::OutBuffer& token) override {
    return ProxyMethodInvoker<Kind, false,
      void(sf::Out<uint32_t>, const sf::OutBuffer&)>::Invoke(&this->m_State, 21,
      pOutSize, token);
  }
};

template <typename Kind, typename AllocationPolicy, typename Modifier>
class CmifProxyImpl<account::nas::IDeviceHistoryRequest, Kind, AllocationPolicy,
  account::nas::IDeviceHistoryRequest, Modifier>
  : public CmifProxyImplBase<account::nas::IDeviceHistoryRequest, Kind> {
public:
  Result InvokeWithoutInteractionAsync(
    const sf::Out<sf::SharedPointer<account::detail::IAsyncContext>>&
      pOutContext) override {
    return InvokeWithStatelessOutObject<Kind, false, 10, AllocationPolicy>(
      &this->m_State, pOutContext);
  }

  Result GetCount(sf::Out<int32_t> pOutCount) override {
    return ProxyMethodInvoker<Kind, false,
      void(sf::Out<int32_t>)>::Invoke(&this->m_State, 100, pOutCount);
  }
};

template <typename Kind, typename AllocationPolicy, typename Modifier>
class CmifProxyImpl<account::nas::IOAuthProcedureForDeviceMigrationDownload,
  Kind, AllocationPolicy,
  account::nas::IOAuthProcedureForDeviceMigrationDownload, Modifier>
  : public CmifProxyImplBase<
      account::nas::IOAuthProcedureForDeviceMigrationDownload, Kind> {
public:
  Result PrepareAsync(
    const sf::Out<sf::SharedPointer<account::detail::IAsyncContext>>&
      pOutContext) override {
    return InvokeWithStatelessOutObject<Kind, false, 0, AllocationPolicy>(
      &this->m_State, pOutContext);
  }

  Result ApplyResponse(const sf::InBuffer& response) override {
    return ProxyMethodInvoker<Kind, false,
      void(const sf::InBuffer&)>::Invoke(&this->m_State, 2, response);
  }

  Result Suspend(sf::Out<account::SessionId> pOutSessionId) override {
    return ProxyMethodInvoker<Kind, false,
      void(sf::Out<account::SessionId>)>::Invoke(&this->m_State, 10,
      pOutSessionId);
  }

  Result GetTemporaryUserIdForTemporarySession(
    sf::Out<uint64_t> pOutId) override {
    return ProxyMethodInvoker<Kind, false,
      void(sf::Out<uint64_t>)>::Invoke(&this->m_State, 100, pOutId);
  }
};

template <typename Kind, typename AllocationPolicy, typename Modifier>
class CmifProxyImpl<
  account::nas::IOAuthProcedureForDeviceMigrationOperatingUserAuthentication,
  Kind, AllocationPolicy,
  account::nas::IOAuthProcedureForDeviceMigrationOperatingUserAuthentication,
  Modifier>
  : public CmifProxyImplBase<
      account::nas::IOAuthProcedureForDeviceMigrationOperatingUserAuthentication,
      Kind> {
public:
  Result PrepareAsync(
    const sf::Out<sf::SharedPointer<account::detail::IAsyncContext>>&
      pOutContext) override {
    return InvokeWithStatelessOutObject<Kind, false, 0, AllocationPolicy>(
      &this->m_State, pOutContext);
  }

  Result ApplyResponse(const sf::InBuffer& response) override {
    return ProxyMethodInvoker<Kind, false,
      void(const sf::InBuffer&)>::Invoke(&this->m_State, 2, response);
  }

  Result Suspend(sf::Out<account::SessionId> pOutSessionId) override {
    return ProxyMethodInvoker<Kind, false,
      void(sf::Out<account::SessionId>)>::Invoke(&this->m_State, 10,
      pOutSessionId);
  }

  Result GetTemporaryUserIdForTemporarySession(
    sf::Out<uint64_t> pOutId) override {
    return ProxyMethodInvoker<Kind, false,
      void(sf::Out<uint64_t>)>::Invoke(&this->m_State, 100, pOutId);
  }
};

template <typename Kind, typename AllocationPolicy, typename Modifier>
class CmifProxyImpl<account::nas::IOAuthProcedureForExternalNsa, Kind,
  AllocationPolicy, account::nas::IOAuthProcedureForExternalNsa, Modifier>
  : public CmifProxyImplBase<
      account::nas::IOAuthProcedureForExternalNsa, Kind> {
public:
  Result PrepareAsync(
    const sf::Out<sf::SharedPointer<account::detail::IAsyncContext>>&
      pOutContext) override {
    return InvokeWithStatelessOutObject<Kind, false, 0, AllocationPolicy>(
      &this->m_State, pOutContext);
  }

  Result ApplyResponse(const sf::InBuffer& response) override {
    return ProxyMethodInvoker<Kind, false,
      void(const sf::InBuffer&)>::Invoke(&this->m_State, 2, response);
  }

  Result ApplyResponseAsync(
    const sf::Out<sf::SharedPointer<account::detail::IAsyncContext>>&
      pOutContext,
    const sf::InBuffer& response) override {
    return InvokeWithStatelessOutObject<Kind, false, 3, AllocationPolicy>(
      &this->m_State, pOutContext, response);
  }

  Result Suspend(sf::Out<account::SessionId> pOutSessionId) override {
    return ProxyMethodInvoker<Kind, false,
      void(sf::Out<account::SessionId>)>::Invoke(&this->m_State, 10,
      pOutSessionId);
  }

  Result GetAccountId(
    sf::Out<account::NetworkServiceAccountId> pOutId) override {
    return ProxyMethodInvoker<Kind, false,
      void(sf::Out<account::NetworkServiceAccountId>)>::Invoke(&this->m_State,
      100, pOutId);
  }

  Result GetLinkedNintendoAccountId(
    sf::Out<account::NintendoAccountId> pOutId) override {
    return ProxyMethodInvoker<Kind, false,
      void(sf::Out<account::NintendoAccountId>)>::Invoke(&this->m_State, 101,
      pOutId);
  }

  Result GetNickname(const sf::OutBuffer& nickname) override {
    return ProxyMethodInvoker<Kind, false,
      void(const sf::OutBuffer&)>::Invoke(&this->m_State, 102, nickname);
  }

  Result GetProfileImage(sf::Out<uint32_t> pOutSize,
    const sf::OutBuffer& image) override {
    return ProxyMethodInvoker<Kind, false,
      void(sf::Out<uint32_t>, const sf::OutBuffer&)>::Invoke(&this->m_State,
      103, pOutSize, image);
  }

  Result GetProfileLargeImage(sf::Out<uint32_t> pOutSize,
    const sf::OutBuffer& image) override {
    return ProxyMethodInvoker<Kind, false,
      void(sf::Out<uint32_t>, const sf::OutBuffer&)>::Invoke(&this->m_State,
      104, pOutSize, image);
  }
};

template <typename Kind, typename AllocationPolicy, typename Modifier>
class CmifProxyImpl<account::nas::IOAuthProcedureForNintendoAccountLinkage,
  Kind, AllocationPolicy,
  account::nas::IOAuthProcedureForNintendoAccountLinkage, Modifier>
  : public CmifProxyImplBase<
      account::nas::IOAuthProcedureForNintendoAccountLinkage, Kind> {
public:
  Result PrepareAsync(
    const sf::Out<sf::SharedPointer<account::detail::IAsyncContext>>&
      pOutContext) override {
    return InvokeWithStatelessOutObject<Kind, false, 0, AllocationPolicy>(
      &this->m_State, pOutContext);
  }

  Result ApplyResponse(const sf::InBuffer& response) override {
    return ProxyMethodInvoker<Kind, false,
      void(const sf::InBuffer&)>::Invoke(&this->m_State, 2, response);
  }

  Result ApplyResponseAsync(
    const sf::Out<sf::SharedPointer<account::detail::IAsyncContext>>&
      pOutContext,
    const sf::InBuffer& response) override {
    return InvokeWithStatelessOutObject<Kind, false, 3, AllocationPolicy>(
      &this->m_State, pOutContext, response);
  }

  Result Suspend(sf::Out<account::SessionId> pOutSessionId) override {
    return ProxyMethodInvoker<Kind, false,
      void(sf::Out<account::SessionId>)>::Invoke(&this->m_State, 10,
      pOutSessionId);
  }

  Result IsNetworkServiceAccountReplaced(
    sf::Out<bool> pOutIsReplaced) override {
    return ProxyMethodInvoker<Kind, false,
      void(sf::Out<bool>)>::Invoke(&this->m_State, 101, pOutIsReplaced);
  }
};

template <typename Kind, typename AllocationPolicy, typename Modifier>
class CmifProxyImpl<
  account::nas::IOAuthProcedureForNintendoAccountReauthentication, Kind,
  AllocationPolicy,
  account::nas::IOAuthProcedureForNintendoAccountReauthentication, Modifier>
  : public CmifProxyImplBase<
      account::nas::IOAuthProcedureForNintendoAccountReauthentication, Kind> {
public:
  Result PrepareAsync(
    const sf::Out<sf::SharedPointer<account::detail::IAsyncContext>>&
      pOutContext) override {
    return InvokeWithStatelessOutObject<Kind, false, 0, AllocationPolicy>(
      &this->m_State, pOutContext);
  }

  Result ApplyResponse(const sf::InBuffer& response) override {
    return ProxyMethodInvoker<Kind, false,
      void(const sf::InBuffer&)>::Invoke(&this->m_State, 2, response);
  }

  Result ApplyResponseAsync(
    const sf::Out<sf::SharedPointer<account::detail::IAsyncContext>>&
      pOutContext,
    const sf::InBuffer& response) override {
    return InvokeWithStatelessOutObject<Kind, false, 3, AllocationPolicy>(
      &this->m_State, pOutContext, response);
  }

  Result Suspend(sf::Out<account::SessionId> pOutSessionId) override {
    return ProxyMethodInvoker<Kind, false,
      void(sf::Out<account::SessionId>)>::Invoke(&this->m_State, 10,
      pOutSessionId);
  }

  Result GetSkipIdentification(sf::Out<bool> pOutIsSkipped) override {
    return ProxyMethodInvoker<Kind, false,
      void(sf::Out<bool>)>::Invoke(&this->m_State, 110, pOutIsSkipped);
  }
};

template <typename Kind, typename AllocationPolicy, typename Modifier>
class CmifProxyImpl<account::nas::IOAuthProcedureForUserRegistration, Kind,
  AllocationPolicy, account::nas::IOAuthProcedureForUserRegistration, Modifier>
  : public CmifProxyImplBase<
      account::nas::IOAuthProcedureForUserRegistration, Kind> {
public:
  Result PrepareAsync(
    const sf::Out<sf::SharedPointer<account::detail::IAsyncContext>>&
      pOutContext) override {
    return InvokeWithStatelessOutObject<Kind, false, 0, AllocationPolicy>(
      &this->m_State, pOutContext);
  }

  Result ApplyResponse(const sf::InBuffer& response) override {
    return ProxyMethodInvoker<Kind, false,
      void(const sf::InBuffer&)>::Invoke(&this->m_State, 2, response);
  }

  Result ApplyResponseAsync(
    const sf::Out<sf::SharedPointer<account::detail::IAsyncContext>>&
      pOutContext,
    const sf::InBuffer& response) override {
    return InvokeWithStatelessOutObject<Kind, false, 3, AllocationPolicy>(
      &this->m_State, pOutContext, response);
  }

  Result Suspend(sf::Out<account::SessionId> pOutSessionId) override {
    return ProxyMethodInvoker<Kind, false,
      void(sf::Out<account::SessionId>)>::Invoke(&this->m_State, 10,
      pOutSessionId);
  }

  Result GetAccountId(
    sf::Out<account::NetworkServiceAccountId> pOutId) override {
    return ProxyMethodInvoker<Kind, false,
      void(sf::Out<account::NetworkServiceAccountId>)>::Invoke(&this->m_State,
      100, pOutId);
  }

  Result GetLinkedNintendoAccountId(
    sf::Out<account::NintendoAccountId> pOutId) override {
    return ProxyMethodInvoker<Kind, false,
      void(sf::Out<account::NintendoAccountId>)>::Invoke(&this->m_State, 101,
      pOutId);
  }

  Result GetNickname(const sf::OutBuffer& nickname) override {
    return ProxyMethodInvoker<Kind, false,
      void(const sf::OutBuffer&)>::Invoke(&this->m_State, 102, nickname);
  }

  Result GetProfileImage(sf::Out<uint32_t> pOutSize,
    const sf::OutBuffer& image) override {
    return ProxyMethodInvoker<Kind, false,
      void(sf::Out<uint32_t>, const sf::OutBuffer&)>::Invoke(&this->m_State,
      103, pOutSize, image);
  }

  Result GetProfileLargeImage(sf::Out<uint32_t> pOutSize,
    const sf::OutBuffer& image) override {
    return ProxyMethodInvoker<Kind, false,
      void(sf::Out<uint32_t>, const sf::OutBuffer&)>::Invoke(&this->m_State,
      104, pOutSize, image);
  }

  Result RegisterUserAsync(
    const sf::Out<sf::SharedPointer<account::detail::IAsyncContext>>&
      pOutContext) override {
    return InvokeWithStatelessOutObject<Kind, false, 110, AllocationPolicy>(
      &this->m_State, pOutContext);
  }

  Result GetUid(sf::Out<account::Uid> pOutUid) override {
    return ProxyMethodInvoker<Kind, false,
      void(sf::Out<account::Uid>)>::Invoke(&this->m_State, 111, pOutUid);
  }

  Result SuspendAfterApplyResponse(
    sf::Out<account::SessionId> pOutId) override {
    return ProxyMethodInvoker<Kind, false,
      void(sf::Out<account::SessionId>)>::Invoke(&this->m_State, 205, pOutId);
  }

  Result IsProfileAvailable(sf::Out<bool> pOutIsAvailable) override {
    return ProxyMethodInvoker<Kind, false,
      void(sf::Out<bool>)>::Invoke(&this->m_State, 210, pOutIsAvailable);
  }

  Result RegisterUserForCreationAsync(
    const sf::Out<sf::SharedPointer<account::detail::IAsyncContext>>&
      pOutContext) override {
    return InvokeWithStatelessOutObject<Kind, false, 220, AllocationPolicy>(
      &this->m_State, pOutContext);
  }
};

template <typename Kind, typename AllocationPolicy, typename Modifier>
class CmifProxyImpl<account::profile::IProfile, Kind, AllocationPolicy,
  account::profile::IProfile, Modifier>
  : public CmifProxyImplBase<account::profile::IProfile, Kind> {
public:
  Result GetBase(sf::Out<account::profile::ProfileBase> pOutBase) override {
    return ProxyMethodInvoker<Kind, false,
      void(sf::Out<account::profile::ProfileBase>)>::Invoke(&this->m_State, 1,
      pOutBase);
  }

  Result GetImageSize(sf::Out<uint32_t> pOutSize) override {
    return ProxyMethodInvoker<Kind, false,
      void(sf::Out<uint32_t>)>::Invoke(&this->m_State, 10, pOutSize);
  }

  Result LoadImage(sf::Out<uint32_t> pOutSize,
    const sf::OutBuffer& outImage) override {
    return ProxyMethodInvoker<Kind, false,
      void(sf::Out<uint32_t>, const sf::OutBuffer&)>::Invoke(&this->m_State, 11,
      pOutSize, outImage);
  }

  Result GetLargeImageSize(sf::Out<uint32_t> pOutSize) override {
    return ProxyMethodInvoker<Kind, false,
      void(sf::Out<uint32_t>)>::Invoke(&this->m_State, 20, pOutSize);
  }

  Result LoadLargeImage(sf::Out<uint32_t> pOutSize,
    const sf::OutBuffer& outImage) override {
    return ProxyMethodInvoker<Kind, false,
      void(sf::Out<uint32_t>, const sf::OutBuffer&)>::Invoke(&this->m_State, 21,
      pOutSize, outImage);
  }

  Result GetStableUserId(sf::Out<account::StableUserId> pOutId) override {
    return ProxyMethodInvoker<Kind, false,
      void(sf::Out<account::StableUserId>)>::Invoke(&this->m_State, 40, pOutId);
  }
};

template <typename Kind, typename AllocationPolicy, typename Modifier>
class CmifProxyImpl<account::profile::IProfileEditor, Kind, AllocationPolicy,
  account::profile::IProfileEditor, Modifier>
  : public CmifProxyImplBase<account::profile::IProfileEditor, Kind> {
public:
  Result GetImageSize(sf::Out<uint32_t> pOutSize) override {
    return ProxyMethodInvoker<Kind, false,
      void(sf::Out<uint32_t>)>::Invoke(&this->m_State, 10, pOutSize);
  }

  Result LoadImage(sf::Out<uint32_t> pOutSize,
    const sf::OutBuffer& image) override {
    return ProxyMethodInvoker<Kind, false,
      void(sf::Out<uint32_t>, const sf::OutBuffer&)>::Invoke(&this->m_State, 11,
      pOutSize, image);
  }

  Result GetLargeImageSize(sf::Out<uint32_t> pOutSize) override {
    return ProxyMethodInvoker<Kind, false,
      void(sf::Out<uint32_t>)>::Invoke(&this->m_State, 20, pOutSize);
  }

  Result LoadLargeImage(sf::Out<uint32_t> pOutSize,
    const sf::OutBuffer& image) override {
    return ProxyMethodInvoker<Kind, false,
      void(sf::Out<uint32_t>, const sf::OutBuffer&)>::Invoke(&this->m_State, 21,
      pOutSize, image);
  }

  Result GetImageId(sf::Out<account::profile::ImageId> pOutId) override {
    return ProxyMethodInvoker<Kind, false,
      void(sf::Out<account::profile::ImageId>)>::Invoke(&this->m_State, 30,
      pOutId);
  }
};

}

namespace {

using PlainKind = nn::sf::hipc::client::Hipc2ProxyKindBase<
  nn::sf::hipc::detail::MessageType::CmifRequestWithContext>;

using DomainKind = nn::sf::cmif::client::CmifDomainProxyKind<
  nn::sf::hipc::client::Hipc2ClientSessionManagedProxyKindBase<PlainKind>>;

using DefaultModifier = nn::sf::cmif::client::detail::ProcessModifierImpl<
  nn::sf::cmif::client::DefaultProxyFilterTag>;

using ObjectHolderAllocatorPolicy = nn::sf::StatelessAllocationPolicy<
  nn::sf::ExpHeapStaticAllocator<2048,
    nn::account::detail::ObjectHolderAllocatorTag>>;

}

template class nn::sf::cmif::client::detail::CmifProxyImpl<
  nn::account::IAccountServiceForAdministrator, DomainKind,
  ObjectHolderAllocatorPolicy, nn::account::IAccountServiceForAdministrator,
  DefaultModifier>;

template class nn::sf::cmif::client::detail::CmifProxyImpl<
  nn::account::IAccountServiceForApplication, DomainKind,
  ObjectHolderAllocatorPolicy, nn::account::IAccountServiceForApplication,
  DefaultModifier>;

template class nn::sf::cmif::client::detail::CmifProxyImpl<
  nn::account::IAccountServiceForSystemService, DomainKind,
  ObjectHolderAllocatorPolicy, nn::account::IAccountServiceForSystemService,
  DefaultModifier>;

template class nn::sf::cmif::client::detail::CmifProxyImpl<
  nn::account::IAccountServiceForSystemServiceWithProfileEditor, DomainKind,
  ObjectHolderAllocatorPolicy,
  nn::account::IAccountServiceForSystemServiceWithProfileEditor,
  DefaultModifier>;

template class nn::sf::cmif::client::detail::CmifProxyImpl<
  nn::account::baas::IAdministrator, DomainKind, ObjectHolderAllocatorPolicy,
  nn::account::baas::IAdministrator, DefaultModifier>;

template class nn::sf::cmif::client::detail::CmifProxyImpl<
  nn::account::baas::IAsyncContextForLoginForOnlinePlay, DomainKind,
  ObjectHolderAllocatorPolicy,
  nn::account::baas::IAsyncContextForLoginForOnlinePlay, DefaultModifier>;

template class nn::sf::cmif::client::detail::CmifProxyImpl<
  nn::account::baas::IFloatingRegistrationRequest, DomainKind,
  ObjectHolderAllocatorPolicy, nn::account::baas::IFloatingRegistrationRequest,
  DefaultModifier>;

template class nn::sf::cmif::client::detail::CmifProxyImpl<
  nn::account::baas::IManagerForApplication, DomainKind,
  ObjectHolderAllocatorPolicy, nn::account::baas::IManagerForApplication,
  DefaultModifier>;

template class nn::sf::cmif::client::detail::CmifProxyImpl<
  nn::account::baas::IManagerForSystemService, DomainKind,
  ObjectHolderAllocatorPolicy, nn::account::baas::IManagerForSystemService,
  DefaultModifier>;

template class nn::sf::cmif::client::detail::CmifProxyImpl<
  nn::account::detail::IAsyncContext, DomainKind, ObjectHolderAllocatorPolicy,
  nn::account::detail::IAsyncContext, DefaultModifier>;

template class nn::sf::cmif::client::detail::CmifProxyImpl<
  nn::account::http::IOAuthProcedure, DomainKind, ObjectHolderAllocatorPolicy,
  nn::account::http::IOAuthProcedure, DefaultModifier>;

template class nn::sf::cmif::client::detail::CmifProxyImpl<
  nn::account::migration::IDeviceMigrationUserImportRequest, DomainKind,
  ObjectHolderAllocatorPolicy,
  nn::account::migration::IDeviceMigrationUserImportRequest, DefaultModifier>;

template class nn::sf::cmif::client::detail::CmifProxyImpl<
  nn::account::nas::IAuthorizationRequest, DomainKind,
  ObjectHolderAllocatorPolicy, nn::account::nas::IAuthorizationRequest,
  DefaultModifier>;

template class nn::sf::cmif::client::detail::CmifProxyImpl<
  nn::account::nas::IDeviceHistoryRequest, DomainKind,
  ObjectHolderAllocatorPolicy, nn::account::nas::IDeviceHistoryRequest,
  DefaultModifier>;

template class nn::sf::cmif::client::detail::CmifProxyImpl<
  nn::account::nas::IOAuthProcedureForDeviceMigrationDownload, DomainKind,
  ObjectHolderAllocatorPolicy,
  nn::account::nas::IOAuthProcedureForDeviceMigrationDownload, DefaultModifier>;

template class nn::sf::cmif::client::detail::CmifProxyImpl<
  nn::account::nas::IOAuthProcedureForDeviceMigrationOperatingUserAuthentication,
  DomainKind, ObjectHolderAllocatorPolicy,
  nn::account::nas::IOAuthProcedureForDeviceMigrationOperatingUserAuthentication,
  DefaultModifier>;

template class nn::sf::cmif::client::detail::CmifProxyImpl<
  nn::account::nas::IOAuthProcedureForExternalNsa, DomainKind,
  ObjectHolderAllocatorPolicy, nn::account::nas::IOAuthProcedureForExternalNsa,
  DefaultModifier>;

template class nn::sf::cmif::client::detail::CmifProxyImpl<
  nn::account::nas::IOAuthProcedureForNintendoAccountLinkage, DomainKind,
  ObjectHolderAllocatorPolicy,
  nn::account::nas::IOAuthProcedureForNintendoAccountLinkage, DefaultModifier>;

template class nn::sf::cmif::client::detail::CmifProxyImpl<
  nn::account::nas::IOAuthProcedureForNintendoAccountReauthentication,
  DomainKind, ObjectHolderAllocatorPolicy,
  nn::account::nas::IOAuthProcedureForNintendoAccountReauthentication,
  DefaultModifier>;

template class nn::sf::cmif::client::detail::CmifProxyImpl<
  nn::account::nas::IOAuthProcedureForUserRegistration, DomainKind,
  ObjectHolderAllocatorPolicy,
  nn::account::nas::IOAuthProcedureForUserRegistration, DefaultModifier>;

template class nn::sf::cmif::client::detail::CmifProxyImpl<
  nn::account::profile::IProfile, DomainKind, ObjectHolderAllocatorPolicy,
  nn::account::profile::IProfile, DefaultModifier>;

template class nn::sf::cmif::client::detail::CmifProxyImpl<
  nn::account::profile::IProfileEditor, DomainKind, ObjectHolderAllocatorPolicy,
  nn::account::profile::IProfileEditor, DefaultModifier>;
