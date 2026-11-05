#include "nn/ec/ec_shop_page.hpp"

#include <string.h>

#include "nn/applet/applet_api.hpp"
#include "nn/diag/diag_abort.hpp"
#include "nn/la/la_common_arguments.hpp"
#include "nn/web/detail/web_arg_detail.hpp"

namespace nn::util {

int SNPrintf(char* buffer, size_t size, const char* format, ...);

}

namespace nn::la {

void PopFromOutChannel(applet::LibraryAppletHandle handle, void* buffer,
  size_t size, size_t* pOutSize);

}

namespace nn::ec::detail {

using namespace web::detail;

namespace {

const applet::AppletId AppletId_Shop = static_cast<applet::AppletId>(0x1000014);
const uint32_t CommonArgumentsVersion = 0x80000;

const uint16_t ShopArgKind_RequestRelativeUrl = 0x2;
const size_t RequestRelativeUrlSize = 3072;
const size_t ShopCallbackUrlSize = 1024;

const Result ResultShopCanceled = {0x690};
const Result ResultShopAppletUnexpected = {0xa90};
const Result ResultShopAppletAbnormal = {0x290};

}

// Shared by every shop page, the original keeps it out of line.
[[gnu::noinline, gnu::visibility("hidden")]] Result RunShopPageApplet(
  void* buffer, size_t size, const applet::LibraryAppletHandle* pHandle) {
  bool userArgument = false;
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    applet::StartLibraryApplet(*pHandle, &userArgument));
  applet::JoinLibraryApplet(*pHandle);

  Result result = {0};
  switch (applet::GetLibraryAppletExitReason(*pHandle)) {
    case applet::LibraryAppletExitReason_Canceled:
      result = ResultShopCanceled;
      break;
    case applet::LibraryAppletExitReason_Unexpected:
      NN_ABORT_UNLESS_RESULT_SUCCESS(ResultShopAppletUnexpected);
      [[fallthrough]];
    case applet::LibraryAppletExitReason_Abnormal:
      NN_ABORT_UNLESS_RESULT_SUCCESS(ResultShopAppletAbnormal);
      [[fallthrough]];
    default: {
      size_t outSize = 0;
      la::PopFromOutChannel(*pHandle, buffer, size, &outSize);
      NN_ABORT_UNLESS(size == outSize);
      break;
    }
  }

  applet::CloseLibraryApplet(*pHandle);
  return result;
}

Result ShowShopPage(ShopPageReturnValue* pOutValue,
  const ShowShopPageArg& arg) {
  applet::LibraryAppletHandle handle = {};
  NN_ABORT_UNLESS_RESULT_SUCCESS(applet::CreateLibraryApplet(&handle,
    AppletId_Shop, static_cast<applet::LibraryAppletMode>(0)));

  la::CommonArgumentsWriter writer(CommonArgumentsVersion);
  writer.PushToInChannel(handle);
  arg.PushToInChannel(handle);

  return RunShopPageApplet(pOutValue, sizeof(ShopPageReturnValue), &handle);
}

ShowShopPageArg::ShowShopPageArg(const char* requestRelativeUrl) {
  InitializeWebArg(m_Data, 1);
  SetWebArgString(m_Data, ShopArgKind_RequestRelativeUrl, requestRelativeUrl,
    RequestRelativeUrlSize);
  SetWebArgData(m_Data, WebArgKind_LeftStickMode, 1);
  SetWebArgData(m_Data, WebArgKind_BootAsMediaPlayerInverted, false);
  const account::Uid uid = {};
  SetWebArgData(m_Data, WebArgKind_Uid, uid);
  SetWebArgData(m_Data, WebArgKind_Unknown14, true);
  SetWebArgData(m_Data, WebArgKind_Unknown15, true);
  SetWebArgData(m_Data, WebArgKind_BootDisplayKind, 1);
}

void ShowShopPageArg::SetUid(const account::Uid& uid) {
  SetWebArgData(m_Data, WebArgKind_Uid, uid);
}

void ShowShopPageArg::SetCallbackUrl(const char* url) {
  SetWebArgString(m_Data, WebArgKind_CallbackUrl, url, ShopCallbackUrlSize);
}

void ShowShopPageArg::SetCallbackableUrl(const char* url) {
  SetWebArgString(m_Data, WebArgKind_CallbackableUrl, url,
    ShopCallbackUrlSize);
}

void ShowShopPageArg::SetBackgroundKind(ShopBackgroundKind kind) {
  SetWebArgData(m_Data, WebArgKind_BackgroundKind, kind);
}

char* ShowShopPageArg::GetRequestRelativeUrlBuffer() {
  // The constructor always stores the url, so the search is not bounded.
  size_t offset = sizeof(WebArgHeader);
  while (reinterpret_cast<WebArgTlv*>(m_Data + offset)->kind !=
    ShopArgKind_RequestRelativeUrl) {
    offset += sizeof(WebArgTlv) +
      reinterpret_cast<WebArgTlv*>(m_Data + offset)->size;
  }

  return reinterpret_cast<char*>(m_Data + offset + sizeof(WebArgTlv));
}

void ShowShopPageArg::PushToInChannel(
  applet::LibraryAppletHandle handle) const {
  PushWebArgToInChannel(handle, m_Data);
}

ShopPageReturnValue::ShopPageReturnValue()
  : m_ExitReason(ShopExitReason_Unknown), m_LastUrl(), m_LastUrlSize(0) {}

ShopExitReason ShopPageReturnValue::GetShopExitReason() const {
  return static_cast<ShopExitReason>(m_ExitReason);
}

const char* ShopPageReturnValue::GetLastUrl() const {
  return m_LastUrl;
}

size_t ShopPageReturnValue::GetLastUrlSize() const {
  return m_LastUrlSize;
}

size_t NsUidToString(char* buffer, size_t size, NsUid nsUid) {
  if (size == 0) {
    return 0;
  }

  int length = util::SNPrintf(buffer, size, "%llu", nsUid.value);
  size_t end = size <= static_cast<size_t>(static_cast<int64_t>(length)) ?
    size - 1 : static_cast<size_t>(static_cast<int64_t>(length));
  buffer[end] = '\0';
  return end;
}

size_t GetNsUidLengthAsString(NsUid nsUid) {
  uint64_t value = nsUid.value;
  size_t length = 0;
  do {
    length++;
    value /= 10;
  } while (value != 0);
  return length;
}

size_t AppIdToString(char* buffer, size_t size, ApplicationId applicationId) {
  const size_t AppIdStringSize = 17;
  if (size < AppIdStringSize) {
    return 0;
  }

  int length = util::SNPrintf(buffer, size, "%016llX", applicationId.value);
  size_t end = size <= static_cast<size_t>(static_cast<int64_t>(length)) ?
    size - 1 : static_cast<size_t>(static_cast<int64_t>(length));
  buffer[end] = '\0';
  return end;
}

size_t CouponIdToString(char* buffer, size_t size, CouponId couponId) {
  if (size == 0) {
    return 0;
  }

  int length = util::SNPrintf(buffer, size, "%llu", couponId.value);
  size_t end = size <= static_cast<size_t>(static_cast<int64_t>(length)) ?
    size - 1 : static_cast<size_t>(static_cast<int64_t>(length));
  buffer[end] = '\0';
  return end;
}

}
