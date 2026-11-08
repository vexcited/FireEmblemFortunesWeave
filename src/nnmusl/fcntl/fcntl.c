#include <fcntl.h>
#include <stdarg.h>

__attribute__((visibility("hidden"))) int __nnmusl_vfcntl(int fd, int cmd, va_list ap);

int fcntl(int fd, int cmd, ...)
{
	va_list ap;
	va_start(ap, cmd);
	int ret = __nnmusl_vfcntl(fd, cmd, ap);
	va_end(ap);
	return ret;
}
