#define _BSD_SOURCE
#include <dirent.h>
#include <errno.h>
#include <string.h>
#include "fd_reference.h"

struct nn_fs_handle {
	uint64_t handle;
};

struct nn_fs_directory_entry {
	char name[769];
	uint8_t reserved[3];
	uint8_t type;
	uint8_t reserved2[3];
	int64_t size;
};

uint32_t nn_fs_ReadDirectory(int64_t *count,
	struct nn_fs_directory_entry *entries, struct nn_fs_handle handle,
	int64_t capacity)
	__asm__("_ZN2nn2fs13ReadDirectoryEPlPNS0_14DirectoryEntryE"
		"NS0_15DirectoryHandleEl");

NNMUSL_HIDDEN uint64_t __nnmusl_fd_handle(
	struct nnmusl_slot_reference reference);
NNMUSL_HIDDEN int64_t __nnmusl_fd_position(
	struct nnmusl_slot_reference reference);
NNMUSL_HIDDEN void __nnmusl_fd_advance(struct nnmusl_slot_reference reference,
	int64_t count);
NNMUSL_HIDDEN int __nnmusl_result_to_errno(uint32_t result);

// Reads the next entry into the caller dirent, 0 at the end of the stream.
NNMUSL_HIDDEN int __nnmusl_readdir(int fd, struct dirent *de, size_t size)
{
	struct nnmusl_slot_reference reference = __nnmusl_fd_get(fd);
	if (!NNMUSL_REFERENCE_VALID(reference)) {
		errno = EBADF;
		return -1;
	}

	int ret = -1;
	int err;
	if (!(NNMUSL_SLOT_BYTE(reference, 2) & 0x40) ||
		(uint16_t)__nnmusl_fd_kind(reference) != 2) {
		err = EBADF;
		goto fail;
	}

	int64_t count = 0;
	struct nn_fs_directory_entry entry;
	struct nn_fs_handle handle = { __nnmusl_fd_handle(reference) };
	uint32_t result = nn_fs_ReadDirectory(&count, &entry, handle, 1);
	if (result) {
		if ((result & 0x3fffff) == 0x202)
			err = ENOENT;
		else if ((result & 0x3fffff) == 0x177a02)
			err = EOVERFLOW;
		else
			err = __nnmusl_result_to_errno(result);
		goto fail;
	}
	if (count != 1) {
		ret = 0;
		goto release;
	}

	__nnmusl_fd_advance(reference, 1);
	de->d_ino = __nnmusl_fd_position(reference);
	de->d_off = __nnmusl_fd_position(reference);
	de->d_reclen = 280;
	switch (entry.type) {
	case 0:
		de->d_type = DT_DIR;
		break;
	case 1:
		de->d_type = DT_REG;
		break;
	default:
		err = EINVAL;
		goto fail;
	}
	strncpy(de->d_name, entry.name, size - 0x18);
	ret = 1;
	goto release;

fail:
	errno = err;
release:
	__nnmusl_slot_release(&reference);
	return ret;
}
