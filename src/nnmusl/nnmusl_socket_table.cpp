#include <errno.h>
#include <stdint.h>

extern "C" {

[[gnu::visibility("hidden")]] uint32_t __nnmusl_GetFileDescriptorType(int fd);

constexpr uint32_t FileDescriptorType_Socket = 4;

bool _nnmusl_socket_IsNnmuslFileDescriptor(int fd) {
  return (__nnmusl_GetFileDescriptorType(fd) & 0xffff) ==
    FileDescriptorType_Socket;
}

// Native socket descriptors are used as is, so only invalid ones fail.
int _nnmusl_socket_TranslateFileDescriptorFromNativeToNnmusl(int fd) {
  if (fd >= 0) {
    return fd;
  }

  errno = EBADF;
  return -1;
}

int _nnmusl_socket_AddNativeSocketFileDescriptorToNnmuslTable(int fd) {
  if (fd >= 0) {
    return fd;
  }

  errno = EBADF;
  return -1;
}

int _nnmusl_socket_RemoveNativeSocketFileDescriptorFromNnmuslTable(int fd) {
  if (fd >= 0) {
    return 0;
  }

  errno = EBADF;
  return -1;
}

}
