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

void ShowShopApplicationInformation() {
  ShowShopApplicationInformationImpl(LaunchMode_Application,
    OptionalApplicationId(), InvalidUid, {}, DefaultSourceId, nullptr);
}

void ShowShopApplicationInformation(const account::UserHandle& user) {
  const account::Uid uid = GetUid(user);
  ShowShopApplicationInformationImpl(LaunchMode_Application,
    OptionalApplicationId(), uid, {}, DefaultSourceId, nullptr);
}

void ShowShopApplicationInformation(ApplicationId applicationId) {
  ShowShopApplicationInformationImpl(LaunchMode_Application,
    applicationId, InvalidUid, {}, DefaultSourceId, nullptr);
}

void ShowShopApplicationInformation(ApplicationId applicationId,
  const account::UserHandle& user) {
  const account::Uid uid = GetUid(user);
  ShowShopApplicationInformationImpl(LaunchMode_Application,
    applicationId, uid, {}, DefaultSourceId, nullptr);
}

void ShowShopApplicationInformationForUpgrade(UpgradeEdition edition) {
  ShowShopApplicationInformationForUpgradeImpl(LaunchMode_Application,
    OptionalApplicationId(), InvalidUid, edition, {}, DefaultSourceId,
    nullptr);
}

void ShowShopApplicationInformationForUpgrade(UpgradeEdition edition,
  const account::UserHandle& user) {
  const account::Uid uid = GetUid(user);
  ShowShopApplicationInformationForUpgradeImpl(LaunchMode_Application,
    OptionalApplicationId(), uid, edition, {}, DefaultSourceId, nullptr);
}

void ShowShopApplicationInformationForUpgrade(ApplicationId applicationId,
  UpgradeEdition edition) {
  ShowShopApplicationInformationForUpgradeImpl(LaunchMode_Application,
    applicationId, InvalidUid, edition, {}, DefaultSourceId, nullptr);
}

void ShowShopApplicationInformationForUpgrade(ApplicationId applicationId,
  UpgradeEdition edition, const account::UserHandle& user) {
  const account::Uid uid = GetUid(user);
  ShowShopApplicationInformationForUpgradeImpl(LaunchMode_Application,
    applicationId, uid, edition, {}, DefaultSourceId, nullptr);
}

void ShowShopAddOnContentList() {
  ShowShopAddOnContentListImpl(LaunchMode_Application,
    OptionalApplicationId(), InvalidUid, DefaultSourceId);
}

void ShowShopAddOnContentList(const account::UserHandle& user) {
  const account::Uid uid = GetUid(user);
  ShowShopAddOnContentListImpl(LaunchMode_Application,
    OptionalApplicationId(), uid, DefaultSourceId);
}

void ShowShopAddOnContentList(ApplicationId applicationId) {
  ShowShopAddOnContentListImpl(LaunchMode_Application, applicationId,
    InvalidUid, DefaultSourceId);
}

void ShowShopAddOnContentList(ApplicationId applicationId,
  const account::UserHandle& user) {
  const account::Uid uid = GetUid(user);
  ShowShopAddOnContentListImpl(LaunchMode_Application, applicationId,
    uid, DefaultSourceId);
}

void ShowShopSubscriptionList() {
  ShowShopSubscriptionListImpl(LaunchMode_Application,
    OptionalApplicationId(), InvalidUid, DefaultSourceId);
}

void ShowShopSubscriptionList(const account::UserHandle& user) {
  const account::Uid uid = GetUid(user);
  ShowShopSubscriptionListImpl(LaunchMode_Application,
    OptionalApplicationId(), uid, DefaultSourceId);
}

void ShowShopSubscriptionList(ApplicationId applicationId) {
  ShowShopSubscriptionListImpl(LaunchMode_Application, applicationId,
    InvalidUid, DefaultSourceId);
}

void ShowShopSubscriptionList(ApplicationId applicationId,
  const account::UserHandle& user) {
  const account::Uid uid = GetUid(user);
  ShowShopSubscriptionListImpl(LaunchMode_Application, applicationId,
    uid, DefaultSourceId);
}

void ShowShopSubscriptionList(const CourseId& courseId) {
  const CourseId id = CopyId(courseId);
  ShowShopSubscriptionListDetailImpl(LaunchMode_Application,
    OptionalApplicationId(), id, InvalidUid, DefaultSourceId);
}

void ShowShopSubscriptionList(const CourseId& courseId,
  const account::UserHandle& user) {
  const CourseId id = CopyId(courseId);
  const account::Uid uid = GetUid(user);
  ShowShopSubscriptionListDetailImpl(LaunchMode_Application,
    OptionalApplicationId(), id, uid, DefaultSourceId);
}

void ShowShopSubscriptionList(ApplicationId applicationId,
  const CourseId& courseId) {
  const CourseId id = CopyId(courseId);
  ShowShopSubscriptionListDetailImpl(LaunchMode_Application,
    applicationId, id, InvalidUid, DefaultSourceId);
}

void ShowShopSubscriptionList(ApplicationId applicationId,
  const CourseId& courseId, const account::UserHandle& user) {
  const CourseId id = CopyId(courseId);
  const account::Uid uid = GetUid(user);
  ShowShopSubscriptionListDetailImpl(LaunchMode_Application,
    applicationId, id, uid, DefaultSourceId);
}

void ShowShopSubscriptionDetails(const CourseId& courseId, NsUid nsUid) {
  const CourseId id = CopyId(courseId);
  ShowShopSubscriptionDetailsImpl(LaunchMode_Application,
    OptionalApplicationId(), id, nsUid, InvalidUid, DefaultSourceId);
}

void ShowShopSubscriptionDetails(const CourseId& courseId, NsUid nsUid,
  const account::UserHandle& user) {
  const CourseId id = CopyId(courseId);
  const account::Uid uid = GetUid(user);
  ShowShopSubscriptionDetailsImpl(LaunchMode_Application,
    OptionalApplicationId(), id, nsUid, uid, DefaultSourceId);
}

void ShowShopSubscriptionDetails(ApplicationId applicationId,
  const CourseId& courseId, NsUid nsUid) {
  const CourseId id = CopyId(courseId);
  ShowShopSubscriptionDetailsImpl(LaunchMode_Application,
    applicationId, id, nsUid, InvalidUid, DefaultSourceId);
}

void ShowShopSubscriptionDetails(ApplicationId applicationId,
  const CourseId& courseId, NsUid nsUid, const account::UserHandle& user) {
  const CourseId id = CopyId(courseId);
  const account::Uid uid = GetUid(user);
  ShowShopSubscriptionDetailsImpl(LaunchMode_Application,
    applicationId, id, nsUid, uid, DefaultSourceId);
}

void ShowShopSubscriptionManagement() {
  ShowShopSubscriptionManagementImpl(LaunchMode_Application,
    OptionalApplicationId(), nullptr, 0, InvalidUid, DefaultSourceId);
}

void ShowShopSubscriptionManagement(const account::UserHandle& user) {
  const account::Uid uid = GetUid(user);
  ShowShopSubscriptionManagementImpl(LaunchMode_Application,
    OptionalApplicationId(), nullptr, 0, uid, DefaultSourceId);
}

void ShowShopSubscriptionManagement(const CourseId* courseIds, int count) {
  const int clamped = ClampCourseCount(courseIds, count);
  ShowShopSubscriptionManagementImpl(LaunchMode_Application,
    OptionalApplicationId(), courseIds, clamped, InvalidUid,
    DefaultSourceId);
}

void ShowShopSubscriptionManagement(const CourseId* courseIds, int count,
  const account::UserHandle& user) {
  const int clamped = ClampCourseCount(courseIds, count);
  const account::Uid uid = GetUid(user);
  ShowShopSubscriptionManagementImpl(LaunchMode_Application,
    OptionalApplicationId(), courseIds, clamped, uid, DefaultSourceId);
}

void ShowShopConsumableItemList() {
  ShowShopConsumableItemListImpl(LaunchMode_Application,
    OptionalApplicationId(), InvalidUid, DefaultSourceId);
}

void ShowShopConsumableItemList(const account::UserHandle& user) {
  const account::Uid uid = GetUid(user);
  ShowShopConsumableItemListImpl(LaunchMode_Application,
    OptionalApplicationId(), uid, DefaultSourceId);
}

void ShowShopConsumableItemList(ApplicationId applicationId) {
  ShowShopConsumableItemListImpl(LaunchMode_Application, applicationId,
    InvalidUid, DefaultSourceId);
}

void ShowShopConsumableItemList(ApplicationId applicationId,
  const account::UserHandle& user) {
  const account::Uid uid = GetUid(user);
  ShowShopConsumableItemListImpl(LaunchMode_Application, applicationId,
    uid, DefaultSourceId);
}

void ShowShopConsumableItemDetail(const ConsumableId& consumableId,
  NsUid nsUid) {
  const ConsumableId id = CopyId(consumableId);
  ShowShopConsumableItemDetailImpl(LaunchMode_Application,
    OptionalApplicationId(), id, nsUid, InvalidUid, DefaultSourceId);
}

void ShowShopConsumableItemDetail(const ConsumableId& consumableId,
  NsUid nsUid, const account::UserHandle& user) {
  const ConsumableId id = CopyId(consumableId);
  const account::Uid uid = GetUid(user);
  ShowShopConsumableItemDetailImpl(LaunchMode_Application,
    OptionalApplicationId(), id, nsUid, uid, DefaultSourceId);
}

void ShowShopConsumableItemDetail(ApplicationId applicationId,
  const ConsumableId& consumableId, NsUid nsUid) {
  const ConsumableId id = CopyId(consumableId);
  ShowShopConsumableItemDetailImpl(LaunchMode_Application,
    applicationId, id, nsUid, InvalidUid, DefaultSourceId);
}

void ShowShopConsumableItemDetail(ApplicationId applicationId,
  const ConsumableId& consumableId, NsUid nsUid,
  const account::UserHandle& user) {
  const ConsumableId id = CopyId(consumableId);
  const account::Uid uid = GetUid(user);
  ShowShopConsumableItemDetailImpl(LaunchMode_Application,
    applicationId, id, nsUid, uid, DefaultSourceId);
}

void ShowShopProductList(const NsUid* nsUids, int count,
  const char* message) {
  const char* validMessage = GetValidMessage(message);
  ShowShopProductListImpl(LaunchMode_Application, nsUids,
    ClampProductCount(count), validMessage, InvalidUid, DefaultSourceId);
}

void ShowShopProductList(const NsUid* nsUids, int count,
  const char* message, const account::UserHandle& user) {
  const char* validMessage = GetValidMessage(message);
  const account::Uid uid = GetUid(user);
  ShowShopProductListImpl(LaunchMode_Application, nsUids,
    ClampProductCount(count), validMessage, uid, DefaultSourceId);
}

void ShowShopEnterCodeScene() {
  ShowShopEnterCodeSceneImpl(LaunchMode_Application, InvalidUid,
    DefaultSourceId);
}

void ShowShopEnterCodeScene(const account::UserHandle& user) {
  const account::Uid uid = GetUid(user);
  ShowShopEnterCodeSceneImpl(LaunchMode_Application, uid,
    DefaultSourceId);
}

void ShowShopProductDetails(NsUid nsUid) {
  ShowShopProductDetailsImpl(LaunchMode_Application, nsUid, InvalidUid,
    DefaultSourceId);
}

void ShowShopProductDetails(NsUid nsUid, const account::UserHandle& user) {
  const account::Uid uid = GetUid(user);
  ShowShopProductDetailsImpl(LaunchMode_Application, nsUid, uid,
    DefaultSourceId);
}

void ShowShopInformationWithParams(char* buffer, size_t size,
  const char* signature, const char* format, ...) {
  NN_ABORT_UNLESS(VerifySignature(format, signature));

  va_list args;
  va_start(args, format);
  const int length = util::VSNPrintf(buffer, size, format, args);
  va_end(args);
  NN_ABORT_UNLESS(static_cast<size_t>(length) < size);

  ShowShopInformationWithParamsImpl(LaunchMode_Application, buffer,
    InvalidUid, DefaultSourceId);
}

void ShowShopInformationWithParams(char* buffer, size_t size,
  const char* signature, const account::UserHandle& user,
  const char* format, ...) {
  NN_ABORT_UNLESS(VerifySignature(format, signature));
  const account::Uid uid = GetUid(user);

  va_list args;
  va_start(args, format);
  const int length = util::VSNPrintf(buffer, size, format, args);
  va_end(args);
  NN_ABORT_UNLESS(static_cast<size_t>(length) < size);

  ShowShopInformationWithParamsImpl(LaunchMode_Application, buffer,
    uid, DefaultSourceId);
}

Result LaunchEShop(const account::Uid& uid, SourceId sourceId) {
  return LaunchEShopImpl(LaunchMode_Menu, uid, sourceId);
}

void ShowShopApplicationInformationForMenu(ApplicationId applicationId,
  const account::Uid& uid, SourceId sourceId) {
  ShowShopApplicationInformationImpl(LaunchMode_Menu, applicationId,
    uid, {}, sourceId, nullptr);
}

void ShowShopApplicationInformationForMenu(ApplicationId applicationId,
  const account::Uid& uid, const AdditionalParam& param, SourceId sourceId) {
  ShowShopApplicationInformationImpl(LaunchMode_Menu, applicationId,
    uid, {&param, 1}, sourceId, nullptr);
}

void ShowShopApplicationInformationForMenu(ApplicationId applicationId,
  const account::Uid& uid, Span<const AdditionalParam> params,
  SourceId sourceId) {
  ShowShopApplicationInformationImpl(LaunchMode_Menu, applicationId,
    uid, params, sourceId, nullptr);
}

void ShowShopApplicationInformationForMenu(NsUid nsUid,
  const account::Uid& uid, SourceId sourceId) {
  ShowShopApplicationInformationImpl(LaunchMode_Menu, nsUid, uid,
    sourceId, nullptr);
}

void ShowShopApplicationInformationForMenu(ApplicationId applicationId,
  const account::Uid& uid, SourceId sourceId, const char* parameter) {
  ShowShopApplicationInformationImpl(LaunchMode_Menu, applicationId,
    uid, {}, sourceId, parameter);
}

void ShowShopApplicationInformationForMenu(NsUid nsUid,
  const account::Uid& uid, SourceId sourceId, const char* parameter) {
  ShowShopApplicationInformationImpl(LaunchMode_Menu, nsUid, uid,
    sourceId, parameter);
}

void ShowShopApplicationInformationForUpgradeForMenu(
  ApplicationId applicationId, const account::Uid& uid,
  UpgradeEdition edition, const AdditionalParam& param, SourceId sourceId) {
  ShowShopApplicationInformationForUpgradeImpl(LaunchMode_Menu,
    applicationId, uid, edition, {&param, 1}, sourceId, nullptr);
}

void ShowShopApplicationInformationForUpgradeForMenu(
  ApplicationId applicationId, const account::Uid& uid,
  UpgradeEdition edition, Span<const AdditionalParam> params,
  SourceId sourceId) {
  ShowShopApplicationInformationForUpgradeImpl(LaunchMode_Menu,
    applicationId, uid, edition, params, sourceId, nullptr);
}

void ShowShopAddOnContentListForMenu(ApplicationId applicationId,
  const account::Uid& uid, SourceId sourceId) {
  ShowShopAddOnContentListImpl(LaunchMode_Menu, applicationId, uid,
    sourceId);
}

void ShowShopAddOnContentDetailsForMenu(NsUid nsUid,
  const account::Uid& uid, SourceId sourceId) {
  ShowShopAddOnContentDetailsImpl(LaunchMode_Menu, nsUid, uid,
    sourceId);
}

void ShowShopConsumableItemListForMenu(ApplicationId applicationId,
  const account::Uid& uid, SourceId sourceId, bool isApplicationMode) {
  ShowShopConsumableItemListImpl(
    isApplicationMode ? LaunchMode_Application : LaunchMode_Menu,
    applicationId, uid, sourceId);
}

void ShowShopConsumableItemDetailsForMenu(ApplicationId applicationId,
  const ConsumableId& consumableId, NsUid nsUid, const account::Uid& uid,
  SourceId sourceId, bool isApplicationMode) {
  ShowShopConsumableItemDetailImpl(
    isApplicationMode ? LaunchMode_Application : LaunchMode_Menu,
    applicationId, consumableId, nsUid, uid, sourceId);
}

void ShowShopCouponForMenu(CouponId couponId, const account::Uid& uid,
  SourceId sourceId) {
  ShowShopCouponImpl(LaunchMode_Menu, couponId, uid, sourceId);
}

void ShowShopInformationWithParams(const char* path,
  const account::Uid& uid, SourceId sourceId) {
  NN_ABORT_UNLESS(path != nullptr && path[0] != '\0');
  ShowShopInformationWithParamsImpl(LaunchMode_Menu, path, uid,
    sourceId);
}

void ShowShopSettingsForMenu(const account::Uid& uid, SourceId sourceId) {
  ShowShopSettingsImpl(LaunchMode_Menu, uid, sourceId);
}

void ShowShopMembershipServiceInformation(const account::Uid& uid,
  SourceId sourceId) {
  ShowShopMembershipServiceInformationImpl(LaunchMode_Application, uid,
    OptionalApplicationId(), util::optional<MembershipServiceGuidedReason>(),
    sourceId);
}

void ShowShopMembershipServiceInformation(const account::Uid& uid,
  ApplicationId applicationId, MembershipServiceGuidedReason reason,
  SourceId sourceId) {
  ShowShopMembershipServiceInformationImpl(LaunchMode_Application, uid,
    applicationId.value != 0 ? OptionalApplicationId(applicationId)
      : OptionalApplicationId(),
    reason, sourceId);
}

void ShowShopMembershipServiceInformationForMenu(const account::Uid& uid,
  ApplicationId applicationId, MembershipServiceGuidedReason reason,
  SourceId sourceId) {
  ShowShopMembershipServiceInformationImpl(LaunchMode_Menu, uid,
    applicationId.value != 0 ? OptionalApplicationId(applicationId)
      : OptionalApplicationId(),
    reason, sourceId);
}

void ShowShopMembershipServiceContractInformationForMenu(
  const account::Uid& uid, SourceId sourceId) {
  ShowShopMembershipServiceContractInformationImpl(LaunchMode_Menu,
    uid, sourceId);
}

Result GetShopResultFromStorage(const applet::StorageHandle& storage) {
  return GetShopResultFromStorageImpl(storage);
}

void ShowShopApplicationInformationForApplet(
  ncm::ApplicationId applicationId) {
  ShowShopApplicationInformationImpl(LaunchMode_Application,
    ApplicationId{applicationId.value}, InvalidUid, {}, DefaultSourceId,
    nullptr);
}

void ShowShopPreinstallInformationForMenu(const account::Uid& uid,
  SourceId sourceId) {
  ShowShopPreinstallInformationImpl(LaunchMode_Menu, uid, sourceId);
}

void ShowShopRedownloadListForMenu(const account::Uid& uid,
  SourceId sourceId) {
  ShowShopRedownloadListImpl(LaunchMode_Menu, uid, sourceId);
}

void ShowShopDigitalBundleInformationForMenu(const account::Uid& uid,
  SourceId sourceId) {
  ShowShopDigitalBundleInformationImpl(LaunchMode_Menu, uid, sourceId);
}

}
