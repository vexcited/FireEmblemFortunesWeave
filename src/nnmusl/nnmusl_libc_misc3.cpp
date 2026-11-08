#include <errno.h>
#include <locale.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include <time.h>

#include "nn/result.hpp"

extern "C" {

struct __nnmusl_fd_stream {
  uint8_t reserved00[0x78];
  int fd;
  uint8_t reserved7c[0x6];
  signed char lock;
};

struct tm* gmtime_r(const time_t* time, struct tm* result);
unsigned short* seed48(unsigned short* seed);
int fileno_unlocked(FILE* file);
locale_t* __getlocale_addr();

[[gnu::visibility("hidden")]] int __secs_to_tm(long long seconds,
  struct tm* result);
[[gnu::visibility("hidden")]] extern const char __utc[];
[[gnu::visibility("hidden")]] extern unsigned short __seed48[7];
[[gnu::visibility("hidden")]] extern const unsigned short
  __nnmusl_errmsgidx[];
[[gnu::visibility("hidden")]] extern const char __nnmusl_errmsgstr[];
[[gnu::visibility("hidden")]] int __nnmusl_nanosleep(
  const struct timespec* request, struct timespec* remaining);
[[gnu::visibility("hidden")]] nn::Result __nnmusl_sync_file(int fd);
[[gnu::visibility("hidden")]] int __nnmusl_result_to_errno(nn::Result result);
[[gnu::visibility("hidden"), noreturn]] void __nnmusl_abort_with_message(
  const char* format, ...);
[[gnu::visibility("hidden")]] int __nnmusl_lockfile(FILE* file);
[[gnu::visibility("hidden")]] void __nnmusl_unlockfile(FILE* file);

void* bsearch(const void* key, const void* base, size_t count, size_t size,
  int (*compare)(const void*, const void*)) {
  while (count > 0) {
    const void* candidate = static_cast<const char*>(base) +
      size * (count / 2);
    const int sign = compare(key, candidate);
    if (sign < 0) {
      count /= 2;
    }
    else if (sign > 0) {
      base = static_cast<const char*>(candidate) + size;
      count -= count / 2 + 1;
    }
    else {
      return const_cast<void*>(candidate);
    }
  }

  return nullptr;
}

struct tm* gmtime_r(const time_t* time, struct tm* result) {
  if (__secs_to_tm(*time, result) < 0) {
    errno = EOVERFLOW;
    return nullptr;
  }

  result->tm_isdst = 0;
  result->tm_gmtoff = 0;
  result->tm_zone = __utc;
  return result;
}

unsigned short* seed48(unsigned short* seed) {
  static unsigned short previous[3];
  memcpy(previous, __seed48, sizeof(previous));
  memcpy(__seed48, seed, sizeof(previous));
  return previous;
}

char* strerror(int error) {
  const locale_t locale = *__getlocale_addr();
  static_cast<void>(locale);
  if (static_cast<unsigned int>(error) > 0x83) {
    error = 0;
  }

  return const_cast<char*>(__nnmusl_errmsgstr) + __nnmusl_errmsgidx[error];
}

int nanosleep(const struct timespec* request, struct timespec* remaining) {
  const int error = __nnmusl_nanosleep(request, remaining);
  if (error != 0) {
    errno = error;
    return -1;
  }

  return 0;
}

int fsync(int fd) {
  const nn::Result result = __nnmusl_sync_file(fd);
  if (result.IsFailure()) {
    errno = __nnmusl_result_to_errno(result);
    return -1;
  }

  return 0;
}

int fdatasync(int fd) {
  const nn::Result result = __nnmusl_sync_file(fd);
  if (result.IsFailure()) {
    errno = __nnmusl_result_to_errno(result);
    return -1;
  }

  return 0;
}

void __assert_fail(const char* expression, const char* file, int line,
  const char* function) {
  __nnmusl_abort_with_message("Assertion failed: %s (%s: %s: %d)\n",
    expression, file, function, line);
}

int fileno_unlocked(FILE* file) {
  auto* stream = reinterpret_cast<__nnmusl_fd_stream*>(file);
  const int needsUnlock = stream->lock >= 0 ? __nnmusl_lockfile(file) : 0;
  const int fd = stream->fd;
  if (needsUnlock != 0) {
    __nnmusl_unlockfile(file);
  }

  if (fd < 0) {
    errno = EBADF;
    return -1;
  }

  return fd;
}

}
