#include <stddef.h>

#include "nn/diag/diag_abort.hpp"

namespace nn::ngc {

size_t wcslen(const char16_t* string) {
  size_t length = 0;
  while (string[length] != u'\0') {
    ++length;
  }
  return length;
}

// Lengths are taken as int, a negative one aborts.
int wcsncmp(const char16_t* string1, const char16_t* string2, size_t length) {
  const int count = static_cast<int>(length);
  NN_ABORT_UNLESS(count >= 0);
  if (count == 0) {
    return 0;
  }
  for (int left = count - 1;; --left) {
    const char16_t c1 = *string1++;
    const char16_t c2 = *string2++;
    if (c1 == u'\0' || c1 != c2 || left == 0) {
      return c1 - c2;
    }
  }
}

// Copies at most length minus one characters and always terminates.
char* strncpy(char* destination, const char* source, size_t length) {
  const int count = static_cast<int>(length);
  if (count < 1) {
    return destination;
  }
  char* p = destination;
  for (int left = count - 1; left > 0; --left) {
    const char c = *source++;
    if (c == '\0') {
      break;
    }
    *p++ = c;
  }
  *p = '\0';
  return destination;
}

}
