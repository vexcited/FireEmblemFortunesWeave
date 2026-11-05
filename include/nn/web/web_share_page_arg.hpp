#pragma once

#include <stddef.h>
#include <stdint.h>

#include "nn/account/account_types.hpp"
#include "nn/capsrv/capsrv_album_types.hpp"
#include "nn/web/detail/web_arg_detail.hpp"

namespace nn::web {

enum ShareStartPage : int32_t {
  ShareStartPage_Default,
  ShareStartPage_Settings,
};

const size_t ShareAdditionalCommentTextSize = 1024;
const size_t ShareMediaDataSize = 16;
const size_t LobbyParameterSize = 256;

class ShowSharePageArg {
 public:
  ShowSharePageArg();
  explicit ShowSharePageArg(ShareStartPage startPage);

  void SetUid(const account::Uid& uid);
  void SetAlbumEntry(const capsrv::AlbumEntry& entry);
  void AddAlbumEntryAndMediaData(const capsrv::AlbumEntry& entry,
    const uint8_t* data, size_t size);
  void SetApplicationAlbumEntry(const capsrv::ApplicationAlbumEntry& entry);
  void SetAdditionalCommentText(const char* text);
  void SetAdditionalMediaData(const uint8_t* data, size_t size);
  void SetMediaCreatorApplicationRatingAge(const int8_t (&ratingAge)[32]);
  void PushToInChannel(applet::LibraryAppletHandle handle) const;

 private:
  alignas(8) uint8_t m_Data[detail::WebArgDataSize];
};

class ShowLobbyPageArg {
 public:
  ShowLobbyPageArg();

  void SetUid(const account::Uid& uid);
  void SetLobbyParameter(const char* parameter);

 private:
  alignas(8) uint8_t m_Data[detail::WebArgDataSize];
};

}
