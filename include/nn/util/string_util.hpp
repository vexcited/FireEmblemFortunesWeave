#pragma once

#include <stddef.h>
#include <string.h>

namespace nn::diag::detail {

[[noreturn]] void AbortImpl();

}

namespace nn::util {

int SNPrintf(char* buffer, size_t size, const char* format, ...);

template<typename T>
int Strnlen(const T* string, int count) {
  int length = 0;
  while (length < count && string[length] != 0) {
    ++length;
  }
  return length;
}

template<typename T>
int Strncmp(const T* lhs, const T* rhs, int count) {
  if (count == 0) {
    return 0;
  }
  T l;
  T r;
  do {
    l = *lhs++;
    r = *rhs++;
  } while (l != 0 && l == r && --count != 0);
  return l - r;
}

template<typename T>
T ToLower(T c) {
  return c >= 'A' && c <= 'Z' ? c + ('a' - 'A') : c;
}

template<typename T>
int Strnicmp(const T* lhs, const T* rhs, int count) {
  if (count < 0) {
    diag::detail::AbortImpl();
  }
  if (count == 0) {
    return 0;
  }
  T l;
  T r;
  do {
    l = ToLower(*lhs++);
    r = ToLower(*rhs++);
  } while (l != 0 && l == r && --count != 0);
  return l - r;
}

template<typename T>
int Strlcpy(T* destination, const T* source, int size) {
  const T* cursor = source;
  if (size > 0) {
    int remaining = size - 1;
    while (remaining != 0 && *cursor != 0) {
      *destination++ = *cursor++;
      --remaining;
    }
    *destination = 0;
  }
  return static_cast<int>(cursor - source + strlen(cursor));
}

}
