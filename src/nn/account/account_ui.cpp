#include "nn/account/account_network_service_account_manager.hpp"
#include "nn/account/account_network_service_license_info.hpp"
#include "nn/applet/applet_api.hpp"
#include "nn/err/err_types.hpp"

namespace nn::account {

enum IdentificationLaunchPurpose : int32_t {};

struct UiReturnArg {
  uint8_t data[24];
};

namespace detail {

Uid GetUserId(const UserHandle& handle);
Result ShowUserSelectorForDeviceMigrationUpload(Uid* pOutUid,
  const UiSettings& settings);

}

namespace {

enum UiMode : int32_t {
  UiMode_ShowUserIconEditor = 3,
  UiMode_ShowUserNicknameEditor = 4,
  UiMode_ShowUserCreatorForStarter = 5,
  UiMode_IntroduceExternalNetworkServiceAccountForRegistration = 8,
  UiMode_ShowNintendoAccountNnidLinker = 9,
  UiMode_ShowLicenseRequirementsForNetworkService = 10,
  UiMode_ShowUserQualificationPromoter = 13,
  UiMode_ShowIdentification = 14,
  UiMode_ShowPinRegistrationForIdentification = 15,
  UiMode_ShowIdentificationPinOnly = 16,
  UiMode_RefineUserIcon = 17,
  UiMode_ShowPhoneNumberAuthentication = 18,
  UiMode_AuthenticateOperatingUserForDeviceMigration = 19,
  UiMode_UploadUserMigrationDataForDeviceMigration = 20,
  UiMode_DownloadUserMigrationDataForDeviceMigration = 21,
  UiMode_ShowAnalyticsOptInForTargetMarketing = 23,
  UiMode_ShowDeviceLockNintendoAccountAuthentication = 26,
};

Result ShowForUser(UiMode mode, const Uid& uid, bool isOverlay = false) {
  UiSettings settings = {};
  settings.mode = mode;
  settings.uid = uid;
  return detail::StartPselApplet(settings, isOverlay);
}

Result ShowForSession(UiMode mode, const SessionId& sessionId) {
  UiSettings settings = {};
  settings.mode = mode;
  settings.sessionId = sessionId;
  return detail::StartPselApplet(settings, false);
}

Result Show(UiMode mode) {
  UiSettings settings = {};
  settings.mode = mode;
  return detail::StartPselApplet(settings, false);
}

}

Result ShowUserIconEditor(const Uid& uid);
Result ShowUserNicknameEditor(const Uid& uid);
Result ShowUserCreatorForStarter();
Result ShowNintendoAccountNnidLinker(const Uid& uid);
Result GetUiResultFromContextStack(UiReturnArg* pOutArg,
  applet::StorageHandle storage);
Result ShowUiToIntroduceExternalNetworkServiceAccountForRegistration(
  const SessionId& sessionId);
Result ShowUiToAuthenticateOperatingUserForDeviceMigration(
  const SessionId& sessionId);
Result ShowUiToUploadUserMigrationDataForDeviceMigration();
Result ShowUiToUploadUserMigrationDataForDeviceMigration(Uid* pOutUid);
Result ShowUiToDownloadUserMigrationDataForDeviceMigration(
  const SessionId& sessionId);
Result ShowLicenseRequirementsForNetworkService(const Uid& uid);
Result ShowLicenseRequirementsForNetworkService(const Uid& uid,
  const err::ErrorCode& errorCode);
Result ShowLicenseRequirementsForNetworkService(const UserHandle& handle);
Result ShowLicenseRequirementsForNetworkService(const UserHandle& handle,
  const err::ErrorCode& errorCode);
Result ShowLicenseRequirementsForNetworkServiceForUnspecifiedUsers(
  const err::ErrorCode& errorCode);
Result ShowUserQualificationPromoter(const Uid& uid);
Result ShowIdentification(const Uid& uid,
  IdentificationLaunchPurpose purpose);
Result ShowPinRegistrationForIdentification(const Uid& uid);
Result ShowIdentificationPinOnly(const Uid& uid);
Result ShowDeviceLockNintendoAccountAuthentication();
Result ShowRefineUserIcon();
Result UpscaleUserIcon();
Result ShowPhoneNumberAuthentication(const Uid& uid);
Result ShowAnalyticsOptInForTargetMarketing(const Uid& uid);

Result ShowUserIconEditor(const Uid& uid) {
  return ShowForUser(UiMode_ShowUserIconEditor, uid);
}

Result ShowUserNicknameEditor(const Uid& uid) {
  return ShowForUser(UiMode_ShowUserNicknameEditor, uid);
}

Result ShowUserCreatorForStarter() {
  return Show(UiMode_ShowUserCreatorForStarter);
}

Result ShowNintendoAccountNnidLinker(const Uid& uid) {
  return ShowForUser(UiMode_ShowNintendoAccountNnidLinker, uid);
}

Result GetUiResultFromContextStack(UiReturnArg* pOutArg,
  applet::StorageHandle storage) {
  return applet::ReadFromStorage(storage, 0, pOutArg, sizeof(UiReturnArg));
}

Result ShowUiToIntroduceExternalNetworkServiceAccountForRegistration(
  const SessionId& sessionId) {
  return ShowForSession(
    UiMode_IntroduceExternalNetworkServiceAccountForRegistration, sessionId);
}

Result ShowUiToAuthenticateOperatingUserForDeviceMigration(
  const SessionId& sessionId) {
  return ShowForSession(UiMode_AuthenticateOperatingUserForDeviceMigration,
    sessionId);
}

Result ShowUiToUploadUserMigrationDataForDeviceMigration() {
  return Show(UiMode_UploadUserMigrationDataForDeviceMigration);
}

Result ShowUiToUploadUserMigrationDataForDeviceMigration(Uid* pOutUid) {
  UiSettings settings = {};
  settings.mode = UiMode_UploadUserMigrationDataForDeviceMigration;
  return detail::ShowUserSelectorForDeviceMigrationUpload(pOutUid, settings);
}

Result ShowUiToDownloadUserMigrationDataForDeviceMigration(
  const SessionId& sessionId) {
  return ShowForSession(UiMode_DownloadUserMigrationDataForDeviceMigration,
    sessionId);
}

Result ShowLicenseRequirementsForNetworkService(const Uid& uid) {
  return ShowForUser(UiMode_ShowLicenseRequirementsForNetworkService, uid);
}

Result ShowLicenseRequirementsForNetworkService(const Uid& uid,
  const err::ErrorCode& errorCode) {
  UiSettings settings = {};
  settings.mode = UiMode_ShowLicenseRequirementsForNetworkService;
  settings.uid = uid;
  settings.errorCode = errorCode;
  return detail::StartPselApplet(settings, false);
}

Result ShowLicenseRequirementsForNetworkService(const UserHandle& handle) {
  UiSettings settings = {};
  settings.mode = UiMode_ShowLicenseRequirementsForNetworkService;
  settings.uid = detail::GetUserId(handle);
  return detail::StartPselApplet(settings, false);
}

Result ShowLicenseRequirementsForNetworkService(const UserHandle& handle,
  const err::ErrorCode& errorCode) {
  UiSettings settings = {};
  settings.mode = UiMode_ShowLicenseRequirementsForNetworkService;
  settings.uid = detail::GetUserId(handle);
  settings.errorCode = errorCode;
  return detail::StartPselApplet(settings, false);
}

Result ShowLicenseRequirementsForNetworkServiceForUnspecifiedUsers(
  const err::ErrorCode& errorCode) {
  UiSettings settings = {};
  settings.mode = UiMode_ShowLicenseRequirementsForNetworkService;
  settings.uid = Uid();
  settings.errorCode = errorCode;
  return detail::StartPselApplet(settings, false);
}

Result ShowUserQualificationPromoter(const Uid& uid) {
  return ShowForUser(UiMode_ShowUserQualificationPromoter, uid);
}

Result ShowIdentification(const Uid& uid,
  IdentificationLaunchPurpose purpose) {
  UiSettings settings = {};
  settings.mode = UiMode_ShowIdentification;
  settings.uid = uid;
  settings.dialogType = purpose;
  return detail::StartPselApplet(settings, false);
}

Result ShowPinRegistrationForIdentification(const Uid& uid) {
  return ShowForUser(UiMode_ShowPinRegistrationForIdentification, uid, true);
}

Result ShowIdentificationPinOnly(const Uid& uid) {
  return ShowForUser(UiMode_ShowIdentificationPinOnly, uid, true);
}

Result ShowDeviceLockNintendoAccountAuthentication() {
  return Show(UiMode_ShowDeviceLockNintendoAccountAuthentication);
}

Result ShowRefineUserIcon() {
  return Show(UiMode_RefineUserIcon);
}

Result UpscaleUserIcon() {
  return Show(UiMode_RefineUserIcon);
}

Result ShowPhoneNumberAuthentication(const Uid& uid) {
  return ShowForUser(UiMode_ShowPhoneNumberAuthentication, uid);
}

Result ShowAnalyticsOptInForTargetMarketing(const Uid& uid) {
  return ShowForUser(UiMode_ShowAnalyticsOptInForTargetMarketing, uid);
}

}
