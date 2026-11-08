#pragma once

#include "nn/result.hpp"
#include "nn/web/web_offline_html_page_arg.hpp"
#include "nn/web/web_page_arg.hpp"
#include "nn/web/web_return_value.hpp"
#include "nn/web/web_share_page_arg.hpp"

namespace nn::web {

Result ShowLobbyPage(LobbyPageReturnValue* pOutValue,
  const ShowLobbyPageArg& arg);
Result ShowSharePage(SharePageReturnValue* pOutValue,
  const ShowSharePageArg& arg);
Result ShowWebPage(WebPageReturnValue* pOutValue, const ShowWebPageArg& arg);
void RequestExitWebPage();
Result ShowYouTubeVideo(WebPageReturnValue* pOutValue,
  const ShowYouTubeVideoArg& arg);
Result ShowOfflineHtmlPage(OfflineHtmlPageReturnValue* pOutValue,
  const ShowOfflineHtmlPageArg& arg);
Result ShowOfflineHtmlPageGen0(OfflineHtmlPageReturnValue* pOutValue,
  const ShowOfflineHtmlPageArg& arg);
void RequestExitOfflineHtmlPage();
Result ShowApplicationLegalInformationPage(
  OfflineHtmlPageReturnValue* pOutValue,
  const ShowApplicationLegalInformationPageArg& arg);
Result ShowSystemDataPage(OfflineHtmlPageReturnValue* pOutValue,
  const ShowSystemDataPageArg& arg);
void GetOfflineHtmlPageReturnValueFromStorage(
  OfflineHtmlPageReturnValue* pOutValue, const applet::StorageHandle& storage);
Result ShowCalibrationOfflineHtmlPage(OfflineHtmlPageReturnValue* pOutValue,
  const ShowCalibrationOfflineHtmlPageArg& arg);

}
