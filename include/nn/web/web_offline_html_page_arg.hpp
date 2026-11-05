#pragma once

#include <stddef.h>
#include <stdint.h>

#include "nn/applet/applet_types.hpp"
#include "nn/ncm/ncm_ids.hpp"
#include "nn/web/detail/web_arg_detail.hpp"

namespace nn::web {

enum OfflineFooterFixedKind : int32_t {};
enum OfflineBackgroundKind : int32_t {};
enum OfflineBootDisplayKind : int32_t {};

enum OfflineFooterButtonId : int32_t {
  OfflineFooterButtonId_None,
  OfflineFooterButtonId_Max = 7,
};

const size_t OfflineDocumentPathSize = 3072;

class ShowOfflineHtmlPageArg {
 public:
  ShowOfflineHtmlPageArg();
  explicit ShowOfflineHtmlPageArg(const char* documentPath);
  ShowOfflineHtmlPageArg(const ApplicationId& applicationId,
    const char* documentPath);

  void SetBootAsMediaPlayer(bool isBootAsMediaPlayer);
  void SetPointerEnabled(bool isEnabled);
  void SetLeftStickMode(const OfflineLeftStickMode& mode);
  void SetFooterEnabled(bool isEnabled);
  void SetFooterFixedKind(OfflineFooterFixedKind kind);
  void SetBackgroundKind(const OfflineBackgroundKind& kind);
  void SetBootDisplayKind(OfflineBootDisplayKind kind);
  void SetKeyRepeatFrame(int delayFrame, int pulseFrame);
  void SetJsExtensionEnabled(bool isEnabled);
  void SetTouchEnabledOnContents(bool isEnabled);
  void SetMediaPlayerAutoCloseEnabled(bool isEnabled);
  void SetPageCacheEnabled(bool isEnabled);
  void SetPageFadeEnabled(bool isEnabled);
  void SetWebAudioEnabled(bool isEnabled);
  void SetBootLoadingIconEnabled(bool isEnabled);
  void SetPageScrollIndicatorEnabled(bool isEnabled);
  void SetMediaPlayerSpeedControlEnabled(bool isEnabled);
  void SetMediaPlayerClosedCaptionControlEnabled(bool isEnabled);
  void SetMediaAutoPlayEnabled(bool isEnabled);
  void SetMediaPlayerUiEnabled(bool isEnabled);
  void OverrideWebAudioVolume(float volume);
  void OverrideMediaAudioVolume(float volume);
  uint8_t* Data();

 protected:
  alignas(8) uint8_t m_Data[detail::WebArgDataSize];
};

class ShowOfflineHtmlPageArgWithPlayReport : public ShowOfflineHtmlPageArg {
 public:
  explicit ShowOfflineHtmlPageArgWithPlayReport(const char* documentPath);
  ShowOfflineHtmlPageArgWithPlayReport(const ApplicationId& applicationId,
    const char* documentPath);

  void SetPlayReportEnabled(bool isEnabled);
};

class ShowCalibrationOfflineHtmlPageArg {
 public:
  ShowCalibrationOfflineHtmlPageArg();
  explicit ShowCalibrationOfflineHtmlPageArg(const char* documentPath);

  void PushToInChannel(applet::LibraryAppletHandle handle) const;

 private:
  alignas(8) uint8_t m_Data[detail::WebArgDataSize];
};

class ShowApplicationLegalInformationPageArg {
 public:
  ShowApplicationLegalInformationPageArg();
  ShowApplicationLegalInformationPageArg(const ApplicationId& applicationId,
    const char* documentPath);

  void PushToInChannel(applet::LibraryAppletHandle handle) const;
  void SetBootFooterButtonVisible(OfflineFooterButtonId id, bool isVisible);

 private:
  alignas(8) uint8_t m_Data[detail::WebArgDataSize];
};

class ShowSystemDataPageArg {
 public:
  ShowSystemDataPageArg();
  ShowSystemDataPageArg(const ncm::SystemDataId& systemDataId,
    const char* documentPath);

  void SetFooterFixedKind(OfflineFooterFixedKind kind);
  void PushToInChannel(applet::LibraryAppletHandle handle) const;
  void SetBootFooterButtonVisible(OfflineFooterButtonId id, bool isVisible);

 private:
  alignas(8) uint8_t m_Data[detail::WebArgDataSize];
};

}
