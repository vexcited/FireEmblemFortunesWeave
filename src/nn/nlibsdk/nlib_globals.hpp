#pragma once

#include <stdint.h>

namespace nn::nlibsdk::detail {

constexpr int LogLevelCount = 8;

struct LogOutputs {
  uint32_t value[LogLevelCount];
};

struct LogFds {
  int32_t value[LogLevelCount];
};

struct TimerTable;
struct TimerHeap;

// The original merges the log and timer globals, so the members keep their
// layout.
struct LogTimerState {
  uint8_t isTimerStopping;
  uint32_t logLevelMask;
  unsigned long timerThread;
  TimerTable* timerTable;
  TimerHeap* timerHeap;
  LogOutputs logOutputs;
};

struct LogTimerData {
  uint32_t nextTimerId;
  uint32_t logMutex[2];
  uint32_t timerMutex[2];
  uint32_t timerCondition[2];
  uint32_t timerIdleCondition[2];
  LogFds logFds;
};

[[gnu::visibility("hidden")]] extern LogTimerState g_LogTimerState;
[[gnu::visibility("hidden")]] extern LogTimerData g_LogTimerData;

}
