#include <errno.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>

#define HIDDEN __attribute__((visibility("hidden")))

HIDDEN uint32_t __nnmusl_canonicalize(char *out, size_t *length,
	const char *path);
HIDDEN int __nnmusl_fs_result_errno(uint64_t result);

char *realpath(const char *restrict filename, char *restrict resolved)
{
	size_t length = 0;
	uint32_t result;

	if (resolved) {
		result = __nnmusl_canonicalize(resolved, &length, filename);
		if (!result) return resolved;
	} else {
		char *buffer = __builtin_alloca(800);
		result = __nnmusl_canonicalize(buffer, &length, filename);
		if (!result) {
			char *out = malloc(length + 1);
			if (!out) {
				errno = ENOMEM;
				return 0;
			}
			memcpy(out, buffer, length + 1);
			return out;
		}
	}
	errno = __nnmusl_fs_result_errno(result);
	return 0;
}
