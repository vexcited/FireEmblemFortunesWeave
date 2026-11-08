#include <fcntl.h>
#include <stdint.h>
#include <sys/stat.h>
#include <unistd.h>

#define HIDDEN __attribute__((visibility("hidden")))

struct nnmusl_fd_request {
	void *state;
	uint64_t reserved;
	uint64_t arguments[3];
};

HIDDEN int __nnmusl_fd_allocate(struct nnmusl_fd_request *request,
	const uint32_t *flags);
HIDDEN int __nnmusl_fstat(int fd, struct stat *st);

HIDDEN int __nnmusl_fd_open_directory(void *state, uint64_t a, uint64_t b,
	uint64_t c)
{
	uint32_t flags = 0x400002;
	struct nnmusl_fd_request request = { state, 0, { a, b, c } };
	return __nnmusl_fd_allocate(&request, &flags);
}

// File descriptors carry the append and non blocking bits in their flags.
HIDDEN int __nnmusl_fd_open_file(void *state, int append, int nonblock)
{
	struct {
		void *state;
		uint64_t reserved;
	} request = { state, 0 };
	uint32_t flags = (append & 1 ? 0x1400001 : 0x400001) |
		(nonblock & 1 ? 0x800000 : 0);
	return __nnmusl_fd_allocate((struct nnmusl_fd_request *)&request, &flags);
}

HIDDEN int __nnmusl_stat_path(const char *path, struct stat *st)
{
	int fd = open(path, 0);
	if (fd < 0) return -1;
	int ret = __nnmusl_fstat(fd, st);
	return close(fd) > -1 ? ret : -1;
}
