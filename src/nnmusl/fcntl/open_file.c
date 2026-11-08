#include <errno.h>
#include <fcntl.h>
#include <stdbool.h>
#include <stdint.h>

#define HIDDEN __attribute__((visibility("hidden")))

uint32_t nn_fs_OpenFile(uint64_t *handle, const char *path, int mode)
	__asm__("_ZN2nn2fs8OpenFileEPNS0_10FileHandleEPKci");
uint32_t nn_fs_CreateFile(const char *path, int64_t size)
	__asm__("_ZN2nn2fs10CreateFileEPKcl");
uint32_t nn_fs_SetFileSize(uint64_t handle, int64_t size)
	__asm__("_ZN2nn2fs11SetFileSizeENS0_10FileHandleEl");
void nn_fs_CloseFile(uint64_t handle)
	__asm__("_ZN2nn2fs9CloseFileENS0_10FileHandleE");

HIDDEN int __nnmusl_check_device_path(const char *path);
HIDDEN int __nnmusl_dup_console(int fd);
HIDDEN int __nnmusl_open_null(const char *path);
HIDDEN char *__nnmusl_resolve(const char *path, char *buffer, bool *ok);
HIDDEN int __nnmusl_fs_result_errno(uint64_t result);
HIDDEN int __nnmusl_fd_open_file(uint64_t handle, int read_only, int append);

// nn::fs open modes, writes may extend the file.
#define MODE_READ 1
#define MODE_WRITE_APPEND 6
#define MODE_READ_WRITE_APPEND 7

HIDDEN int __nnmusl_open_file(const char *path, int flags)
{
	bool ok = true;
	uint64_t handle = 0;

	if (path[0] == '/') {
		int device = __nnmusl_check_device_path(path);
		if ((unsigned)device < 3) return __nnmusl_dup_console(device);
		if (device == 3) return __nnmusl_open_null(path);
	} else if (!path[0]) {
		errno = ENOENT;
		return -1;
	}

	char buffer[785];
	const char *resolved = __nnmusl_resolve(path, buffer, &ok);
	if (!ok) return -1;

	int mode, read_only, append;
	switch (flags & (O_ACCMODE | O_PATH)) {
	case O_RDONLY:
		if (flags & O_APPEND) {
			errno = EINVAL;
			return -1;
		}
		mode = MODE_READ;
		read_only = 1;
		append = 0;
		break;
	case O_WRONLY:
		mode = MODE_WRITE_APPEND;
		read_only = 0;
		append = flags >> 10 & 1;
		break;
	case O_RDWR:
		mode = MODE_READ_WRITE_APPEND;
		read_only = 0;
		append = flags >> 10 & 1;
		break;
	default:
		errno = EINVAL;
		return -1;
	}

	uint32_t result = nn_fs_OpenFile(&handle, resolved, mode);
	if (result) {
		uint32_t inner = result & 0x3fffff;
		if ((flags & (O_CREAT | O_EXCL)) == (O_CREAT | O_EXCL) &&
			inner == 0xe02) {
			errno = EEXIST;
			return -1;
		}
		if (inner == 0x202) {
			if (!(flags & O_CREAT)) {
				errno = ENOENT;
				return -1;
			}
			result = nn_fs_CreateFile(resolved, 0);
			if (!result) result = nn_fs_OpenFile(&handle, resolved, mode);
		} else if (flags & O_TRUNC) {
			errno = EPERM;
		}
	} else if (flags & O_EXCL) {
		if (flags & O_CREAT) {
			nn_fs_CloseFile(handle);
			errno = EEXIST;
			return -1;
		}
		if (flags & O_TRUNC) result = nn_fs_SetFileSize(handle, 0);
	} else if (flags & O_TRUNC) {
		result = nn_fs_SetFileSize(handle, 0);
	}
	if (result) {
		errno = __nnmusl_fs_result_errno(result);
		return -1;
	}

	int fd = __nnmusl_fd_open_file(handle, read_only, append);
	if (fd >= 0) return fd;
	nn_fs_CloseFile(handle);
	errno = ENFILE;
	return -1;
}
