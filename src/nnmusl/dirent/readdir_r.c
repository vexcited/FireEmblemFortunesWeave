#include <dirent.h>
#include <errno.h>
#include <string.h>

#define HIDDEN __attribute__((visibility("hidden")))

HIDDEN void __nnmusl_dir_lock(void *lock);
HIDDEN void __nnmusl_dir_unlock(void *lock);

int *__errno_location(void) __attribute__((const));

// The directory stream keeps its mutex 0x18 bytes in.
#define DIR_LOCK(dir) ((char *)(dir) + 0x18)

int readdir_r(DIR *restrict dir, struct dirent *restrict buf, struct dirent **restrict result)
{
	struct dirent *de;
	int errno_save = errno;
	int ret;

	__nnmusl_dir_lock(DIR_LOCK(dir));
	errno = 0;
	de = readdir(dir);
	if ((ret = errno)) {
		__nnmusl_dir_unlock(DIR_LOCK(dir));
		return ret;
	}
	errno = errno_save;
	if (de) memcpy(buf, de, de->d_reclen);
	else buf = NULL;

	__nnmusl_dir_unlock(DIR_LOCK(dir));
	*result = buf;
	return 0;
}
