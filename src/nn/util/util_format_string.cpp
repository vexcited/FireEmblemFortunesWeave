#include "nn/util/util_format_string.hpp"

#include <stdint.h>
#include <stdio.h>

namespace nn::util {

using FormatOutput = void (*)(uintptr_t argument, const char* string,
  int length);

namespace detail {

// The full formatter keeps more conversion state than the tiny one.
struct FormatContext {
  FormatOutput output;
  uintptr_t argument;
  void (*convert)();
  uint64_t state[6];
};

struct TinyFormatContext {
  FormatOutput output;
  uintptr_t argument;
  void (*convert)();
  uint64_t state[4];
};

struct BufferSink {
  char* current;
  char* end;
  int written;
};

[[gnu::visibility("hidden")]] void FormatStringImpl(void* context,
  const char* format, va_list arguments);
[[gnu::visibility("hidden")]] void ConvertFull();
[[gnu::visibility("hidden")]] void ConvertTiny();
[[gnu::visibility("hidden")]] void WriteToBuffer(uintptr_t argument,
  const char* string, int length);

int ConvertToExponentStyleStringWithPoint(char* buffer, size_t size,
  double value, int precision) {
  return snprintf(buffer, size, "%#.*e", precision, value);
}

}

namespace {

[[gnu::always_inline]] inline void Format(FormatOutput output,
  uintptr_t argument, const char* format, va_list arguments) {
  detail::FormatContext context = {output, argument, detail::ConvertFull};
  detail::FormatStringImpl(&context, format, arguments);
}

[[gnu::always_inline]] inline void TinyFormat(FormatOutput output,
  uintptr_t argument, const char* format, va_list arguments) {
  detail::TinyFormatContext context = {output, argument,
    detail::ConvertTiny};
  detail::FormatStringImpl(&context, format, arguments);
}

// The output is cut at the end of the buffer, the count keeps going.
[[gnu::always_inline]] inline int Print(char* buffer, size_t size,
  const char* format, va_list arguments) {
  detail::BufferSink sink = {buffer, buffer + size, 0};
  if (size != 0) {
    *buffer = '\0';
  }

  detail::FormatContext context = {detail::WriteToBuffer,
    reinterpret_cast<uintptr_t>(&sink), detail::ConvertFull};
  detail::FormatStringImpl(&context, format, arguments);
  return sink.written;
}

[[gnu::always_inline]] inline int TinyPrint(char* buffer, size_t size,
  const char* format, va_list arguments) {
  detail::BufferSink sink = {buffer, buffer + size, 0};
  if (size != 0) {
    *buffer = '\0';
  }

  detail::TinyFormatContext context = {detail::WriteToBuffer,
    reinterpret_cast<uintptr_t>(&sink), detail::ConvertTiny};
  detail::FormatStringImpl(&context, format, arguments);
  return sink.written;
}

}

void VFormatString(FormatOutput output, uintptr_t argument,
  const char* format, va_list arguments) {
  Format(output, argument, format, arguments);
}

void FormatString(FormatOutput output, uintptr_t argument,
  const char* format, ...) {
  va_list arguments;
  va_start(arguments, format);
  Format(output, argument, format, arguments);
  va_end(arguments);
}

int VSNPrintf(char* buffer, size_t size, const char* format,
  va_list arguments) {
  return Print(buffer, size, format, arguments);
}

int SNPrintf(char* buffer, size_t size, const char* format, ...) {
  va_list arguments;
  va_start(arguments, format);
  const int written = Print(buffer, size, format, arguments);
  va_end(arguments);
  return written;
}

void TVFormatString(FormatOutput output, uintptr_t argument,
  const char* format, va_list arguments) {
  TinyFormat(output, argument, format, arguments);
}

void TFormatString(FormatOutput output, uintptr_t argument,
  const char* format, ...) {
  va_list arguments;
  va_start(arguments, format);
  TinyFormat(output, argument, format, arguments);
  va_end(arguments);
}

int TVSNPrintf(char* buffer, size_t size, const char* format,
  va_list arguments) {
  return TinyPrint(buffer, size, format, arguments);
}

int TSNPrintf(char* buffer, size_t size, const char* format, ...) {
  va_list arguments;
  va_start(arguments, format);
  const int written = TinyPrint(buffer, size, format, arguments);
  va_end(arguments);
  return written;
}

}
