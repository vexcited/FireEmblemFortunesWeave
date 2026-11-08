#include <stddef.h>
#include <stdint.h>
#include <sys/types.h>

extern "C" {

// The nnmusl stream as far as string scanning goes.
struct __nnmusl_float_scan_file {
  unsigned int flags;
  unsigned char* rpos;
  unsigned char* rend;
  uint8_t reserved18[0x40];
  unsigned char* buf;
  uint8_t reserved60[0x22];
  signed char lock;
  uint8_t reserved83[0x3d];
  off_t shcnt;
  uint8_t reservedc8[0x8];
};

static_assert(sizeof(__nnmusl_float_scan_file) == 0xd0);

[[gnu::visibility("hidden")]] void __shlim(__nnmusl_float_scan_file* file,
  off_t limit);
double __floatscan(__nnmusl_float_scan_file* file, int precision, int pok);
long double __floatscanl(__nnmusl_float_scan_file* file, int precision,
  int pok);

}

namespace {

// This is the floating point strtox of musl, the stream stays unlocked.
template <typename T, typename Scan>
[[gnu::always_inline]] inline T ScanFloat(const char* text, char** end,
  int precision, Scan scan) {
  __nnmusl_float_scan_file file = {};
  file.buf = file.rpos = reinterpret_cast<unsigned char*>(
    const_cast<char*>(text));
  file.rend = reinterpret_cast<unsigned char*>(-1);
  file.lock = -1;
  __shlim(&file, 0);
  const T value = scan(&file, precision, 1);
  if (end != nullptr) {
    const size_t count = file.shcnt + (file.rpos - file.buf);
    *end = const_cast<char*>(text) + count;
  }

  return value;
}

}

extern "C" {

float strtof(const char* text, char** end) {
  return ScanFloat<double>(text, end, 0, __floatscan);
}

double strtod(const char* text, char** end) {
  return ScanFloat<double>(text, end, 1, __floatscan);
}

long double strtold(const char* text, char** end) {
  return ScanFloat<long double>(text, end, 2, __floatscanl);
}

}
