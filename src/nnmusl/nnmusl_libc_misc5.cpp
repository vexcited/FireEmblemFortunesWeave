#include <dirent.h>
#include <errno.h>
#include <langinfo.h>
#include <locale.h>
#include <pthread.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "nn/diag/diag_abort.hpp"
#include "nn/os/synchronization.hpp"

namespace nn::os {

struct ThreadType;

int ChangeThreadPriority(ThreadType* thread, int priority);

}

namespace nn::detail {

[[noreturn]] void UnexpectedDefaultImpl();

}

extern "C" {

struct __nnmusl_dirent {
  ino_t d_ino;
  off_t d_off;
  unsigned short d_reclen;
};

struct __nnmusl_dir {
  int fd;
  off_t tell;
  int buf_pos;
  int buf_end;
  uint8_t reserved18[0x8];
  char buf[788];
  uint8_t reserved334[0x4];
};

static_assert(sizeof(__nnmusl_dir) == 0x338);

char* __nl_langinfo_l(nl_item item, locale_t locale);

[[gnu::visibility("hidden")]] long long __tm_to_secs(const struct tm* time);
[[gnu::visibility("hidden")]] int __secs_to_tm(long long seconds,
  struct tm* result);
[[gnu::visibility("hidden")]] extern const char __utc[];
[[gnu::visibility("hidden")]] extern const struct __locale_struct
  __c_locale;
[[gnu::visibility("hidden")]] int __nnmusl_open_directory(const char* path,
  int flags);
[[gnu::visibility("hidden")]] int __nnmusl_close(int fd);
[[gnu::visibility("hidden")]] int __nnmusl_getdents(int fd, char* buffer,
  int size);
[[gnu::visibility("hidden")]] extern nn::os::SdkRecursiveMutexType
  __nnmusl_once_mutex;

time_t timegm(struct tm* time) {
  struct tm converted;
  const long long seconds = __tm_to_secs(time);
  if (__secs_to_tm(seconds, &converted) < 0) {
    errno = EOVERFLOW;
    return -1;
  }

  *time = converted;
  time->tm_isdst = 0;
  time->tm_gmtoff = 0;
  time->tm_zone = __utc;
  return seconds;
}

// The format of ISO C may not fit, the original then crashes on purpose.
char* asctime_r(const struct tm* time, char* buffer) {
  if (snprintf(buffer, 26, "%.3s %.3s%3d %.2d:%.2d:%.2d %d\n",
    __nl_langinfo_l(ABDAY_1 + time->tm_wday, const_cast<locale_t>(
      &__c_locale)),
    __nl_langinfo_l(ABMON_1 + time->tm_mon, const_cast<locale_t>(
      &__c_locale)),
    time->tm_mday, time->tm_hour, time->tm_min, time->tm_sec,
    1900 + time->tm_year) >= 26) {
    asm volatile("strb wzr, [%0]" : : "r"(0ul) : "memory");
  }

  return buffer;
}

DIR* opendir(const char* path) {
  const int fd = __nnmusl_open_directory(path, 0);
  if (fd < 0) {
    return nullptr;
  }

  auto* directory = static_cast<__nnmusl_dir*>(calloc(1,
    sizeof(__nnmusl_dir)));
  if (directory == nullptr) {
    __nnmusl_close(fd);
    return nullptr;
  }

  directory->fd = fd;
  return reinterpret_cast<DIR*>(directory);
}

struct dirent* readdir(DIR* handle) {
  auto* directory = reinterpret_cast<__nnmusl_dir*>(handle);
  if (directory->buf_pos >= directory->buf_end) {
    const int length = __nnmusl_getdents(directory->fd, directory->buf,
      sizeof(directory->buf));
    if (length <= 0) {
      if (length < 0 && length != -ENOENT) {
        errno = -length;
      }

      return nullptr;
    }

    directory->buf_end = length;
    directory->buf_pos = 0;
  }

  auto* entry = reinterpret_cast<__nnmusl_dirent*>(directory->buf +
    directory->buf_pos);
  directory->buf_pos += entry->d_reclen;
  directory->tell = entry->d_off;
  return reinterpret_cast<struct dirent*>(entry);
}

// Thread handles keep a tag in their low bits, the tag 7 marks a handle
// whose thread must still be alive.
int pthread_setschedprio(pthread_t thread, int priority) {
  if (static_cast<unsigned int>(priority - 5) > 31) {
    return ERANGE;
  }

  const auto handle = reinterpret_cast<uintptr_t>(thread);
  if (handle < 8) {
    return ESRCH;
  }

  const uintptr_t tag = handle & 7;
  auto* object = reinterpret_cast<uint8_t*>(handle & ~uintptr_t{7});
  if (tag == 7) {
    if (static_cast<unsigned int>(object[0x310] - 1) > 1) {
      return ESRCH;
    }
  }
  else if (tag != 0) {
    return ESRCH;
  }

  nn::os::ChangeThreadPriority(reinterpret_cast<nn::os::ThreadType*>(object),
    36 - priority);
  return 0;
}

int pthread_once(pthread_once_t* control, void (*function)()) {
  if (__atomic_load_n(control, __ATOMIC_ACQUIRE) == 2) {
    return 0;
  }

  __nnmusl_once_mutex.Lock();
  switch (*control) {
    case 0:
      *control = 1;
      function();
      __atomic_store_n(control, 2, __ATOMIC_RELEASE);
      break;
    case 2:
      break;
    case 1:
      nn::diag::detail::AbortImpl();
    default:
      nn::detail::UnexpectedDefaultImpl();
  }

  __nnmusl_once_mutex.Unlock();
  return 0;
}

}
