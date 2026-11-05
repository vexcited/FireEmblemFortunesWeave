#include "nn/ec/ec_shop_api.hpp"

#include <stdarg.h>
#include <string.h>

#include "nn/diag/diag_abort.hpp"

namespace nn::util {

int GetCodePointCountOfUtf8String(const char* string, size_t size);
int VSNPrintf(char* buffer, size_t size, const char* format, va_list args);

}

namespace nn::ec {

using namespace detail;

namespace {

const account::Uid InvalidUid = {};
const SourceId DefaultSourceId = {0};

account::Uid GetUid(const account::UserHandle& user) {
  account::Uid uid = InvalidUid;
  if (account::GetUserId(&uid, user).IsFailure()) {
    uid = InvalidUid;
  }

  return uid;
}

// The identifiers are copied without their last character, which is always
// the terminator.
template <typename T>
T CopyId(const T& id) {
  T copy = {};
  memcpy(copy.value, id.value, sizeof(copy.value) - 1);
  return copy;
}

int ClampCourseCount(const CourseId* courseIds, int count) {
  const int clamped = count < SubscriptionCourseCountMax ? count
    : SubscriptionCourseCountMax;
  for (const CourseId* id = courseIds; id != courseIds + clamped; id++) {
    NN_ABORT_UNLESS(IsStringTerminated(id->value, sizeof(id->value)));
  }

  return clamped;
}

const char* GetValidMessage(const char* message) {
  if (message == nullptr) {
    return nullptr;
  }

  const int length = util::GetCodePointCountOfUtf8String(message,
    strlen(message));
  if (length > ProductListMessageLengthMax || length == -1) {
    return nullptr;
  }

  return message;
}

int ClampProductCount(int count) {
  return count < ProductCountMax ? count : ProductCountMax;
}

}

Result ShowShopApplicationInformation() {
  return ShowShopApplicationInformationImpl(LaunchMode_Application,
    OptionalApplicationId(), InvalidUid, {}, DefaultSourceId, nullptr);
}

Result ShowShopApplicationInformation(const account::UserHandle& user) {
  const account::Uid uid = GetUid(user);
  return ShowShopApplicationInformationImpl(LaunchMode_Application,
    OptionalApplicationId(), uid, {}, DefaultSourceId, nullptr);
}

Result ShowShopApplicationInformation(ApplicationId applicationId) {
  return ShowShopApplicationInformationImpl(LaunchMode_Application,
    applicationId, InvalidUid, {}, DefaultSourceId, nullptr);
}

Result ShowShopApplicationInformation(ApplicationId applicationId,
  const account::UserHandle& user) {
  const account::Uid uid = GetUid(user);
  return ShowShopApplicationInformationImpl(LaunchMode_Application,
    applicationId, uid, {}, DefaultSourceId, nullptr);
}

Result ShowShopApplicationInformationForUpgrade(UpgradeEdition edition) {
  return ShowShopApplicationInformationForUpgradeImpl(LaunchMode_Application,
    OptionalApplicationId(), InvalidUid, edition, {}, DefaultSourceId,
    nullptr);
}

Result ShowShopApplicationInformationForUpgrade(UpgradeEdition edition,
  const account::UserHandle& user) {
  const account::Uid uid = GetUid(user);
  return ShowShopApplicationInformationForUpgradeImpl(LaunchMode_Application,
    OptionalApplicationId(), uid, edition, {}, DefaultSourceId, nullptr);
}

Result ShowShopApplicationInformationForUpgrade(ApplicationId applicationId,
  UpgradeEdition edition) {
  return ShowShopApplicationInformationForUpgradeImpl(LaunchMode_Application,
    applicationId, InvalidUid, edition, {}, DefaultSourceId, nullptr);
}

Result ShowShopApplicationInformationForUpgrade(ApplicationId applicationId,
  UpgradeEdition edition, const account::UserHandle& user) {
  const account::Uid uid = GetUid(user);
  return ShowShopApplicationInformationForUpgradeImpl(LaunchMode_Application,
    applicationId, uid, edition, {}, DefaultSourceId, nullptr);
}

Result ShowShopAddOnContentList() {
  return ShowShopAddOnContentListImpl(LaunchMode_Application,
    OptionalApplicationId(), InvalidUid, DefaultSourceId);
}

Result ShowShopAddOnContentList(const account::UserHandle& user) {
  const account::Uid uid = GetUid(user);
  return ShowShopAddOnContentListImpl(LaunchMode_Application,
    OptionalApplicationId(), uid, DefaultSourceId);
}

Result ShowShopAddOnContentList(ApplicationId applicationId) {
  return ShowShopAddOnContentListImpl(LaunchMode_Application, applicationId,
    InvalidUid, DefaultSourceId);
}

Result ShowShopAddOnContentList(ApplicationId applicationId,
  const account::UserHandle& user) {
  const account::Uid uid = GetUid(user);
  return ShowShopAddOnContentListImpl(LaunchMode_Application, applicationId,
    uid, DefaultSourceId);
}

Result ShowShopSubscriptionList() {
  return ShowShopSubscriptionListImpl(LaunchMode_Application,
    OptionalApplicationId(), InvalidUid, DefaultSourceId);
}

Result ShowShopSubscriptionList(const account::UserHandle& user) {
  const account::Uid uid = GetUid(user);
  return ShowShopSubscriptionListImpl(LaunchMode_Application,
    OptionalApplicationId(), uid, DefaultSourceId);
}

Result ShowShopSubscriptionList(ApplicationId applicationId) {
  return ShowShopSubscriptionListImpl(LaunchMode_Application, applicationId,
    InvalidUid, DefaultSourceId);
}

Result ShowShopSubscriptionList(ApplicationId applicationId,
  const account::UserHandle& user) {
  const account::Uid uid = GetUid(user);
  return ShowShopSubscriptionListImpl(LaunchMode_Application, applicationId,
    uid, DefaultSourceId);
}

Result ShowShopSubscriptionList(const CourseId& courseId) {
  const CourseId id = CopyId(courseId);
  return ShowShopSubscriptionListDetailImpl(LaunchMode_Application,
    OptionalApplicationId(), id, InvalidUid, DefaultSourceId);
}

Result ShowShopSubscriptionList(const CourseId& courseId,
  const account::UserHandle& user) {
  const CourseId id = CopyId(courseId);
  const account::Uid uid = GetUid(user);
  return ShowShopSubscriptionListDetailImpl(LaunchMode_Application,
    OptionalApplicationId(), id, uid, DefaultSourceId);
}

Result ShowShopSubscriptionList(ApplicationId applicationId,
  const CourseId& courseId) {
  const CourseId id = CopyId(courseId);
  return ShowShopSubscriptionListDetailImpl(LaunchMode_Application,
    applicationId, id, InvalidUid, DefaultSourceId);
}

Result ShowShopSubscriptionList(ApplicationId applicationId,
  const CourseId& courseId, const account::UserHandle& user) {
  const CourseId id = CopyId(courseId);
  const account::Uid uid = GetUid(user);
  return ShowShopSubscriptionListDetailImpl(LaunchMode_Application,
    applicationId, id, uid, DefaultSourceId);
}

Result ShowShopSubscriptionDetails(const CourseId& courseId, NsUid nsUid) {
  const CourseId id = CopyId(courseId);
  return ShowShopSubscriptionDetailsImpl(LaunchMode_Application,
    OptionalApplicationId(), id, nsUid, InvalidUid, DefaultSourceId);
}

Result ShowShopSubscriptionDetails(const CourseId& courseId, NsUid nsUid,
  const account::UserHandle& user) {
  const CourseId id = CopyId(courseId);
  const account::Uid uid = GetUid(user);
  return ShowShopSubscriptionDetailsImpl(LaunchMode_Application,
    OptionalApplicationId(), id, nsUid, uid, DefaultSourceId);
}

Result ShowShopSubscriptionDetails(ApplicationId applicationId,
  const CourseId& courseId, NsUid nsUid) {
  const CourseId id = CopyId(courseId);
  return ShowShopSubscriptionDetailsImpl(LaunchMode_Application,
    applicationId, id, nsUid, InvalidUid, DefaultSourceId);
}

Result ShowShopSubscriptionDetails(ApplicationId applicationId,
  const CourseId& courseId, NsUid nsUid, const account::UserHandle& user) {
  const CourseId id = CopyId(courseId);
  const account::Uid uid = GetUid(user);
  return ShowShopSubscriptionDetailsImpl(LaunchMode_Application,
    applicationId, id, nsUid, uid, DefaultSourceId);
}

Result ShowShopSubscriptionManagement() {
  return ShowShopSubscriptionManagementImpl(LaunchMode_Application,
    OptionalApplicationId(), nullptr, 0, InvalidUid, DefaultSourceId);
}

Result ShowShopSubscriptionManagement(const account::UserHandle& user) {
  const account::Uid uid = GetUid(user);
  return ShowShopSubscriptionManagementImpl(LaunchMode_Application,
    OptionalApplicationId(), nullptr, 0, uid, DefaultSourceId);
}

Result ShowShopSubscriptionManagement(const CourseId* courseIds, int count) {
  const int clamped = ClampCourseCount(courseIds, count);
  return ShowShopSubscriptionManagementImpl(LaunchMode_Application,
    OptionalApplicationId(), courseIds, clamped, InvalidUid,
    DefaultSourceId);
}

Result ShowShopSubscriptionManagement(const CourseId* courseIds, int count,
  const account::UserHandle& user) {
  const int clamped = ClampCourseCount(courseIds, count);
  const account::Uid uid = GetUid(user);
  return ShowShopSubscriptionManagementImpl(LaunchMode_Application,
    OptionalApplicationId(), courseIds, clamped, uid, DefaultSourceId);
}

Result ShowShopConsumableItemList() {
  return ShowShopConsumableItemListImpl(LaunchMode_Application,
    OptionalApplicationId(), InvalidUid, DefaultSourceId);
}

Result ShowShopConsumableItemList(const account::UserHandle& user) {
  const account::Uid uid = GetUid(user);
  return ShowShopConsumableItemListImpl(LaunchMode_Application,
    OptionalApplicationId(), uid, DefaultSourceId);
}

Result ShowShopConsumableItemList(ApplicationId applicationId) {
  return ShowShopConsumableItemListImpl(LaunchMode_Application, applicationId,
    InvalidUid, DefaultSourceId);
}

Result ShowShopConsumableItemList(ApplicationId applicationId,
  const account::UserHandle& user) {
  const account::Uid uid = GetUid(user);
  return ShowShopConsumableItemListImpl(LaunchMode_Application, applicationId,
    uid, DefaultSourceId);
}

Result ShowShopConsumableItemDetail(const ConsumableId& consumableId,
  NsUid nsUid) {
  const ConsumableId id = CopyId(consumableId);
  return ShowShopConsumableItemDetailImpl(LaunchMode_Application,
    OptionalApplicationId(), id, nsUid, InvalidUid, DefaultSourceId);
}

Result ShowShopConsumableItemDetail(const ConsumableId& consumableId,
  NsUid nsUid, const account::UserHandle& user) {
  const ConsumableId id = CopyId(consumableId);
  const account::Uid uid = GetUid(user);
  return ShowShopConsumableItemDetailImpl(LaunchMode_Application,
    OptionalApplicationId(), id, nsUid, uid, DefaultSourceId);
}

Result ShowShopConsumableItemDetail(ApplicationId applicationId,
  const ConsumableId& consumableId, NsUid nsUid) {
  const ConsumableId id = CopyId(consumableId);
  return ShowShopConsumableItemDetailImpl(LaunchMode_Application,
    applicationId, id, nsUid, InvalidUid, DefaultSourceId);
}

Result ShowShopConsumableItemDetail(ApplicationId applicationId,
  const ConsumableId& consumableId, NsUid nsUid,
  const account::UserHandle& user) {
  const ConsumableId id = CopyId(consumableId);
  const account::Uid uid = GetUid(user);
  return ShowShopConsumableItemDetailImpl(LaunchMode_Application,
    applicationId, id, nsUid, uid, DefaultSourceId);
}

Result ShowShopProductList(const NsUid* nsUids, int count,
  const char* message) {
  const char* validMessage = GetValidMessage(message);
  return ShowShopProductListImpl(LaunchMode_Application, nsUids,
    ClampProductCount(count), validMessage, InvalidUid, DefaultSourceId);
}

Result ShowShopProductList(const NsUid* nsUids, int count,
  const char* message, const account::UserHandle& user) {
  const char* validMessage = GetValidMessage(message);
  const account::Uid uid = GetUid(user);
  return ShowShopProductListImpl(LaunchMode_Application, nsUids,
    ClampProductCount(count), validMessage, uid, DefaultSourceId);
}

Result ShowShopEnterCodeScene() {
  return ShowShopEnterCodeSceneImpl(LaunchMode_Application, InvalidUid,
    DefaultSourceId);
}

Result ShowShopEnterCodeScene(const account::UserHandle& user) {
  const account::Uid uid = GetUid(user);
  return ShowShopEnterCodeSceneImpl(LaunchMode_Application, uid,
    DefaultSourceId);
}

Result ShowShopProductDetails(NsUid nsUid) {
  return ShowShopProductDetailsImpl(LaunchMode_Application, nsUid, InvalidUid,
    DefaultSourceId);
}

Result ShowShopProductDetails(NsUid nsUid, const account::UserHandle& user) {
  const account::Uid uid = GetUid(user);
  return ShowShopProductDetailsImpl(LaunchMode_Application, nsUid, uid,
    DefaultSourceId);
}

Result ShowShopInformationWithParams(char* buffer, size_t size,
  const char* signature, const char* format, ...) {
  NN_ABORT_UNLESS(VerifySignature(format, signature));

  va_list args;
  va_start(args, format);
  const int length = util::VSNPrintf(buffer, size, format, args);
  va_end(args);
  NN_ABORT_UNLESS(static_cast<size_t>(length) < size);

  return ShowShopInformationWithParamsImpl(LaunchMode_Application, buffer,
    InvalidUid, DefaultSourceId);
}

Result ShowShopInformationWithParams(char* buffer, size_t size,
  const char* signature, const account::UserHandle& user,
  const char* format, ...) {
  NN_ABORT_UNLESS(VerifySignature(format, signature));
  const account::Uid uid = GetUid(user);

  va_list args;
  va_start(args, format);
  const int length = util::VSNPrintf(buffer, size, format, args);
  va_end(args);
  NN_ABORT_UNLESS(static_cast<size_t>(length) < size);

  return ShowShopInformationWithParamsImpl(LaunchMode_Application, buffer,
    uid, DefaultSourceId);
}

Result LaunchEShop(const account::Uid& uid, SourceId sourceId) {
  return LaunchEShopImpl(LaunchMode_Menu, uid, sourceId);
}

Result ShowShopApplicationInformationForMenu(ApplicationId applicationId,
  const account::Uid& uid, SourceId sourceId) {
  return ShowShopApplicationInformationImpl(LaunchMode_Menu, applicationId,
    uid, {}, sourceId, nullptr);
}

Result ShowShopApplicationInformationForMenu(ApplicationId applicationId,
  const account::Uid& uid, const AdditionalParam& param, SourceId sourceId) {
  return ShowShopApplicationInformationImpl(LaunchMode_Menu, applicationId,
    uid, {&param, 1}, sourceId, nullptr);
}

Result ShowShopApplicationInformationForMenu(ApplicationId applicationId,
  const account::Uid& uid, Span<const AdditionalParam> params,
  SourceId sourceId) {
  return ShowShopApplicationInformationImpl(LaunchMode_Menu, applicationId,
    uid, params, sourceId, nullptr);
}

Result ShowShopApplicationInformationForMenu(NsUid nsUid,
  const account::Uid& uid, SourceId sourceId) {
  return ShowShopApplicationInformationImpl(LaunchMode_Menu, nsUid, uid,
    sourceId, nullptr);
}

Result ShowShopApplicationInformationForMenu(ApplicationId applicationId,
  const account::Uid& uid, SourceId sourceId, const char* parameter) {
  return ShowShopApplicationInformationImpl(LaunchMode_Menu, applicationId,
    uid, {}, sourceId, parameter);
}

Result ShowShopApplicationInformationForMenu(NsUid nsUid,
  const account::Uid& uid, SourceId sourceId, const char* parameter) {
  return ShowShopApplicationInformationImpl(LaunchMode_Menu, nsUid, uid,
    sourceId, parameter);
}

Result ShowShopApplicationInformationForUpgradeForMenu(
  ApplicationId applicationId, const account::Uid& uid,
  UpgradeEdition edition, const AdditionalParam& param, SourceId sourceId) {
  return ShowShopApplicationInformationForUpgradeImpl(LaunchMode_Menu,
    applicationId, uid, edition, {&param, 1}, sourceId, nullptr);
}

Result ShowShopApplicationInformationForUpgradeForMenu(
  ApplicationId applicationId, const account::Uid& uid,
  UpgradeEdition edition, Span<const AdditionalParam> params,
  SourceId sourceId) {
  return ShowShopApplicationInformationForUpgradeImpl(LaunchMode_Menu,
    applicationId, uid, edition, params, sourceId, nullptr);
}

Result ShowShopAddOnContentListForMenu(ApplicationId applicationId,
  const account::Uid& uid, SourceId sourceId) {
  return ShowShopAddOnContentListImpl(LaunchMode_Menu, applicationId, uid,
    sourceId);
}

Result ShowShopAddOnContentDetailsForMenu(NsUid nsUid,
  const account::Uid& uid, SourceId sourceId) {
  return ShowShopAddOnContentDetailsImpl(LaunchMode_Menu, nsUid, uid,
    sourceId);
}

Result ShowShopConsumableItemListForMenu(ApplicationId applicationId,
  const account::Uid& uid, SourceId sourceId, bool isApplicationMode) {
  return ShowShopConsumableItemListImpl(
    isApplicationMode ? LaunchMode_Application : LaunchMode_Menu,
    applicationId, uid, sourceId);
}

Result ShowShopConsumableItemDetailsForMenu(ApplicationId applicationId,
  const ConsumableId& consumableId, NsUid nsUid, const account::Uid& uid,
  SourceId sourceId, bool isApplicationMode) {
  return ShowShopConsumableItemDetailImpl(
    isApplicationMode ? LaunchMode_Application : LaunchMode_Menu,
    applicationId, consumableId, nsUid, uid, sourceId);
}

Result ShowShopCouponForMenu(CouponId couponId, const account::Uid& uid,
  SourceId sourceId) {
  return ShowShopCouponImpl(LaunchMode_Menu, couponId, uid, sourceId);
}

Result ShowShopInformationWithParams(const char* path,
  const account::Uid& uid, SourceId sourceId) {
  NN_ABORT_UNLESS(path != nullptr && path[0] != '\0');
  return ShowShopInformationWithParamsImpl(LaunchMode_Menu, path, uid,
    sourceId);
}

Result ShowShopSettingsForMenu(const account::Uid& uid, SourceId sourceId) {
  return ShowShopSettingsImpl(LaunchMode_Menu, uid, sourceId);
}

Result ShowShopMembershipServiceInformation(const account::Uid& uid,
  SourceId sourceId) {
  return ShowShopMembershipServiceInformationImpl(LaunchMode_Application, uid,
    OptionalApplicationId(), util::optional<MembershipServiceGuidedReason>(),
    sourceId);
}

Result ShowShopMembershipServiceInformation(const account::Uid& uid,
  ApplicationId applicationId, MembershipServiceGuidedReason reason,
  SourceId sourceId) {
  return ShowShopMembershipServiceInformationImpl(LaunchMode_Application, uid,
    applicationId.value != 0 ? OptionalApplicationId(applicationId)
      : OptionalApplicationId(),
    reason, sourceId);
}

Result ShowShopMembershipServiceInformationForMenu(const account::Uid& uid,
  ApplicationId applicationId, MembershipServiceGuidedReason reason,
  SourceId sourceId) {
  return ShowShopMembershipServiceInformationImpl(LaunchMode_Menu, uid,
    applicationId.value != 0 ? OptionalApplicationId(applicationId)
      : OptionalApplicationId(),
    reason, sourceId);
}

Result ShowShopMembershipServiceContractInformationForMenu(
  const account::Uid& uid, SourceId sourceId) {
  return ShowShopMembershipServiceContractInformationImpl(LaunchMode_Menu,
    uid, sourceId);
}

Result GetShopResultFromStorage(const applet::StorageHandle& storage) {
  return GetShopResultFromStorageImpl(storage);
}

Result ShowShopApplicationInformationForApplet(
  ncm::ApplicationId applicationId) {
  return ShowShopApplicationInformationImpl(LaunchMode_Application,
    ApplicationId{applicationId.value}, InvalidUid, {}, DefaultSourceId,
    nullptr);
}

Result ShowShopPreinstallInformationForMenu(const account::Uid& uid,
  SourceId sourceId) {
  return ShowShopPreinstallInformationImpl(LaunchMode_Menu, uid, sourceId);
}

Result ShowShopRedownloadListForMenu(const account::Uid& uid,
  SourceId sourceId) {
  return ShowShopRedownloadListImpl(LaunchMode_Menu, uid, sourceId);
}

Result ShowShopDigitalBundleInformationForMenu(const account::Uid& uid,
  SourceId sourceId) {
  return ShowShopDigitalBundleInformationImpl(LaunchMode_Menu, uid, sourceId);
}

}
