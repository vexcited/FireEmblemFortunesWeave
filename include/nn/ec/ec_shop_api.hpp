#pragma once

#include <stddef.h>
#include <stdint.h>

#include "nn/account/account_types.hpp"
#include "nn/applet/applet_types.hpp"
#include "nn/ncm/ncm_ids.hpp"
#include "nn/result.hpp"
#include "nn/span.hpp"
#include "nn/util/optional.hpp"

namespace nn::account {

struct UserHandle;

Result GetUserId(Uid* pOutUid, const UserHandle& handle);

}

namespace nn::ec {

struct NsUid {
  uint64_t value;
};

struct CouponId {
  uint64_t value;
};

struct SourceId {
  uint64_t value;
};

struct CourseId {
  char value[17];
};

struct ConsumableId {
  char value[17];
};

struct AdditionalParam;

enum UpgradeEdition : int32_t {};
enum MembershipServiceGuidedReason : int32_t {};

const int SubscriptionCourseCountMax = 16;
const int ProductCountMax = 30;
const int ProductListMessageLengthMax = 140;

void ShowShopApplicationInformation();
void ShowShopApplicationInformation(const account::UserHandle& user);
void ShowShopApplicationInformation(ApplicationId applicationId);
void ShowShopApplicationInformation(ApplicationId applicationId,
  const account::UserHandle& user);
void ShowShopApplicationInformationForUpgrade(UpgradeEdition edition);
void ShowShopApplicationInformationForUpgrade(UpgradeEdition edition,
  const account::UserHandle& user);
void ShowShopApplicationInformationForUpgrade(ApplicationId applicationId,
  UpgradeEdition edition);
void ShowShopApplicationInformationForUpgrade(ApplicationId applicationId,
  UpgradeEdition edition, const account::UserHandle& user);
void ShowShopAddOnContentList();
void ShowShopAddOnContentList(const account::UserHandle& user);
void ShowShopAddOnContentList(ApplicationId applicationId);
void ShowShopAddOnContentList(ApplicationId applicationId,
  const account::UserHandle& user);
void ShowShopSubscriptionList();
void ShowShopSubscriptionList(const account::UserHandle& user);
void ShowShopSubscriptionList(ApplicationId applicationId);
void ShowShopSubscriptionList(ApplicationId applicationId,
  const account::UserHandle& user);
void ShowShopSubscriptionList(const CourseId& courseId);
void ShowShopSubscriptionList(const CourseId& courseId,
  const account::UserHandle& user);
void ShowShopSubscriptionList(ApplicationId applicationId,
  const CourseId& courseId);
void ShowShopSubscriptionList(ApplicationId applicationId,
  const CourseId& courseId, const account::UserHandle& user);
void ShowShopSubscriptionDetails(const CourseId& courseId, NsUid nsUid);
void ShowShopSubscriptionDetails(const CourseId& courseId, NsUid nsUid,
  const account::UserHandle& user);
void ShowShopSubscriptionDetails(ApplicationId applicationId,
  const CourseId& courseId, NsUid nsUid);
void ShowShopSubscriptionDetails(ApplicationId applicationId,
  const CourseId& courseId, NsUid nsUid, const account::UserHandle& user);
void ShowShopSubscriptionManagement();
void ShowShopSubscriptionManagement(const account::UserHandle& user);
void ShowShopSubscriptionManagement(const CourseId* courseIds, int count);
void ShowShopSubscriptionManagement(const CourseId* courseIds, int count,
  const account::UserHandle& user);
void ShowShopConsumableItemList();
void ShowShopConsumableItemList(const account::UserHandle& user);
void ShowShopConsumableItemList(ApplicationId applicationId);
void ShowShopConsumableItemList(ApplicationId applicationId,
  const account::UserHandle& user);
void ShowShopConsumableItemDetail(const ConsumableId& consumableId,
  NsUid nsUid);
void ShowShopConsumableItemDetail(const ConsumableId& consumableId,
  NsUid nsUid, const account::UserHandle& user);
void ShowShopConsumableItemDetail(ApplicationId applicationId,
  const ConsumableId& consumableId, NsUid nsUid);
void ShowShopConsumableItemDetail(ApplicationId applicationId,
  const ConsumableId& consumableId, NsUid nsUid,
  const account::UserHandle& user);
void ShowShopProductList(const NsUid* nsUids, int count,
  const char* message);
void ShowShopProductList(const NsUid* nsUids, int count,
  const char* message, const account::UserHandle& user);
void ShowShopEnterCodeScene();
void ShowShopEnterCodeScene(const account::UserHandle& user);
void ShowShopProductDetails(NsUid nsUid);
void ShowShopProductDetails(NsUid nsUid, const account::UserHandle& user);
void ShowShopInformationWithParams(char* buffer, size_t size,
  const char* signature, const char* format, ...);
void ShowShopInformationWithParams(char* buffer, size_t size,
  const char* signature, const account::UserHandle& user,
  const char* format, ...);

Result LaunchEShop(const account::Uid& uid, SourceId sourceId);
void ShowShopApplicationInformationForMenu(ApplicationId applicationId,
  const account::Uid& uid, SourceId sourceId);
void ShowShopApplicationInformationForMenu(ApplicationId applicationId,
  const account::Uid& uid, const AdditionalParam& param, SourceId sourceId);
void ShowShopApplicationInformationForMenu(ApplicationId applicationId,
  const account::Uid& uid, Span<const AdditionalParam> params,
  SourceId sourceId);
void ShowShopApplicationInformationForMenu(NsUid nsUid,
  const account::Uid& uid, SourceId sourceId);
void ShowShopApplicationInformationForMenu(ApplicationId applicationId,
  const account::Uid& uid, SourceId sourceId, const char* parameter);
void ShowShopApplicationInformationForMenu(NsUid nsUid,
  const account::Uid& uid, SourceId sourceId, const char* parameter);
void ShowShopApplicationInformationForUpgradeForMenu(
  ApplicationId applicationId, const account::Uid& uid,
  UpgradeEdition edition, const AdditionalParam& param, SourceId sourceId);
void ShowShopApplicationInformationForUpgradeForMenu(
  ApplicationId applicationId, const account::Uid& uid,
  UpgradeEdition edition, Span<const AdditionalParam> params,
  SourceId sourceId);
void ShowShopAddOnContentListForMenu(ApplicationId applicationId,
  const account::Uid& uid, SourceId sourceId);
void ShowShopAddOnContentDetailsForMenu(NsUid nsUid,
  const account::Uid& uid, SourceId sourceId);
void ShowShopConsumableItemListForMenu(ApplicationId applicationId,
  const account::Uid& uid, SourceId sourceId, bool isApplicationMode);
void ShowShopConsumableItemDetailsForMenu(ApplicationId applicationId,
  const ConsumableId& consumableId, NsUid nsUid, const account::Uid& uid,
  SourceId sourceId, bool isApplicationMode);
void ShowShopCouponForMenu(CouponId couponId, const account::Uid& uid,
  SourceId sourceId);
void ShowShopInformationWithParams(const char* path,
  const account::Uid& uid, SourceId sourceId);
void ShowShopSettingsForMenu(const account::Uid& uid, SourceId sourceId);
void ShowShopMembershipServiceInformation(const account::Uid& uid,
  SourceId sourceId);
void ShowShopMembershipServiceInformation(const account::Uid& uid,
  ApplicationId applicationId, MembershipServiceGuidedReason reason,
  SourceId sourceId);
void ShowShopMembershipServiceInformationForMenu(const account::Uid& uid,
  ApplicationId applicationId, MembershipServiceGuidedReason reason,
  SourceId sourceId);
void ShowShopMembershipServiceContractInformationForMenu(
  const account::Uid& uid, SourceId sourceId);
Result GetShopResultFromStorage(const applet::StorageHandle& storage);
void ShowShopApplicationInformationForApplet(
  ncm::ApplicationId applicationId);
void ShowShopPreinstallInformationForMenu(const account::Uid& uid,
  SourceId sourceId);
void ShowShopRedownloadListForMenu(const account::Uid& uid,
  SourceId sourceId);
void ShowShopDigitalBundleInformationForMenu(const account::Uid& uid,
  SourceId sourceId);

namespace detail {

enum LaunchMode : int32_t {
  LaunchMode_Application,
  LaunchMode_Menu,
};

using OptionalApplicationId = util::optional<ApplicationId>;

bool IsStringTerminated(const char* string, size_t size);
bool VerifySignature(const char* format, const char* signature);

void ShowShopApplicationInformationImpl(LaunchMode mode,
  OptionalApplicationId applicationId, const account::Uid& uid,
  Span<const AdditionalParam> params, SourceId sourceId,
  const char* parameter);
void ShowShopApplicationInformationImpl(LaunchMode mode, NsUid nsUid,
  const account::Uid& uid, SourceId sourceId, const char* parameter);
void ShowShopApplicationInformationForUpgradeImpl(LaunchMode mode,
  OptionalApplicationId applicationId, const account::Uid& uid,
  UpgradeEdition edition, Span<const AdditionalParam> params,
  SourceId sourceId, const char* parameter);
void ShowShopAddOnContentListImpl(LaunchMode mode,
  OptionalApplicationId applicationId, const account::Uid& uid,
  SourceId sourceId);
void ShowShopAddOnContentDetailsImpl(LaunchMode mode, NsUid nsUid,
  const account::Uid& uid, SourceId sourceId);
void ShowShopSubscriptionListImpl(LaunchMode mode,
  OptionalApplicationId applicationId, const account::Uid& uid,
  SourceId sourceId);
void ShowShopSubscriptionListDetailImpl(LaunchMode mode,
  OptionalApplicationId applicationId, const CourseId& courseId,
  const account::Uid& uid, SourceId sourceId);
void ShowShopSubscriptionDetailsImpl(LaunchMode mode,
  OptionalApplicationId applicationId, const CourseId& courseId,
  NsUid nsUid, const account::Uid& uid, SourceId sourceId);
void ShowShopSubscriptionManagementImpl(LaunchMode mode,
  OptionalApplicationId applicationId, const CourseId* courseIds, int count,
  const account::Uid& uid, SourceId sourceId);
void ShowShopConsumableItemListImpl(LaunchMode mode,
  OptionalApplicationId applicationId, const account::Uid& uid,
  SourceId sourceId);
void ShowShopConsumableItemDetailImpl(LaunchMode mode,
  OptionalApplicationId applicationId, const ConsumableId& consumableId,
  NsUid nsUid, const account::Uid& uid, SourceId sourceId);
void ShowShopProductListImpl(LaunchMode mode, const NsUid* nsUids,
  int count, const char* message, const account::Uid& uid,
  SourceId sourceId);
void ShowShopEnterCodeSceneImpl(LaunchMode mode, const account::Uid& uid,
  SourceId sourceId);
void ShowShopProductDetailsImpl(LaunchMode mode, NsUid nsUid,
  const account::Uid& uid, SourceId sourceId);
void ShowShopInformationWithParamsImpl(LaunchMode mode, const char* path,
  const account::Uid& uid, SourceId sourceId);
Result LaunchEShopImpl(LaunchMode mode, const account::Uid& uid,
  SourceId sourceId);
void ShowShopCouponImpl(LaunchMode mode, CouponId couponId,
  const account::Uid& uid, SourceId sourceId);
void ShowShopSettingsImpl(LaunchMode mode, const account::Uid& uid,
  SourceId sourceId);
void ShowShopMembershipServiceInformationImpl(LaunchMode mode,
  const account::Uid& uid, OptionalApplicationId applicationId,
  util::optional<MembershipServiceGuidedReason> reason, SourceId sourceId);
void ShowShopMembershipServiceContractInformationImpl(LaunchMode mode,
  const account::Uid& uid, SourceId sourceId);
Result GetShopResultFromStorageImpl(const applet::StorageHandle& storage);
void ShowShopPreinstallInformationImpl(LaunchMode mode,
  const account::Uid& uid, SourceId sourceId);
void ShowShopRedownloadListImpl(LaunchMode mode, const account::Uid& uid,
  SourceId sourceId);
void ShowShopDigitalBundleInformationImpl(LaunchMode mode,
  const account::Uid& uid, SourceId sourceId);

}

}
