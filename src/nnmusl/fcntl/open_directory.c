#include <errno.h>
#include <fcntl.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>

#define HIDDEN __attribute__((visibility("hidden")))

struct nnmusl_path_info {
	uint16_t mount_length;
	uint16_t length;
	uint16_t utf16_length;
	uint16_t longest_component;
	uint16_t longest_utf16_component;
	uint8_t reserved[4];
	uint8_t flags;
	uint8_t reserved2;
};

uint32_t nn_fs_OpenDirectory(uint64_t *handle, const char *path, int mode)
	__asm__("_ZN2nn2fs13OpenDirectoryEPNS0_15DirectoryHandleEPKci");
void nn_fs_CloseDirectory(uint64_t handle)
	__asm__("_ZN2nn2fs14CloseDirectoryENS0_15DirectoryHandleE");
uint32_t nn_fs_GetEntryType(int *type, const char *path)
	__asm__("_ZN2nn2fs12GetEntryTypeEPNS0_18DirectoryEntryTypeEPKc");

HIDDEN uint32_t __nnmusl_resolve_path(struct nnmusl_path_info *info,
	char *buffer, int bufferSize, const char *path, int directory);
HIDDEN uint32_t __nnmusl_canonicalize_into(char *out, int size,
	const char *path, struct nnmusl_path_info info);
HIDDEN struct nnmusl_path_info __nnmusl_path_info(const char *path);
HIDDEN int __nnmusl_result_to_errno(uint32_t result);
HIDDEN int __nnmusl_fd_open_directory(uint64_t handle, char *name,
	struct nnmusl_path_info info);

// Directories open read only and keep their canonical name for readdir.
HIDDEN int __nnmusl_open_directory(const char *path, int flags)
{
	uint64_t handle = 0;
	if (!*path) {
		errno = ENOENT;
		return -1;
	}
	if (flags & (O_ACCMODE | O_PATH)) {
		errno = EISDIR;
		return -1;
	}

	struct nnmusl_path_info info;
	char buffer[785];
	uint32_t result = __nnmusl_resolve_path(&info, buffer, sizeof buffer,
		path, -100);
	if (result) goto fail;

	uint32_t opened = nn_fs_OpenDirectory(&handle, buffer, 3);
	if ((flags & (O_CREAT | O_EXCL)) == (O_CREAT | O_EXCL) && !opened) {
		nn_fs_CloseDirectory(handle);
		errno = EEXIST;
		return -1;
	}

	char canonical[785];
	result = __nnmusl_canonicalize_into(canonical, sizeof canonical, buffer,
		info);
	if (result) goto fail;

	struct nnmusl_path_info canonical_info = __nnmusl_path_info(canonical);
	if ((canonical_info.flags & 3) != 3) {
		errno = EINVAL;
		return -1;
	}

	if (!opened) {
		char *name = strdup(canonical);
		if (!name) return -1;
		int fd = __nnmusl_fd_open_directory(handle, name, canonical_info);
		if (fd >= 0) return fd;
		free(name);
		nn_fs_CloseDirectory(handle);
		errno = ENFILE;
		return -1;
	}

	result = opened;
	if ((result & 0x3fffff) == 0x177a02) {
		errno = EOVERFLOW;
		return -1;
	}
	if ((result & 0x3fffff) == 0x202) {
		int type = 0;
		result = nn_fs_GetEntryType(&type, buffer);
		if (!result) {
			errno = type ? ENOTDIR : ENOENT;
			return -1;
		}
	}
fail:
	errno = __nnmusl_result_to_errno(result);
	return -1;
}
