#include <fcntl.h>
#include <stdarg.h>
#include <errno.h>

#define HIDDEN __attribute__((visibility("hidden")))

// nnmusl asks the file system for the entry type first, 0 is a directory, 1
// a file and 2 a missing entry that the file path may create.
HIDDEN int __nnmusl_path_kind(const char *path);
HIDDEN int __nnmusl_open_directory(const char *path, int flags);
HIDDEN int __nnmusl_open_file(const char *path, int flags);

int open(const char *filename, int flags, ...)
{
	mode_t mode = 0;

	if ((flags & O_CREAT) || (flags & O_TMPFILE) == O_TMPFILE) {
		va_list ap;
		va_start(ap, flags);
		mode = va_arg(ap, mode_t);
		va_end(ap);
	}
	(void)mode;

	switch (__nnmusl_path_kind(filename)) {
	case 0:
		return __nnmusl_open_directory(filename, flags);
	case 1:
		if (flags & O_DIRECTORY) {
			errno = ENOTDIR;
			return -1;
		}
		/* fallthrough */
	case 2:
		return __nnmusl_open_file(filename, flags);
	default:
		return -1;
	}
}
