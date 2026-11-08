#include <stddef.h>

#include <functional>

// Instantiates the libc++ string hash, CityHash for 64 bit sizes, which the
// modules keep out of line.
struct LibcxxStringHash {
  size_t operator()(const void* pKey, size_t length) const;
};

size_t LibcxxStringHash::operator()(const void* pKey, size_t length) const {
  return std::__murmur2_or_cityhash<size_t>()(pKey, length);
}
