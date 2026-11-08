#include <stddef.h>

int* __errno_location(void);

#define ESRCH 3
#define ENOSYS 38

// The file system and scheduler have no such operations.
static int Unsupported(void) {
  *__errno_location() = ENOSYS;
  return -1;
}

// No other process can be named.
static int NoSuchProcess(void) {
  *__errno_location() = ESRCH;
  return -1;
}

int link(const char* existing, const char* created) {
  return Unsupported();
}

int linkat(int existingDirectory, const char* existing, int createdDirectory,
  const char* created, int flags) {
  return Unsupported();
}

int symlink(const char* existing, const char* created) {
  return Unsupported();
}

int symlinkat(const char* existing, int directory, const char* created) {
  return Unsupported();
}

long readlink(const char* path, char* buffer, size_t size) {
  return Unsupported();
}

long readlinkat(int directory, const char* path, char* buffer, size_t size) {
  return Unsupported();
}

int futimens(int descriptor, const void* times) {
  return Unsupported();
}

int utimensat(int directory, const char* path, const void* times,
  int flags) {
  return Unsupported();
}

int utimes(const char* path, const void* times) {
  return Unsupported();
}

int sched_getaffinity(int process, size_t size, void* set) {
  return NoSuchProcess();
}

int sched_setaffinity(int process, size_t size, const void* set) {
  return NoSuchProcess();
}

int sched_getcpu(void) {
  return Unsupported();
}
