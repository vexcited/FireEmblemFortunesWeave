#pragma once

#include <stddef.h>
#include <stdint.h>

#include "nn/account/account_types.hpp"
#include "nn/web/detail/web_arg_detail.hpp"

namespace nn::web {

enum WebLeftStickMode : int32_t {
  WebLeftStickMode_Pointer,
  WebLeftStickMode_Cursor,
};

enum WebFooterFixedKind : int32_t {};
enum WebBackgroundKind : int32_t {};
enum WebBootDisplayKind : int32_t {};

enum WebDisplayUrlKind : int32_t {
  WebDisplayUrlKind_Hidden,
  WebDisplayUrlKind_Visible,
};

const size_t WebUrlSize = 3072;
const size_t WebCallbackUrlSize = 1024;
const size_t WebUserAgentAdditionalStringSize = 128;

class ShowWebPageArg {
 public:
  ShowWebPageArg();
  explicit ShowWebPageArg(const char* url);

  void SetBootAsMediaPlayer(bool isBootAsMediaPlayer);
  void SetCallbackUrl(const char* url);
  void SetCallbackableUrl(const char* url);
  void SetPointerEnabled(bool isEnabled);
  void SetLeftStickMode(WebLeftStickMode mode);
  void SetUid(const account::Uid& uid);
  void SetFooterFixedKind(WebFooterFixedKind kind);
  void SetBackgroundKind(WebBackgroundKind kind);
  void SetBootDisplayKind(WebBootDisplayKind kind);
  void SetJsExtensionEnabled(bool isEnabled);
  void SetDisplayUrlKind(WebDisplayUrlKind kind);
  void SetTouchEnabledOnContents(bool isEnabled);
  void SetUserAgentAdditionalString(const char* string);
  void SetMediaPlayerAutoCloseEnabled(bool isEnabled);
  void SetPageCacheEnabled(bool isEnabled);
  void SetPageFadeEnabled(bool isEnabled);
  void SetWebAudioEnabled(bool isEnabled);
  void SetPageScrollIndicatorEnabled(bool isEnabled);
  void SetMediaPlayerSpeedControlEnabled(bool isEnabled);
  void SetMediaPlayerClosedCaptionControlEnabled(bool isEnabled);
  void SetMediaAutoPlayEnabled(bool isEnabled);
  void OverrideWebAudioVolume(float volume);
  void OverrideMediaAudioVolume(float volume);
  uint8_t* Data();

 private:
  alignas(8) uint8_t m_Data[detail::WebArgDataSize];
};

class ShowYouTubeVideoArg {
 public:
  ShowYouTubeVideoArg();
  explicit ShowYouTubeVideoArg(const char* url);

  void SetBootDisplayKind(WebBootDisplayKind kind);
  void SetMediaPlayerAutoCloseEnabled(bool isEnabled);
  void SetMediaPlayerSpeedControlEnabled(bool isEnabled);
  void SetMediaPlayerClosedCaptionControlEnabled(bool isEnabled);
  void SetBootAsWebPage(bool isBootAsWebPage);
  const uint8_t* Data() const;

 private:
  alignas(8) uint8_t m_Data[detail::WebArgDataSize];
};

}
