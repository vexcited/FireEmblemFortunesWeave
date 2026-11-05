#pragma once

#include <stddef.h>
#include <stdint.h>

namespace nn::web {

enum LobbyExitReason : int32_t {
  LobbyExitReason_Unknown = 20,
};

enum OfflineExitReason : int32_t {
  OfflineExitReason_Unknown = 20,
};

enum ShareExitReason : int32_t {
  ShareExitReason_Unknown = 20,
};

enum WebExitReason : int32_t {
  WebExitReason_Unknown = 20,
};

enum SharePostResult : int32_t {
  SharePostResult_Success,
  SharePostResult_Canceled,
};

class LobbyPageReturnValue {
 public:
  LobbyPageReturnValue();

  LobbyExitReason GetLobbyExitReason() const;
  const char* GetLastUrl() const;
  size_t GetLastUrlSize() const;

 private:
  uint64_t m_ExitReason;
  char m_LastUrl[4096];
  uint64_t m_LastUrlSize;
};

class OfflineHtmlPageReturnValue {
 public:
  OfflineHtmlPageReturnValue();

  OfflineExitReason GetOfflineExitReason() const;
  const char* GetLastUrl() const;
  size_t GetLastUrlSize() const;

 private:
  uint64_t m_ExitReason;
  char m_LastUrl[4096];
  uint64_t m_LastUrlSize;
};

class SharePageReturnValue {
 public:
  SharePageReturnValue();

  ShareExitReason GetShareExitReason() const;
  const char* GetLastUrl() const;
  size_t GetLastUrlSize() const;
  SharePostResult GetSharePostResult() const;
  const char* GetPostServiceName() const;
  size_t GetPostServiceNameSize() const;
  const char* GetPostId() const;
  size_t GetPostIdSize() const;

 private:
  uint8_t m_Data[8192];
};

class WebPageReturnValue {
 public:
  WebPageReturnValue();

  WebExitReason GetWebExitReason() const;
  const char* GetLastUrl() const;
  size_t GetLastUrlSize() const;
  const uint8_t* Data() const;

 private:
  uint8_t m_Data[8192];
};

namespace detail {

class SharePageReturnValue2_0 {
 public:
  SharePageReturnValue2_0();

  void SetShareExitReason(ShareExitReason exitReason);
  void SetLastUrl(const char* url);

 private:
  uint64_t m_ExitReason;
  char m_LastUrl[4096];
  uint64_t m_LastUrlSize;
};

class WebPageReturnValue6_0 {
 public:
  WebPageReturnValue6_0();

  void SetWebExitReason(WebExitReason exitReason);
  void SetLastUrl(const char* url);

 private:
  uint64_t m_ExitReason;
  char m_LastUrl[4096];
  uint64_t m_LastUrlSize;
  uint64_t m_Reserved;
};

}

}
