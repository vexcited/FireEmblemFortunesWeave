#include <locale.h>
#include <string.h>
#include <wchar.h>

extern "C" {

locale_t* __getlocale_addr();

int strcoll(const char* left, const char* right) {
  const locale_t locale = *__getlocale_addr();
  static_cast<void>(locale);
  return strcmp(left, right);
}

int wcscoll(const wchar_t* left, const wchar_t* right) {
  const locale_t locale = *__getlocale_addr();
  static_cast<void>(locale);
  return wcscmp(left, right);
}

}
