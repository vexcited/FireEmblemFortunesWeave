#include <errno.h>
#include <stdint.h>

#define HIDDEN __attribute__((visibility("hidden")))

void nn_os_SdkMutex_Lock(void *mutex) __asm__("_ZN2nn2os12SdkMutexType4LockEv");
void nn_os_SdkMutex_Unlock(void *mutex)
	__asm__("_ZN2nn2os12SdkMutexType6UnlockEv");

// Descriptors map to a 3 bit kind and a 13 bit slot index, kind 0 is free.
extern HIDDEN struct {
	uint32_t mutex;
	int next;
	uint16_t slots[0x7f8];
} __nnmusl_fd_table;

HIDDEN int __nnmusl_fd_install(unsigned kind, unsigned index)
{
	nn_os_SdkMutex_Lock(&__nnmusl_fd_table.mutex);
	int fd;
	for (fd = __nnmusl_fd_table.next; fd <= 0x7f7; fd++) {
		if (__nnmusl_fd_table.slots[fd] < 0x2000) {
			__nnmusl_fd_table.slots[fd] = kind << 13 | (index & 0x1fff);
			__nnmusl_fd_table.next = fd + 1;
			goto done;
		}
	}
	errno = EMFILE;
	fd = -1;
done:
	nn_os_SdkMutex_Unlock(&__nnmusl_fd_table.mutex);
	return fd;
}
