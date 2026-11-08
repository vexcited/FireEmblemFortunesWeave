#include "stdio_impl.h"
#include <stdlib.h>
#include <string.h>
#include <errno.h>
#include "libc.h"

// nnmusl keeps its threaded flag in a single byte.
extern __attribute__((visibility("hidden"))) unsigned char __nnmusl_threaded;

// nnmusl has no descriptor flags or terminals, so the fcntl and ioctl calls
// are gone and streams start fully buffered.
FILE *__fdopen(int fd, const char *mode)
{
	FILE *f;

	if (!strchr("rwa", *mode)) {
		errno = EINVAL;
		return 0;
	}

	if (!(f=malloc(sizeof *f + UNGET + BUFSIZ))) return 0;

	memset(f, 0, sizeof *f);

	if (!strchr(mode, '+')) f->flags = (*mode == 'r') ? F_NOWR : F_NORD;

	if (*mode == 'a') f->flags |= F_APP;

	f->fd = fd;
	f->buf = (unsigned char *)f + sizeof *f + UNGET;
	f->buf_size = BUFSIZ;

	f->lbf = EOF;

	f->read = __stdio_read;
	f->write = __stdio_write;
	f->seek = __stdio_seek;
	f->close = __stdio_close;

	if (!__nnmusl_threaded) f->lock = -1;

	return __ofl_add(f);
}

weak_alias(__fdopen, fdopen);
