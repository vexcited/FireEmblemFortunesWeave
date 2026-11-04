#include "nn/util/uri_parser.hpp"

#include <limits.h>

namespace nn::diag::detail {

[[noreturn]] void AbortImpl();

}

namespace nn::util {

namespace {

bool IsDigit(char c) {
  return c >= '0' && c <= '9';
}

bool IsAlpha(char c) {
  return (c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z');
}

bool IsHexDigit(char c) {
  return IsDigit(c) || (c >= 'A' && c <= 'F') || (c >= 'a' && c <= 'f');
}

// Kept out of line, every validation loop calls it.
__attribute__((noinline)) bool IsPathCharacter(char c) {
  if (IsDigit(c) || IsAlpha(c)) {
    return true;
  }
  switch (c) {
    case '!':
    case '$':
    case '&':
    case '\'':
    case '(':
    case ')':
    case '*':
    case '+':
    case ',':
    case ';':
    case '=':
    case '-':
    case '.':
    case '_':
    case '~':
      return true;
    default:
      return c == '@' || c == ':';
  }
}

template <typename... Chars> constexpr uint64_t MakeMask(Chars... chars) {
  return ((static_cast<uint64_t>(1) << (chars - '!')) | ...);
}

bool IsSubDelimiterOrUnreserved(char c) {
  constexpr uint64_t Mask = MakeMask('!', '$', '&', '\'', '(', ')', '*', '+',
    ',', ';', '=', '-', '.', '_');
  unsigned int offset = static_cast<unsigned char>(c) - '!';
  return IsDigit(c) || IsAlpha(c) || (offset < 64 && ((Mask >> offset) & 1))
    || c == '~';
}

template <typename Predicate>
bool IsValidEncodedRange(const char* begin, const char* end,
  Predicate isAllowed) {
  int pendingHexDigits = 0;
  for (const char* p = begin; p != end; ++p) {
    char c = *p;
    if (pendingHexDigits != 0) {
      if (!IsHexDigit(c)) {
        return false;
      }
      --pendingHexDigits;
    }
    else if (c == '%') {
      pendingHexDigits = 2;
    }
    else if (!isAllowed(c)) {
      return false;
    }
  }
  return pendingHexDigits == 0;
}

bool IsValidLabel(const char* begin, const char* end) {
  if (static_cast<unsigned int>(end - begin - 1) > 62 || *begin == '-'
    || end[-1] == '-') {
    return false;
  }
  for (const char* p = begin; p != end; ++p) {
    if (!IsDigit(*p) && !IsAlpha(*p) && (*p | 8) != '-') {
      return false;
    }
  }
  return true;
}

bool IsValidQueryOrFragmentCharacter(char c, int* pPendingHexDigits) {
  if (*pPendingHexDigits != 0) {
    if (!IsHexDigit(c)) {
      return false;
    }
    --*pPendingHexDigits;
    return true;
  }
  if (c == '%') {
    *pPendingHexDigits = 2;
    return true;
  }
  bool isPathCharacter = IsPathCharacter(c);
  return c == '/' || c == '?' || isPathCharacter;
}

}

UriParser::UriParser() : m_Parts(), m_IsParsed(false) {}

bool UriParser::Parse(const char* uri, Option option) {
  int length = 0;
  while (length < INT_MAX && uri[length] != '\0') {
    ++length;
  }
  return Parse(uri, static_cast<unsigned int>(length), option);
}

bool UriParser::Parse(const char* uri, size_t length, Option option) {
  m_Parts = Parts();
  m_IsParsed = false;

  const char* current = uri;
  const char* end = uri + length;
  bool hasAuthorityRoom;
  if ((option & Option_AllowRelativeReference) != 0) {
    hasAuthorityRoom = static_cast<int>(length) >= 2;
  }
  else {
    if (static_cast<int>(length) < 2 || !ParseScheme(uri, end)) {
      return false;
    }
    current = m_Parts.scheme.m_End + 1;
    hasAuthorityRoom = static_cast<int>(end - current) >= 2;
  }

  if (hasAuthorityRoom && current[0] == '/' && current[1] == '/') {
    if (!ParseAuthority(current + 2, end,
      (option & Option_DomainNameHost) != 0)) {
      return false;
    }
    current = m_Parts.authority.m_End;
  }

  if (!ParsePath(current, end,
    (option & Option_AllowRelativeReference) != 0)) {
    return false;
  }

  const char* last = m_Parts.path.m_End;
  if (!ParseQuery(last, end)) {
    return false;
  }
  if (m_Parts.query.m_Begin != nullptr) {
    last = m_Parts.query.m_End;
  }
  if (!ParseFragment(last, end)) {
    return false;
  }
  if (m_Parts.fragment.m_Begin != nullptr) {
    last = m_Parts.fragment.m_End;
  }

  m_IsParsed = last == end;
  return m_IsParsed;
}

const UriParser::Parts& UriParser::GetParts() const {
  return m_Parts;
}

bool UriParser::ParseScheme(const char* begin, const char* end) {
  if (static_cast<int>(end - begin) < 2 || !IsAlpha(*begin)) {
    return false;
  }
  for (const char* p = begin + 1; p != end; ++p) {
    char c = *p;
    if (c == ':') {
      m_Parts.scheme.m_Begin = begin;
      m_Parts.scheme.m_End = p;
      return true;
    }
    if (!IsDigit(c) && !IsAlpha(c) && c != '+' && c != '-' && c != '.') {
      return false;
    }
  }
  return false;
}

bool UriParser::ParseQuery(const char* begin, const char* end) {
  if (begin == end || *begin != '?') {
    return true;
  }

  const char* queryBegin = begin + 1;
  const char* queryEnd = queryBegin;
  m_Parts.query.m_Begin = queryBegin;
  while (queryEnd != end && *queryEnd != '#') {
    ++queryEnd;
  }
  m_Parts.query.m_End = queryEnd;
  if (queryEnd - begin < 2) {
    return true;
  }

  int pendingHexDigits = 0;
  for (const char* p = queryBegin; p < queryEnd; ++p) {
    if (!IsValidQueryOrFragmentCharacter(*p, &pendingHexDigits)) {
      return false;
    }
  }
  return pendingHexDigits == 0;
}

bool UriParser::ParseFragment(const char* begin, const char* end) {
  if (begin == end || *begin != '#') {
    return true;
  }

  m_Parts.fragment.m_Begin = begin + 1;
  m_Parts.fragment.m_End = end;
  int pendingHexDigits = 0;
  for (const char* p = begin + 1; p < end; ++p) {
    if (!IsValidQueryOrFragmentCharacter(*p, &pendingHexDigits)) {
      return false;
    }
  }
  return pendingHexDigits == 0;
}

bool UriParser::ParseHostAsIpv6(const char* begin, const char* end) {
  m_Parts.host.m_Begin = begin;
  const char* p = begin + 1;
  for (; p != end && *p != ']'; ++p) {
    char c = *p;
    if (!IsHexDigit(c) && c != ':' && c != '.') {
      return false;
    }
  }
  if (p != end) {
    m_Parts.host.m_End = p + 1;
  }
  return m_Parts.host.m_End != nullptr
    && static_cast<int>(m_Parts.host.m_End - begin) != 2;
}

bool UriParser::ParsePort(const char* begin, const char* end) {
  if (*begin != ':') {
    return true;
  }
  for (const char* p = begin + 1; p != end; ++p) {
    if (!IsDigit(*p)) {
      return false;
    }
  }
  m_Parts.port.m_Begin = begin + 1;
  m_Parts.port.m_End = end;
  return true;
}

// The authority parser calls these out of line in the original.
__attribute__((noinline)) bool UriParser::ParseUserInfo(const char* begin,
  const char* end) {
  for (const char* p = begin; p != end; ++p) {
    if (*p == '@') {
      m_Parts.userInfo.m_End = p;
      break;
    }
  }
  const char* userInfoEnd = m_Parts.userInfo.m_End;
  if (userInfoEnd == nullptr) {
    return true;
  }

  m_Parts.userInfo.m_Begin = begin;
  if (begin >= userInfoEnd) {
    return true;
  }
  return IsValidEncodedRange(begin, userInfoEnd, [](char c) {
    return IsSubDelimiterOrUnreserved(c) || c == ':';
  });
}

// Labels may also contain a percent sign, only the dash is meant here.
__attribute__((noinline)) bool UriParser::ParseHostAsDomainNameOrIpv4(
  const char* begin, const char* end) {
  if (static_cast<unsigned int>(end - begin - 1) > 252) {
    return false;
  }

  m_Parts.host.m_Begin = begin;
  m_Parts.host.m_End = end;
  const char* label = begin;
  for (const char* p = begin; p != end;) {
    if (*p == '.') {
      if (!IsValidLabel(label, p)) {
        return false;
      }
      label = ++p;
    }
    else if (*p == ':') {
      m_Parts.host.m_End = p;
      end = p;
      break;
    }
    else {
      ++p;
    }
  }
  return IsValidLabel(label, end);
}

__attribute__((noinline)) bool UriParser::ParseHost(const char* begin,
  const char* end) {
  m_Parts.host.m_Begin = begin;
  m_Parts.host.m_End = end;
  if (begin == end) {
    return true;
  }

  for (const char* p = begin; p != end; ++p) {
    if (*p == ':') {
      m_Parts.host.m_End = p;
      end = p;
      break;
    }
  }
  if (begin >= end) {
    return true;
  }
  return IsValidEncodedRange(begin, end, IsSubDelimiterOrUnreserved);
}

__attribute__((noinline)) bool UriParser::ParseAuthority(const char* begin,
  const char* end, bool isDomainName) {
  m_Parts.authority.m_Begin = begin;
  const char* authorityEnd = begin;
  while (authorityEnd != end && *authorityEnd != '/' && *authorityEnd != '?'
    && *authorityEnd != '#') {
    ++authorityEnd;
  }
  m_Parts.authority.m_End = authorityEnd;

  if (!ParseUserInfo(begin, authorityEnd)) {
    return false;
  }

  authorityEnd = m_Parts.authority.m_End;
  const char* hostBegin = m_Parts.userInfo.m_Begin != nullptr
    ? m_Parts.userInfo.m_End + 1 : begin;
  if (*hostBegin == '[') {
    if (!ParseHostAsIpv6(hostBegin, authorityEnd)) {
      return false;
    }
  }
  else if (isDomainName) {
    if (!ParseHostAsDomainNameOrIpv4(hostBegin, authorityEnd)) {
      return false;
    }
  }
  else if (!ParseHost(hostBegin, authorityEnd)) {
    return false;
  }

  authorityEnd = m_Parts.authority.m_End;
  if (!ParsePort(m_Parts.host.m_End, authorityEnd)) {
    return false;
  }
  const char* last = m_Parts.port.m_Begin != nullptr ? m_Parts.port.m_End
    : m_Parts.host.m_End;
  return last == authorityEnd;
}

__attribute__((noinline)) bool UriParser::ParsePath(const char* begin,
  const char* end, bool isRelative) {
  m_Parts.path.m_Begin = begin;
  const char* pathEnd = begin;
  while (pathEnd != end && *pathEnd != '#' && *pathEnd != '?') {
    ++pathEnd;
  }
  m_Parts.path.m_End = pathEnd;

  int pendingHexDigits = 0;
  for (const char* p = begin; p < pathEnd; ++p) {
    char c = *p;
    if (pendingHexDigits != 0) {
      if (!IsHexDigit(c)) {
        return false;
      }
      --pendingHexDigits;
    }
    else if (c == '%') {
      pendingHexDigits = 2;
    }
    else {
      bool isPathCharacter = IsPathCharacter(c);
      if (c != '/' && !isPathCharacter) {
        return false;
      }
    }
  }
  if (pendingHexDigits != 0) {
    return false;
  }

  // An empty segment, two slashes in a row, is rejected.
  int length = static_cast<int>(pathEnd - begin);
  if (length < 0) {
    nn::diag::detail::AbortImpl();
  }
  if (length != 0 && *begin != '\0') {
    const char* limit = begin + length;
    const char* p = begin;
    char c = *p;
    while (true) {
      const char* next = p + 1;
      if (c == '/' && next < limit && *next == '/') {
        return false;
      }
      c = *next;
      if (c == '\0' || next >= limit) {
        break;
      }
      p = next;
    }
  }

  if (begin != pathEnd && isRelative) {
    for (const char* p = begin; p != pathEnd; ++p) {
      if (*p == '/') {
        break;
      }
      if (*p == ':') {
        return false;
      }
    }
  }
  return true;
}

}
