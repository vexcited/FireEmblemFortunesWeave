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

enum ShareExitReason : int32_t {};
enum WebExitReason : int32_t {};

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

 private:
  uint8_t m_Data[8192];
};

class WebPageReturnValue {
 public:
  WebPageReturnValue();

  const uint8_t* Data() const;

 private:
  uint8_t m_Data[8192];
};

namespace detail {

class SharePageReturnValue2_0 {
 public:
  SharePageReturnValue2_0();

  void SetShareExitReason(ShareExitReason exitReason);

 private:
  uint64_t m_ExitReason;
  char m_LastUrl[4096];
  uint64_t m_LastUrlSize;
};

class WebPageReturnValue6_0 {
 public:
  WebPageReturnValue6_0();

  void SetWebExitReason(WebExitReason exitReason);

 private:
  uint64_t m_ExitReason;
  char m_LastUrl[4096];
  uint64_t m_LastUrlSize;
  uint64_t m_Reserved;
};

}

}
