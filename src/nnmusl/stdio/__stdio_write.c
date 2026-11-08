#include "stdio_impl.h"
#include <errno.h>
#include <limits.h>
#include <sys/uio.h>
#include <unistd.h>

// nnmusl has no writev, it writes each buffer in turn and fails the whole
// transfer when the total would overflow.
static inline ssize_t writev_emulated(int fd, const struct iovec *iov,
	int iovcnt)
{
	ssize_t total = 0;
	for (int i = 0; i < iovcnt; i++) {
		if (!iov[i].iov_len) continue;
		ssize_t cnt = write(fd, iov[i].iov_base, iov[i].iov_len);
		if (cnt < 0) return cnt;
		if ((size_t)cnt > (size_t)(SSIZE_MAX ^ total)) {
			errno = EINVAL;
			return -1;
		}
		total += cnt;
	}
	return total;
}

size_t __stdio_write(FILE *f, const unsigned char *buf, size_t len)
{
	struct iovec iovs[2] = {
		{ .iov_base = f->wbase, .iov_len = f->wpos-f->wbase },
		{ .iov_base = (void *)buf, .iov_len = len }
	};
	struct iovec *iov = iovs;
	size_t rem = iov[0].iov_len + iov[1].iov_len;
	int iovcnt = 2;
	ssize_t cnt;
	for (;;) {
		cnt = writev_emulated(f->fd, iov, iovcnt);
		if (cnt == rem) {
			f->wend = f->buf + f->buf_size;
			f->wpos = f->wbase = f->buf;
			return len;
		}
		if (cnt < 0) {
			f->wpos = f->wbase = f->wend = 0;
			f->flags |= F_ERR;
			return iovcnt == 2 ? 0 : len-iov[0].iov_len;
		}
		rem -= cnt;
		if (cnt > iov[0].iov_len) {
			cnt -= iov[0].iov_len;
			iov++; iovcnt--;
		}
		iov[0].iov_base = (char *)iov[0].iov_base + cnt;
		iov[0].iov_len -= cnt;
	}
}
