#include "stdio_impl.h"
#include <errno.h>
#include <unistd.h>

// nnmusl cannot change the mode of an open stream or duplicate descriptors,
// it reopens by name and moves the new descriptor over the old one.
FILE *freopen(const char *restrict filename, const char *restrict mode, FILE *restrict f)
{
	FILE *f2;

	FLOCK(f);

	fflush(f);

	if (!filename) {
		errno = EINVAL;
		goto fail;
	}

	f2 = fopen(filename, mode);
	if (!f2) goto fail;
	if (f2->fd != f->fd) {
		close(f->fd);
		f->fd = f2->fd;
	}
	f2->fd = -1;

	f->flags = (f->flags & F_PERM) | f2->flags;
	f->read = f2->read;
	f->write = f2->write;
	f->seek = f2->seek;
	f->close = f2->close;

	fclose(f2);

	f->mode = 0;
	f->locale = 0;
	FUNLOCK(f);
	return f;

fail:
	FUNLOCK(f);
	fclose(f);
	return NULL;
}
