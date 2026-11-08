#include <errno.h>
#include <stdarg.h>
#include <stdint.h>
#include <time.h>
#include <fcntl.h>

#define HIDDEN __attribute__((visibility("hidden")))

void nn_os_SleepThread(int64_t nanoseconds)
	__asm__("_ZN2nn2os11SleepThreadENS_8TimeSpanE");
int nn_socket_Fcntl(int fd, int command, ...)
	__asm__("_ZN2nn6socket5FcntlEiNS0_12FcntlCommandEz");

// Sleeps for a timespec, saturating the nanosecond count on overflow.
HIDDEN int __nnmusl_sleep(const struct timespec *ts)
{
	if (!ts || ts->tv_sec < 0 || (unsigned long)ts->tv_nsec > 999999999)
		return EINVAL;

	int64_t ns;
	if (ts->tv_sec < INT64_MAX / 1000000000 ||
		(ts->tv_sec == INT64_MAX / 1000000000 &&
		(unsigned long)ts->tv_nsec <= INT64_MAX % 1000000000))
		ns = ts->tv_sec * 1000000000 + ts->tv_nsec;
	else
		ns = INT64_MAX;

	nn_os_SleepThread(ns);
	return 0;
}

// Only F_GETFL and F_SETFL reach the socket layer.
HIDDEN int __nnmusl_socket_fcntl(int fd, int cmd, va_list ap)
{
	if (cmd == F_SETFL)
		return nn_socket_Fcntl(fd, F_SETFL, va_arg(ap, int));
	if (cmd == F_GETFL)
		return nn_socket_Fcntl(fd, F_GETFL);
	errno = EINVAL;
	return -1;
}
