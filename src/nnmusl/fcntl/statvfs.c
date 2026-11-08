#include <errno.h>
#include <stdbool.h>
#include <stdint.h>
#include <string.h>
#include <sys/statvfs.h>

#define HIDDEN __attribute__((visibility("hidden")))

// The resolver reports the length of the mount name in front of the path
// and whether the mount has free space accounting.
struct nnmusl_resolved_path {
	uint16_t mount_length;
	uint8_t reserved[12];
	uint8_t flags;
	uint8_t reserved2;
};

bool nn_fs_IsPathMounted(const char *path)
	__asm__("_ZN2nn2fs13IsPathMountedEPKc");
uint32_t nn_fs_GetEntryType(int *type, const char *path)
	__asm__("_ZN2nn2fs12GetEntryTypeEPNS0_18DirectoryEntryTypeEPKc");
uint32_t nn_fs_GetEntryNameLengthMax(size_t *out, const char *path)
	__asm__("_ZN2nn2fs21GetEntryNameLengthMaxEPmPKc");
uint32_t nn_fs_GetUtf16EntryNameLengthMax(bool *utf16, size_t *out,
	const char *path)
	__asm__("_ZN2nn2fs26GetUtf16EntryNameLengthMaxEPbPmPKc");
uint32_t nn_fs_GetFreeSpaceSize(int64_t *out, const char *mount)
	__asm__("_ZN2nn2fs16GetFreeSpaceSizeEPlPKc");
_Noreturn void nn_diag_AbortImpl(const uint32_t *result)
	__asm__("_ZN2nn4diag6detail9AbortImplEPKNS_6ResultE");

HIDDEN uint32_t __nnmusl_resolve_path(struct nnmusl_resolved_path *resolved,
	char *buffer, int bufferSize, const char *path, int directory);
HIDDEN int __nnmusl_fs_result_errno(uint64_t result);

#define NOT_SUPPORTED(result) (((result) & 0x3fffff) - 0x35f000 == 0x202)

int statvfs(const char *restrict path, struct statvfs *restrict buf)
{
	uint32_t result;
	if (!*path) {
		result = 0x1427;
		goto fail;
	}

	struct nnmusl_resolved_path resolved;
	char buffer[785];
	result = __nnmusl_resolve_path(&resolved, buffer, sizeof buffer, path,
		-100);
	if (result) goto fail;

	if (!nn_fs_IsPathMounted(buffer)) {
		result = 0x1227;
		goto fail;
	}

	int type = 0;
	result = nn_fs_GetEntryType(&type, buffer);
	if (result) {
		if ((result & 0x3fffff) != 0x202) nn_diag_AbortImpl(&result);
		result = 0x1427;
		goto fail;
	}

	size_t name_max = 0;
	result = nn_fs_GetEntryNameLengthMax(&name_max, buffer);
	if (result) {
		if (!NOT_SUPPORTED(result)) nn_diag_AbortImpl(&result);
		result = 0x1227;
		goto fail;
	}

	bool utf16 = false;
	size_t utf16_max = 0;
	result = nn_fs_GetUtf16EntryNameLengthMax(&utf16, &utf16_max, buffer);
	if (result) {
		if (!NOT_SUPPORTED(result)) nn_diag_AbortImpl(&result);
		result = 0x1227;
		goto fail;
	}

	int64_t free_blocks = 0;
	if (!(resolved.flags & 8)) {
		char mount[16];
		int64_t free_bytes = 0;
		size_t length = resolved.mount_length - 1;
		strncpy(mount, buffer, length);
		mount[length] = 0;
		uint32_t space = nn_fs_GetFreeSpaceSize(&free_bytes, mount);
		if (space) nn_diag_AbortImpl(&space);
		free_blocks = free_bytes / 4096;
	}

	buf->f_bsize = 4096;
	buf->f_frsize = 4096;
	buf->f_blocks = 0;
	buf->f_bfree = free_blocks;
	buf->f_bavail = free_blocks;
	buf->f_files = 0;
	buf->f_ffree = 0;
	buf->f_favail = 0;
	buf->f_fsid = 0;
	buf->f_flag = 0;
	buf->f_namemax = utf16 == 1 && utf16_max * 3 < name_max ?
		utf16_max * 3 : name_max;
	return 0;

fail:
	errno = __nnmusl_fs_result_errno(result);
	return -1;
}
