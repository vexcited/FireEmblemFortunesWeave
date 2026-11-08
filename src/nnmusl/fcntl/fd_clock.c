#include <stdint.h>
#include <time.h>

#define HIDDEN __attribute__((visibility("hidden")))

int64_t nn_os_GetSystemTick(void) __asm__("_ZN2nn2os13GetSystemTickEv");
int64_t nn_os_ConvertToTimeSpan(int64_t tick)
	__asm__("_ZN2nn2os17ConvertToTimeSpanENS0_4TickE");

HIDDEN int __nnmusl_clock_monotonic(struct timespec *ts)
{
	int64_t ns = nn_os_ConvertToTimeSpan(nn_os_GetSystemTick());
	ts->tv_sec = ns / 1000000000;
	ts->tv_nsec = ns % 1000000000;
	return 0;
}

// One tick is the clock resolution.
HIDDEN int64_t __nnmusl_clock_resolution(struct timespec *ts)
{
	ts->tv_sec = 0;
	return ts->tv_nsec = nn_os_ConvertToTimeSpan(1);
}

extern HIDDEN const struct {
	uint64_t header;
	uint16_t slots[];
} __nnmusl_fd_table;

// Unpacks the 3 bit kind and 13 bit index stored for a descriptor.
HIDDEN uint32_t __nnmusl_fd_lookup(unsigned fd)
{
	if (fd > 0x7f7) return 0;
	uint16_t slot = __nnmusl_fd_table.slots[fd];
	return (slot >> 13) | (uint32_t)(slot & 0x1fff) << 16;
}
