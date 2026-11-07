#include <stddef.h>
#include <stdint.h>

// Wide characters are 32 bits, so the wide functions forward to the UTF-32
// ones.
extern "C" {

size_t nnmem_nlib_utf32len_(const uint32_t* string);
size_t nnmem_nlib_utf32nlen_(const uint32_t* string, size_t maxSize);
int nnmem_nlib_utf32_to_utf8(size_t* pOutLength, char* destination,
  size_t destinationSize, const uint32_t* source);
int nnmem_nlib_utf8_to_utf32(size_t* pOutLength, uint32_t* destination,
  size_t destinationSize, const char* source);
int nnmem_nlib_memutf32_to_utf8(size_t* pOutWritten, size_t* pOutRead,
  char* destination, size_t destinationSize, const uint32_t* source,
  size_t sourceSize);

size_t nnmem_nlib_wcslen(const wchar_t* string) {
  return nnmem_nlib_utf32len_(reinterpret_cast<const uint32_t*>(string));
}

size_t nnmem_nlib_wcsnlen(const wchar_t* string, size_t maxSize) {
  return nnmem_nlib_utf32nlen_(reinterpret_cast<const uint32_t*>(string),
    maxSize);
}

int nnmem_nlib_wide_to_utf8(size_t* pOutLength, char* destination,
  size_t destinationSize, const wchar_t* source) {
  return nnmem_nlib_utf32_to_utf8(pOutLength, destination, destinationSize,
    reinterpret_cast<const uint32_t*>(source));
}

int nnmem_nlib_utf8_to_wide(size_t* pOutLength, wchar_t* destination,
  size_t destinationSize, const char* source) {
  return nnmem_nlib_utf8_to_utf32(pOutLength,
    reinterpret_cast<uint32_t*>(destination), destinationSize, source);
}

int nnmem_nlib_memwide_to_utf8(size_t* pOutWritten, size_t* pOutRead,
  char* destination, size_t destinationSize, const wchar_t* source,
  size_t sourceSize) {
  return nnmem_nlib_memutf32_to_utf8(pOutWritten, pOutRead, destination,
    destinationSize, reinterpret_cast<const uint32_t*>(source), sourceSize);
}

}
