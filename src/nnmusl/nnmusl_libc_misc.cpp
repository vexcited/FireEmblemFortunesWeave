#include <errno.h>
#include <locale.h>
#include <math.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include <time.h>
#include <wchar.h>

extern "C" {

// The start of the stdio stream of musl.
struct __nnmusl_file {
  unsigned int flags;
  unsigned char* rpos;
  unsigned char* rend;
};

locale_t* __getlocale_addr();
locale_t __getlocale();
void __setlocale(locale_t locale);
const char* __tm_to_tzname(const struct tm* time);
size_t __freadahead(FILE* file);
int __musl_bytewise_strcmp(const char* left, const char* right);
int __musl_bytewise_memcmp(const void* left, const void* right, size_t size);
double lgamma_r(double x, int* sign);

[[gnu::visibility("hidden")]] locale_t* __nnmusl_locale_slot();
[[gnu::visibility("hidden")]] extern struct __locale_struct __global_locale;
[[gnu::visibility("hidden")]] void __nnmusl_getentropy(void* buffer,
  size_t size);
[[gnu::visibility("hidden")]] int __uflow(FILE* file);
[[gnu::visibility("hidden")]] extern const unsigned short
  __nnmusl_errmsgidx[];
[[gnu::visibility("hidden")]] extern const char __nnmusl_errmsgstr[];
[[gnu::visibility("hidden")]] extern const char __utc[];
extern int __signgam;

int getentropy(void* buffer, size_t size) {
  if (size > 256) {
    errno = EIO;
    return -1;
  }

  __nnmusl_getentropy(buffer, size);
  return 0;
}

// A thread without its own locale, or with the global marker, uses the
// global locale.
locale_t* __getlocale_addr() {
  locale_t* slot = __nnmusl_locale_slot();
  if (*slot == nullptr || *slot == LC_GLOBAL_LOCALE) {
    *slot = &__global_locale;
  }

  return slot;
}

locale_t __getlocale() {
  locale_t* slot = __nnmusl_locale_slot();
  if (*slot == nullptr || *slot == LC_GLOBAL_LOCALE) {
    *slot = &__global_locale;
  }

  return *slot;
}

void __setlocale(locale_t locale) {
  *__nnmusl_locale_slot() = locale == LC_GLOBAL_LOCALE ? &__global_locale :
    locale;
}

const char* __tm_to_tzname(const struct tm* time) {
  return time->tm_zone == __utc ? __utc : "";
}

char* strerror_l(int error, locale_t) {
  if (static_cast<unsigned int>(error) > 0x83) {
    error = 0;
  }

  return const_cast<char*>(__nnmusl_errmsgstr) + __nnmusl_errmsgidx[error];
}

size_t __freadahead(FILE* file) {
  auto* stream = reinterpret_cast<__nnmusl_file*>(file);
  return stream->rend != nullptr ? stream->rend - stream->rpos : 0;
}

int fgetc_unlocked(FILE* file) {
  auto* stream = reinterpret_cast<__nnmusl_file*>(file);
  return stream->rpos != stream->rend ? *stream->rpos++ : __uflow(file);
}

void explicit_bzero(void* buffer, size_t size) {
  memset(buffer, 0, size);
  asm volatile("" : : "r"(buffer) : "memory");
}

long double lgammal(long double x) {
  return lgamma_r(static_cast<double>(x), &__signgam);
}

int __musl_bytewise_strcmp(const char* left, const char* right) {
  for (; *left == *right && *left != '\0'; ++left, ++right) {
  }

  return *reinterpret_cast<const unsigned char*>(left) -
    *reinterpret_cast<const unsigned char*>(right);
}

int __musl_bytewise_memcmp(const void* left, const void* right,
  size_t size) {
  auto* l = static_cast<const unsigned char*>(left);
  auto* r = static_cast<const unsigned char*>(right);
  for (; size != 0 && *l == *r; --size, ++l, ++r) {
  }

  return size != 0 ? *l - *r : 0;
}

}
