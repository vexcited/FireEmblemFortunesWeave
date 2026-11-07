#include <stddef.h>
#include <stdint.h>
#include <string.h>

#include "nn/diag/diag_abort.hpp"
#include "nn/util/utf.hpp"

namespace nn::ngc {

namespace {

// Digits from every block the filter treats as numbers.
[[gnu::always_inline]] bool IsNumber(uint16_t c) {
  return (c >= 0x2776 && c <= 0x2793) || (c >= 0x2460 && c <= 0x249b) ||
    (c >= 0x2160 && c <= 0x216b) || (c >= 0x2170 && c <= 0x217b) ||
    (c >= 0x2080 && c <= 0x2089) || (c >= 0x2070 && c <= 0x2079) ||
    (c >= u'0' && c <= u'9') || (c >= 0xff10 && c <= 0xff19) ||
    c == 0xb2 || c == 0xb3 || c == 0xb9 || c == 0x24ff || c == 0x24ea;
}

template <typename Char>
[[gnu::always_inline]] int CountNumbersImpl(const Char* text) {
  if (text == nullptr) {
    return -1;
  }
  int count = 0;
  for (; *text != 0; text++) {
    if (IsNumber(*text)) {
      count++;
    }
  }
  return count;
}

}

void* memset(void* pDestination, int value, size_t size) {
  return ::memset(pDestination, value, size);
}

int CountNumbers(const char* text) {
  if (text == nullptr) {
    return -1;
  }
  const char* p = text;
  uint16_t utf16[2] = {};
  int count = 0;
  for (;;) {
    char character[4] = {};
    if (util::PickOutCharacterFromUtf8String(character, &p) !=
        util::CharacterEncodingResult_Success) {
      return -1;
    }
    if (util::ConvertCharacterUtf8ToUtf16Native(utf16, character) !=
        util::CharacterEncodingResult_Success) {
      return -1;
    }
    if (utf16[0] == 0) {
      return count;
    }
    if (IsNumber(utf16[0])) {
      count++;
    }
  }
}

int CountNumbers(const uint16_t* text) {
  return CountNumbersImpl(text);
}

int CountNumbers(const char16_t* text) {
  return CountNumbersImpl(text);
}

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
