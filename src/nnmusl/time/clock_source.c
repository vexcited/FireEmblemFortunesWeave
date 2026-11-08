#include <errno.h>
#include <stdint.h>

#define HIDDEN __attribute__((visibility("hidden")))

_Noreturn void nn_diag_AbortImpl(void)
	__asm__("_ZN2nn4diag6detail9AbortImplEv");

extern HIDDEN uint8_t __nnmusl_clock_source_set[5];

HIDDEN void __nnmusl_set_realtime_source(unsigned source);
HIDDEN void __nnmusl_set_monotonic_source(unsigned source);

// Sources 0 to 2 back the realtime clock, the monotonic clock only takes
// the tick source 0 or the system source 3.
HIDDEN int __nnmusl_clock_select(int clk, unsigned source)
{
	if (source > 3) return EINVAL;

	if (clk == 1) {
		if (source != 3 && source != 0) return EINVAL;
		if (__nnmusl_clock_source_set[4] & 1) return EPERM;
		__nnmusl_set_monotonic_source(source);
		__nnmusl_clock_source_set[4] = 1;
		return 0;
	}
	if (clk != 0) return (unsigned)clk < 12 ? ENOTSUP : EINVAL;

	if (source == 3) return EINVAL;
	if (__nnmusl_clock_source_set[0] & 1) return EPERM;
	__nnmusl_set_realtime_source(source);
	__nnmusl_clock_source_set[0] = 1;
	return 0;
}

HIDDEN _Noreturn void __nnmusl_clock_unavailable(void)
{
	nn_diag_AbortImpl();
}
