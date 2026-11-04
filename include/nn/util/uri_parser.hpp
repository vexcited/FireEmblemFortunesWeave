#pragma once

#include <stddef.h>
#include <stdint.h>

namespace nn::util {

class UriPart {
public:
  const char* GetPointer() const;
  size_t GetLength() const;
  bool Exists() const;
  bool Compare(const char* str) const;
  bool Compare(const char* str, size_t length) const;
  bool CompareInsensitive(const char* str) const;
  bool CompareInsensitive(const char* str, size_t length) const;
  bool ParseInteger(uint16_t* pOutValue) const;

  const char* m_Begin;
  const char* m_End;
};

class UriParser {
public:
  enum Option {
    Option_None = 0,
    Option_DomainNameHost = 1 << 0,
    Option_AllowRelativeReference = 1 << 1,
  };

  struct Parts {
    UriPart scheme;
    UriPart authority;
    UriPart userInfo;
    UriPart host;
    UriPart port;
    UriPart path;
    UriPart query;
    UriPart fragment;
  };

  UriParser();

  bool Parse(const char* uri, Option option);
  bool Parse(const char* uri, size_t length, Option option);
  const Parts& GetParts() const;

private:
  bool ParseScheme(const char* begin, const char* end);
  bool ParseAuthority(const char* begin, const char* end, bool hasScheme);
  bool ParsePath(const char* begin, const char* end, bool hasAuthority);
  bool ParseQuery(const char* begin, const char* end);
  bool ParseFragment(const char* begin, const char* end);
  bool ParseUserInfo(const char* begin, const char* end);
  bool ParseHostAsDomainNameOrIpv4(const char* begin, const char* end);
  bool ParseHost(const char* begin, const char* end);
  bool ParseHostAsIpv6(const char* begin, const char* end);
  bool ParsePort(const char* begin, const char* end);

  Parts m_Parts;
  bool m_IsParsed;
};

}
