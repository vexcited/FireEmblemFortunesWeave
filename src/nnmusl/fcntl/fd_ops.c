#include <errno.h>
#include <stdarg.h>
#include <sys/stat.h>
#include "fd_reference.h"

struct nn_fs_handle {
	uint64_t handle;
};

int nn_fs_GetFileOpenMode(struct nn_fs_handle handle)
	__asm__("_ZN2nn2fs15GetFileOpenModeENS0_10FileHandleE");
uint32_t nn_fs_FlushFile(struct nn_fs_handle handle)
	__asm__("_ZN2nn2fs9FlushFileENS0_10FileHandleE");
_Noreturn void nn_detail_UnexpectedDefaultImpl(void)
	__asm__("_ZN2nn6detail21UnexpectedDefaultImplEv");

NNMUSL_HIDDEN int __nnmusl_socket_fcntl(int fd, int cmd, va_list ap);
NNMUSL_HIDDEN uint64_t __nnmusl_fd_handle(
	struct nnmusl_slot_reference reference);
NNMUSL_HIDDEN int __nnmusl_ref_stat(struct nnmusl_slot_reference reference,
	struct stat *st);

#define NNMUSL_OPEN(reference) (NNMUSL_SLOT_BYTE(reference, 2) & 0x40)

// Only sockets take fcntl commands, files and directories refuse them.
NNMUSL_HIDDEN int __nnmusl_vfcntl(int fd, int cmd, va_list ap)
{
	if (NNMUSL_IS_SOCKET(fd)) return __nnmusl_socket_fcntl(fd, cmd, ap);

	struct nnmusl_slot_reference reference = __nnmusl_fd_get(fd);
	if (!NNMUSL_REFERENCE_VALID(reference)) {
		errno = EBADF;
		return -1;
	}

	int err;
	if (!NNMUSL_OPEN(reference)) {
		err = EBADF;
	} else {
		switch ((uint16_t)__nnmusl_fd_kind(reference)) {
		case 0:
		case 1:
		case 2:
			err = ENOTSUP;
			break;
		default:
			nn_detail_UnexpectedDefaultImpl();
		}
	}
	errno = err;
	__nnmusl_slot_release(&reference);
	return -1;
}

// Flushes a file opened for writing and returns the file system result.
NNMUSL_HIDDEN uint32_t __nnmusl_fd_flush(int fd)
{
	if (NNMUSL_IS_SOCKET(fd)) return 0x1827;

	struct nnmusl_slot_reference reference = __nnmusl_fd_get(fd);
	if (!NNMUSL_REFERENCE_VALID(reference)) return 0x1a27;

	uint32_t result;
	if (!NNMUSL_OPEN(reference)) {
		result = 0x1a27;
	} else if (!(uint16_t)__nnmusl_fd_kind(reference)) {
		result = 0x1827;
	} else if ((uint16_t)__nnmusl_fd_kind(reference) == 2) {
		result = 0;
	} else {
		struct nn_fs_handle handle = { __nnmusl_fd_handle(reference) };
		if (nn_fs_GetFileOpenMode(handle) & 2)
			result = nn_fs_FlushFile(handle);
		else
			result = 0;
	}
	__nnmusl_slot_release(&reference);
	return result;
}

NNMUSL_HIDDEN int __nnmusl_fstat(int fd, struct stat *st)
{
	if (NNMUSL_IS_SOCKET(fd)) {
		errno = ENOTSUP;
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
		ret = __nnmusl_ref_stat(reference, st);
	}
	__nnmusl_slot_release(&reference);
	return ret;
}
