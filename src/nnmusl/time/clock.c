#include <errno.h>
#include <time.h>

#define HIDDEN __attribute__((visibility("hidden")))

// The realtime and monotonic sources come from hooks the runtime installs.
struct nnmusl_clock_hooks {
	int (*realtime)(struct timespec *ts);
	int (*monotonic)(struct timespec *ts);
};

extern HIDDEN struct nnmusl_clock_hooks __nnmusl_clock_hooks;

HIDDEN void __nnmusl_clock_resolution(struct timespec *ts);
HIDDEN int __nnmusl_clock_realtime(struct timespec *ts);
HIDDEN int __nnmusl_clock_monotonic_hook(struct timespec *ts);

HIDDEN __attribute__((noinline)) int __nnmusl_clock_realtime(
	struct timespec *ts)
{
	return __nnmusl_clock_hooks.realtime(ts);
}

HIDDEN __attribute__((noinline)) int __nnmusl_clock_monotonic_hook(
	struct timespec *ts)
{
	return __nnmusl_clock_hooks.monotonic(ts);
}

HIDDEN int __nnmusl_clock_getres(clockid_t clk, struct timespec *ts)
{
	if ((unsigned)clk - 2 < 10) {
		errno = ENOTSUP;
		return -1;
	}
	if (clk == CLOCK_MONOTONIC || clk == CLOCK_REALTIME) {
		if (ts) __nnmusl_clock_resolution(ts);
		return 0;
	}
	errno = EINVAL;
	return -1;
}

HIDDEN int __nnmusl_clock_gettime(clockid_t clk, struct timespec *ts)
{
	int err;

	if ((unsigned)clk - 2 < 10) {
		err = ENOTSUP;
	} else if (clk == CLOCK_MONOTONIC) {
		if (!__nnmusl_clock_monotonic_hook(ts)) return 0;
		err = EAGAIN;
	} else if (clk == CLOCK_REALTIME) {
		if (!__nnmusl_clock_realtime(ts)) return 0;
		err = EAGAIN;
	} else {
		err = EINVAL;
	}
	errno = err;
	return -1;
}
