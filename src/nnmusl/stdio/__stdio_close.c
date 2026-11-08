#include "stdio_impl.h"
#include <unistd.h>

int __aio_close(int);

int __stdio_close(FILE *f)
{
	if (f->fd < 0) return 0;
	return close(__aio_close(f->fd));
}
