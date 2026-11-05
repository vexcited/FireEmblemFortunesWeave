#pragma once

#include <stdint.h>

#include "nn/web/web_offline_html_page_arg.hpp"
#include "nn/web/web_page_arg.hpp"
#include "nn/web/web_return_value.hpp"

namespace nn::web {

enum WebSessionBootMode : int32_t {};

void SetBootMode(ShowOfflineHtmlPageArg* pArg, WebSessionBootMode mode);
void SetOfflineHtmlPageGen0MouseEnabled(ShowOfflineHtmlPageArg* pArg);
void SetOfflineHtmlPageStreamPlayShareEnabled(ShowOfflineHtmlPageArg* pArg);
void SetOfflineHtmlPageStreamPlayShareEnabled(ShowOfflineHtmlPageArg* pArg,
  bool isEnabled);

void SetBootMode(ShowWebPageArg* pArg, WebSessionBootMode mode);
void SetNxCompatibleModeEnabled(ShowWebPageArg* pArg);
void SetScreenShotEnabled(ShowWebPageArg* pArg);
void SetShopJumpEnabled(ShowWebPageArg* pArg);
void SetTransferMemoryEnabled(ShowWebPageArg* pArg);

bool IsMediaPlayerAutoClosedByCompletion(const WebPageReturnValue& value);

}
