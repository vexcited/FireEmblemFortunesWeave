#include "nn/web/web_private_api.hpp"

#include "nn/os/startup_support.hpp"

namespace nn::web {

using namespace detail;

namespace {

enum WebReturnValueKind : uint16_t {
  WebReturnValueKind_MediaPlayerAutoClosedByCompletion = 9,
};

}

void SetBootMode(ShowOfflineHtmlPageArg* pArg, WebSessionBootMode mode) {
  SetWebArgData(pArg->Data(), WebArgKind_SessionBootMode, mode);
}

void SetOfflineHtmlPageGen0MouseEnabled(ShowOfflineHtmlPageArg* pArg) {
  SetWebArgData(pArg->Data(), WebArgKind_Gen0MouseEnabled, true);
}

void SetOfflineHtmlPageStreamPlayShareEnabled(ShowOfflineHtmlPageArg* pArg) {
  SetWebArgData(pArg->Data(), WebArgKind_StreamPlayShareEnabled, true);
  SetWebArgData(pArg->Data(), WebArgKind_StreamPlayShareEnabled2, true);
}

void SetOfflineHtmlPageStreamPlayShareEnabled(ShowOfflineHtmlPageArg* pArg,
  bool isEnabled) {
  SetWebArgData(pArg->Data(), WebArgKind_StreamPlayShareEnabled, isEnabled);
  SetWebArgData(pArg->Data(), WebArgKind_StreamPlayShareEnabled2, isEnabled);
}

void SetBootMode(ShowWebPageArg* pArg, WebSessionBootMode mode) {
  SetWebArgData(pArg->Data(), WebArgKind_SessionBootMode, mode);
}

void SetNxCompatibleModeEnabled(ShowWebPageArg* pArg) {
  SetWebArgData(pArg->Data(), WebArgKind_NxCompatibleModeEnabled, 1);
}

void SetScreenShotEnabled(ShowWebPageArg* pArg) {
  SetWebArgData(pArg->Data(), WebArgKind_ScreenShotEnabled, true);
}

void SetShopJumpEnabled(ShowWebPageArg* pArg) {
  SetWebArgData(pArg->Data(), WebArgKind_ShopJumpEnabled, true);
}

void SetTransferMemoryEnabled(ShowWebPageArg* pArg) {
  // The memory info is queried and then discarded.
  os::MemoryInfo info;
  os::QueryMemoryInfo(&info);
  SetWebArgData(pArg->Data(), WebArgKind_TransferMemoryEnabled, true);
}

bool IsMediaPlayerAutoClosedByCompletion(const WebPageReturnValue& value) {
  const bool* closed = GetWebArgData<bool>(value.Data(),
    WebReturnValueKind_MediaPlayerAutoClosedByCompletion);
  return closed != nullptr && *closed;
}

}
