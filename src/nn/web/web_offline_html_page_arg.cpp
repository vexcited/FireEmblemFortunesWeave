#include "nn/web/web_offline_html_page_arg.hpp"

namespace nn::web {

using namespace detail;

ShowOfflineHtmlPageArg::ShowOfflineHtmlPageArg() {
  InitializeWebArg(m_Data, 3);
  SetWebArgData(m_Data, WebArgKind_LeftStickMode,
    OfflineLeftStickMode_Cursor);
  SetWebArgData(m_Data, WebArgKind_BootAsMediaPlayerInverted, false);
  SetWebArgData(m_Data, WebArgKind_PointerEnabled, true);
  SetWebArgData(m_Data, WebArgKind_Unknown14, true);
  SetWebArgData(m_Data, WebArgKind_Unknown15, true);
  SetWebArgData(m_Data, WebArgKind_Unknown0C, true);
}

ShowOfflineHtmlPageArg::ShowOfflineHtmlPageArg(const char* documentPath)
  : ShowOfflineHtmlPageArg() {
  OfflineDocumentKind kind = OfflineDocumentKind_OfflineHtmlPage;
  ShowOfflinePageArgDetail::SetDocumentKind(m_Data, kind);
  ApplicationId applicationId = {0};
  ShowOfflinePageArgDetail::SetApplicationId(m_Data, applicationId);
  ShowOfflinePageArgDetail::SetDocumentPath(m_Data, OfflineDocumentPathSize,
    documentPath);
}

ShowOfflineHtmlPageArg::ShowOfflineHtmlPageArg(const ApplicationId&,
  const char* documentPath)
  : ShowOfflineHtmlPageArg() {
  // The application id is ignored, the document is always resolved
  // against the calling application.
  OfflineDocumentKind kind = OfflineDocumentKind_OfflineHtmlPage;
  ShowOfflinePageArgDetail::SetDocumentKind(m_Data, kind);
  ApplicationId selfId = {0};
  ShowOfflinePageArgDetail::SetApplicationId(m_Data, selfId);
  ShowOfflinePageArgDetail::SetDocumentPath(m_Data, OfflineDocumentPathSize,
    documentPath);
}

void ShowOfflineHtmlPageArg::SetBootAsMediaPlayer(bool isBootAsMediaPlayer) {
  SetWebArgData(m_Data, WebArgKind_BootAsMediaPlayer, isBootAsMediaPlayer);
}

void ShowOfflineHtmlPageArg::SetPointerEnabled(bool isEnabled) {
  ShowOfflinePageArgDetail::SetPointerEnabled(m_Data, isEnabled);
}

void ShowOfflineHtmlPageArg::SetLeftStickMode(
  const OfflineLeftStickMode& mode) {
  ShowOfflinePageArgDetail::SetLeftStickMode(m_Data, mode);
}

void ShowOfflineHtmlPageArg::SetFooterEnabled(bool isEnabled) {
  SetWebArgData(m_Data, WebArgKind_FooterEnabled, isEnabled);
}

void ShowOfflineHtmlPageArg::SetFooterFixedKind(OfflineFooterFixedKind kind) {
  SetWebArgData(m_Data, WebArgKind_FooterFixedKind, kind);
}

void ShowOfflineHtmlPageArg::SetBackgroundKind(
  const OfflineBackgroundKind& kind) {
  SetWebArgData(m_Data, WebArgKind_BackgroundKind, kind);
}

void ShowOfflineHtmlPageArg::SetBootDisplayKind(OfflineBootDisplayKind kind) {
  SetWebArgData(m_Data, WebArgKind_BootDisplayKind, kind);
}

void ShowOfflineHtmlPageArg::SetKeyRepeatFrame(int delayFrame,
  int pulseFrame) {
  SetWebArgData(m_Data, WebArgKind_KeyRepeatDelayFrame, delayFrame);
  SetWebArgData(m_Data, WebArgKind_KeyRepeatPulseFrame, pulseFrame);
}

void ShowOfflineHtmlPageArg::SetJsExtensionEnabled(bool isEnabled) {
  SetWebArgData(m_Data, WebArgKind_JsExtensionEnabled, isEnabled);
}

void ShowOfflineHtmlPageArg::SetTouchEnabledOnContents(bool isEnabled) {
  SetWebArgData(m_Data, WebArgKind_TouchEnabledOnContents, isEnabled);
}

void ShowOfflineHtmlPageArg::SetMediaPlayerAutoCloseEnabled(bool isEnabled) {
  SetWebArgData(m_Data, WebArgKind_MediaPlayerAutoCloseEnabled, isEnabled);
}

void ShowOfflineHtmlPageArg::SetPageCacheEnabled(bool isEnabled) {
  SetWebArgData(m_Data, WebArgKind_PageCacheEnabled, isEnabled);
}

void ShowOfflineHtmlPageArg::SetPageFadeEnabled(bool isEnabled) {
  SetWebArgData(m_Data, WebArgKind_PageFadeEnabled, isEnabled);
}

void ShowOfflineHtmlPageArg::SetWebAudioEnabled(bool isEnabled) {
  SetWebArgData(m_Data, WebArgKind_WebAudioEnabled, isEnabled);
}

void ShowOfflineHtmlPageArg::SetBootLoadingIconEnabled(bool isEnabled) {
  SetWebArgData(m_Data, WebArgKind_BootLoadingIconEnabled, isEnabled);
}

void ShowOfflineHtmlPageArg::SetPageScrollIndicatorEnabled(bool isEnabled) {
  SetWebArgData(m_Data, WebArgKind_PageScrollIndicatorEnabled, isEnabled);
}

void ShowOfflineHtmlPageArg::SetMediaPlayerSpeedControlEnabled(
  bool isEnabled) {
  SetWebArgData(m_Data, WebArgKind_MediaPlayerSpeedControlEnabled,
    isEnabled);
}

void ShowOfflineHtmlPageArg::SetMediaPlayerClosedCaptionControlEnabled(
  bool isEnabled) {
  SetWebArgData(m_Data, WebArgKind_MediaPlayerClosedCaptionControlEnabled,
    isEnabled);
}

void ShowOfflineHtmlPageArg::SetMediaAutoPlayEnabled(bool isEnabled) {
  SetWebArgData(m_Data, WebArgKind_MediaAutoPlayDisabled, !isEnabled);
}

void ShowOfflineHtmlPageArg::SetMediaPlayerUiEnabled(bool isEnabled) {
  SetWebArgData(m_Data, WebArgKind_MediaPlayerUiEnabled, isEnabled);
}

void ShowOfflineHtmlPageArg::OverrideWebAudioVolume(float volume) {
  SetWebArgData(m_Data, WebArgKind_OverrideWebAudioVolume, volume);
}

void ShowOfflineHtmlPageArg::OverrideMediaAudioVolume(float volume) {
  SetWebArgData(m_Data, WebArgKind_OverrideMediaAudioVolume, volume);
}

uint8_t* ShowOfflineHtmlPageArg::Data() {
  return m_Data;
}

ShowCalibrationOfflineHtmlPageArg::ShowCalibrationOfflineHtmlPageArg() {
  InitializeWebArg(m_Data, 3);
  SetWebArgData(m_Data, WebArgKind_LeftStickMode,
    OfflineLeftStickMode_Cursor);
  SetWebArgData(m_Data, WebArgKind_BootAsMediaPlayerInverted, false);
  SetWebArgData(m_Data, WebArgKind_PointerEnabled, false);
  SetWebArgData(m_Data, WebArgKind_FooterEnabled, true);
  SetWebArgData(m_Data, WebArgKind_BackgroundKind, 0);
  SetWebArgData(m_Data, WebArgKind_Unknown14, true);
  SetWebArgData(m_Data, WebArgKind_Unknown15, true);
  SetWebArgData(m_Data, WebArgKind_BootDisplayKind, 1);
  SetWebArgData(m_Data, WebArgKind_Unknown0C, true);
  SetWebArgData(m_Data, WebArgKind_EcClientCertEnabled, true);
}

ShowCalibrationOfflineHtmlPageArg::ShowCalibrationOfflineHtmlPageArg(
  const char* documentPath)
  : ShowCalibrationOfflineHtmlPageArg() {
  OfflineDocumentKind kind = OfflineDocumentKind_Calibration;
  ShowOfflinePageArgDetail::SetDocumentKind(m_Data, kind);
  ShowOfflinePageArgDetail::SetDocumentPath(m_Data, OfflineDocumentPathSize,
    documentPath);
}

void ShowCalibrationOfflineHtmlPageArg::PushToInChannel(
  applet::LibraryAppletHandle handle) const {
  PushWebArgToInChannel(handle, m_Data);
}

ShowOfflineHtmlPageArgWithPlayReport::ShowOfflineHtmlPageArgWithPlayReport(
  const char* documentPath)
  : ShowOfflineHtmlPageArg(documentPath) {
  SetWebArgData(m_Data, WebArgKind_PlayReportEnabled, true);
}

void ShowOfflineHtmlPageArgWithPlayReport::SetPlayReportEnabled(
  bool isEnabled) {
  SetWebArgData(m_Data, WebArgKind_PlayReportEnabled, isEnabled);
}

ShowOfflineHtmlPageArgWithPlayReport::ShowOfflineHtmlPageArgWithPlayReport(
  const ApplicationId& applicationId, const char* documentPath)
  : ShowOfflineHtmlPageArg(applicationId, documentPath) {
  SetWebArgData(m_Data, WebArgKind_PlayReportEnabled, true);
}

ShowApplicationLegalInformationPageArg::
  ShowApplicationLegalInformationPageArg() {
  InitializeWebArg(m_Data, 3);
  SetWebArgData(m_Data, WebArgKind_LeftStickMode,
    OfflineLeftStickMode_Cursor);
  SetWebArgData(m_Data, WebArgKind_BootAsMediaPlayerInverted, false);
  SetWebArgData(m_Data, WebArgKind_PointerEnabled, false);
  SetWebArgData(m_Data, WebArgKind_FooterEnabled, true);
  SetWebArgData(m_Data, WebArgKind_BackgroundKind, 0);
  SetWebArgData(m_Data, WebArgKind_Unknown14, true);
  SetWebArgData(m_Data, WebArgKind_Unknown15, true);
  SetWebArgData(m_Data, WebArgKind_BootDisplayKind, 1);
  SetWebArgData(m_Data, WebArgKind_Unknown0C, true);
  SetWebArgData(m_Data, WebArgKind_EcClientCertEnabled, true);
}

ShowApplicationLegalInformationPageArg::ShowApplicationLegalInformationPageArg(
  const ApplicationId& applicationId, const char* documentPath)
  : ShowApplicationLegalInformationPageArg() {
  OfflineDocumentKind kind = OfflineDocumentKind_ApplicationLegalInformation;
  ShowOfflinePageArgDetail::SetDocumentKind(m_Data, kind);
  ShowOfflinePageArgDetail::SetApplicationId(m_Data, applicationId);
  ShowOfflinePageArgDetail::SetDocumentPath(m_Data, OfflineDocumentPathSize,
    documentPath);
}

void ShowApplicationLegalInformationPageArg::PushToInChannel(
  applet::LibraryAppletHandle handle) const {
  PushWebArgToInChannel(handle, m_Data);
}

ShowSystemDataPageArg::ShowSystemDataPageArg() {
  InitializeWebArg(m_Data, 3);
  SetWebArgData(m_Data, WebArgKind_LeftStickMode,
    OfflineLeftStickMode_Cursor);
  SetWebArgData(m_Data, WebArgKind_BootAsMediaPlayerInverted, false);
  SetWebArgData(m_Data, WebArgKind_PointerEnabled, false);
  SetWebArgData(m_Data, WebArgKind_FooterEnabled, true);
  SetWebArgData(m_Data, WebArgKind_BackgroundKind, 0);
  SetWebArgData(m_Data, WebArgKind_BootDisplayKind, 1);
  SetWebArgData(m_Data, WebArgKind_Unknown14, true);
  SetWebArgData(m_Data, WebArgKind_Unknown15, true);
  SetWebArgData(m_Data, WebArgKind_Unknown0C, true);
  SetWebArgData(m_Data, WebArgKind_EcClientCertEnabled, true);
}

ShowSystemDataPageArg::ShowSystemDataPageArg(
  const ncm::SystemDataId& systemDataId, const char* documentPath)
  : ShowSystemDataPageArg() {
  OfflineDocumentKind kind = OfflineDocumentKind_SystemData;
  ShowOfflinePageArgDetail::SetDocumentKind(m_Data, kind);
  ShowOfflinePageArgDetail::SetSystemDataId(m_Data, systemDataId);
  ShowOfflinePageArgDetail::SetDocumentPath(m_Data, OfflineDocumentPathSize,
    documentPath);
}

void ShowSystemDataPageArg::SetFooterFixedKind(OfflineFooterFixedKind kind) {
  SetWebArgData(m_Data, WebArgKind_FooterFixedKind, kind);
}

void ShowSystemDataPageArg::PushToInChannel(
  applet::LibraryAppletHandle handle) const {
  PushWebArgToInChannel(handle, m_Data);
}

}
