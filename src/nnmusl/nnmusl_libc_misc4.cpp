#include <errno.h>
#include <locale.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <wctype.h>

extern "C" {

struct __nnmusl_buffer_stream {
  unsigned int flags;
  unsigned char* rpos;
  uint8_t reserved10[0x48];
  unsigned char* buf;
  size_t buf_size;
  uint8_t reserved68[0x19];
  signed char lbf;
  signed char lock;
};

constexpr unsigned int F_EOF = 16;
constexpr unsigned int F_SVB = 64;
constexpr size_t UNGET = 8;

int memset_s(void* buffer, size_t bufferSize, int c, size_t size);
locale_t __getlocale();
void __setlocale(locale_t locale);

[[gnu::visibility("hidden")]] int __nnmusl_lockfile(FILE* file);
[[gnu::visibility("hidden")]] void __nnmusl_unlockfile(FILE* file);
[[gnu::visibility("hidden")]] int __toread(FILE* file);
[[gnu::visibility("hidden")]] void __lock(volatile int* lock);
[[gnu::visibility("hidden")]] void __unlock(volatile int* lock);
[[gnu::visibility("hidden")]] extern struct __locale_struct __global_locale;

[[gnu::visibility("hidden")]] extern int __random_n;
[[gnu::visibility("hidden")]] extern int __random_i;
[[gnu::visibility("hidden")]] extern int __random_j;
[[gnu::visibility("hidden")]] extern uint32_t* __random_x;
[[gnu::visibility("hidden")]] extern volatile int __random_lock[1];

[[gnu::always_inline]] inline __nnmusl_buffer_stream* Stream(FILE* file) {
  return reinterpret_cast<__nnmusl_buffer_stream*>(file);
}

int ungetc(int c, FILE* file) {
  if (c == EOF) {
    return c;
  }

  __nnmusl_buffer_stream* stream = Stream(file);
  const int needsUnlock = stream->lock >= 0 ? __nnmusl_lockfile(file) : 0;
  if (stream->rpos == nullptr) {
    __toread(file);
  }

  if (stream->rpos == nullptr || stream->rpos <= stream->buf - UNGET) {
    if (needsUnlock != 0) {
      __nnmusl_unlockfile(file);
    }

    return EOF;
  }

  *--stream->rpos = c;
  stream->flags &= ~F_EOF;
  if (needsUnlock != 0) {
    __nnmusl_unlockfile(file);
  }

  return static_cast<unsigned char>(c);
}

int setvbuf(FILE* file, char* buffer, int type, size_t size) {
  __nnmusl_buffer_stream* stream = Stream(file);
  stream->lbf = EOF;
  if (type == _IONBF) {
    stream->buf_size = 0;
  }
  else if (type == _IOLBF || type == _IOFBF) {
    if (buffer != nullptr && size >= UNGET) {
      stream->buf = reinterpret_cast<unsigned char*>(buffer + UNGET);
      stream->buf_size = size - UNGET;
    }

    if (type == _IOLBF && stream->buf_size != 0) {
      stream->lbf = '\n';
    }
  }
  else {
    return -1;
  }

  stream->flags |= F_SVB;
  return 0;
}

[[gnu::always_inline]] inline uint32_t Lcg31(uint32_t x) {
  return (1103515245 * x + 12345) & 0x7fffffff;
}

long random() {
  long k;
  __lock(__random_lock);
  if (__random_n == 0) {
    k = __random_x[0] = Lcg31(__random_x[0]);
  }
  else {
    __random_x[__random_i] += __random_x[__random_j];
    k = __random_x[__random_i] >> 1;
    if (++__random_i == __random_n) {
      __random_i = 0;
    }

    if (++__random_j == __random_n) {
      __random_j = 0;
    }
  }

  __unlock(__random_lock);
  return k;
}

char* setstate(char* state) {
  __lock(__random_lock);
  __random_x[-1] = __random_n << 16 | __random_i << 8 | __random_j;
  void* old = __random_x - 1;
  __random_x = reinterpret_cast<uint32_t*>(state) + 1;
  __random_n = __random_x[-1] >> 16;
  __random_i = (__random_x[-1] >> 8) & 0xff;
  __random_j = __random_x[-1] & 0xff;
  __unlock(__random_lock);
  return static_cast<char*>(old);
}

int memset_s(void* buffer, size_t bufferSize, int c, size_t size) {
  constexpr size_t MaxSize = SIZE_MAX >> 1;
  if (buffer == nullptr) {
    return EINVAL;
  }

  if (bufferSize > MaxSize) {
    return E2BIG;
  }

  int error = size > MaxSize ? E2BIG : 0;
  size_t length = size > MaxSize ? bufferSize : size;
  if (length > bufferSize) {
    length = bufferSize;
    error = EOVERFLOW;
  }

  memset(buffer, static_cast<unsigned char>(c), length);
  return error;
}

// The allocation keeps the errno of the caller.
int posix_memalign(void** pOutMemory, size_t alignment, size_t size) {
  if (alignment < sizeof(void*) || (alignment & (alignment - 1)) != 0) {
    return EINVAL;
  }

  int* pErrno = &errno;
  const int saved = *pErrno;
  void* memory = aligned_alloc(alignment, size);
  const int error = *pErrno;
  *pErrno = saved;
  if (memory == nullptr) {
    if (error != 0) {
      return error;
    }

    if (size != 0) {
      return ENOMEM;
    }
  }

  *pOutMemory = memory;
  return 0;
}

locale_t uselocale(locale_t locale) {
  const locale_t old = __getlocale();
  locale_t global = &__global_locale;
  if (locale != nullptr) {
    __setlocale(locale == LC_GLOBAL_LOCALE ? global : locale);
  }

  return old == global ? LC_GLOBAL_LOCALE : old;
}

int iswctype(wint_t c, wctype_t type) {
  switch (type) {
    case 1:
      return iswalnum(c);
    case 2:
      return iswalpha(c);
    case 3:
      return iswblank(c);
    case 4:
      return iswcntrl(c);
    case 5:
      return c - '0' < 10;
    case 6:
      return iswgraph(c);
    case 7:
      return iswlower(c);
    case 8:
      return iswprint(c);
    case 9:
      return iswpunct(c);
    case 10:
      return iswspace(c);
    case 11:
      return iswupper(c);
    case 12:
      return iswxdigit(c);
  }

  return 0;
}

}
