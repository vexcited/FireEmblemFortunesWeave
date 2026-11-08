#include <stdint.h>
#include <stddef.h>

#define HIDDEN __attribute__((visibility("hidden")))

struct nnmusl_path_info {
	uint16_t mount_length;
	uint16_t length;
	uint8_t reserved[10];
	uint8_t flags;
	uint8_t reserved2;
};

uint32_t nn_fs_GetEntryType(int *type, const char *path)
	__asm__("_ZN2nn2fs12GetEntryTypeEPNS0_18DirectoryEntryTypeEPKc");

HIDDEN struct nnmusl_path_info __nnmusl_path_info(const char *path);
HIDDEN uint32_t __nnmusl_canonicalize_into(char *out, int size,
	const char *path, struct nnmusl_path_info info);
HIDDEN uint32_t __nnmusl_validate_path(const char *path,
	struct nnmusl_path_info info);

#define NOT_FOUND(result) (((result) & 0x3fffff) == 0x202)

// Canonicalizes a path for realpath. When it does not exist the nearest
// existing parent decides between a missing entry and a non directory.
HIDDEN uint32_t __nnmusl_canonicalize(char *out, size_t *length,
	const char *path)
{
	if (!path) return 0x1827;
	if (!*path) return 0x1427;

	struct nnmusl_path_info info = __nnmusl_path_info(path);
	char last = path[info.length - 1];
	int trailing = last == '/' || last == '\\';
	uint32_t result = __nnmusl_canonicalize_into(out, 785, path, info);
	if (result) return (result & 0x3fffff) == 0x1627 ? 0x827 : result;

	int type = 0;
	struct nnmusl_path_info resolved = __nnmusl_path_info(out);
	result = __nnmusl_validate_path(out, resolved);
	if (!result) {
		result = nn_fs_GetEntryType(&type, out);
		if (!result) {
			if (trailing && type) return 0x1e27;
			*length = resolved.length;
			return 0;
		}
	}
	if (!NOT_FOUND(result)) return result;

	char *mount_end = out + resolved.mount_length;
	char *cursor = out + resolved.length;
	for (;;) {
		char *separator = out - 1;
		while (cursor != out) {
			char c = *--cursor;
			if (c == '\\' || c == '/') {
				separator = cursor;
				break;
			}
		}

		result = 0x1427;
		if (!separator || separator <= mount_end) break;
		*separator = 0;
		result = __nnmusl_validate_path(out, __nnmusl_path_info(out));
		if (!result) result = nn_fs_GetEntryType(&type, out);
		if (result) {
			if (!NOT_FOUND(result)) return result;
			cursor = separator;
			continue;
		}
		result = type ? 0x1e27 : 0x1427;
		break;
	}
	out[0] = 0;
	return result;
}
