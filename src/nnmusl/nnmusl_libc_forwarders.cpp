#include <arpa/inet.h>
#include <dirent.h>
#include <fcntl.h>
#include <netdb.h>
#include <poll.h>
#include <stdint.h>
#include <sys/select.h>
#include <sys/socket.h>
#include <sys/stat.h>
#include <time.h>
#include <unistd.h>

extern "C" {

uint64_t htonll(uint64_t value);
uint64_t ntohll(uint64_t value);
int clock_setclockbase_np(int base);
int __aio_close(int fd);
off_t __lseek(int fd, off_t offset, int whence);
int __nnmusl_get_number_uncalled_tls_dtors();

[[gnu::visibility("hidden")]] int __nnmusl_accept(int fd,
  struct sockaddr* address, socklen_t* length);
[[gnu::visibility("hidden")]] int __nnmusl_bind(int fd,
  const struct sockaddr* address, socklen_t length);
[[gnu::visibility("hidden")]] int __nnmusl_connect(int fd,
  const struct sockaddr* address, socklen_t length);
[[gnu::visibility("hidden")]] const char* __nnmusl_gai_strerror(int error);
[[gnu::visibility("hidden")]] int __nnmusl_getaddrinfo(const char* host,
  const char* service, const struct addrinfo* hints, struct addrinfo** result);
[[gnu::visibility("hidden")]] struct hostent*
__nnmusl_gethostbyaddr(const void* address, socklen_t length, int type);
[[gnu::visibility("hidden")]] struct hostent*
__nnmusl_gethostbyname(const char* name);
[[gnu::visibility("hidden")]] int
__nnmusl_getnameinfo(const struct sockaddr* address, socklen_t length,
  char* host, socklen_t hostLength, char* service, socklen_t serviceLength,
  int flags);
[[gnu::visibility("hidden")]] int __nnmusl_getpeername(int fd,
  struct sockaddr* address, socklen_t* length);
[[gnu::visibility("hidden")]] int __nnmusl_getsockname(int fd,
  struct sockaddr* address, socklen_t* length);
[[gnu::visibility("hidden")]] int __nnmusl_getsockopt(int fd, int level,
  int name, void* value, socklen_t* length);
[[gnu::visibility("hidden")]] const char* __nnmusl_hstrerror(int error);
[[gnu::visibility("hidden")]] uint32_t __nnmusl_htonl(uint32_t value);
[[gnu::visibility("hidden")]] uint64_t __nnmusl_htonll(uint64_t value);
[[gnu::visibility("hidden")]] uint16_t __nnmusl_htons(uint16_t value);
[[gnu::visibility("hidden")]] int __nnmusl_inet_aton(const char* text,
  struct in_addr* address);
[[gnu::visibility("hidden")]] const char* __nnmusl_inet_ntop(int family,
  const void* address, char* buffer, socklen_t size);
[[gnu::visibility("hidden")]] int __nnmusl_inet_pton(int family,
  const char* text, void* address);
[[gnu::visibility("hidden")]] int __nnmusl_listen(int fd, int backlog);
[[gnu::visibility("hidden")]] uint32_t __nnmusl_ntohl(uint32_t value);
[[gnu::visibility("hidden")]] uint64_t __nnmusl_ntohll(uint64_t value);
[[gnu::visibility("hidden")]] uint16_t __nnmusl_ntohs(uint16_t value);
[[gnu::visibility("hidden")]] ssize_t __nnmusl_recv(int fd, void* buffer,
  size_t size, int flags);
[[gnu::visibility("hidden")]] ssize_t __nnmusl_recvfrom(int fd, void* buffer,
  size_t size, int flags, struct sockaddr* address, socklen_t* length);
[[gnu::visibility("hidden")]] ssize_t __nnmusl_recvmsg(int fd,
  struct msghdr* message, int flags);
[[gnu::visibility("hidden")]] int __nnmusl_recvmmsg(int fd,
  struct mmsghdr* messages, unsigned int count, unsigned int flags,
  struct timespec* timeout);
[[gnu::visibility("hidden")]] ssize_t __nnmusl_send(int fd, const void* buffer,
  size_t size, int flags);
[[gnu::visibility("hidden")]] ssize_t __nnmusl_sendmsg(int fd,
  const struct msghdr* message, int flags);
[[gnu::visibility("hidden")]] int __nnmusl_sendmmsg(int fd,
  struct mmsghdr* messages, unsigned int count, unsigned int flags);
[[gnu::visibility("hidden")]] ssize_t __nnmusl_sendto(int fd,
  const void* buffer, size_t size, int flags, const struct sockaddr* address,
  socklen_t length);
[[gnu::visibility("hidden")]] int __nnmusl_setsockopt(int fd, int level,
  int name, const void* value, socklen_t length);
[[gnu::visibility("hidden")]] int __nnmusl_shutdown(int fd, int how);
[[gnu::visibility("hidden")]] int __nnmusl_sockatmark(int fd);
[[gnu::visibility("hidden")]] int __nnmusl_socket(int domain, int type,
  int protocol);
[[gnu::visibility("hidden")]] int __nnmusl_poll(struct pollfd* fds,
  nfds_t count, int timeout);
[[gnu::visibility("hidden")]] int __nnmusl_select(int count, fd_set* readFds,
  fd_set* writeFds, fd_set* exceptFds, struct timeval* timeout);
[[gnu::visibility("hidden")]] int __nnmusl_fstat(int fd, struct stat* stat);
[[gnu::visibility("hidden")]] int __nnmusl_mkdir(const char* path, mode_t mode);
[[gnu::visibility("hidden")]] int __nnmusl_lstat(const char* path,
  struct stat* stat);
[[gnu::visibility("hidden")]] int __nnmusl_rename(const char* from,
  const char* to);
[[gnu::visibility("hidden")]] int __nnmusl_clock_getres(clockid_t clock,
  struct timespec* resolution);
[[gnu::visibility("hidden")]] int __nnmusl_clock_gettime(clockid_t clock,
  struct timespec* time);
[[gnu::visibility("hidden")]] int __nnmusl_clock_setclockbase_np(int base);
[[gnu::visibility("hidden")]] int __nnmusl_access(const char* path, int mode);
[[gnu::visibility("hidden")]] int __nnmusl_chdir(const char* path);
[[gnu::visibility("hidden")]] int __nnmusl_close(int fd);
[[gnu::visibility("hidden")]] int __nnmusl_dup(int fd);
[[gnu::visibility("hidden")]] int __nnmusl_dup2(int fd, int newFd);
[[gnu::visibility("hidden")]] int __nnmusl_truncate(const char* path,
  off_t length);
[[gnu::visibility("hidden")]] int __nnmusl_ftruncate(int fd, off_t length);
[[gnu::visibility("hidden")]] int __nnmusl_isatty(int fd);
[[gnu::visibility("hidden")]] off_t __nnmusl_lseek(int fd, off_t offset,
  int whence);
[[gnu::visibility("hidden")]] ssize_t __nnmusl_pread(int fd, void* buffer,
  size_t size, off_t offset);
[[gnu::visibility("hidden")]] ssize_t __nnmusl_pwrite(int fd,
  const void* buffer, size_t size, off_t offset);
[[gnu::visibility("hidden")]] ssize_t __nnmusl_read(int fd, void* buffer,
  size_t size);
[[gnu::visibility("hidden")]] int __nnmusl_rmdir(const char* path);
[[gnu::visibility("hidden")]] ssize_t __nnmusl_write(int fd, const void* buffer,
  size_t size);
[[gnu::visibility("hidden")]] char* __nnmusl_inet_ntoa(struct in_addr address);
[[gnu::visibility("hidden")]] int __nnmusl_unlink(const char* path,
  int isFile);

int accept(int fd, struct sockaddr* address, socklen_t* length) {
  return __nnmusl_accept(fd, address, length);
}

int bind(int fd, const struct sockaddr* address, socklen_t length) {
  return __nnmusl_bind(fd, address, length);
}

int connect(int fd, const struct sockaddr* address, socklen_t length) {
  return __nnmusl_connect(fd, address, length);
}

const char* gai_strerror(int error) {
  return __nnmusl_gai_strerror(error);
}

int getaddrinfo(const char* host, const char* service,
  const struct addrinfo* hints, struct addrinfo** result) {
  return __nnmusl_getaddrinfo(host, service, hints, result);
}

struct hostent* gethostbyaddr(const void* address, socklen_t length, int type) {
  return __nnmusl_gethostbyaddr(address, length, type);
}

struct hostent* gethostbyname(const char* name) {
  return __nnmusl_gethostbyname(name);
}

int getnameinfo(const struct sockaddr* address, socklen_t length, char* host,
  socklen_t hostLength, char* service, socklen_t serviceLength, int flags) {
  return __nnmusl_getnameinfo(address, length, host, hostLength, service,
    serviceLength, flags);
}

int getpeername(int fd, struct sockaddr* address, socklen_t* length) {
  return __nnmusl_getpeername(fd, address, length);
}

int getsockname(int fd, struct sockaddr* address, socklen_t* length) {
  return __nnmusl_getsockname(fd, address, length);
}

int getsockopt(int fd, int level, int name, void* value, socklen_t* length) {
  return __nnmusl_getsockopt(fd, level, name, value, length);
}

const char* hstrerror(int error) {
  return __nnmusl_hstrerror(error);
}

uint32_t htonl(uint32_t value) {
  return __nnmusl_htonl(value);
}

uint64_t htonll(uint64_t value) {
  return __nnmusl_htonll(value);
}

uint16_t htons(uint16_t value) {
  return __nnmusl_htons(value);
}

int inet_aton(const char* text, struct in_addr* address) {
  return __nnmusl_inet_aton(text, address);
}

const char* inet_ntop(int family, const void* address, char* buffer,
  socklen_t size) {
  return __nnmusl_inet_ntop(family, address, buffer, size);
}

int inet_pton(int family, const char* text, void* address) {
  return __nnmusl_inet_pton(family, text, address);
}

int listen(int fd, int backlog) {
  return __nnmusl_listen(fd, backlog);
}

uint32_t ntohl(uint32_t value) {
  return __nnmusl_ntohl(value);
}

uint64_t ntohll(uint64_t value) {
  return __nnmusl_ntohll(value);
}

uint16_t ntohs(uint16_t value) {
  return __nnmusl_ntohs(value);
}

ssize_t recv(int fd, void* buffer, size_t size, int flags) {
  return __nnmusl_recv(fd, buffer, size, flags);
}

ssize_t recvfrom(int fd, void* buffer, size_t size, int flags,
  struct sockaddr* address, socklen_t* length) {
  return __nnmusl_recvfrom(fd, buffer, size, flags, address, length);
}

ssize_t recvmsg(int fd, struct msghdr* message, int flags) {
  return __nnmusl_recvmsg(fd, message, flags);
}

int recvmmsg(int fd, struct mmsghdr* messages, unsigned int count,
  unsigned int flags, struct timespec* timeout) {
  return __nnmusl_recvmmsg(fd, messages, count, flags, timeout);
}

ssize_t send(int fd, const void* buffer, size_t size, int flags) {
  return __nnmusl_send(fd, buffer, size, flags);
}

ssize_t sendmsg(int fd, const struct msghdr* message, int flags) {
  return __nnmusl_sendmsg(fd, message, flags);
}

int sendmmsg(int fd, struct mmsghdr* messages, unsigned int count,
  unsigned int flags) {
  return __nnmusl_sendmmsg(fd, messages, count, flags);
}

ssize_t sendto(int fd, const void* buffer, size_t size, int flags,
  const struct sockaddr* address, socklen_t length) {
  return __nnmusl_sendto(fd, buffer, size, flags, address, length);
}

int setsockopt(int fd, int level, int name, const void* value,
  socklen_t length) {
  return __nnmusl_setsockopt(fd, level, name, value, length);
}

int shutdown(int fd, int how) {
  return __nnmusl_shutdown(fd, how);
}

int sockatmark(int fd) {
  return __nnmusl_sockatmark(fd);
}

int socket(int domain, int type, int protocol) {
  return __nnmusl_socket(domain, type, protocol);
}

int poll(struct pollfd* fds, nfds_t count, int timeout) {
  return __nnmusl_poll(fds, count, timeout);
}

int select(int count, fd_set* readFds, fd_set* writeFds, fd_set* exceptFds,
  struct timeval* timeout) {
  return __nnmusl_select(count, readFds, writeFds, exceptFds, timeout);
}

int fstat(int fd, struct stat* stat) {
  return __nnmusl_fstat(fd, stat);
}

int mkdir(const char* path, mode_t mode) {
  return __nnmusl_mkdir(path, mode);
}

int lstat(const char* path, struct stat* stat) {
  return __nnmusl_lstat(path, stat);
}

int rename(const char* from, const char* to) {
  return __nnmusl_rename(from, to);
}

int clock_getres(clockid_t clock, struct timespec* resolution) {
  return __nnmusl_clock_getres(clock, resolution);
}

int clock_gettime(clockid_t clock, struct timespec* time) {
  return __nnmusl_clock_gettime(clock, time);
}

int clock_setclockbase_np(int base) {
  return __nnmusl_clock_setclockbase_np(base);
}

int access(const char* path, int mode) {
  return __nnmusl_access(path, mode);
}

int chdir(const char* path) {
  return __nnmusl_chdir(path);
}

int close(int fd) {
  return __nnmusl_close(fd);
}

int dup(int fd) {
  return __nnmusl_dup(fd);
}

int dup2(int fd, int newFd) {
  return __nnmusl_dup2(fd, newFd);
}

int truncate(const char* path, off_t length) {
  return __nnmusl_truncate(path, length);
}

int ftruncate(int fd, off_t length) {
  return __nnmusl_ftruncate(fd, length);
}

int isatty(int fd) {
  return __nnmusl_isatty(fd);
}

off_t __lseek(int fd, off_t offset, int whence) {
  return __nnmusl_lseek(fd, offset, whence);
}

ssize_t pread(int fd, void* buffer, size_t size, off_t offset) {
  return __nnmusl_pread(fd, buffer, size, offset);
}

ssize_t pwrite(int fd, const void* buffer, size_t size, off_t offset) {
  return __nnmusl_pwrite(fd, buffer, size, offset);
}

ssize_t read(int fd, void* buffer, size_t size) {
  return __nnmusl_read(fd, buffer, size);
}

int rmdir(const char* path) {
  return __nnmusl_rmdir(path);
}

ssize_t write(int fd, const void* buffer, size_t size) {
  return __nnmusl_write(fd, buffer, size);
}

char* inet_ntoa(struct in_addr address) {
  return __nnmusl_inet_ntoa(address);
}

int remove(const char* path) {
  return __nnmusl_unlink(path, 0);
}

int unlink(const char* path) {
  return __nnmusl_unlink(path, 1);
}

int creat(const char* path, mode_t mode) {
  return open(path, O_WRONLY | O_CREAT | O_TRUNC, mode);
}

// Asynchronous io keeps no state, so closing leaves the descriptor alone.
int __aio_close(int fd) {
  return fd;
}

DIR* fdopendir(int) {
  return nullptr;
}

int _nnmusl_socket_TranslateNnmuslFileDescriptorOrPassThrough(int fd) {
  return fd;
}

void _nnmusl_socket_poll_TranslateFileDescriptorFromNativeToNnmusl(
  struct pollfd*, nfds_t) {
}

int __nnmusl_get_tls_dtors_status() {
  return __nnmusl_get_number_uncalled_tls_dtors();
}

// The thread pointer of musl lives in the thread local region of the os.
[[gnu::always_inline]] inline void** GetThreadPointerSlot() {
  uint8_t* tls;
  asm volatile("mrs %0, tpidrro_el0" : "=r"(tls));
  return reinterpret_cast<void**>(tls + 0x1f0);
}

void __set_tp(void* pointer) {
  *GetThreadPointerSlot() = pointer;
}

void* __get_tp() {
  return *GetThreadPointerSlot();
}

void* __get_tls_data() {
  return static_cast<uint8_t*>(*GetThreadPointerSlot()) - 0x18;
}

}
