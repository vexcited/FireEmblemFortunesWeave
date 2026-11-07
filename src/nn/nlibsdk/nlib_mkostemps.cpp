#include <stddef.h>
#include <stdint.h>
#include <string.h>

extern "C" {

int nnmem_nlib_gen_random(void* buffer, size_t size);
int nnmem_nlib_epochtime(int64_t* pOutTime);
int nnmem_nlib_fd_open(int* pOutFd, const char* path, unsigned int flags,
  int mode);

}

namespace {

constexpr int EExist = 17;
constexpr int EInval = 22;
constexpr unsigned int OpenCreateExclusive = 0xc2;
constexpr int MaxTries = 1000;
constexpr uint64_t TryStep = 998213;

// The original alphabet repeats Z in place of X.
constexpr char NameCharacters[] =
  "0123456789ABCDEFGHIJKLMNOPQRSTUVWZYZabcdefghijklmnopqrstuvwxyz";

}

extern "C" {

// Without random bytes the seed is the address of the seed mixed with the
// time.
int nnmem_nlib_mkostemps(int* pOutFd, char* path, int suffixLength,
  int flags) {
  if (pOutFd == nullptr || path == nullptr || suffixLength < 0) {
    return EInval;
  }
  int length = static_cast<int>(strlen(path));
  if (suffixLength + 6 > length) {
    return EInval;
  }
  char* end = path + static_cast<unsigned int>(length - suffixLength);
  char* name = end - 6;
  if (strncmp("XXXXXX", name, 6) != 0) {
    return EInval;
  }
  uint64_t seed = 0;
  if (nnmem_nlib_gen_random(&seed, sizeof(seed)) != 0) {
    int64_t time = 0;
    seed = reinterpret_cast<uintptr_t>(&seed);
    if (nnmem_nlib_epochtime(&time) == 0) {
      seed ^= time;
    }
  }
  int result = 0;
  uint64_t value = seed;
  for (int i = MaxTries; i != 0; --i) {
    uint64_t rest = value;
    for (int j = 0; j < 6; ++j) {
      name[j] = NameCharacters[rest % 62];
      rest /= 62;
    }
    result = nnmem_nlib_fd_open(pOutFd, path, flags | OpenCreateExclusive,
      0600);
    if (result != EExist) {
      break;
    }
    seed += TryStep;
    value = seed;
  }
  return result;
}

}
