#include <errno.h>
#include <stdint.h>

#define HIDDEN __attribute__((visibility("hidden")))

void nn_os_SdkMutex_Lock(void *mutex) __asm__("_ZN2nn2os12SdkMutexType4LockEv");
void nn_os_SdkMutex_Unlock(void *mutex)
	__asm__("_ZN2nn2os12SdkMutexType6UnlockEv");
_Noreturn void nn_diag_AbortImpl(void)
	__asm__("_ZN2nn4diag6detail9AbortImplEv");

extern HIDDEN struct {
	uint32_t mutex;
	int next;
	uint16_t slots[0x7f8];
} __nnmusl_fd_table;

HIDDEN int __nnmusl_slot_retain(int16_t *out, int16_t index);
HIDDEN int __nnmusl_slot_retain_directory(int16_t *out, int16_t index);
HIDDEN int __nnmusl_socket_retain(int16_t *out, int16_t index);

// Console descriptors share their stream, the others take a new reference
// on their slot.
HIDDEN int __nnmusl_dup(int fd)
{
	int ret;
	int err;

	nn_os_SdkMutex_Lock(&__nnmusl_fd_table.mutex);
	if ((unsigned)fd >= 0x7f8 || !(__nnmusl_fd_table.slots[fd] & 0xe000)) {
		err = EBADF;
		goto fail;
	}

	uint16_t entry = __nnmusl_fd_table.slots[fd];
	for (ret = __nnmusl_fd_table.next; ret <= 0x7f7; ret++)
		if (__nnmusl_fd_table.slots[ret] < 0x2000) break;
	if (ret > 0x7f7) {
		err = EMFILE;
		goto fail;
	}

	unsigned index = entry & 0x1fff;
	int16_t copy = 0;
	switch (entry >> 13) {
	case 1:
		if (index > 3) {
			err = EBADF;
			goto fail;
		}
		goto store;
	case 2:
		err = __nnmusl_slot_retain(&copy, index);
		break;
	case 3:
		err = __nnmusl_slot_retain_directory(&copy, index);
		break;
	case 4:
		err = __nnmusl_socket_retain(&copy, index);
		break;
	default:
		nn_diag_AbortImpl();
	}
	if (err) goto fail;
	index = copy & 0x1fff;

store:
	__nnmusl_fd_table.slots[ret] = index | (entry & 0xe000);
	__nnmusl_fd_table.next = ret + 1;
	goto unlock;

fail:
	errno = err;
	ret = -1;
unlock:
	nn_os_SdkMutex_Unlock(&__nnmusl_fd_table.mutex);
	return ret;
}
