#define _GNU_SOURCE
#include <errno.h>
#include <stdint.h>
#include <time.h>

typedef struct nn_os_TimerEventType nn_os_TimerEventType;

void nn_os_InitializeTimerEvent(nn_os_TimerEventType *, int)
  __asm__("_ZN2nn2os20InitializeTimerEventEPNS0_14TimerEventType"
    "ENS0_14EventClearModeE");
void nn_os_FinalizeTimerEvent(nn_os_TimerEventType *)
  __asm__("_ZN2nn2os18FinalizeTimerEventEPNS0_14TimerEventTypeE");
void nn_os_StopTimerEvent(nn_os_TimerEventType *)
  __asm__("_ZN2nn2os14StopTimerEventEPNS0_14TimerEventTypeE");
void nn_os_StartOneShotTimerEvent(nn_os_TimerEventType *, int64_t)
  __asm__("_ZN2nn2os22StartOneShotTimerEventEPNS0_14TimerEventType"
    "ENS_8TimeSpanE");
void nn_os_WaitTimerEvent(nn_os_TimerEventType *)
  __asm__("_ZN2nn2os14WaitTimerEventEPNS0_14TimerEventTypeE");

// The event is never allocated, nnmusl initializes a null event and hands
// back null.
int __nnmusl_TimerCreate(nn_os_TimerEventType **timer)
{
  if (!timer) {
    errno = EINVAL;
    return -1;
  }

  nn_os_InitializeTimerEvent(0, 1);
  *timer = 0;
  return 0;
}

int __nnmusl_TimerDelete(nn_os_TimerEventType *timer)
{
  if (!timer) {
    errno = EINVAL;
    return -1;
  }

  nn_os_FinalizeTimerEvent(timer);
  return 0;
}

// A null timer only sets errno, the stop still goes through.
int __nnmusl_TimerStop(nn_os_TimerEventType *timer)
{
  if (!timer) {
    errno = EINVAL;
  }

  nn_os_StopTimerEvent(timer);
  return 0;
}

int __nnmusl_TimerSetTime(nn_os_TimerEventType *timer,
  const struct itimerspec *value)
{
  if (!value) {
    errno = EFAULT;
    return -1;
  }

  if (!timer) {
    errno = EINVAL;
    return -1;
  }

  time_t sec = value->it_value.tv_sec;
  long nsec = value->it_value.tv_nsec;

  if (!sec && !nsec) {
    nn_os_StopTimerEvent(timer);
    return 0;
  }

  int64_t ns = INT64_MAX;

  if (sec < INT64_MAX / 1000000000
    || (sec == INT64_MAX / 1000000000 && nsec <= INT64_MAX % 1000000000)) {
    ns = sec * 1000000000 + nsec;
  }

  nn_os_StartOneShotTimerEvent(timer, ns);
  return 0;
}

int __nnmusl_TimerWait(nn_os_TimerEventType *timer)
{
  if (!timer) {
    errno = EINVAL;
    return -1;
  }

  nn_os_WaitTimerEvent(timer);
  return 0;
}
