#include <stdarg.h>
#include <stddef.h>
#include <sys/ioctl.h>

// Only sockets take ioctl requests, with a pointer sized argument.
__attribute__((visibility("hidden"))) int __nnmusl_socket_ioctl(int fd, int req,
	void *arg, size_t len);

int ioctl(int fd, int req, ...)
{
	va_list ap;
	va_start(ap, req);
	void *arg = va_arg(ap, void *);
	va_end(ap);
	return __nnmusl_socket_ioctl(fd, req, arg, sizeof arg);
}
