#include "nn/util/uri_parser.hpp"

#include <limits.h>
#include <stdlib.h>
#include <string.h>

namespace nn::diag::detail {

[[noreturn]] void AbortImpl();

}

namespace nn::util {

namespace {

size_t GetBoundedLength(const char* str) {
  int length = 0;
  while (length < INT_MAX && str[length] != '\0') {
    ++length;
  }
  return static_cast<unsigned int>(length);
}

char ToLower(char c) {
  return c >= 'A' && c <= 'Z' ? c + ('a' - 'A') : c;
}

bool EqualsInsensitive(const char* lhs, const char* rhs, int length) {
  if (length == 0) {
    return true;
  }
  char left;
  char right;
  do {
    left = ToLower(*lhs++);
    right = ToLower(*rhs++);
  } while (left != '\0' && left == right && --length != 0);
  return left == right;
}

}

const char* UriPart::GetPointer() const {
  return m_Begin;
}

size_t UriPart::GetLength() const {
  return m_End - m_Begin;
}

bool UriPart::Exists() const {
  return m_Begin != nullptr && m_End != nullptr;
}

bool UriPart::Compare(const char* str) const {
  return Compare(str, GetBoundedLength(str));
}

bool UriPart::Compare(const char* str, size_t length) const {
  if (length == 0) {
    return m_End == m_Begin;
  }
  if (GetLength() != length) {
    return false;
  }
  return memcmp(m_Begin, str, length) == 0;
}

bool UriPart::CompareInsensitive(const char* str) const {
  size_t length = GetBoundedLength(str);
  if (length == 0) {
    return m_End == m_Begin;
  }
  if (GetLength() != length) {
    return false;
  }
  return EqualsInsensitive(m_Begin, str, static_cast<int>(length));
}

bool UriPart::CompareInsensitive(const char* str, size_t length) const {
  if (length == 0) {
    return m_End == m_Begin;
  }
  if (GetLength() != length) {
    return false;
  }
  if (static_cast<int>(length) < 0) {
    nn::diag::detail::AbortImpl();
  }
  return EqualsInsensitive(m_Begin, str, static_cast<int>(length));
}

bool UriPart::ParseInteger(uint16_t* pOutValue) const {
  if (!Exists() || *m_Begin < '0' || *m_Begin > '9') {
    return false;
  }
  char* end = nullptr;
  unsigned long value = strtoul(m_Begin, &end, 10);
  bool isValid = (end == nullptr || end == m_End) && value < 0x10000;
  if (isValid) {
    *pOutValue = static_cast<uint16_t>(value);
  }
  return isValid;
}

}
