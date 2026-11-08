#include <errno.h>
#include <time.h>

__attribute__((visibility("hidden"))) int __nnmusl_sleep(
	const struct timespec *ts);

int clock_nanosleep(clockid_t clk, int flags, const struct timespec *req,
	struct timespec *rem)
{
	if (!req || req->tv_nsec > 999999999 || req->tv_sec < 0) return EINVAL;
	if ((unsigned)clk - 4 < 8) return ENOTSUP;
	if (clk >= 2) return clk == 2 ? ENOTSUP : EINVAL;

	if (!flags) return __nnmusl_sleep(req);
	if (flags != TIMER_ABSTIME) return EINVAL;

	// Absolute deadlines sleep for what is left of them.
	struct timespec now = { 0 };
	if (clock_gettime(clk, &now)) return errno;

	long nsec = req->tv_nsec - now.tv_nsec;
	time_t sec = req->tv_sec - now.tv_sec + (nsec >> 63);
	if (nsec < 0) nsec += 1000000000;
	if (sec < 0 || !(sec | nsec)) return 0;

	struct timespec left = { sec, nsec };
	return __nnmusl_sleep(&left);
}
