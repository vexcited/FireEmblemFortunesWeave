#include <errno.h>
#include <stdint.h>

__attribute__((visibility("hidden"))) uint32_t __nnmusl_fd_lookup(unsigned fd);

// Sockets keep their native number, the table only marks them with kind 4.
#define IS_SOCKET(fd) ((uint16_t)__nnmusl_fd_lookup(fd) == 4)

int _nnmusl_socket_TranslateFileDescriptorFromNnmuslToNative(int fd)
{
	int err;

	if (fd < 0) {
		err = EBADF;
	} else {
		if (IS_SOCKET(fd)) return fd;
		err = ENOTSOCK;
	}
	errno = err;
	return -1;
}

int _nnmusl_socket_poll_TranslateFileDescriptorFromNnmuslToNative(int fd)
{
	if (IS_SOCKET(fd)) return fd;
	errno = EFAULT;
	return -1;
}

int _nnmusl_socket_RemoveNnmuslSocketFileDescriptorFromNnmuslTable(int fd)
{
	int err;

	if (fd < 0) {
		err = EBADF;
	} else {
		if (IS_SOCKET(fd)) return 0;
		err = ENOTSOCK;
	}
	errno = err;
	return -1;
}
