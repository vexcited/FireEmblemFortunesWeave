#include <stdint.h>

#define HIDDEN __attribute__((visibility("hidden")))

void nn_os_SdkMutex_Lock(void *mutex) __asm__("_ZN2nn2os12SdkMutexType4LockEv");
void nn_os_SdkMutex_Unlock(void *mutex)
	__asm__("_ZN2nn2os12SdkMutexType6UnlockEv");

extern HIDDEN uint8_t __nnmusl_slot_mutex[];

HIDDEN int __nnmusl_fd_install(unsigned kind, unsigned index);

// The null device is the console slot 3, it needs no state of its own.
HIDDEN int __nnmusl_open_null(const char *path)
{
	nn_os_SdkMutex_Lock(__nnmusl_slot_mutex);
	nn_os_SdkMutex_Unlock(__nnmusl_slot_mutex);
	return __nnmusl_fd_install(1, 3);
}
