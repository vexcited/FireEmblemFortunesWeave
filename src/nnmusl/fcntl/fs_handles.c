#include <errno.h>
#include <stdbool.h>
#include <stdint.h>
#include <stdlib.h>

#define HIDDEN __attribute__((visibility("hidden")))

struct nn_fs_handle {
	void *handle;
};

struct nnmusl_directory {
	struct nn_fs_handle handle;
	uint64_t position;
	void *entries;
};

void nn_fs_CloseFile(struct nn_fs_handle handle)
	__asm__("_ZN2nn2fs9CloseFileENS0_10FileHandleE");
void nn_fs_CloseDirectory(struct nn_fs_handle handle)
	__asm__("_ZN2nn2fs14CloseDirectoryENS0_15DirectoryHandleE");

HIDDEN uint32_t __nnmusl_resolve_path(int *length, char *buffer,
	int bufferSize, const char *path, int directory);
HIDDEN int __nnmusl_result_to_errno(uint32_t result);

HIDDEN void __nnmusl_close_file_handle(struct nn_fs_handle *handle)
{
	nn_fs_CloseFile(*handle);
}

HIDDEN void __nnmusl_close_directory(struct nnmusl_directory *dir)
{
	nn_fs_CloseDirectory(dir->handle);
	free(dir->entries);
}

// Resolves a path against the working directory into the caller buffer.
HIDDEN char *__nnmusl_resolve(const char *path, char *buffer, bool *ok)
{
	int length;
	uint32_t result = __nnmusl_resolve_path(&length, buffer, 785, path, -100);

	*ok = result == 0;
	if (result != 0) {
		errno = __nnmusl_result_to_errno(result);
		return 0;
	}
	return buffer;
}
