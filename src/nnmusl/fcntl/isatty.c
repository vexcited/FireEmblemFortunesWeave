#include <errno.h>
#include "fd_reference.h"

NNMUSL_HIDDEN int __nnmusl_isatty(int fd)
{
	if (NNMUSL_IS_SOCKET(fd)) {
		errno = ENOTTY;
		return 0;
	}

	struct nnmusl_slot_reference reference = __nnmusl_fd_get(fd);
	if (!NNMUSL_REFERENCE_VALID(reference)) {
		errno = EBADF;
		return 0;
	}

	int err;
	if (!(NNMUSL_SLOT_BYTE(reference, 2) & 0x40)) {
		err = EBADF;
	} else if (__nnmusl_fd_kind(reference) & 0xffff ||
		__nnmusl_fd_native(reference) == 3) {
		err = ENOTTY;
	} else {
		__nnmusl_slot_release(&reference);
		return 1;
	}
	errno = err;
	__nnmusl_slot_release(&reference);
	return 0;
}
