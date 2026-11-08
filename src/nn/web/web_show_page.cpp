#include "nn/web/web_show_page.hpp"

#include "nn/applet/applet_api.hpp"
#include "nn/diag/diag_abort.hpp"
#include "nn/la/la_common_arguments.hpp"
#include "nn/os/mutex.hpp"
#include "nn/os/system_event.hpp"

namespace nn::la {

void PopFromOutChannel(applet::LibraryAppletHandle handle, void* buffer,
  size_t size, size_t* pOutSize);

}

namespace nn::applet {

void SetStreamPlayShareEnabled(LibraryAppletHandle handle, bool isEnabled,
  bool isEnabled2);

}

namespace nn::web {

using namespace detail;

namespace {

const applet::AppletId AppletId_Web = static_cast<applet::AppletId>(0x1000013);
const applet::AppletId AppletId_Lobby =
  static_cast<applet::AppletId>(0x1000018);
const applet::AppletId AppletId_Share =
  static_cast<applet::AppletId>(0x1000037);
const applet::AppletId AppletId_OfflineWebGen0 =
  static_cast<applet::AppletId>(0x1000017);
const applet::AppletId AppletId_OfflineWeb =
  static_cast<applet::AppletId>(0x1000032);
const applet::AppletId AppletId_OfflineDocument =
  static_cast<applet::AppletId>(0x1000033);
const uint32_t CommonArgumentsVersion = 0x80000;

const Result ResultWebPageFailed = {722};
const Result ResultAppletCanceled = {0x690};
const Result ResultAppletUnexpected = {0xa90};
const Result ResultAppletAbnormal = {0x290};
const Result ResultSuccess = {0};

const int WebExitReason_Unexpected = 14;

os::MutexType g_WebPageMutex = {};
applet::LibraryAppletHandle g_WebPageHandle;
os::MutexType g_OfflinePageMutex = {};
applet::LibraryAppletHandle g_OfflinePageHandle;

}

namespace detail {

// The shop pages share an identical copy, the original keeps it out of line.
[[gnu::noinline, gnu::visibility("hidden")]] Result RunWebApplet(
  void* buffer, size_t size, const applet::LibraryAppletHandle* pHandle) {
  bool userArgument = false;
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    applet::StartLibraryApplet(*pHandle, &userArgument));
  applet::JoinLibraryApplet(*pHandle);

  Result result = {0};
  switch (applet::GetLibraryAppletExitReason(*pHandle)) {
    case applet::LibraryAppletExitReason_Canceled:
      result = ResultAppletCanceled;
      break;
    case applet::LibraryAppletExitReason_Unexpected:
      NN_ABORT_UNLESS_RESULT_SUCCESS(ResultAppletUnexpected);
      [[fallthrough]];
    case applet::LibraryAppletExitReason_Abnormal:
      NN_ABORT_UNLESS_RESULT_SUCCESS(ResultAppletAbnormal);
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

}

namespace {

applet::LibraryAppletHandle CreateWebApplet(applet::AppletId appletId) {
  applet::LibraryAppletHandle handle = {};
  NN_ABORT_UNLESS_RESULT_SUCCESS(applet::CreateLibraryApplet(&handle,
    appletId, static_cast<applet::LibraryAppletMode>(0)));
  return handle;
}

}

Result ShowLobbyPage(LobbyPageReturnValue* pOutValue,
  const ShowLobbyPageArg& arg) {
  applet::LibraryAppletHandle handle = CreateWebApplet(AppletId_Lobby);

  la::CommonArgumentsWriter writer(CommonArgumentsVersion);
  writer.PushToInChannel(handle);
  reinterpret_cast<const ShowLobbyPageArgWriter&>(arg).PushToInChannel(
    handle);

  if (RunWebApplet(pOutValue, sizeof(LobbyPageReturnValue), &handle)
    .IsFailure()) {
    return ResultWebPageFailed;
  }

  return ResultSuccess;
}

Result ShowSharePage(SharePageReturnValue* pOutValue,
  const ShowSharePageArg& arg) {
  applet::LibraryAppletHandle handle = CreateWebApplet(AppletId_Share);

  la::CommonArgumentsWriter writer(CommonArgumentsVersion);
  writer.PushToInChannel(handle);
  arg.PushToInChannel(handle);

  return RunWebApplet(pOutValue, sizeof(SharePageReturnValue), &handle);
}

Result ShowWebPage(WebPageReturnValue* pOutValue, const ShowWebPageArg& arg) {
  os::LockMutex(&g_WebPageMutex);
  g_WebPageHandle = CreateWebApplet(AppletId_Web);
  os::UnlockMutex(&g_WebPageMutex);

  la::CommonArgumentsWriter writer(CommonArgumentsVersion);
  writer.PushToInChannel(g_WebPageHandle);
  reinterpret_cast<const ShowWebPageArgWriter&>(arg).PushToInChannel(
    g_WebPageHandle);

  const Result result = RunWebApplet(pOutValue, sizeof(WebPageReturnValue),
    &g_WebPageHandle);
  g_WebPageHandle = {};
  if (result.IsFailure()) {
    return ResultWebPageFailed;
  }

  NN_ABORT_UNLESS(pOutValue->GetWebExitReason() != WebExitReason_Unexpected);
  return ResultSuccess;
}

void RequestExitWebPage() {
  os::LockMutex(&g_WebPageMutex);

  if (g_WebPageHandle._p != nullptr && !os::TryWaitSystemEvent(
    applet::GetLibraryAppletExitEvent(g_WebPageHandle))) {
    applet::RequestExitLibraryApplet(g_WebPageHandle);
  }

  os::UnlockMutex(&g_WebPageMutex);
}

Result ShowYouTubeVideo(WebPageReturnValue* pOutValue,
  const ShowYouTubeVideoArg& arg) {
  applet::LibraryAppletHandle handle = CreateWebApplet(AppletId_Web);

  la::CommonArgumentsWriter writer(CommonArgumentsVersion);
  writer.PushToInChannel(handle);
  PushWebArgToInChannel(handle, arg.Data());

  if (RunWebApplet(pOutValue, sizeof(WebPageReturnValue), &handle)
    .IsFailure()) {
    return ResultWebPageFailed;
  }

  return ResultSuccess;
}

namespace detail {

[[gnu::noinline, gnu::visibility("hidden")]] Result ShowOfflineHtmlPageImpl(
  OfflineHtmlPageReturnValue* pOutValue, const ShowOfflineHtmlPageArg& arg,
  applet::AppletId appletId) {
  os::LockMutex(&g_OfflinePageMutex);
  g_OfflinePageHandle = CreateWebApplet(appletId);
  os::UnlockMutex(&g_OfflinePageMutex);

  la::CommonArgumentsWriter writer(CommonArgumentsVersion);
  writer.PushToInChannel(g_OfflinePageHandle);
  reinterpret_cast<const ShowOfflineHtmlPageArgWriter&>(arg).PushToInChannel(
    g_OfflinePageHandle);

  auto& data = const_cast<ShowOfflineHtmlPageArg&>(arg);
  const bool* pShare2 =
    GetWebArgData<bool>(data.Data(), WebArgKind_StreamPlayShareEnabled2);
  const bool isShare2 = pShare2 != nullptr ? *pShare2 : false;
  const bool* pShare =
    GetWebArgData<bool>(data.Data(), WebArgKind_StreamPlayShareEnabled);
  const bool isShare = pShare != nullptr ? *pShare : false;
  applet::SetStreamPlayShareEnabled(g_OfflinePageHandle, isShare, isShare2);

  const Result result = RunWebApplet(pOutValue,
    sizeof(OfflineHtmlPageReturnValue), &g_OfflinePageHandle);
  g_OfflinePageHandle = {};
  if (result.IsFailure()) {
    return ResultWebPageFailed;
  }

  NN_ABORT_UNLESS(
    pOutValue->GetOfflineExitReason() != WebExitReason_Unexpected);
  return ResultSuccess;
}

}

Result ShowOfflineHtmlPage(OfflineHtmlPageReturnValue* pOutValue,
  const ShowOfflineHtmlPageArg& arg) {
  return ShowOfflineHtmlPageImpl(pOutValue, arg, AppletId_OfflineWeb);
}

Result ShowOfflineHtmlPageGen0(OfflineHtmlPageReturnValue* pOutValue,
  const ShowOfflineHtmlPageArg& arg) {
  return ShowOfflineHtmlPageImpl(pOutValue, arg, AppletId_OfflineWebGen0);
}

void RequestExitOfflineHtmlPage() {
  os::LockMutex(&g_OfflinePageMutex);

  if (g_OfflinePageHandle._p != nullptr && !os::TryWaitSystemEvent(
    applet::GetLibraryAppletExitEvent(g_OfflinePageHandle))) {
    applet::RequestExitLibraryApplet(g_OfflinePageHandle);
  }

  os::UnlockMutex(&g_OfflinePageMutex);
}

Result ShowApplicationLegalInformationPage(
  OfflineHtmlPageReturnValue* pOutValue,
  const ShowApplicationLegalInformationPageArg& arg) {
  applet::LibraryAppletHandle handle =
    CreateWebApplet(AppletId_OfflineDocument);

  la::CommonArgumentsWriter writer(CommonArgumentsVersion);
  writer.PushToInChannel(handle);
  arg.PushToInChannel(handle);

  return RunWebApplet(pOutValue, sizeof(OfflineHtmlPageReturnValue),
    &handle);
}

Result ShowSystemDataPage(OfflineHtmlPageReturnValue* pOutValue,
  const ShowSystemDataPageArg& arg) {
  applet::LibraryAppletHandle handle =
    CreateWebApplet(AppletId_OfflineDocument);

  la::CommonArgumentsWriter writer(CommonArgumentsVersion);
  writer.PushToInChannel(handle);
  arg.PushToInChannel(handle);

  return RunWebApplet(pOutValue, sizeof(OfflineHtmlPageReturnValue),
    &handle);
}

void GetOfflineHtmlPageReturnValueFromStorage(
  OfflineHtmlPageReturnValue* pOutValue, const applet::StorageHandle& storage) {
  NN_ABORT_UNLESS(
    applet::GetStorageSize(storage) == sizeof(OfflineHtmlPageReturnValue));
  NN_ABORT_UNLESS_RESULT_SUCCESS(applet::ReadFromStorage(storage, 0,
    pOutValue, sizeof(OfflineHtmlPageReturnValue)));
}

Result ShowCalibrationOfflineHtmlPage(OfflineHtmlPageReturnValue* pOutValue,
  const ShowCalibrationOfflineHtmlPageArg& arg) {
  applet::LibraryAppletHandle handle =
    CreateWebApplet(AppletId_OfflineDocument);

  la::CommonArgumentsWriter writer(CommonArgumentsVersion);
  writer.PushToInChannel(handle);
  arg.PushToInChannel(handle);

  return RunWebApplet(pOutValue, sizeof(OfflineHtmlPageReturnValue),
    &handle);
}

}
