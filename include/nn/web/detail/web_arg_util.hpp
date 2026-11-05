#pragma once

#include <stddef.h>
#include <stdint.h>
#include <string.h>

namespace nn::web::detail {

const size_t WebArgDataSize = 0x2000;

enum WebArgKind : int32_t {
  WebArgKind_Url = 0x1,
  WebArgKind_CallbackUrl = 0x3,
  WebArgKind_CallbackableUrl = 0x4,
  WebArgKind_ApplicationId = 0x5,
  WebArgKind_DocumentPath = 0x6,
  WebArgKind_DocumentKind = 0x7,
  WebArgKind_SystemDataId = 0x8,
  WebArgKind_ShareStartPage = 0x9,
  WebArgKind_Unknown0C = 0xc,
  WebArgKind_UidIsNone = 0xd,
  WebArgKind_Uid = 0xe,
  WebArgKind_AlbumEntry0 = 0xf,
  WebArgKind_ScreenShotEnabled = 0x10,
  WebArgKind_EcClientCertEnabled = 0x11,
  WebArgKind_PlayReportEnabled = 0x13,
  WebArgKind_Unknown14 = 0x14,
  WebArgKind_Unknown15 = 0x15,
  WebArgKind_BootDisplayKind = 0x17,
  WebArgKind_BackgroundKind = 0x18,
  WebArgKind_FooterEnabled = 0x19,
  WebArgKind_PointerEnabled = 0x1a,
  WebArgKind_LeftStickMode = 0x1b,
  WebArgKind_KeyRepeatDelayFrame = 0x1c,
  WebArgKind_KeyRepeatPulseFrame = 0x1d,
  WebArgKind_BootAsMediaPlayerInverted = 0x1e,
  WebArgKind_DisplayUrlKind = 0x1f,
  WebArgKind_BootAsMediaPlayer = 0x21,
  WebArgKind_ShopJumpEnabled = 0x22,
  WebArgKind_MediaAutoPlayDisabled = 0x23,
  WebArgKind_LobbyParameter = 0x24,
  WebArgKind_ApplicationAlbumEntry = 0x26,
  WebArgKind_JsExtensionEnabled = 0x27,
  WebArgKind_AdditionalCommentText = 0x28,
  WebArgKind_TouchEnabledOnContents = 0x29,
  WebArgKind_UserAgentAdditionalString = 0x2a,
  WebArgKind_AdditionalMediaData0 = 0x2b,
  WebArgKind_MediaPlayerAutoCloseEnabled = 0x2c,
  WebArgKind_PageCacheEnabled = 0x2d,
  WebArgKind_WebAudioEnabled = 0x2e,
  WebArgKind_YouTubeVideoWhitelist = 0x31,
  WebArgKind_FooterFixedKind = 0x32,
  WebArgKind_PageFadeEnabled = 0x33,
  WebArgKind_MediaCreatorApplicationRatingAge = 0x34,
  WebArgKind_BootLoadingIconEnabled = 0x35,
  WebArgKind_PageScrollIndicatorEnabled = 0x36,
  WebArgKind_MediaPlayerSpeedControlEnabled = 0x37,
  WebArgKind_BootFooterButton = 0x3e,
  WebArgKind_OverrideWebAudioVolume = 0x3f,
  WebArgKind_OverrideMediaAudioVolume = 0x40,
  WebArgKind_SessionBootMode = 0x41,
  WebArgKind_SessionEnabled = 0x42,
  WebArgKind_MediaPlayerUiEnabled = 0x43,
  WebArgKind_TransferMemoryEnabled = 0x44,
  WebArgKind_NxCompatibleModeEnabled = 0x50,
  WebArgKind_MediaPlayerClosedCaptionControlEnabled = 0x51,
  WebArgKind_Gen0MouseEnabled = 0x52,
  WebArgKind_StreamPlayShareEnabled = 0x53,
  WebArgKind_StreamPlayShareEnabled2 = 0x54,
  WebArgKind_AdditionalMediaData1 = 0x3b,
  WebArgKind_AdditionalMediaData2 = 0x3c,
  WebArgKind_AdditionalMediaData3 = 0x3d,
  WebArgKind_AlbumEntry1 = 0x38,
  WebArgKind_AlbumEntry2 = 0x39,
  WebArgKind_AlbumEntry3 = 0x3a,
  WebArgKind_AlbumEntry4 = 0x45,
  WebArgKind_AlbumEntry5 = 0x46,
  WebArgKind_AlbumEntry6 = 0x47,
  WebArgKind_AlbumEntry7 = 0x48,
  WebArgKind_AlbumEntry8 = 0x49,
  WebArgKind_AdditionalMediaData4 = 0x4a,
  WebArgKind_AdditionalMediaData5 = 0x4b,
  WebArgKind_AdditionalMediaData6 = 0x4c,
  WebArgKind_AdditionalMediaData7 = 0x4d,
  WebArgKind_AdditionalMediaData8 = 0x4e,
};

struct WebArgHeader {
  uint16_t count;
  uint16_t reserved;
  uint32_t shimKind;
};

struct WebArgTlv {
  uint16_t kind;
  uint16_t size;
  uint32_t reserved;
};

inline WebArgTlv* FindWebArgTlv(size_t* pOutOffset, uint8_t* data,
  uint16_t kind) {
  auto* header = reinterpret_cast<WebArgHeader*>(data);
  size_t offset = sizeof(WebArgHeader);

  for (uint32_t count = header->count; count != 0; count--) {
    auto* tlv = reinterpret_cast<WebArgTlv*>(data + offset);
    if (tlv->kind == kind) {
      return tlv;
    }

    offset += sizeof(WebArgTlv) + tlv->size;
  }

  *pOutOffset = offset;
  return nullptr;
}

inline const WebArgTlv* FindWebArgTlv(const uint8_t* data, uint16_t kind) {
  auto* header = reinterpret_cast<const WebArgHeader*>(data);
  size_t offset = sizeof(WebArgHeader);

  for (uint32_t count = header->count; count != 0; count--) {
    auto* tlv = reinterpret_cast<const WebArgTlv*>(data + offset);
    if (tlv->kind == kind) {
      return tlv;
    }

    offset += sizeof(WebArgTlv) + tlv->size;
  }

  return nullptr;
}

template <typename T>
inline void SetWebArgData(uint8_t* data, uint16_t kind, const T& value) {
  size_t offset;
  WebArgTlv* tlv = FindWebArgTlv(&offset, data, kind);

  if (tlv != nullptr) {
    if (tlv->size == sizeof(T)) {
      memset(tlv + 1, 0, sizeof(T));
      memcpy(tlv + 1, &value, sizeof(T));
    }

    return;
  }

  if (offset + sizeof(T) >= WebArgDataSize) {
    return;
  }

  tlv = reinterpret_cast<WebArgTlv*>(data + offset);
  memcpy(tlv + 1, &value, sizeof(T));
  *tlv = {kind, sizeof(T), 0};

  reinterpret_cast<WebArgHeader*>(data)->count++;
}

inline void SetWebArgString(uint8_t* data, uint16_t kind, const char* value,
  size_t size) {
  size_t length = strlen(value) + 1;
  if (length > size) {
    return;
  }

  size_t offset;
  WebArgTlv* tlv = FindWebArgTlv(&offset, data, kind);

  if (tlv != nullptr) {
    if (tlv->size == size) {
      memset(tlv + 1, 0, size);
      memcpy(tlv + 1, value, length);
    }

    return;
  }

  if (offset + size >= WebArgDataSize) {
    return;
  }

  const WebArgTlv newTlv = {kind, static_cast<uint16_t>(size), 0};
  memcpy(data + offset, &newTlv, sizeof(newTlv));
  memcpy(data + offset + sizeof(newTlv), value, length);

  reinterpret_cast<WebArgHeader*>(data)->count++;
}

template <typename T>
inline const T* GetWebArgData(const uint8_t* data, uint16_t kind) {
  const WebArgTlv* tlv = FindWebArgTlv(data, kind);
  if (tlv == nullptr) {
    return nullptr;
  }

  return reinterpret_cast<const T*>(tlv + 1);
}

inline void InitializeWebArg(uint8_t* data, uint32_t shimKind) {
  memset(data, 0, WebArgDataSize);
  reinterpret_cast<WebArgHeader*>(data)->shimKind = shimKind;
}

}
