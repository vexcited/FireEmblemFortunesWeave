#include <errno.h>
#include <stdarg.h>
#include <stddef.h>
#include <stdio.h>

extern "C" int pthread_setname_np(unsigned long thread, const char* name);

// The bounded formatting of nlib for a fixed size buffer.
template <size_t N>
inline int nnmem_nlib_snprintf(size_t* pOutCount, char (&buffer)[N],
  const char* format, ...) {
  constexpr int ERange = 34;
  va_list arguments;
  va_start(arguments, format);
  errno = 0;
  int count = vsnprintf(buffer, N, format, arguments);
  va_end(arguments);
  if (count < 0) {
    return errno;
  }
  if (pOutCount != nullptr) {
    *pOutCount = static_cast<unsigned int>(count);
  }
  return static_cast<unsigned int>(count) < N ? 0 : ERange;
}

extern "C" int nnmem_nlib_thread_setname(unsigned long thread,
  const char* name) {
  char buffer[32] = {};
  size_t count = 0;
  nnmem_nlib_snprintf(&count, buffer, "%s", name);
  return pthread_setname_np(thread, buffer);
}
