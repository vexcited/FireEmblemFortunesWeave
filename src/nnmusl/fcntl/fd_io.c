#include <errno.h>
#include <sys/types.h>
#include "fd_reference.h"

_Noreturn void nn_detail_UnexpectedDefaultImpl(void)
	__asm__("_ZN2nn6detail21UnexpectedDefaultImplEv");

NNMUSL_HIDDEN ssize_t __nnmusl_ref_pwrite(struct nnmusl_slot_reference
	reference,
	const void *buf, size_t count, off_t offset);
NNMUSL_HIDDEN ssize_t __nnmusl_ref_read(struct nnmusl_slot_reference reference,
	void *buf, size_t count);
NNMUSL_HIDDEN ssize_t __nnmusl_socket_read(int fd, void *buf, size_t count);
NNMUSL_HIDDEN ssize_t __nnmusl_console_read(void *buf, size_t count);

#define NNMUSL_OPEN(reference) (NNMUSL_SLOT_BYTE(reference, 2) & 0x40)

// Writes to the null stream succeed without doing anything.
NNMUSL_HIDDEN ssize_t __nnmusl_pwrite(int fd, const void *buf, size_t count,
	off_t offset)
{
	if (offset < 0) {
		errno = EINVAL;
		return -1;
	}
	if (NNMUSL_IS_SOCKET(fd)) {
		errno = ESPIPE;
		return -1;
	}

	struct nnmusl_slot_reference reference = __nnmusl_fd_get(fd);
	if (!NNMUSL_REFERENCE_VALID(reference)) {
		errno = EBADF;
		return -1;
	}

	ssize_t ret;
	int err;
	if (!NNMUSL_OPEN(reference)) {
		err = EBADF;
		goto fail;
	}
	switch ((uint16_t)__nnmusl_fd_kind(reference)) {
	case 0:
		if ((uint16_t)__nnmusl_fd_native(reference) == 3) {
			ret = count;
			break;
		}
		err = ESPIPE;
		goto fail;
	case 2:
		err = EBADF;
		goto fail;
	case 1:
		ret = __nnmusl_ref_pwrite(reference, buf, count, offset);
		break;
	default:
		nn_detail_UnexpectedDefaultImpl();
	}
	__nnmusl_slot_release(&reference);
	return ret;

fail:
	errno = err;
	__nnmusl_slot_release(&reference);
	return -1;
}

// Kind 0 covers the console, its null stream reads as end of file.
NNMUSL_HIDDEN ssize_t __nnmusl_read(int fd, void *buf, size_t count)
{
	if (NNMUSL_IS_SOCKET(fd)) return __nnmusl_socket_read(fd, buf, count);

	struct nnmusl_slot_reference reference = __nnmusl_fd_get(fd);
	if (!NNMUSL_REFERENCE_VALID(reference)) {
		errno = EBADF;
		return -1;
	}

	ssize_t ret;
	int err;
	if (!NNMUSL_OPEN(reference)) {
		err = EBADF;
		goto fail;
	}

	unsigned file = __nnmusl_fd_kind(reference);
	unsigned directory = __nnmusl_fd_kind(reference);
	unsigned console = __nnmusl_fd_kind(reference);
	if ((uint16_t)file == 1) {
		ret = __nnmusl_ref_read(reference, buf, count);
	} else if ((uint16_t)console) {
		err = (uint16_t)directory == 2 ? EISDIR : EBADF;
		goto fail;
	} else if ((uint16_t)__nnmusl_fd_native(reference)) {
		if ((uint16_t)__nnmusl_fd_native(reference) != 3) {
			err = EBADF;
			goto fail;
		}
		ret = 0;
	} else {
		ret = __nnmusl_console_read(buf, count);
	}
	__nnmusl_slot_release(&reference);
	return ret;

fail:
	errno = err;
	__nnmusl_slot_release(&reference);
	return -1;
}
