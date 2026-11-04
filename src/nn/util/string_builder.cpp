#include "nn/util/string_builder.hpp"

namespace nn::util {

StringBuilder::StringBuilder(char* buffer, size_t size)
  : m_Buffer(buffer), m_Size(size) {
  m_Buffer[0] = '\0';
  m_Length = 0;
  m_IsValid = true;
  m_IsFixed = false;
}

StringBuilder::StringBuilder(Span<char> buffer)
  : m_Buffer(buffer.data), m_Size(buffer.size) {
  m_Buffer[0] = '\0';
  m_Length = 0;
  m_IsValid = true;
  m_IsFixed = false;
}

void StringBuilder::Clear() {
  m_Buffer[0] = '\0';
  m_Length = 0;
  m_IsValid = true;
  m_IsFixed = false;
}

StringBuilder& StringBuilder::Append(char c) {
  if (m_Length + 1 >= m_Size) {
    m_IsValid = false;
  }
  else {
    m_Buffer[m_Length++] = c;
    m_Buffer[m_Length] = '\0';
  }
  return *this;
}

StringBuilder& StringBuilder::Append(const char* str) {
  for (; *str != '\0'; ++str) {
    if (m_Length + 1 >= m_Size) {
      m_IsValid = false;
      break;
    }
    m_Buffer[m_Length++] = *str;
  }
  m_Buffer[m_Length] = '\0';
  return *this;
}

StringBuilder& StringBuilder::AppendFormat(const char* format, ...) {
  va_list args;
  va_start(args, format);
  AppendVFormat(format, args);
  va_end(args);
  return *this;
}

StringBuilder& StringBuilder::AppendVFormat(const char* format,
  va_list args) {
  va_list copy;
  va_copy(copy, args);
  int length =
    VSNPrintf(m_Buffer + m_Length, m_Size - m_Length, format, copy);
  va_end(copy);

  m_Length += length;
  if (m_Length >= m_Size) {
    m_IsValid = false;
    m_Length = m_Size - 1;
  }
  return *this;
}

StringBuilder& StringBuilder::operator+=(char c) {
  return Append(c);
}

StringBuilder& StringBuilder::operator+=(const char* str) {
  return Append(str);
}

bool StringBuilder::Fix() {
  m_Buffer[m_Length] = '\0';
  m_IsFixed = true;
  return m_IsValid;
}

bool StringBuilder::IsValid() const {
  return m_IsValid;
}

const char* StringBuilder::Get() const {
  return m_Buffer;
}

size_t StringBuilder::GetLength() const {
  return m_Length;
}

void* Memmem(const void* haystack, size_t haystackSize, const void* needle,
  size_t needleSize) {
  const uint8_t* bytes = static_cast<const uint8_t*>(haystack);
  const uint8_t* pattern = static_cast<const uint8_t*>(needle);
  if (needleSize == 0) {
    return const_cast<uint8_t*>(bytes);
  }

  if (haystackSize >= needleSize) {
    ptrdiff_t last = haystackSize - needleSize;
    for (ptrdiff_t i = 0; i <= last; ++i) {
      for (size_t j = 0; j < haystackSize - i; ++j) {
        if (bytes[i + j] != pattern[j]) {
          break;
        }
        if (j == needleSize - 1) {
          return const_cast<uint8_t*>(bytes + i);
        }
      }
    }
  }
  return nullptr;
}

}
