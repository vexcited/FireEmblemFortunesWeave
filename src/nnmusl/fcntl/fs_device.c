#include <string.h>

// Maps /dev/stdin, stdout, stderr and null to their console stream numbers.
__attribute__((visibility("hidden"))) int __nnmusl_check_device_path(
	const char *path)
{
	if (strncmp("/dev/", path, 5)) return -1;
	if (!strcmp("stdin", path + 5)) return 0;
	if (!strcmp("stdout", path + 5)) return 1;
	if (!strcmp("stderr", path + 5)) return 2;
	return strcmp("null", path + 5) ? -1 : 3;
}
