#include "stdio_impl.h"
#include <errno.h>
#include <limits.h>
#include <unistd.h>

// nnmusl has no readv, it reads the caller buffer and the stream buffer
// one after the other.
size_t __stdio_read(FILE *f, unsigned char *buf, size_t len)
{
	size_t len0 = len - !!f->buf_size;
	ssize_t cnt;

	if (len0) {
		ssize_t first = read(f->fd, buf, len0);
		if (first < 0) {
			f->flags |= F_ERR;
			return 0;
		}
		ssize_t second = read(f->fd, f->buf, f->buf_size);
		if (second < 0) {
			f->flags |= F_ERR;
			return 0;
		}
		if ((size_t)second > (size_t)(SSIZE_MAX ^ first)) {
			errno = EINVAL;
			f->flags |= F_ERR;
			return 0;
		}
		cnt = first + second;
	} else {
		cnt = read(f->fd, f->buf, f->buf_size);
	}

	if (cnt <= 0) {
		f->flags |= cnt ? F_ERR : F_EOF;
		return 0;
	}
	if ((size_t)cnt <= len0) return cnt;
	cnt -= len0;
	f->rpos = f->buf;
	f->rend = f->buf + cnt;
	if (f->buf_size) buf[len-1] = *f->rpos++;
	return len;
}
