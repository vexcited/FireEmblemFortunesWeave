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

Result ShowShopApplicationInformation();
Result ShowShopApplicationInformation(const account::UserHandle& user);
Result ShowShopApplicationInformation(ApplicationId applicationId);
Result ShowShopApplicationInformation(ApplicationId applicationId,
  const account::UserHandle& user);
Result ShowShopApplicationInformationForUpgrade(UpgradeEdition edition);
Result ShowShopApplicationInformationForUpgrade(UpgradeEdition edition,
  const account::UserHandle& user);
Result ShowShopApplicationInformationForUpgrade(ApplicationId applicationId,
  UpgradeEdition edition);
Result ShowShopApplicationInformationForUpgrade(ApplicationId applicationId,
  UpgradeEdition edition, const account::UserHandle& user);
Result ShowShopAddOnContentList();
Result ShowShopAddOnContentList(const account::UserHandle& user);
Result ShowShopAddOnContentList(ApplicationId applicationId);
Result ShowShopAddOnContentList(ApplicationId applicationId,
  const account::UserHandle& user);
Result ShowShopSubscriptionList();
Result ShowShopSubscriptionList(const account::UserHandle& user);
Result ShowShopSubscriptionList(ApplicationId applicationId);
Result ShowShopSubscriptionList(ApplicationId applicationId,
  const account::UserHandle& user);
Result ShowShopSubscriptionList(const CourseId& courseId);
Result ShowShopSubscriptionList(const CourseId& courseId,
  const account::UserHandle& user);
Result ShowShopSubscriptionList(ApplicationId applicationId,
  const CourseId& courseId);
Result ShowShopSubscriptionList(ApplicationId applicationId,
  const CourseId& courseId, const account::UserHandle& user);
Result ShowShopSubscriptionDetails(const CourseId& courseId, NsUid nsUid);
Result ShowShopSubscriptionDetails(const CourseId& courseId, NsUid nsUid,
  const account::UserHandle& user);
Result ShowShopSubscriptionDetails(ApplicationId applicationId,
  const CourseId& courseId, NsUid nsUid);
Result ShowShopSubscriptionDetails(ApplicationId applicationId,
  const CourseId& courseId, NsUid nsUid, const account::UserHandle& user);
Result ShowShopSubscriptionManagement();
Result ShowShopSubscriptionManagement(const account::UserHandle& user);
Result ShowShopSubscriptionManagement(const CourseId* courseIds, int count);
Result ShowShopSubscriptionManagement(const CourseId* courseIds, int count,
  const account::UserHandle& user);
Result ShowShopConsumableItemList();
Result ShowShopConsumableItemList(const account::UserHandle& user);
Result ShowShopConsumableItemList(ApplicationId applicationId);
Result ShowShopConsumableItemList(ApplicationId applicationId,
  const account::UserHandle& user);
Result ShowShopConsumableItemDetail(const ConsumableId& consumableId,
  NsUid nsUid);
Result ShowShopConsumableItemDetail(const ConsumableId& consumableId,
  NsUid nsUid, const account::UserHandle& user);
Result ShowShopConsumableItemDetail(ApplicationId applicationId,
  const ConsumableId& consumableId, NsUid nsUid);
Result ShowShopConsumableItemDetail(ApplicationId applicationId,
  const ConsumableId& consumableId, NsUid nsUid,
  const account::UserHandle& user);
Result ShowShopProductList(const NsUid* nsUids, int count,
  const char* message);
Result ShowShopProductList(const NsUid* nsUids, int count,
  const char* message, const account::UserHandle& user);
Result ShowShopEnterCodeScene();
Result ShowShopEnterCodeScene(const account::UserHandle& user);
Result ShowShopProductDetails(NsUid nsUid);
Result ShowShopProductDetails(NsUid nsUid, const account::UserHandle& user);
Result ShowShopInformationWithParams(char* buffer, size_t size,
  const char* signature, const char* format, ...);
Result ShowShopInformationWithParams(char* buffer, size_t size,
  const char* signature, const account::UserHandle& user,
  const char* format, ...);

Result LaunchEShop(const account::Uid& uid, SourceId sourceId);
Result ShowShopApplicationInformationForMenu(ApplicationId applicationId,
  const account::Uid& uid, SourceId sourceId);
Result ShowShopApplicationInformationForMenu(ApplicationId applicationId,
  const account::Uid& uid, const AdditionalParam& param, SourceId sourceId);
Result ShowShopApplicationInformationForMenu(ApplicationId applicationId,
  const account::Uid& uid, Span<const AdditionalParam> params,
  SourceId sourceId);
Result ShowShopApplicationInformationForMenu(NsUid nsUid,
  const account::Uid& uid, SourceId sourceId);
Result ShowShopApplicationInformationForMenu(ApplicationId applicationId,
  const account::Uid& uid, SourceId sourceId, const char* parameter);
Result ShowShopApplicationInformationForMenu(NsUid nsUid,
  const account::Uid& uid, SourceId sourceId, const char* parameter);
Result ShowShopApplicationInformationForUpgradeForMenu(
  ApplicationId applicationId, const account::Uid& uid,
  UpgradeEdition edition, const AdditionalParam& param, SourceId sourceId);
Result ShowShopApplicationInformationForUpgradeForMenu(
  ApplicationId applicationId, const account::Uid& uid,
  UpgradeEdition edition, Span<const AdditionalParam> params,
  SourceId sourceId);
Result ShowShopAddOnContentListForMenu(ApplicationId applicationId,
  const account::Uid& uid, SourceId sourceId);
Result ShowShopAddOnContentDetailsForMenu(NsUid nsUid,
  const account::Uid& uid, SourceId sourceId);
Result ShowShopConsumableItemListForMenu(ApplicationId applicationId,
  const account::Uid& uid, SourceId sourceId, bool isApplicationMode);
Result ShowShopConsumableItemDetailsForMenu(ApplicationId applicationId,
  const ConsumableId& consumableId, NsUid nsUid, const account::Uid& uid,
  SourceId sourceId, bool isApplicationMode);
Result ShowShopCouponForMenu(CouponId couponId, const account::Uid& uid,
  SourceId sourceId);
Result ShowShopInformationWithParams(const char* path,
  const account::Uid& uid, SourceId sourceId);
Result ShowShopSettingsForMenu(const account::Uid& uid, SourceId sourceId);
Result ShowShopMembershipServiceInformation(const account::Uid& uid,
  SourceId sourceId);
Result ShowShopMembershipServiceInformation(const account::Uid& uid,
  ApplicationId applicationId, MembershipServiceGuidedReason reason,
  SourceId sourceId);
Result ShowShopMembershipServiceInformationForMenu(const account::Uid& uid,
  ApplicationId applicationId, MembershipServiceGuidedReason reason,
  SourceId sourceId);
Result ShowShopMembershipServiceContractInformationForMenu(
  const account::Uid& uid, SourceId sourceId);
Result GetShopResultFromStorage(const applet::StorageHandle& storage);
Result ShowShopApplicationInformationForApplet(
  ncm::ApplicationId applicationId);
Result ShowShopPreinstallInformationForMenu(const account::Uid& uid,
  SourceId sourceId);
Result ShowShopRedownloadListForMenu(const account::Uid& uid,
  SourceId sourceId);
Result ShowShopDigitalBundleInformationForMenu(const account::Uid& uid,
  SourceId sourceId);

namespace detail {

enum LaunchMode : int32_t {
  LaunchMode_Application,
  LaunchMode_Menu,
};

using OptionalApplicationId = util::optional<ApplicationId>;

bool IsStringTerminated(const char* string, size_t size);
bool VerifySignature(const char* format, const char* signature);

Result ShowShopApplicationInformationImpl(LaunchMode mode,
  OptionalApplicationId applicationId, const account::Uid& uid,
  Span<const AdditionalParam> params, SourceId sourceId,
  const char* parameter);
Result ShowShopApplicationInformationImpl(LaunchMode mode, NsUid nsUid,
  const account::Uid& uid, SourceId sourceId, const char* parameter);
Result ShowShopApplicationInformationForUpgradeImpl(LaunchMode mode,
  OptionalApplicationId applicationId, const account::Uid& uid,
  UpgradeEdition edition, Span<const AdditionalParam> params,
  SourceId sourceId, const char* parameter);
Result ShowShopAddOnContentListImpl(LaunchMode mode,
  OptionalApplicationId applicationId, const account::Uid& uid,
  SourceId sourceId);
Result ShowShopAddOnContentDetailsImpl(LaunchMode mode, NsUid nsUid,
  const account::Uid& uid, SourceId sourceId);
Result ShowShopSubscriptionListImpl(LaunchMode mode,
  OptionalApplicationId applicationId, const account::Uid& uid,
  SourceId sourceId);
Result ShowShopSubscriptionListDetailImpl(LaunchMode mode,
  OptionalApplicationId applicationId, const CourseId& courseId,
  const account::Uid& uid, SourceId sourceId);
Result ShowShopSubscriptionDetailsImpl(LaunchMode mode,
  OptionalApplicationId applicationId, const CourseId& courseId,
  NsUid nsUid, const account::Uid& uid, SourceId sourceId);
Result ShowShopSubscriptionManagementImpl(LaunchMode mode,
  OptionalApplicationId applicationId, const CourseId* courseIds, int count,
  const account::Uid& uid, SourceId sourceId);
Result ShowShopConsumableItemListImpl(LaunchMode mode,
  OptionalApplicationId applicationId, const account::Uid& uid,
  SourceId sourceId);
Result ShowShopConsumableItemDetailImpl(LaunchMode mode,
  OptionalApplicationId applicationId, const ConsumableId& consumableId,
  NsUid nsUid, const account::Uid& uid, SourceId sourceId);
Result ShowShopProductListImpl(LaunchMode mode, const NsUid* nsUids,
  int count, const char* message, const account::Uid& uid,
  SourceId sourceId);
Result ShowShopEnterCodeSceneImpl(LaunchMode mode, const account::Uid& uid,
  SourceId sourceId);
Result ShowShopProductDetailsImpl(LaunchMode mode, NsUid nsUid,
  const account::Uid& uid, SourceId sourceId);
Result ShowShopInformationWithParamsImpl(LaunchMode mode, const char* path,
  const account::Uid& uid, SourceId sourceId);
Result LaunchEShopImpl(LaunchMode mode, const account::Uid& uid,
  SourceId sourceId);
Result ShowShopCouponImpl(LaunchMode mode, CouponId couponId,
  const account::Uid& uid, SourceId sourceId);
Result ShowShopSettingsImpl(LaunchMode mode, const account::Uid& uid,
  SourceId sourceId);
Result ShowShopMembershipServiceInformationImpl(LaunchMode mode,
  const account::Uid& uid, OptionalApplicationId applicationId,
  util::optional<MembershipServiceGuidedReason> reason, SourceId sourceId);
Result ShowShopMembershipServiceContractInformationImpl(LaunchMode mode,
  const account::Uid& uid, SourceId sourceId);
Result GetShopResultFromStorageImpl(const applet::StorageHandle& storage);
Result ShowShopPreinstallInformationImpl(LaunchMode mode,
  const account::Uid& uid, SourceId sourceId);
Result ShowShopRedownloadListImpl(LaunchMode mode, const account::Uid& uid,
  SourceId sourceId);
Result ShowShopDigitalBundleInformationImpl(LaunchMode mode,
  const account::Uid& uid, SourceId sourceId);

}

}
