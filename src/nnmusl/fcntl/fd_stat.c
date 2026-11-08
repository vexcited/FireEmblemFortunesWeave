#include <errno.h>
#include <sys/stat.h>
#include "fd_reference.h"

struct nn_fs_handle {
	uint64_t handle;
};

uint32_t nn_fs_GetFileSize(int64_t *out, struct nn_fs_handle handle)
	__asm__("_ZN2nn2fs11GetFileSizeEPlNS0_10FileHandleE");
uint32_t nn_fs_GetDirectoryEntryCount(int64_t *out, struct nn_fs_handle handle)
	__asm__("_ZN2nn2fs22GetDirectoryEntryCountEPlNS0_15DirectoryHandleE");

NNMUSL_HIDDEN uint64_t __nnmusl_fd_handle(
	struct nnmusl_slot_reference reference);

// Every entry reads as world writable and owned by uid 99, directories
// report their entry count as size.
NNMUSL_HIDDEN int __nnmusl_ref_stat(struct nnmusl_slot_reference reference,
	struct stat *st)
{
	unsigned file = __nnmusl_fd_kind(reference);
	unsigned directory = __nnmusl_fd_kind(reference);
	if ((uint16_t)file != 1 && (uint16_t)directory != 2) {
		errno = ENOTSUP;
		return -1;
	}

	st->st_dev = 0;
	st->st_ino = 0;
	st->st_rdev = 0;
	st->st_atim.tv_sec = 0;
	st->st_mtim.tv_sec = 0;
	st->st_ctim.tv_sec = 0;
	st->st_mode = 0666;
	st->st_nlink = 1;
	st->st_uid = 99;
	st->st_gid = -1;

	uint32_t result;
	if ((uint16_t)file == 1) {
		struct nn_fs_handle handle = { __nnmusl_fd_handle(reference) };
		int64_t size = 0;
		result = nn_fs_GetFileSize(&size, handle);
		st->st_size = size;
		st->st_mode |= S_IFREG;
	} else if ((uint16_t)directory == 2) {
		struct nn_fs_handle handle = { __nnmusl_fd_handle(reference) };
		int64_t count = -1;
		result = nn_fs_GetDirectoryEntryCount(&count, handle);
		st->st_size = count;
		st->st_mode |= S_IFDIR | 0111;
	} else {
		return -1;
	}

	if (result) {
		errno = __nnmusl_fs_result_errno(result);
		return -1;
	}
	return 0;
}
