#include <dirent.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include <wchar.h>
#include <wctype.h>

extern "C" {

// The parts of the nnmusl stdio stream these functions touch.
struct __nnmusl_stream {
  unsigned int flags;
  uint8_t reserved04[0x1c];
  unsigned char* wend;
  unsigned char* wpos;
  uint8_t reserved30[0x51];
  signed char lbf;
  signed char lock;
};

constexpr unsigned int F_EOF = 16;
constexpr unsigned int F_ERR = 32;

int fputc_unlocked(int c, FILE* file);
int putchar_unlocked(int c);
int iswpunct_l(wint_t c, locale_t locale);
int __iswalpha_l(wint_t c, locale_t locale);
void clearerr_unlocked(FILE* file);
int __musl_bytewise_strncmp(const char* left, const char* right, size_t size);
int strverscmp(const char* left, const char* right);

[[gnu::visibility("hidden")]] int __overflow(FILE* file, int c);
[[gnu::visibility("hidden")]] int __nnmusl_lockfile(FILE* file);
[[gnu::visibility("hidden")]] void __nnmusl_unlockfile(FILE* file);
[[gnu::visibility("hidden")]] extern FILE __stdout_FILE;
[[gnu::visibility("hidden")]] extern const unsigned char
  __nnmusl_punct_table[];
[[gnu::visibility("hidden")]] extern const unsigned char
  __nnmusl_alpha_table[];

[[gnu::always_inline]] inline __nnmusl_stream* Stream(FILE* file) {
  return reinterpret_cast<__nnmusl_stream*>(file);
}

[[gnu::always_inline]] inline int PutcUnlocked(int c, FILE* file) {
  __nnmusl_stream* stream = Stream(file);
  if (static_cast<unsigned char>(c) != stream->lbf &&
    stream->wpos != stream->wend) {
    return *stream->wpos++ = static_cast<unsigned char>(c);
  }

  return __overflow(file, static_cast<unsigned char>(c));
}

int fputc_unlocked(int c, FILE* file) {
  return PutcUnlocked(c, file);
}

int putchar_unlocked(int c) {
  return PutcUnlocked(c, &__stdout_FILE);
}

[[gnu::always_inline]] inline int IsInTable(const unsigned char* table,
  wint_t c) {
  return (table[table[c >> 8] * 32 + ((c & 255) >> 3)] >> (c & 7)) & 1;
}

int iswpunct(wint_t c) {
  return c < 131072 ? IsInTable(__nnmusl_punct_table, c) : 0;
}

int iswpunct_l(wint_t c, locale_t) {
  return c < 131072 ? IsInTable(__nnmusl_punct_table, c) : 0;
}

int iswalpha(wint_t c) {
  if (c < 0x20000) {
    return IsInTable(__nnmusl_alpha_table, c);
  }

  return c < 0x2fffe;
}

int __iswalpha_l(wint_t c, locale_t) {
  if (c < 0x20000) {
    return IsInTable(__nnmusl_alpha_table, c);
  }

  return c < 0x2fffe;
}

[[gnu::always_inline]] inline int Lock(FILE* file) {
  return Stream(file)->lock >= 0 ? __nnmusl_lockfile(file) : 0;
}

int feof(FILE* file) {
  const int needsUnlock = Lock(file);
  const int result = (Stream(file)->flags & F_EOF) != 0;
  if (needsUnlock != 0) {
    __nnmusl_unlockfile(file);
  }

  return result;
}

int ferror(FILE* file) {
  const int needsUnlock = Lock(file);
  const int result = (Stream(file)->flags & F_ERR) != 0;
  if (needsUnlock != 0) {
    __nnmusl_unlockfile(file);
  }

  return result;
}

void clearerr_unlocked(FILE* file) {
  const int needsUnlock = Lock(file);
  Stream(file)->flags &= ~(F_EOF | F_ERR);
  if (needsUnlock != 0) {
    __nnmusl_unlockfile(file);
  }
}

int __musl_bytewise_strncmp(const char* left, const char* right,
  size_t size) {
  auto* l = reinterpret_cast<const unsigned char*>(left);
  auto* r = reinterpret_cast<const unsigned char*>(right);
  if (size-- == 0) {
    return 0;
  }

  for (; *l != 0 && *r != 0 && size != 0 && *l == *r; ++l, ++r, --size) {
  }

  return *l - *r;
}

int wcscmp(const wchar_t* left, const wchar_t* right) {
  for (; *left == *right && *left != 0 && *right != 0; ++left, ++right) {
  }

  return *left < *right ? -1 : *left > *right;
}

int wcsncmp(const wchar_t* left, const wchar_t* right, size_t size) {
  for (; size != 0 && *left == *right && *left != 0 && *right != 0;
    --size, ++left, ++right) {
  }

  return size != 0 ? (*left < *right ? -1 : *left > *right) : 0;
}

int wmemcmp(const wchar_t* left, const wchar_t* right, size_t size) {
  for (; size != 0 && *left == *right; --size, ++left, ++right) {
  }

  return size != 0 ? (*left < *right ? -1 : *left > *right) : 0;
}

int alphasort(const struct dirent** left, const struct dirent** right) {
  return strcoll((*left)->d_name, (*right)->d_name);
}

int versionsort(const struct dirent** left, const struct dirent** right) {
  return strverscmp((*left)->d_name, (*right)->d_name);
}

}
