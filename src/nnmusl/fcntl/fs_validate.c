#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#define HIDDEN __attribute__((visibility("hidden")))

// Lengths measured while resolving a path, the longest component in UTF-8
// and UTF-16 included.
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

bool nn_fs_IsPathMounted(const char *path)
	__asm__("_ZN2nn2fs13IsPathMountedEPKc");
uint32_t nn_fs_GetPathLengthMax(size_t *out, const char *path)
	__asm__("_ZN2nn2fs16GetPathLengthMaxEPmPKc");
uint32_t nn_fs_GetUtf16PathLengthMax(bool *utf16, size_t *out,
	const char *path)
	__asm__("_ZN2nn2fs21GetUtf16PathLengthMaxEPbPmPKc");
uint32_t nn_fs_GetEntryNameLengthMax(size_t *out, const char *path)
	__asm__("_ZN2nn2fs21GetEntryNameLengthMaxEPmPKc");
uint32_t nn_fs_GetUtf16EntryNameLengthMax(bool *utf16, size_t *out,
	const char *path)
	__asm__("_ZN2nn2fs26GetUtf16EntryNameLengthMaxEPbPmPKc");
_Noreturn void nn_diag_AbortImpl(const uint32_t *result)
	__asm__("_ZN2nn4diag6detail9AbortImplEPKNS_6ResultE");

// A mount without limits answers with this result, any other failure is
// fatal.
#define NOT_SUPPORTED(result) (((result) & 0x3fffff) - 0x35f000 == 0x202)
#define CHECK(result) \
	do { \
		if (result) { \
			if (NOT_SUPPORTED(result)) return 0x1227; \
			nn_diag_AbortImpl(&(result)); \
		} \
	} while (0)

HIDDEN uint32_t __nnmusl_validate_path(const char *path,
	struct nnmusl_path_info info)
{
	if (!(info.flags & 8) && info.flags & 0x10) return 0x1027;
	if (!nn_fs_IsPathMounted(path)) return 0x1227;

	size_t path_max = 0;
	uint32_t result = nn_fs_GetPathLengthMax(&path_max, path);
	CHECK(result);
	size_t used = info.length -
		((info.flags & 0xa) == 2 ? info.mount_length : 0);
	if (used > path_max) return 0x827;

	bool utf16 = false;
	size_t utf16_max = 0;
	result = nn_fs_GetUtf16PathLengthMax(&utf16, &utf16_max, path);
	CHECK(result);
	if (utf16 == 1 && info.utf16_length > utf16_max) return 0x827;

	size_t name_max = 0;
	result = nn_fs_GetEntryNameLengthMax(&name_max, path);
	CHECK(result);
	if (name_max < info.longest_component) return 0xa27;

	bool utf16_names = false;
	size_t utf16_name_max = 0;
	result = nn_fs_GetUtf16EntryNameLengthMax(&utf16_names, &utf16_name_max,
		path);
	CHECK(result);
	if (utf16_names && utf16_name_max < info.longest_utf16_component)
		return 0xa27;
	return 0;
}
