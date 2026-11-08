#include <errno.h>
#include <stdbool.h>
#include <stdint.h>
#include <unistd.h>

#define HIDDEN __attribute__((visibility("hidden")))

uint32_t nn_fs_CreateDirectory(const char *path)
	__asm__("_ZN2nn2fs15CreateDirectoryEPKc");
uint32_t nn_fs_GetEntryType(int *type, const char *path)
	__asm__("_ZN2nn2fs12GetEntryTypeEPNS0_18DirectoryEntryTypeEPKc");
uint32_t nn_fs_RenameFile(const char *from, const char *to)
	__asm__("_ZN2nn2fs10RenameFileEPKcS2_");
uint32_t nn_fs_RenameDirectory(const char *from, const char *to)
	__asm__("_ZN2nn2fs15RenameDirectoryEPKcS2_");

HIDDEN uint32_t __nnmusl_resolve_path(int *length, char *buffer,
	int bufferSize, const char *path, int directory);
HIDDEN int __nnmusl_result_to_errno(uint32_t result);
HIDDEN int __nnmusl_fs_result_errno(uint64_t result);
HIDDEN char *__nnmusl_resolve(const char *path, char *buffer, bool *ok);
HIDDEN int __nnmusl_open_directory(const char *path, int flags);
HIDDEN int __nnmusl_open_file(const char *path, int flags);
HIDDEN int __nnmusl_close_thunk(int fd);

HIDDEN int __nnmusl_mkdir(const char *path)
{
	if (!*path) {
		errno = ENOENT;
		return -1;
	}

	int length;
	char buffer[785];
	uint32_t result = __nnmusl_resolve_path(&length, buffer, sizeof buffer,
		path, -100);
	if (!result) {
		result = nn_fs_CreateDirectory(buffer);
		if (!result) return 0;
		if ((result & 0x3fffff) == 0x202) {
			errno = ENOENT;
			return -1;
		}
		if ((result & 0x3fffff) == 0x402) {
			errno = EEXIST;
			return -1;
		}
	}
	errno = __nnmusl_result_to_errno(result);
	return -1;
}

HIDDEN int __nnmusl_rename(const char *from, const char *to)
{
	if (!*from || !*to) {
		errno = ENOENT;
		return -1;
	}

	int type = 0;
	bool ok = true;
	char fromBuffer[785];
	char toBuffer[785];
	const char *source = __nnmusl_resolve(from, fromBuffer, &ok);
	if (!ok) return -1;
	const char *target = __nnmusl_resolve(to, toBuffer, &ok);
	if (!ok) return -1;

	int err;
	uint32_t result = nn_fs_GetEntryType(&type, source);
	if (!result) {
		if (type == 0) {
			result = nn_fs_RenameDirectory(source, target);
		} else if (type == 1) {
			result = nn_fs_RenameFile(source, target);
		} else {
			err = EPERM;
			goto fail;
		}
		if (!result) return 0;
	}
	err = __nnmusl_fs_result_errno(result);
fail:
	errno = err;
	return -1;
}

// Checks access by opening the entry with the matching mode.
HIDDEN int __nnmusl_access(const char *path, int amode)
{
	int type = 0;
	bool ok = true;
	char buffer[785];
	const char *resolved = __nnmusl_resolve(path, buffer, &ok);
	if (!ok) return -1;

	uint32_t result = nn_fs_GetEntryType(&type, resolved);
	if (result) {
		errno = (result & 0x3fffff) == 0x202 ? ENOENT : EPERM;
		return -1;
	}

	int fd;
	if (type == 0) {
		fd = __nnmusl_open_directory(resolved, 0);
	} else if (type == 1) {
		int mode = amode & 7;
		fd = __nnmusl_open_file(resolved, mode == 6 ? 2 : mode == 2);
	} else {
		return -1;
	}
	if (fd < 0) return fd;
	__nnmusl_close_thunk(fd);
	return 0;
}
