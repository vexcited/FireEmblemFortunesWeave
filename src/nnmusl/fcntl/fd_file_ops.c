#include <errno.h>
#include <sys/types.h>
#include "fd_reference.h"

_Noreturn void nn_detail_UnexpectedDefaultImpl(void)
	__asm__("_ZN2nn6detail21UnexpectedDefaultImplEv");

NNMUSL_HIDDEN int __nnmusl_ref_truncate(struct nnmusl_slot_reference reference,
	off_t length);
NNMUSL_HIDDEN ssize_t __nnmusl_ref_pread(struct nnmusl_slot_reference reference,
	void *buf, size_t count, off_t offset);

#define NNMUSL_OPEN(reference) (NNMUSL_SLOT_BYTE(reference, 2) & 0x40)

NNMUSL_HIDDEN int __nnmusl_ftruncate(int fd, off_t length)
{
	if (NNMUSL_IS_SOCKET(fd)) {
		errno = EINVAL;
		return -1;
	}

	struct nnmusl_slot_reference reference = __nnmusl_fd_get(fd);
	if (!NNMUSL_REFERENCE_VALID(reference)) {
		errno = EBADF;
		return -1;
	}

	int ret;
	if (!NNMUSL_OPEN(reference)) {
		errno = EBADF;
		ret = -1;
	} else {
		switch ((uint16_t)__nnmusl_fd_kind(reference)) {
		case 0:
		case 2:
			errno = EINVAL;
			ret = -1;
			break;
		case 1:
			ret = __nnmusl_ref_truncate(reference, length);
			break;
		default:
			nn_detail_UnexpectedDefaultImpl();
		}
	}
	__nnmusl_slot_release(&reference);
	return ret;
}

// Standard streams read as empty, sockets and directories cannot seek.
NNMUSL_HIDDEN ssize_t __nnmusl_pread(int fd, void *buf, size_t count,
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
			ret = 0;
			break;
		}
		err = ESPIPE;
		goto fail;
	case 2:
		err = EISDIR;
		goto fail;
	case 1:
		ret = __nnmusl_ref_pread(reference, buf, count, offset);
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
