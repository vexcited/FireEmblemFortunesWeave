#include <errno.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

#define HIDDEN __attribute__((visibility("hidden")))

HIDDEN uint32_t __nnmusl_copy_cwd(char *buf, size_t size);
HIDDEN uint32_t __nnmusl_set_cwd(const char *path);
HIDDEN int __nnmusl_result_to_errno(uint32_t result);

HIDDEN int __nnmusl_getcwd(char *buf, size_t size)
{
	int err;

	if (!buf) {
		err = EINVAL;
	} else {
		uint32_t result = __nnmusl_copy_cwd(buf, size);
		if (!result) return 0;
		err = __nnmusl_result_to_errno(result);
	}
	errno = err;
	return -1;
}

HIDDEN int __nnmusl_chdir(const char *path)
{
	int err;

	if (!*path) {
		err = ENOENT;
	} else {
		uint32_t result = __nnmusl_set_cwd(path);
		if (!result) return 0;
		err = __nnmusl_result_to_errno(result);
	}
	errno = err;
	return -1;
}
