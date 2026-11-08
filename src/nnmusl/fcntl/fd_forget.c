#include <stdint.h>

#define HIDDEN __attribute__((visibility("hidden")))

_Noreturn void nn_diag_AbortImpl(void)
	__asm__("_ZN2nn4diag6detail9AbortImplEv");

void nn_os_SdkMutex_Lock(void *mutex) __asm__("_ZN2nn2os12SdkMutexType4LockEv");
void nn_os_SdkMutex_Unlock(void *mutex)
	__asm__("_ZN2nn2os12SdkMutexType6UnlockEv");

extern HIDDEN struct {
	uint32_t mutex;
	int next;
	uint16_t slots[0x7f8];
} __nnmusl_fd_table;

// Frees every descriptor of a kind and lets the search restart from the
// first one.
HIDDEN void __nnmusl_fd_forget_kind(uint16_t kind)
{
	if ((unsigned)kind - 1 >= 4) nn_diag_AbortImpl();

	nn_os_SdkMutex_Lock(&__nnmusl_fd_table.mutex);
	long fd;
	for (fd = 0; fd < 0x7f8; fd++)
		if (kind == __nnmusl_fd_table.slots[fd] >> 13) break;
	if (fd < 0x7f8) {
		if ((int)fd < __nnmusl_fd_table.next) __nnmusl_fd_table.next = fd;
		for (; fd <= 0x7f7; fd++)
			if (kind == __nnmusl_fd_table.slots[fd] >> 13)
				__nnmusl_fd_table.slots[fd] = 0;
	}
	nn_os_SdkMutex_Unlock(&__nnmusl_fd_table.mutex);
}
