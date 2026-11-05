#include <string.h>
#include <strings.h>

#include "nn/movie/movie_media_extractor.hpp"

namespace nn::movie::detail {

MediaExtractorImpl::TrackInfo::TrackInfo()
  : m_TrackIndex(-1), m_IsSelected(false) {
}

MediaExtractorImpl::TrackInfo::~TrackInfo() {
}

bool MediaExtractorImpl::IsHlsUri(const char* uri) {
  return strstr(uri, ".m3u8") != nullptr;
}

bool MediaExtractorImpl::IsHttpLiveUri(const char* uri) {
  if (strncasecmp("http://", uri, 7) != 0 &&
      strncasecmp("https://", uri, 8) != 0 &&
      strncasecmp("file://", uri, 7) != 0) {
    return false;
  }

  size_t length = strlen(uri);
  if (length >= 5 && strcasecmp(".m3u8", uri + length - 5) == 0) {
    return true;
  }

  return strstr(uri, "m3u8") != nullptr;
}

Result MediaExtractorImpl::DoSetUpStreamSource(
  std::shared_ptr<void> argument) {
  return {};
}

Result MediaExtractorImpl::GetStreamSourceSeekPosition(int64_t* pOutPosition) {
  return {};
}

Result MediaExtractorImpl::SendStreamSourceData(const void* data,
  int64_t size) {
  return {};
}

Result MediaExtractorImpl::GetTaskCompletedResult() {
  return m_TaskCompletedResult;
}

}
