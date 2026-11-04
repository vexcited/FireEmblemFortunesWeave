#pragma once

#include <stdarg.h>
#include <stddef.h>
#include <stdint.h>

#include "nn/span.hpp"

namespace nn::util {

class StringBuilder {
public:
  StringBuilder(char* buffer, size_t size);
  explicit StringBuilder(Span<char> buffer);

  void Clear();
  StringBuilder& Append(char c);
  StringBuilder& Append(const char* str);
  StringBuilder& AppendFormat(const char* format, ...);
  StringBuilder& AppendVFormat(const char* format, va_list args);
  StringBuilder& operator+=(char c);
  StringBuilder& operator+=(const char* str);
  bool Fix();
  bool IsValid() const;
  const char* Get() const;
  size_t GetLength() const;

private:
  char* m_Buffer;
  size_t m_Size;
  size_t m_Length;
  bool m_IsValid;
  bool m_IsFixed;
};

void* Memmem(const void* haystack, size_t haystackSize, const void* needle,
  size_t needleSize);
int VSNPrintf(char* buffer, size_t size, const char* format, va_list args);

}
