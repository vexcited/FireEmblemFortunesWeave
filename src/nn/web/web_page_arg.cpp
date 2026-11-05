#include "nn/web/web_page_arg.hpp"

namespace nn::web {

using namespace detail;

ShowWebPageArg::ShowWebPageArg() {
  InitializeWebArg(m_Data, 5);
  SetWebArgData(m_Data, WebArgKind_UidIsNone, true);
}

ShowWebPageArg::ShowWebPageArg(const char* url) {
  InitializeWebArg(m_Data, 5);
  SetWebArgData(m_Data, WebArgKind_UidIsNone, true);
  SetWebArgString(m_Data, WebArgKind_Url, url, WebUrlSize);
}

void ShowWebPageArg::SetBootAsMediaPlayer(bool isBootAsMediaPlayer) {
  SetWebArgData(m_Data, WebArgKind_BootAsMediaPlayer, isBootAsMediaPlayer);
}

void ShowWebPageArg::SetCallbackUrl(const char* url) {
  SetWebArgString(m_Data, WebArgKind_CallbackUrl, url, WebCallbackUrlSize);
}

void ShowWebPageArg::SetCallbackableUrl(const char* url) {
  SetWebArgString(m_Data, WebArgKind_CallbackableUrl, url,
    WebCallbackUrlSize);
}

void ShowWebPageArg::SetPointerEnabled(bool isEnabled) {
  SetWebArgData(m_Data, WebArgKind_PointerEnabled, isEnabled);
}

void ShowWebPageArg::SetLeftStickMode(WebLeftStickMode mode) {
  SetWebArgData(m_Data, WebArgKind_LeftStickMode, mode);
}

void ShowWebPageArg::SetUid(const account::Uid& uid) {
  SetWebArgData(m_Data, WebArgKind_Uid, uid);
  SetWebArgData(m_Data, WebArgKind_UidIsNone,
    uid.value[0] == 0 && uid.value[1] == 0);
}

void ShowWebPageArg::SetFooterFixedKind(WebFooterFixedKind kind) {
  SetWebArgData(m_Data, WebArgKind_FooterFixedKind, kind);
}

void ShowWebPageArg::SetBackgroundKind(WebBackgroundKind kind) {
  SetWebArgData(m_Data, WebArgKind_BackgroundKind, kind);
}

void ShowWebPageArg::SetBootDisplayKind(WebBootDisplayKind kind) {
  SetWebArgData(m_Data, WebArgKind_BootDisplayKind, kind);
}

void ShowWebPageArg::SetJsExtensionEnabled(bool isEnabled) {
  SetWebArgData(m_Data, WebArgKind_JsExtensionEnabled, isEnabled);
}

void ShowWebPageArg::SetDisplayUrlKind(WebDisplayUrlKind kind) {
  SetWebArgData(m_Data, WebArgKind_DisplayUrlKind,
    kind == WebDisplayUrlKind_Visible);
}

void ShowWebPageArg::SetTouchEnabledOnContents(bool isEnabled) {
  SetWebArgData(m_Data, WebArgKind_TouchEnabledOnContents, isEnabled);
}

void ShowWebPageArg::SetUserAgentAdditionalString(const char* string) {
  SetWebArgString(m_Data, WebArgKind_UserAgentAdditionalString, string,
    WebUserAgentAdditionalStringSize);
}

void ShowWebPageArg::SetMediaPlayerAutoCloseEnabled(bool isEnabled) {
  SetWebArgData(m_Data, WebArgKind_MediaPlayerAutoCloseEnabled, isEnabled);
}

void ShowWebPageArg::SetPageCacheEnabled(bool isEnabled) {
  SetWebArgData(m_Data, WebArgKind_PageCacheEnabled, isEnabled);
}

void ShowWebPageArg::SetPageFadeEnabled(bool isEnabled) {
  SetWebArgData(m_Data, WebArgKind_PageFadeEnabled, isEnabled);
}

void ShowWebPageArg::SetWebAudioEnabled(bool isEnabled) {
  SetWebArgData(m_Data, WebArgKind_WebAudioEnabled, isEnabled);
}

void ShowWebPageArg::SetPageScrollIndicatorEnabled(bool isEnabled) {
  SetWebArgData(m_Data, WebArgKind_PageScrollIndicatorEnabled, isEnabled);
}

void ShowWebPageArg::SetMediaPlayerSpeedControlEnabled(bool isEnabled) {
  SetWebArgData(m_Data, WebArgKind_MediaPlayerSpeedControlEnabled,
    isEnabled);
}

void ShowWebPageArg::SetMediaPlayerClosedCaptionControlEnabled(
  bool isEnabled) {
  SetWebArgData(m_Data, WebArgKind_MediaPlayerClosedCaptionControlEnabled,
    isEnabled);
}

void ShowWebPageArg::SetMediaAutoPlayEnabled(bool isEnabled) {
  SetWebArgData(m_Data, WebArgKind_MediaAutoPlayDisabled, !isEnabled);
}

void ShowWebPageArg::OverrideWebAudioVolume(float volume) {
  SetWebArgData(m_Data, WebArgKind_OverrideWebAudioVolume, volume);
}

void ShowWebPageArg::OverrideMediaAudioVolume(float volume) {
  SetWebArgData(m_Data, WebArgKind_OverrideMediaAudioVolume, volume);
}

uint8_t* ShowWebPageArg::Data() {
  return m_Data;
}

ShowYouTubeVideoArg::ShowYouTubeVideoArg() {
  InitializeWebArg(m_Data, 5);
  SetWebArgData(m_Data, WebArgKind_UidIsNone, true);
  SetWebArgData(m_Data, WebArgKind_YouTubeVideoWhitelist, true);
  SetWebArgData(m_Data, WebArgKind_BootAsMediaPlayer, true);
}

ShowYouTubeVideoArg::ShowYouTubeVideoArg(const char* url) {
  InitializeWebArg(m_Data, 5);
  SetWebArgData(m_Data, WebArgKind_UidIsNone, true);
  SetWebArgData(m_Data, WebArgKind_YouTubeVideoWhitelist, true);
  SetWebArgData(m_Data, WebArgKind_BootAsMediaPlayer, true);
  SetWebArgString(m_Data, WebArgKind_Url, url, WebUrlSize);
}

void ShowYouTubeVideoArg::SetBootDisplayKind(WebBootDisplayKind kind) {
  SetWebArgData(m_Data, WebArgKind_BootDisplayKind, kind);
}

void ShowYouTubeVideoArg::SetMediaPlayerAutoCloseEnabled(bool isEnabled) {
  SetWebArgData(m_Data, WebArgKind_MediaPlayerAutoCloseEnabled, isEnabled);
}

void ShowYouTubeVideoArg::SetMediaPlayerSpeedControlEnabled(bool isEnabled) {
  SetWebArgData(m_Data, WebArgKind_MediaPlayerSpeedControlEnabled,
    isEnabled);
}

void ShowYouTubeVideoArg::SetMediaPlayerClosedCaptionControlEnabled(
  bool isEnabled) {
  SetWebArgData(m_Data, WebArgKind_MediaPlayerClosedCaptionControlEnabled,
    isEnabled);
}

void ShowYouTubeVideoArg::SetBootAsWebPage(bool isBootAsWebPage) {
  SetWebArgData(m_Data, WebArgKind_BootAsMediaPlayer, !isBootAsWebPage);
}

const uint8_t* ShowYouTubeVideoArg::Data() const {
  return m_Data;
}

}
