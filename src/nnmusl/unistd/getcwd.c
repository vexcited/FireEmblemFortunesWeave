#include <errno.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

__attribute__((visibility("hidden"))) int __nnmusl_getcwd(char *buf, size_t size);

// Without a buffer nnmusl builds the path on the stack and duplicates it.
char *getcwd(char *buf, size_t size)
{
	if (!buf) {
		char *tmp = __builtin_alloca(785);
		if (__nnmusl_getcwd(tmp, 785) < 0) return 0;
		return strdup(tmp);
	}
	if (!size) {
		errno = EINVAL;
		return 0;
	}
	return __nnmusl_getcwd(buf, size) < 0 ? 0 : buf;
}
