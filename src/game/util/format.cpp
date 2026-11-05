#include <stdarg.h>
#include <stdio.h>

#include "game/util/format.hpp"

namespace game::util {

#pragma GCC visibility push(hidden)

namespace {

constexpr int kBufferCount = 8;
constexpr int kBufferSize = 1024;

int g_next_buffer;
char g_buffers[kBufferCount][kBufferSize];

}

// The text stays valid until seven more calls.
const char* Format(const char* format, ...) {
  if (format == nullptr) {
    return "";
  }

  va_list args;
  va_start(args, format);
  char* buffer = g_buffers[g_next_buffer];
  vsnprintf(buffer, kBufferSize, format, args);
  g_next_buffer = (g_next_buffer + 1) & (kBufferCount - 1);
  va_end(args);
  return buffer;
}

#pragma GCC visibility pop

}
