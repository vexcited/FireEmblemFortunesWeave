#include <errno.h>
#include <sys/stat.h>
#include "fd_reference.h"

// Modes cannot change, the call only checks the descriptor is writable.
int fchmod(int fd, mode_t mode)
{
	if (NNMUSL_IS_SOCKET(fd)) return 0;

	struct nnmusl_slot_reference reference = __nnmusl_fd_get(fd);
	if (NNMUSL_REFERENCE_VALID(reference)) {
		uint32_t bits = NNMUSL_SLOT_BITS(reference);
		__nnmusl_slot_release(&reference);
		if (bits & 1 << 22) return 0;
	}
	errno = __nnmusl_fs_result_errno(0x1a27);
	return -1;
}
