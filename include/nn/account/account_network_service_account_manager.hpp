#pragma once

#include <stddef.h>
#include <stdint.h>

#include "nn/account/account_async_context.hpp"
#include "nn/account/account_types.hpp"
#include "nn/account/detail/account_oauth_procedure.hpp"
#include "nn/err/err_types.hpp"
#include "nn/os/time.hpp"
#include "nn/time/time_types.hpp"
#include "nn/result.hpp"
#include "nn/sf/sf_buffers.hpp"
#include "nn/sf/shared_pointer.hpp"

namespace nn::account {

struct NintendoAccountId {
  uint64_t id;
};

struct NintendoAccountAuthenticationFingerprint;
struct SystemProgramIdentification;

enum NintendoAccountStartupDialogType : int32_t {};

enum NetworkServiceLicense : int32_t {
  NetworkServiceLicense_None,
  NetworkServiceLicense_Common,
};

enum NetworkServiceLicenseState : int32_t {
  NetworkServiceLicenseState_None,
  NetworkServiceLicenseState_Available,
};

struct CachedNetworkServiceLicenseInfo {
  NetworkServiceLicense license;
  NetworkServiceLicenseState state;
};

struct NintendoAccountAnalyticsPermissionState;

class NetworkServiceAccountManager;
class NintendoAccountReauthenticationProcedure;

namespace nas {

class IOAuthProcedureForNintendoAccountReauthentication;

}

class CachedNintendoAccountInfoForSystemService {
 public:
  CachedNintendoAccountInfoForSystemService();

  const NintendoAccountId& GetId() const;
  bool IsChild() const;
  const char* GetScreenName(size_t* pOutSize) const;
  const char* GetEmailAddress(size_t* pOutSize) const;
  const char* GetLoginId(size_t* pOutSize) const;
  const char* GetBirthday(size_t* pOutSize) const;
  const char* GetGender(size_t* pOutSize) const;
  const char* GetCountry(size_t* pOutSize) const;
  const char* GetRegion(size_t* pOutSize) const;
  const char* GetLanguage(size_t* pOutSize) const;
  NintendoAccountAnalyticsPermissionState GetAnalyticsPermissionState() const;
  bool GetAnalyticsOptedInFlag() const;
  bool IsLinkedWithNintendoNetwork() const;
  bool IsPhoneNumberEnabled() const;

 private:
  friend class NetworkServiceAccountManager;

 public:
  struct PermissionFlags {
    uint8_t isTargetMarketing : 1;
    uint8_t isInternalAnalysis : 1;
    uint8_t isThirdParty : 1;
  };

  struct Info {
    bool isChild;
    char screenName[128];
    char emailAddress[256];
    char loginId[32];
    uint8_t reserved1a9[64];
    char birthday[16];
    char gender[8];
    bool isAnalyticsOptedIn;
    uint8_t reserved202[2];
    char language[8];
    char country[4];
    char region[4];
    uint8_t reserved214[64];
    bool isLinkedWithNintendoNetwork;
    uint8_t reserved255[3];
    bool isPhoneNumberEnabled;
    PermissionFlags permissionChanged;
    PermissionFlags permitted;
    PermissionFlags permissionRequired;
  };

 private:
  NintendoAccountId m_Id;
  Info m_Info;
};

struct UiSettings {
  int32_t GetUiMode() const;
  int32_t GetNintendoAccountStartupDialogType() const;
  int32_t GetLicenseType() const;

  int32_t mode;
  union {
    Uid uid;
    SessionId sessionId;
  };
  int32_t dialogType;
  uint32_t reserved1c;
  err::ErrorCode errorCode;
  uint8_t reserved28[0x78];
};

static_assert(sizeof(UiSettings) == 0xa0);

namespace detail {

Result StartPselApplet(const UiSettings& settings, bool isOverlay);

}

namespace baas {

class IManagerForSystemService : public sf::IServiceObject {
 public:
  virtual void Reserved2() = 0;
  virtual void Reserved3() = 0;
  virtual Result CheckAvailability() = 0;
  virtual Result GetAccountId(sf::Out<NetworkServiceAccountId> pOutId) = 0;
  virtual Result EnsureIdTokenCacheAsync(
    const sf::Out<sf::SharedPointer<detail::IAsyncContext>>& pOutContext) = 0;
  virtual void Reserved7() = 0;
  virtual Result LoadIdTokenCache(sf::Out<uint32_t> pOutSize,
    const sf::OutBuffer& buffer) = 0;
  virtual Result SetSystemProgramIdentification(
    const SystemProgramIdentification& identification, uint64_t processId) = 0;
  virtual Result RefreshNotificationTokenAsync(
    const sf::Out<sf::SharedPointer<detail::IAsyncContext>>& pOutContext) = 0;
  virtual Result GetRequiredLicenseCacheForLogin(sf::Out<uint32_t> pOutKind,
    uint64_t applicationId) = 0;
  virtual Result InvalidateRequiredLicenseCache(uint64_t applicationId) = 0;
  virtual Result GetRequiredLicenseCacheForOnlinePlay(
    sf::Out<uint32_t> pOutKind, uint64_t applicationId) = 0;
  virtual Result GetNintendoAccountId(sf::Out<NintendoAccountId> pOutId) = 0;
  virtual Result CalculateNintendoAccountAuthenticationFingerprint(
    sf::Out<NintendoAccountAuthenticationFingerprint> pOutFingerprint) = 0;
  virtual void Reserved16() = 0;
  virtual Result RefreshCachedNintendoAccountInfoAsync(
    const sf::Out<sf::SharedPointer<detail::IAsyncContext>>& pOutContext) = 0;
  virtual Result RefreshCachedNintendoAccountInfoAsyncIfTimeElapsed(
    sf::Out<bool> pOutIsRequested,
    const sf::Out<sf::SharedPointer<detail::IAsyncContext>>& pOutContext,
    uint32_t thresholdSeconds) = 0;
  virtual Result LoadCachedNintendoAccountVerificationUrl(
    sf::Out<time::PosixTime> pOutExpiration,
    sf::Out<time::PosixTime> pOutRetryTime, const sf::OutBuffer& url) = 0;
  virtual Result RefreshCachedNintendoAccountVerificationUrlAsync(
    const sf::Out<sf::SharedPointer<detail::IAsyncContext>>& pOutContext) = 0;
  virtual Result RefreshCachedNintendoAccountVerificationUrlAsyncIfTimeElapsed(
    sf::Out<bool> pOutIsRequested,
    const sf::Out<sf::SharedPointer<detail::IAsyncContext>>& pOutContext,
    uint32_t thresholdSeconds) = 0;
  virtual Result LoadCachedNintendoAccountInfo(
    sf::Out<NintendoAccountId> pOutId,
    sf::Out<CachedNintendoAccountInfoForSystemService::Info> pOutInfo,
    const sf::OutBuffer& buffer) = 0;
  virtual void Reserved23() = 0;
  virtual Result RefreshCachedNetworkServiceLicenseInfoAsync(
    const sf::Out<sf::SharedPointer<detail::IAsyncContext>>& pOutContext) = 0;
  virtual Result RefreshCachedNetworkServiceLicenseInfoAsyncIfTimeElapsed(
    sf::Out<bool> pOutIsRequested,
    const sf::Out<sf::SharedPointer<detail::IAsyncContext>>& pOutContext,
    uint32_t thresholdSeconds) = 0;
  virtual Result GetCachedNetworkServiceLicenseInfo(
    sf::Out<uint32_t> pOutLicense, sf::Out<uint32_t> pOutState,
    sf::Out<time::PosixTime> pOutExpiration) = 0;
  virtual void Reserved27() = 0;
  virtual Result RequiresUpdateNetworkServiceAccountIdTokenCache() = 0;
  virtual Result RequireReauthenticationOfNetworkServiceAccount() = 0;
  virtual void Reserved30() = 0;
  virtual Result CreateProcedureToReauthenticateNintendoAccount(
    const sf::Out<sf::SharedPointer<
      nas::IOAuthProcedureForNintendoAccountReauthentication>>& pOut) = 0;
  virtual Result ResumeProcedureToReauthenticateNintendoAccount(
    const sf::Out<sf::SharedPointer<
      nas::IOAuthProcedureForNintendoAccountReauthentication>>& pOut,
    const SessionId& sessionId) = 0;
};

}

class NetworkServiceAccountManager {
 public:
  NetworkServiceAccountManager();
  NetworkServiceAccountManager(const Uid& uid,
    baas::IManagerForSystemService* pManager);
  virtual ~NetworkServiceAccountManager();

  void Swap(NetworkServiceAccountManager& other);
  baas::IManagerForSystemService* GetPtr() const;

  Result EnsureNetworkServiceAccountAvailable(
    NintendoAccountStartupDialogType dialogType);
  Result CheckNetworkServiceAccountAvailability();
  Result IsNetworkServiceAccountAvailable(bool* pOutIsAvailable) const;
  Result GetNetworkServiceAccountId(NetworkServiceAccountId* pOutId) const;
  Result GetNintendoAccountId(NintendoAccountId* pOutId) const;
  Result LoadCachedNintendoAccountInfo(
    CachedNintendoAccountInfoForSystemService* pOutInfo, void* buffer,
    size_t size);
  Result RefreshCachedNintendoAccountInfoAsync(AsyncContext* pOutContext);
  Result RefreshCachedNintendoAccountInfoAsyncIfTimeElapsed(
    bool* pOutIsRequested, AsyncContext* pOutContext, TimeSpan threshold);
  Result LoadCachedNintendoAccountVerificationUrl(
    time::PosixTime* pOutExpiration, time::PosixTime* pOutRetryTime,
    size_t* pOutLength, char* buffer, size_t size);
  Result RefreshCachedNintendoAccountVerificationUrlAsync(
    AsyncContext* pOutContext);
  Result RefreshCachedNintendoAccountVerificationUrlAsyncIfTimeElapsed(
    bool* pOutIsRequested, AsyncContext* pOutContext, TimeSpan threshold);
  Result GetCachedNetworkServiceLicenseInfo(
    CachedNetworkServiceLicenseInfo* pOutInfo) const;
  Result RefreshCachedNetworkServiceLicenseInfoAsyncIfTimeElapsed(
    bool* pOutIsRequested, AsyncContext* pOutContext, TimeSpan threshold);
  Result EnsureNetworkServiceAccountIdTokenCacheAsync(
    AsyncContext* pOutContext);
  Result LoadNetworkServiceAccountIdTokenCache(size_t* pOutSize,
    char* buffer, size_t size);
  void RequiresUpdateNetworkServiceAccountIdTokenCache();
  void RequireReauthenticationOfNetworkServiceAccount();
  Result RefreshCachedNetworkServiceLicenseInfoAsync(
    AsyncContext* pOutContext);
  Result CreateProcedureToReauthenticateNintendoAccount(
    NintendoAccountReauthenticationProcedure* pOutProcedure);
  Result ResumeProcedureToReauthenticateNintendoAccount(
    NintendoAccountReauthenticationProcedure* pOutProcedure,
    const SessionId& sessionId);
  Result RefreshNotificationTokenAsync(AsyncContext* pOutContext);
  Result CalculateNintendoAccountAuthenticationFingerprint(
    NintendoAccountAuthenticationFingerprint* pOutFingerprint);
  Result SetSystemProgramIdentification(
    const SystemProgramIdentification& identification);

 protected:
  Uid m_Uid;
  baas::IManagerForSystemService* m_pManager;
};

}
