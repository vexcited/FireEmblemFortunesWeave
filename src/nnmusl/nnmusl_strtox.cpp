#include <limits.h>
#include <stddef.h>
#include <stdint.h>
#include <sys/types.h>

extern "C" {

// The nnmusl stream as far as string scanning goes.
struct __nnmusl_scan_file {
  unsigned int flags;
  unsigned char* rpos;
  unsigned char* rend;
  uint8_t reserved18[0x40];
  unsigned char* buf;
  uint8_t reserved60[0x60];
  off_t shcnt;
  uint8_t reservedc8[0x8];
};

static_assert(sizeof(__nnmusl_scan_file) == 0xd0);

[[gnu::visibility("hidden")]] void __shlim(__nnmusl_scan_file* file,
  off_t limit);
[[gnu::visibility("hidden")]] unsigned long long __intscan(
  __nnmusl_scan_file* file, unsigned int base, int pok,
  unsigned long long limit);

// This is strtox of musl.
[[gnu::always_inline]] inline unsigned long long ScanInteger(const char* text,
  char** end, int base, unsigned long long limit) {
  __nnmusl_scan_file file;
  file.buf = file.rpos = reinterpret_cast<unsigned char*>(
    const_cast<char*>(text));
  file.rend = reinterpret_cast<unsigned char*>(-1);
  __shlim(&file, 0);
  const unsigned long long value = __intscan(&file, base, 1, limit);
  if (end != nullptr) {
    const size_t count = file.shcnt + (file.rpos - file.buf);
    *end = const_cast<char*>(text) + count;
  }

  return value;
}

unsigned long long strtoull(const char* text, char** end, int base) {
  return ScanInteger(text, end, base, ULLONG_MAX);
}

// The internal names are the aliases of musl for the standard functions.
long long __strtoll_internal(const char* text, char** end, int base) {
  return ScanInteger(text, end, base, LLONG_MIN);
}

unsigned long __strtoul_internal(const char* text, char** end, int base) {
  return ScanInteger(text, end, base, ULONG_MAX);
}

long __strtol_internal(const char* text, char** end, int base) {
  return ScanInteger(text, end, base, 0ul + LONG_MIN);
}

intmax_t __strtoimax_internal(const char* text, char** end, int base) {
  return __strtoll_internal(text, end, base);
}

uintmax_t __strtoumax_internal(const char* text, char** end, int base) {
  return strtoull(text, end, base);
}

}
