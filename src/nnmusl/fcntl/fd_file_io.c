#include <errno.h>
#include <stdint.h>
#include <unistd.h>
#include <sys/types.h>
#include "fd_reference.h"

struct nn_fs_handle {
	uint64_t handle;
};

struct nn_fs_option {
	int32_t flags;
};

uint32_t nn_fs_WriteFile(struct nn_fs_handle handle, int64_t offset,
	const void *buf, size_t size, const struct nn_fs_option *option)
	__asm__("_ZN2nn2fs9WriteFileENS0_10FileHandleElPKvmRKNS0_11WriteOptionE");
uint32_t nn_fs_SetFileSize(struct nn_fs_handle handle, int64_t size)
	__asm__("_ZN2nn2fs11SetFileSizeENS0_10FileHandleEl");
uint32_t nn_fs_ReadFile(size_t *out, struct nn_fs_handle handle, int64_t offset,
	void *buf, size_t size, const struct nn_fs_option *option)
	__asm__("_ZN2nn2fs8ReadFileEPmNS0_10FileHandleElPvmRKNS0_10ReadOptionE");
const void *nn_fs_GetCurrentThreadFsContext(void)
	__asm__("_ZN2nn2fs25GetCurrentThreadFsContextEv");
void nn_fs_SetCurrentThreadFsContext(const void *context)
	__asm__("_ZN2nn2fs25SetCurrentThreadFsContextEPKNS0_9FsContextE");

extern NNMUSL_HIDDEN const uint8_t __nnmusl_fs_context[];

uint32_t nn_fs_GetFileSize(int64_t *out, struct nn_fs_handle handle)
	__asm__("_ZN2nn2fs11GetFileSizeEPlNS0_10FileHandleE");

NNMUSL_HIDDEN uint64_t __nnmusl_fd_handle(
	struct nnmusl_slot_reference reference);
NNMUSL_HIDDEN unsigned __nnmusl_fd_nonblock(
	struct nnmusl_slot_reference reference);
NNMUSL_HIDDEN int64_t __nnmusl_fd_position(
	struct nnmusl_slot_reference reference);
NNMUSL_HIDDEN void __nnmusl_fd_set_position(
	struct nnmusl_slot_reference reference, int64_t position);
NNMUSL_HIDDEN void __nnmusl_fd_advance(struct nnmusl_slot_reference reference,
	int64_t count);
NNMUSL_HIDDEN unsigned __nnmusl_fd_append(
	struct nnmusl_slot_reference reference);

// Reads run under the libc file system context so errors come back as
// results instead of aborting.
NNMUSL_HIDDEN __attribute__((noinline)) uint32_t __nnmusl_read_file(size_t *out,
	struct nn_fs_handle handle, int64_t offset, void *buf, size_t size,
	const struct nn_fs_option *option)
{
	const void *context = nn_fs_GetCurrentThreadFsContext();
	nn_fs_SetCurrentThreadFsContext(__nnmusl_fs_context);
	uint32_t result = nn_fs_ReadFile(out, handle, offset, buf, size, option);
	nn_fs_SetCurrentThreadFsContext(context);
	return result;
}

// Writes flush immediately.
NNMUSL_HIDDEN ssize_t __nnmusl_ref_pwrite(struct nnmusl_slot_reference
	reference,
	const void *buf, size_t count, off_t offset)
{
	struct nn_fs_option option = { 1 };
	struct nn_fs_handle handle = { __nnmusl_fd_handle(reference) };
	uint32_t result = nn_fs_WriteFile(handle, offset, buf, count, &option);
	if (result) {
		errno = __nnmusl_fs_result_errno(result);
		return -1;
	}
	return count;
}

NNMUSL_HIDDEN int __nnmusl_ref_truncate(struct nnmusl_slot_reference reference,
	off_t length)
{
	struct nn_fs_handle handle = { __nnmusl_fd_handle(reference) };
	int err = EINVAL;

	if (!(__nnmusl_fd_nonblock(reference) & 1) && length >= 0) {
		uint32_t result = nn_fs_SetFileSize(handle, length);
		if (!result) return 0;
		err = (result & 0x3fffff) == 0x202 ? EACCES :
			__nnmusl_fs_result_errno(result);
	}
	errno = err;
	return -1;
}

// Reading past the end of the file is not an error.
NNMUSL_HIDDEN ssize_t __nnmusl_ref_pread(struct nnmusl_slot_reference reference,
	void *buf, size_t count, off_t offset)
{
	struct nn_fs_handle handle = { __nnmusl_fd_handle(reference) };
	size_t got = 0;
	struct nn_fs_option option = { 0 };
	uint32_t result = __nnmusl_read_file(&got, handle, offset, buf, count,
		&option);
	if (result) {
		if ((result & 0x3fffff) == 0x177a02) return 0;
		errno = __nnmusl_fs_result_errno(result);
		return -1;
	}
	return got;
}

NNMUSL_HIDDEN ssize_t __nnmusl_ref_read(struct nnmusl_slot_reference reference,
	void *buf, size_t count)
{
	struct nn_fs_handle handle = { __nnmusl_fd_handle(reference) };
	size_t got = 0;
	int64_t position = __nnmusl_fd_position(reference);
	struct nn_fs_option option = { 0 };
	uint32_t result = __nnmusl_read_file(&got, handle, position, buf, count,
		&option);
	if (result) {
		if ((result & 0x3fffff) == 0x177a02) return 0;
		errno = __nnmusl_fs_result_errno(result);
		return -1;
	}
	__nnmusl_fd_advance(reference, got);
	return got;
}

NNMUSL_HIDDEN __attribute__((noinline)) off_t __nnmusl_ref_lseek(struct
	nnmusl_slot_reference reference,
	off_t offset, int whence)
{
	int64_t base = 0;

	switch (whence) {
	case SEEK_SET:
		break;
	case SEEK_CUR:
		base = __nnmusl_fd_position(reference);
		break;
	case SEEK_END: {
		struct nn_fs_handle handle = { __nnmusl_fd_handle(reference) };
		uint32_t result = nn_fs_GetFileSize(&base, handle);
		if (result) {
			errno = __nnmusl_fs_result_errno(result);
			return -1;
		}
		break;
	}
	default:
		errno = EINVAL;
		return -1;
	}

	if (offset < 0 ? base < INT64_MIN - offset : base > (INT64_MAX ^ offset)) {
		errno = EOVERFLOW;
		return -1;
	}
	int64_t position = base + offset;
	if (position < 0) {
		errno = EINVAL;
		return -1;
	}
	__nnmusl_fd_set_position(reference, position);
	return position;
}

// Appending streams move to the end before every write, which then flushes.
NNMUSL_HIDDEN ssize_t __nnmusl_ref_write(struct nnmusl_slot_reference reference,
	const void *buf, size_t count)
{
	struct nn_fs_option option = { 1 };
	if (__nnmusl_fd_append(reference) & 1)
		__nnmusl_ref_lseek(reference, 0, SEEK_END);

	struct nn_fs_handle handle = { __nnmusl_fd_handle(reference) };
	int64_t position = __nnmusl_fd_position(reference);
	uint32_t result = nn_fs_WriteFile(handle, position, buf, count, &option);
	if (result) {
		errno = __nnmusl_fs_result_errno(result);
		return -1;
	}
	__nnmusl_fd_advance(reference, count);
	return count;
}
