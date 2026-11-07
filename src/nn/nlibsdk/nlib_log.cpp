#include <stdarg.h>
#include <stddef.h>
#include <stdint.h>

#include "nn/nlibsdk/nlib_globals.hpp"
#include "nn/nlibsdk/posix_tls.hpp"

extern "C" {

int pthread_mutex_lock(void* mutex);
int pthread_mutex_unlock(void* mutex);
int nnmem_nlib_snprintf(size_t* pOutCount, char* buffer, size_t size,
  const char* format, ...);
int nnmem_nlib_vsnprintf(size_t* pOutCount, char* buffer, size_t size,
  const char* format, va_list arguments);
int nnmem_nlib_dprintf(int fd, size_t* pOutCount, const char* format, ...);

}

namespace {

using nn::nlibsdk::NotifyThreadPool;
using nn::nlibsdk::detail::g_LogTimerData;
using nn::nlibsdk::detail::g_LogTimerState;
using nn::nlibsdk::detail::LogFds;
using nn::nlibsdk::detail::LogLevelCount;
using nn::nlibsdk::detail::LogOutputs;

constexpr int EInval = 22;
constexpr int LogLevelLowest = 2;
constexpr int LogLevelAndBelow = 0x20;
constexpr int LogLevelAndAbove = 0x10;
constexpr int LogAttrStdout = 1;
constexpr int LogAttrStderr = 2;
constexpr int LogAttrDebugger = 3;
constexpr int LogAttrSyslog = 4;
constexpr int LogAttrFd = 5;
constexpr uint32_t LogOutputStdout = 1;
constexpr uint32_t LogOutputStderr = 2;
constexpr int StdoutFd = 1;
constexpr int StderrFd = 2;
constexpr int NoFd = -1;

}

namespace nn::nlibsdk::detail {

LogTimerState g_LogTimerState;
LogTimerData g_LogTimerData = {1, {1, 0}, {1, 0}, {1, 0}, {1, 0},
  {{NoFd, NoFd, NoFd, NoFd, NoFd, NoFd, NoFd, NoFd}}};

}

namespace nn::nlibsdk {

// The line gets a trailing newline and goes to every output of its level.
[[gnu::visibility("hidden")]] int WriteLog(int priority, const char* prefix,
  const char* format, va_list arguments) {
  size_t prefixLength = 0;
  size_t length = 0;
  char buffer[1024] = {};
  if (nnmem_nlib_snprintf(&prefixLength, buffer, sizeof(buffer) - 1, "%s: ",
    prefix) != 0) {
    return 0;
  }
  if (nnmem_nlib_vsnprintf(&length, buffer + prefixLength,
    sizeof(buffer) - 1 - prefixLength, format, arguments) != 0) {
    return 0;
  }

  if (buffer[prefixLength + length - 1] != '\n') {
    buffer[prefixLength + length] = '\n';
    buffer[prefixLength + length + 1] = '\0';
    ++length;
  }

  uint32_t outputs = g_LogTimerState.logOutputs.value[priority];
  int fd = g_LogTimerData.logFds.value[priority];
  size_t written;
  if ((outputs & LogOutputStdout) != 0) {
    nnmem_nlib_dprintf(StdoutFd, &written, "%s", buffer);
  }
  if ((outputs & LogOutputStderr) != 0) {
    nnmem_nlib_dprintf(StderrFd, &written, "%s", buffer);
  }
  if (fd != NoFd) {
    nnmem_nlib_dprintf(fd, &written, "%s", buffer);
  }
  return static_cast<int>(prefixLength + length);
}

}

extern "C" {

// A level is enabled while it has an output or a descriptor. Debugger
// output is not available here.
int nnmem_nlib_log_attr_setint(int priority, int key, int value) {
  if (key < LogAttrStdout || key > LogAttrFd) {
    return EInval;
  }
  int level = priority & 0xf;
  if (priority != (LogLevelAndBelow | LogLevelAndAbove) &&
    (level < LogLevelLowest || level >= LogLevelCount)) {
    return EInval;
  }

  NotifyThreadPool(1, 1);
  pthread_mutex_lock(g_LogTimerData.logMutex);
  NotifyThreadPool(1, 0);

  LogFds fds = g_LogTimerData.logFds;
  LogOutputs outputs = g_LogTimerState.logOutputs;
  uint32_t mask = g_LogTimerState.logLevelMask;
  uint32_t begin = (priority & LogLevelAndBelow) != 0 ? LogLevelLowest : level;
  uint32_t end = (priority & LogLevelAndAbove) != 0 ? LogLevelCount : level + 1;
  for (uint32_t i = begin; i < end; ++i) {
    if (key == LogAttrStdout || key == LogAttrStderr ||
      key == LogAttrSyslog) {
      if (value != 0) {
        outputs.value[i] |= 1u << (key - 1);
      }
      else {
        outputs.value[i] &= ~(1u << (key - 1));
      }
    }
    else if (key != LogAttrDebugger) {
      fds.value[i] = value;
    }
    if (outputs.value[i] == 0 && fds.value[i] == NoFd) {
      mask &= ~(1u << i);
    }
    else {
      mask |= 1u << i;
    }
  }

  g_LogTimerState.logLevelMask = mask;
  g_LogTimerState.logOutputs = outputs;
  g_LogTimerData.logFds = fds;
  pthread_mutex_unlock(g_LogTimerData.logMutex);
  return 0;
}

}
