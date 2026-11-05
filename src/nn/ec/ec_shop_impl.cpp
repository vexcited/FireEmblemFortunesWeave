#include "nn/ec/ec_shop_api.hpp"
#include "nn/ec/ec_shop_page.hpp"

#include <new>
#include <string.h>

#include "nn/diag/diag_abort.hpp"
#include "nn/os/mutex.hpp"
#include "nn/util/string_util.hpp"

namespace nn::ec::detail {

size_t AppIdToString(char* buffer, size_t size, ApplicationId applicationId);
size_t CouponIdToString(char* buffer, size_t size, CouponId couponId);
bool EncodeUriRfc3986(char* buffer, size_t size, const char* string);

void GeneratePath(ShowShopPageArg& arg, const char* path, SourceId sourceId,
  const char* parameter, const char* key, const char* value, ...);

bool ShowShopPageWrapper(ShowShopPageArg& arg, const account::Uid& uid);

// Every shop page shares one argument buffer under one statically
// initialized mutex.
os::MutexType g_ShopPageArgMutex = {1, false, 0, 0, nullptr, {}};
alignas(ShowShopPageArg) uint8_t g_ShopPageArgStorage[sizeof(ShowShopPageArg)];

namespace {

const uint32_t ResultShopCanceledValue = 0x690;
const size_t AppIdStringSize = 17;
const size_t NsUidStringSize = 21;
const size_t CourseIdListSize = 272;
const size_t ProductIdListSize = 660;
const size_t ProductListMessageSize = 1681;

ShopPageReturnValue g_ShopPageReturnValue;

const char* const LaunchModeNames[] = {"mini", "full"};
const char* const UpgradeEditionNames[] = {"bee", "upgrade"};

ShowShopPageArg& BeginShopPage() {
  os::LockMutex(&g_ShopPageArgMutex);
  return *new (g_ShopPageArgStorage) ShowShopPageArg("");
}

void EndShopPage(ShowShopPageArg& arg, const account::Uid& uid) {
  ShowShopPageWrapper(arg, uid);
  os::UnlockMutex(&g_ShopPageArgMutex);
}

}

bool ShowShopPageWrapper(ShowShopPageArg& arg, const account::Uid& uid) {
  arg.SetUid(uid);
  arg.SetCallbackUrl("eshop://");
  const Result result = ShowShopPage(&g_ShopPageReturnValue, arg);
  if (result.GetInnerValueForDebug() == ResultShopCanceledValue) {
    return false;
  }

  NN_ABORT_UNLESS_RESULT_SUCCESS(result);
  return true;
}

void ShowShopApplicationInformationImpl(LaunchMode mode, NsUid nsUid,
  const account::Uid& uid, SourceId sourceId, const char* parameter) {
  ShowShopPageArg& arg = BeginShopPage();
  char nsUidString[NsUidStringSize] = {};
  NsUidToString(nsUidString, sizeof(nsUidString), nsUid);
  GeneratePath(arg, "", sourceId, nullptr, "scene", "product_detail", "mode",
    LaunchModeNames[mode], "dst_nsuid", nsUidString, "news_id", parameter,
    nullptr, nullptr);
  EndShopPage(arg, uid);
}

void ShowShopApplicationInformationForUpgradeImpl(LaunchMode mode,
  NsUid nsUid, const account::Uid& uid, UpgradeEdition edition,
  SourceId sourceId, const char* parameter) {
  ShowShopPageArg& arg = BeginShopPage();
  char nsUidString[NsUidStringSize] = {};
  NsUidToString(nsUidString, sizeof(nsUidString), nsUid);
  GeneratePath(arg, "", sourceId, nullptr, "scene", "product_detail", "mode",
    LaunchModeNames[mode], "dst_nsuid", nsUidString, "news_id", parameter,
    "edition", UpgradeEditionNames[edition], nullptr, nullptr);
  EndShopPage(arg, uid);
}

void ShowShopAddOnContentListImpl(LaunchMode mode,
  OptionalApplicationId applicationId, const account::Uid& uid,
  SourceId sourceId) {
  ShowShopPageArg& arg = BeginShopPage();
  char appIdString[AppIdStringSize] = {};
  if (applicationId) {
    AppIdToString(appIdString, sizeof(appIdString), *applicationId);
  }
  GeneratePath(arg, "", sourceId, nullptr, "scene", "aocs", "mode",
    LaunchModeNames[mode], "dst_app_id",
    applicationId ? appIdString : nullptr, nullptr, nullptr);
  EndShopPage(arg, uid);
}

void ShowShopAddOnContentDetailsImpl(LaunchMode mode, NsUid nsUid,
  const account::Uid& uid, SourceId sourceId) {
  ShowShopPageArg& arg = BeginShopPage();
  char nsUidString[NsUidStringSize] = {};
  NsUidToString(nsUidString, sizeof(nsUidString), nsUid);
  GeneratePath(arg, "", sourceId, nullptr, "scene", "product_detail", "mode",
    LaunchModeNames[mode], "dst_nsuid", nsUidString, nullptr, nullptr);
  EndShopPage(arg, uid);
}

void ShowShopSubscriptionListImpl(LaunchMode mode,
  OptionalApplicationId applicationId, const account::Uid& uid,
  SourceId sourceId) {
  ShowShopPageArg& arg = BeginShopPage();
  char appIdString[AppIdStringSize] = {};
  if (applicationId) {
    AppIdToString(appIdString, sizeof(appIdString), *applicationId);
  }
  GeneratePath(arg, "", sourceId, nullptr, "scene", "subscriptions", "mode",
    LaunchModeNames[mode], "dst_app_id",
    applicationId ? appIdString : nullptr, nullptr, nullptr);
  EndShopPage(arg, uid);
}

void ShowShopSubscriptionListDetailImpl(LaunchMode mode,
  OptionalApplicationId applicationId, const CourseId& courseId,
  const account::Uid& uid, SourceId sourceId) {
  ShowShopPageArg& arg = BeginShopPage();
  char appIdString[AppIdStringSize] = {};
  if (applicationId) {
    AppIdToString(appIdString, sizeof(appIdString), *applicationId);
  }
  GeneratePath(arg, "", sourceId, nullptr, "scene", "subscriptions", "mode",
    LaunchModeNames[mode], "dst_app_id",
    applicationId ? appIdString : nullptr, "dst_course_id", courseId.value,
    "one_time_purchase", "true", nullptr, nullptr);
  EndShopPage(arg, uid);
}

void ShowShopSubscriptionDetailsImpl(LaunchMode mode,
  OptionalApplicationId applicationId, const CourseId& courseId,
  NsUid nsUid, const account::Uid& uid, SourceId sourceId) {
  ShowShopPageArg& arg = BeginShopPage();
  char appIdString[AppIdStringSize] = {};
  if (applicationId) {
    AppIdToString(appIdString, sizeof(appIdString), *applicationId);
  }
  char nsUidString[NsUidStringSize] = {};
  NsUidToString(nsUidString, sizeof(nsUidString), nsUid);
  GeneratePath(arg, "", sourceId, nullptr, "scene", "subscriptions", "mode",
    LaunchModeNames[mode], "dst_app_id",
    applicationId ? appIdString : nullptr, "dst_course_id", courseId.value,
    "dst_ticket_nsuid", nsUidString, "one_time_purchase", "true", nullptr,
    nullptr);
  EndShopPage(arg, uid);
}

void ShowShopSubscriptionManagementImpl(LaunchMode mode,
  OptionalApplicationId applicationId, const CourseId* courseIds, int count,
  const account::Uid& uid, SourceId sourceId) {
  ShowShopPageArg& arg = BeginShopPage();
  char courseIdList[CourseIdListSize];
  memset(courseIdList, 0, sizeof(courseIdList));
  int length = 0;
  for (int i = 0; i < count; i++) {
    length += util::SNPrintf(courseIdList + length,
      sizeof(courseIdList) - length, "%s", courseIds[i].value);
    if (i < count - 1) {
      length += util::SNPrintf(courseIdList + length,
        sizeof(courseIdList) - length, ",");
    }
  }

  char appIdString[AppIdStringSize] = {};
  if (applicationId) {
    AppIdToString(appIdString, sizeof(appIdString), *applicationId);
  }
  GeneratePath(arg, "", sourceId, nullptr, "scene", "manage_subscriptions",
    "mode", LaunchModeNames[mode], "dst_app_id",
    applicationId ? appIdString : nullptr, "dst_course_ids",
    count > 0 ? courseIdList : nullptr, nullptr, nullptr);
  EndShopPage(arg, uid);
}

void ShowShopConsumableItemListImpl(LaunchMode mode,
  OptionalApplicationId applicationId, const account::Uid& uid,
  SourceId sourceId) {
  ShowShopPageArg& arg = BeginShopPage();
  char appIdString[AppIdStringSize] = {};
  if (applicationId) {
    AppIdToString(appIdString, sizeof(appIdString), *applicationId);
  }
  GeneratePath(arg, "", sourceId, nullptr, "scene", "consumption", "mode",
    LaunchModeNames[mode], "dst_app_id",
    applicationId ? appIdString : nullptr, nullptr, nullptr);
  EndShopPage(arg, uid);
}

void ShowShopConsumableItemDetailImpl(LaunchMode mode,
  OptionalApplicationId applicationId, const ConsumableId& consumableId,
  NsUid nsUid, const account::Uid& uid, SourceId sourceId) {
  ShowShopPageArg& arg = BeginShopPage();
  char appIdString[AppIdStringSize] = {};
  if (applicationId) {
    AppIdToString(appIdString, sizeof(appIdString), *applicationId);
  }
  char nsUidString[NsUidStringSize] = {};
  NsUidToString(nsUidString, sizeof(nsUidString), nsUid);
  GeneratePath(arg, "", sourceId, nullptr, "scene", "consumption_item",
    "mode", LaunchModeNames[mode], "dst_app_id",
    applicationId ? appIdString : nullptr, "dst_consumption_id",
    consumableId.value, "dst_consumption_item_nsuid", nsUidString,
    "one_time_purchase", "true", nullptr, nullptr);
  EndShopPage(arg, uid);
}

void ShowShopProductListImpl(LaunchMode mode, const NsUid* nsUids,
  int count, const char* message, const account::Uid& uid,
  SourceId sourceId) {
  ShowShopPageArg& arg = BeginShopPage();
  char productIdList[ProductIdListSize];
  memset(productIdList, 0, sizeof(productIdList));
  int length = 0;
  for (int i = 0; i < count; i++) {
    char nsUidString[NsUidStringSize] = {};
    NsUidToString(nsUidString, sizeof(nsUidString), nsUids[i]);
    length += util::SNPrintf(productIdList + length,
      sizeof(productIdList) - length, "%s", nsUidString);
    if (i < count - 1) {
      length += util::SNPrintf(productIdList + length,
        sizeof(productIdList) - length, ",");
    }
  }

  char encodedMessage[ProductListMessageSize];
  memset(encodedMessage, 0, sizeof(encodedMessage));
  const char* listName = nullptr;
  if (message != nullptr) {
    NN_ABORT_UNLESS(EncodeUriRfc3986(encodedMessage, sizeof(encodedMessage),
      message));
    listName = encodedMessage;
  }
  GeneratePath(arg, "", sourceId, nullptr, "scene", "list", "mode",
    LaunchModeNames[mode], "list_type", "normal", "list_name", listName,
    "list_ids", productIdList, nullptr, nullptr);
  EndShopPage(arg, uid);
}

void ShowShopEnterCodeSceneImpl(LaunchMode mode, const account::Uid& uid,
  SourceId sourceId) {
  ShowShopPageArg& arg = BeginShopPage();
  GeneratePath(arg, "", sourceId, nullptr, "scene", "redeem_input", "mode",
    LaunchModeNames[mode], nullptr, nullptr);
  EndShopPage(arg, uid);
}

void ShowShopProductDetailsImpl(LaunchMode mode, NsUid nsUid,
  const account::Uid& uid, SourceId sourceId) {
  ShowShopPageArg& arg = BeginShopPage();
  char nsUidString[NsUidStringSize] = {};
  NsUidToString(nsUidString, sizeof(nsUidString), nsUid);
  GeneratePath(arg, "", sourceId, nullptr, "scene", "product_detail", "mode",
    LaunchModeNames[mode], "dst_nsuid", nsUidString, "one_time_purchase",
    "true", nullptr, nullptr);
  EndShopPage(arg, uid);
}

void ShowShopCouponImpl(LaunchMode mode, CouponId couponId,
  const account::Uid& uid, SourceId sourceId) {
  ShowShopPageArg& arg = BeginShopPage();
  char couponIdString[NsUidStringSize] = {};
  const char* couponIdValue = nullptr;
  if (couponId.value != 0) {
    CouponIdToString(couponIdString, sizeof(couponIdString), couponId);
    couponIdValue = couponIdString;
  }
  GeneratePath(arg, "", sourceId, nullptr, "scene", "my_coupon", "mode",
    LaunchModeNames[mode], "coupon_id", couponIdValue, nullptr, nullptr);
  EndShopPage(arg, uid);
}

void ShowShopInformationWithParamsImpl(LaunchMode mode, const char* path,
  const account::Uid& uid, SourceId sourceId) {
  ShowShopPageArg& arg = BeginShopPage();
  GeneratePath(arg, "", sourceId, path, "mode", LaunchModeNames[mode],
    nullptr, nullptr);
  EndShopPage(arg, uid);
}

void ShowShopSettingsImpl(LaunchMode mode, const account::Uid& uid,
  SourceId sourceId) {
  ShowShopPageArg& arg = BeginShopPage();
  GeneratePath(arg, "", sourceId, nullptr, "scene", "setting", "mode",
    LaunchModeNames[mode], nullptr, nullptr);
  EndShopPage(arg, uid);
}

void ShowShopMembershipServiceContractInformationImpl(LaunchMode mode,
  const account::Uid& uid, SourceId sourceId) {
  ShowShopPageArg& arg = BeginShopPage();
  GeneratePath(arg, "", sourceId, nullptr, "scene", "contract", "mode",
    LaunchModeNames[mode], nullptr, nullptr);
  EndShopPage(arg, uid);
}

void ShowShopPreinstallInformationImpl(LaunchMode mode,
  const account::Uid& uid, SourceId sourceId) {
  ShowShopPageArg& arg = BeginShopPage();
  GeneratePath(arg, "", sourceId, nullptr, "scene", "preinstall", "mode",
    LaunchModeNames[mode], nullptr, nullptr);
  EndShopPage(arg, uid);
}

void ShowShopRedownloadListImpl(LaunchMode mode, const account::Uid& uid,
  SourceId sourceId) {
  ShowShopPageArg& arg = BeginShopPage();
  GeneratePath(arg, "", sourceId, nullptr, "scene", "redownload", "mode",
    LaunchModeNames[mode], nullptr, nullptr);
  EndShopPage(arg, uid);
}

void ShowShopDigitalBundleInformationImpl(LaunchMode mode,
  const account::Uid& uid, SourceId sourceId) {
  ShowShopPageArg& arg = BeginShopPage();
  GeneratePath(arg, "", sourceId, nullptr, "scene", "digitalbundle", "mode",
    LaunchModeNames[mode], nullptr, nullptr);
  EndShopPage(arg, uid);
}

}
