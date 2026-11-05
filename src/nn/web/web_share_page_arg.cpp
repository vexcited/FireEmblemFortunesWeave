#include "nn/web/web_share_page_arg.hpp"

namespace nn::web {

using namespace detail;

namespace {

struct MediaData {
  uint8_t value[ShareMediaDataSize];
};

struct RatingAge {
  int8_t value[32];
};

const int AlbumEntryCountMax = 9;

const WebArgKind AlbumEntryKinds[AlbumEntryCountMax] = {
  WebArgKind_AlbumEntry0, WebArgKind_AlbumEntry1, WebArgKind_AlbumEntry2,
  WebArgKind_AlbumEntry3, WebArgKind_AlbumEntry4, WebArgKind_AlbumEntry5,
  WebArgKind_AlbumEntry6, WebArgKind_AlbumEntry7, WebArgKind_AlbumEntry8,
};

const WebArgKind MediaDataKinds[AlbumEntryCountMax] = {
  WebArgKind_AdditionalMediaData0, WebArgKind_AdditionalMediaData1,
  WebArgKind_AdditionalMediaData2, WebArgKind_AdditionalMediaData3,
  WebArgKind_AdditionalMediaData4, WebArgKind_AdditionalMediaData5,
  WebArgKind_AdditionalMediaData6, WebArgKind_AdditionalMediaData7,
  WebArgKind_AdditionalMediaData8,
};

MediaData MakeMediaData(const uint8_t* data, size_t size) {
  MediaData media = {};
  memcpy(&media, data, size < sizeof(media) ? size : sizeof(media));
  return media;
}

}

ShowSharePageArg::ShowSharePageArg() {
  InitializeWebArg(m_Data, 4);
  SetWebArgData(m_Data, WebArgKind_LeftStickMode, OfflineLeftStickMode_Cursor);
  const account::Uid uid = {};
  SetWebArgData(m_Data, WebArgKind_Uid, uid);
  SetWebArgData(m_Data, WebArgKind_DisplayUrlKind, true);
  SetWebArgData(m_Data, WebArgKind_Unknown14, true);
  SetWebArgData(m_Data, WebArgKind_Unknown15, true);
  SetWebArgData(m_Data, WebArgKind_BootDisplayKind, 3);
}

void ShowSharePageArg::SetUid(const account::Uid& uid) {
  SetWebArgData(m_Data, WebArgKind_Uid, uid);
}

ShowSharePageArg::ShowSharePageArg(ShareStartPage startPage)
  : ShowSharePageArg() {
  SetWebArgData(m_Data, WebArgKind_ShareStartPage, startPage);
}

void ShowSharePageArg::SetAlbumEntry(const capsrv::AlbumEntry& entry) {
  SetWebArgData(m_Data, WebArgKind_AlbumEntry0, entry);
}

void ShowSharePageArg::AddAlbumEntryAndMediaData(
  const capsrv::AlbumEntry& entry, const uint8_t* data, size_t size) {
  for (int i = 0; i < AlbumEntryCountMax; i++) {
    size_t offset;
    if (FindWebArgTlv(&offset, m_Data, AlbumEntryKinds[i]) != nullptr) {
      continue;
    }

    SetWebArgData(m_Data, AlbumEntryKinds[i], entry);
    if (data != nullptr || size != 0) {
      SetWebArgData(m_Data, MediaDataKinds[i], MakeMediaData(data, size));
    }

    return;
  }
}

void ShowSharePageArg::SetApplicationAlbumEntry(
  const capsrv::ApplicationAlbumEntry& entry) {
  SetWebArgData(m_Data, WebArgKind_ApplicationAlbumEntry, entry);
}

void ShowSharePageArg::SetAdditionalCommentText(const char* text) {
  SetWebArgString(m_Data, WebArgKind_AdditionalCommentText, text,
    ShareAdditionalCommentTextSize);
}

void ShowSharePageArg::SetAdditionalMediaData(const uint8_t* data,
  size_t size) {
  SetWebArgData(m_Data, WebArgKind_AdditionalMediaData0,
    MakeMediaData(data, size));
}

void ShowSharePageArg::SetMediaCreatorApplicationRatingAge(
  const int8_t (&ratingAge)[32]) {
  SetWebArgData(m_Data, WebArgKind_MediaCreatorApplicationRatingAge,
    reinterpret_cast<const RatingAge&>(ratingAge));
}

void ShowSharePageArg::PushToInChannel(
  applet::LibraryAppletHandle handle) const {
  PushWebArgToInChannel(handle, m_Data);
}

ShowLobbyPageArg::ShowLobbyPageArg() {
  InitializeWebArg(m_Data, 7);
  SetWebArgData(m_Data, WebArgKind_LeftStickMode, OfflineLeftStickMode_Cursor);
  SetWebArgData(m_Data, WebArgKind_PointerEnabled, false);
  const account::Uid uid = {};
  SetWebArgData(m_Data, WebArgKind_Uid, uid);
  SetWebArgData(m_Data, WebArgKind_Unknown14, true);
  SetWebArgData(m_Data, WebArgKind_Unknown15, true);
  SetWebArgData(m_Data, WebArgKind_BootDisplayKind, 4);
  SetWebArgData(m_Data, WebArgKind_BackgroundKind, 2);
  SetWebArgData(m_Data, WebArgKind_BootAsMediaPlayerInverted, false);
}

void ShowLobbyPageArg::SetUid(const account::Uid& uid) {
  SetWebArgData(m_Data, WebArgKind_Uid, uid);
}

void ShowLobbyPageArg::SetLobbyParameter(const char* parameter) {
  SetWebArgString(m_Data, WebArgKind_LobbyParameter, parameter,
    LobbyParameterSize);
}

}
