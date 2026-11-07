#include <stddef.h>
#include <stdint.h>

#include "nn/nlibsdk/posix_tls.hpp"
#include "nn/os/time.hpp"

extern "C" {

int nnmem_nlib_sleep(int64_t duration);
int pthread_mutex_trylock(void* mutex);
int pthread_once(int* once, void (*function)());
int pthread_cond_clockwait(void* condition, void* mutex, int clock,
  const void* time);

}

namespace {

using nn::nlibsdk::NotifyThreadPool;

constexpr int EBusy = 16;
constexpr int EIntr = 4;
constexpr int ETimedOut = 110;
constexpr int ClockRealtime = 0;

struct Timespec {
  int64_t seconds;
  int64_t nanoseconds;
};

int g_ClockOnce;

void InitializeClock() {
}

int64_t GetTime() {
  return nn::os::ConvertToTimeSpan(nn::os::GetSystemTick()).nanoseconds /
    100;
}

// The deadline is in units of 100 nanoseconds on the realtime clock.
[[gnu::always_inline]] inline int WaitConditionUntil(void* condition,
  void* mutex, int64_t deadline) {
  NotifyThreadPool(1, 1);
  Timespec time = {deadline / 10000000, 100 * (deadline % 10000000)};
  pthread_once(&g_ClockOnce, InitializeClock);
  int result;
  do {
    result = pthread_cond_clockwait(condition, mutex, ClockRealtime, &time);
  } while (result == EIntr);
  NotifyThreadPool(1, 1);
  return result;
}

}

extern "C" {

// Polls every 100 microseconds while at least that much time is left. The
// last wait sleeps for the whole duration again before the final try.
int nnmem_nlib_mutex_trylock_for(void* mutex, int64_t duration) {
  NotifyThreadPool(1, 1);
  int result;
  if (duration < 0) {
    result = ETimedOut;
    goto done;
  }
  {
    int64_t left = duration;
    int64_t start = GetTime();
    if (duration >= 1000) {
      int64_t deadline = start + duration;
      for (;;) {
        if (pthread_mutex_trylock(mutex) == 0) {
          result = 0;
          goto done;
        }
        nnmem_nlib_sleep(1000);
        left = deadline - GetTime();
        if (left <= 999) {
          break;
        }
      }
    }
    if (left >= 1) {
      if (pthread_mutex_trylock(mutex) == 0) {
        result = 0;
        goto done;
      }
      nnmem_nlib_sleep(duration);
    }
    result = pthread_mutex_trylock(mutex);
    if (result == EBusy) {
      result = ETimedOut;
    }
  }

done:
  NotifyThreadPool(1, 1);
  return result;
}

int nnmem_nlib_cond_wait_for(void* condition, void* mutex,
  int64_t duration) {
  NotifyThreadPool(1, 1);
  int result = ETimedOut;
  if (duration >= 0) {
    result = WaitConditionUntil(condition, mutex, GetTime() + duration);
  }
  NotifyThreadPool(1, 1);
  return result;
}

int nnmem_nlib_cond_wait_until(void* condition, void* mutex,
  int64_t deadline) {
  return WaitConditionUntil(condition, mutex, deadline);
}

}
