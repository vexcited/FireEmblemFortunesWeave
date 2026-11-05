#include <new>

#include "nn/applet/applet_api.hpp"
#include "nn/diag/diag_abort.hpp"
#include "nn/la/la_common_arguments.hpp"
#include "nn/web/web_offline_session.hpp"
#include "nn/web/web_session.hpp"

namespace nn::web {

using namespace detail;

namespace {

const applet::AppletId AppletId_Web = static_cast<applet::AppletId>(0x1000013);
const applet::AppletId AppletId_OfflineWeb =
  static_cast<applet::AppletId>(0x1000032);
const uint32_t CommonArgumentsVersion = 0x80000;

applet::LibraryAppletMode GetLibraryAppletMode(const uint8_t* data) {
  const int32_t* bootMode = GetWebArgData<int32_t>(data,
    WebArgKind_SessionBootMode);
  if (bootMode == nullptr) {
    return static_cast<applet::LibraryAppletMode>(0);
  }

  return static_cast<applet::LibraryAppletMode>(*bootMode == 1 ? 4 : 0);
}

}

void WebSession::Initialize(void* buffer, size_t) {
  m_pImpl = new (buffer) WebSessionImpl();
}

void WebSession::Start(os::SystemEventType** pOutEvent,
  const ShowWebPageArg& arg) {
  WebSessionImpl* impl = m_pImpl;
  ShowWebPageArg& mutableArg = const_cast<ShowWebPageArg&>(arg);

  applet::LibraryAppletHandle handle = {};
  NN_ABORT_UNLESS_RESULT_SUCCESS(applet::CreateLibraryApplet(&handle,
    AppletId_Web, GetLibraryAppletMode(mutableArg.Data())));
  impl->setLibraryAppletHandle(handle);

  la::CommonArgumentsWriter writer(CommonArgumentsVersion);
  writer.PushToInChannel(handle);

  SetWebArgData(mutableArg.Data(), WebArgKind_SessionEnabled, true);
  reinterpret_cast<const ShowWebPageArgWriter&>(arg).PushToInChannel(handle);

  bool userArgument = false;
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    applet::StartLibraryApplet(handle, &userArgument));
  *pOutEvent = applet::GetLibraryAppletExitEvent(handle);
}

void WebSession::Finalize() {
  m_pImpl->~WebSessionImpl();
  m_pImpl = nullptr;
}

void OfflineWebSession::Initialize(void* buffer, size_t) {
  m_pImpl = new (buffer) WebSessionImpl();
}

void OfflineWebSession::Start(os::SystemEventType** pOutEvent,
  const ShowOfflineHtmlPageArg& arg) {
  WebSessionImpl* impl = m_pImpl;
  ShowOfflineHtmlPageArg& mutableArg =
    const_cast<ShowOfflineHtmlPageArg&>(arg);

  applet::LibraryAppletHandle handle = {};
  NN_ABORT_UNLESS_RESULT_SUCCESS(applet::CreateLibraryApplet(&handle,
    AppletId_OfflineWeb, GetLibraryAppletMode(mutableArg.Data())));
  impl->setLibraryAppletHandle(handle);

  la::CommonArgumentsWriter writer(CommonArgumentsVersion);
  writer.PushToInChannel(handle);

  SetWebArgData(mutableArg.Data(), WebArgKind_SessionEnabled, true);
  reinterpret_cast<const ShowOfflineHtmlPageArgWriter&>(arg).PushToInChannel(
    handle);

  bool userArgument = false;
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    applet::StartLibraryApplet(handle, &userArgument));
  *pOutEvent = applet::GetLibraryAppletExitEvent(handle);
}

void OfflineWebSession::Finalize() {
  m_pImpl->~WebSessionImpl();
  m_pImpl = nullptr;
}

}
