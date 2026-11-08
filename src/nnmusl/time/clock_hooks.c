#include <time.h>

#define HIDDEN __attribute__((visibility("hidden")))

typedef int clock_hook(struct timespec *ts);

_Noreturn void nn_diag_AbortImpl(void)
	__asm__("_ZN2nn4diag6detail9AbortImplEv");
clock_hook nn_time_GetAdjustableUserSystemClockCurrentTimespec
	__asm__("_ZN2nn4time43GetAdjustableUserSystemClockCurrentTimespecEP8timespec");
clock_hook nn_time_GetStandardUserSystemClockCurrentTimespec
	__asm__("_ZN2nn4time41GetStandardUserSystemClockCurrentTimespecEP8timespec");
clock_hook nn_time_GetStandardSteadyClockCurrentTimespec
	__asm__("_ZN2nn4time37GetStandardSteadyClockCurrentTimespecEP8timespec");

extern HIDDEN struct {
	clock_hook *realtime;
	clock_hook *monotonic;
} __nnmusl_clock_hooks;

HIDDEN clock_hook __nnmusl_clock_monotonic;
HIDDEN _Noreturn void __nnmusl_clock_unavailable(void);

// The time library sources fall back to an aborting stub when it is absent.
#define AVAILABLE(hook) ((void *)(hook) != (void *)__nnmusl_clock_unavailable)

HIDDEN void __nnmusl_set_realtime_source(unsigned source)
{
	clock_hook *hook;

	if (source >= 3) nn_diag_AbortImpl();
	if (source == 0) {
		hook = __nnmusl_clock_monotonic;
	} else if (source == 2) {
		hook = nn_time_GetAdjustableUserSystemClockCurrentTimespec;
		if (!AVAILABLE(hook)) nn_diag_AbortImpl();
	} else {
		hook = nn_time_GetStandardUserSystemClockCurrentTimespec;
		if (!AVAILABLE(hook)) nn_diag_AbortImpl();
	}
	__nnmusl_clock_hooks.realtime = hook;
}

HIDDEN void __nnmusl_set_monotonic_source(unsigned source)
{
	clock_hook *hook;

	if (source >= 4) nn_diag_AbortImpl();
	if (source == 0) {
		hook = __nnmusl_clock_monotonic;
	} else if (source == 3) {
		hook = nn_time_GetStandardSteadyClockCurrentTimespec;
		if (!AVAILABLE(hook)) nn_diag_AbortImpl();
	} else {
		nn_diag_AbortImpl();
	}
	__nnmusl_clock_hooks.monotonic = hook;
}
