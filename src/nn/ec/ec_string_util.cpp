#include "nn/ec/ec_shop_api.hpp"

#include <string.h>

#include "nn/util/string_util.hpp"

namespace nn::ec::detail {

namespace {

bool IsAlphanumeric(char c) {
  return (c >= '0' && c <= '9') || ((c & ~0x20) >= 'A' && (c & ~0x20) <= 'Z');
}

bool IsUnreserved(char c) {
  return IsAlphanumeric(c) || c == '-' || c == '.' || c == '~' || c == '_';
}

}

bool IsStringTerminated(const char* string, size_t size) {
  for (size_t i = 0; i < size; i++) {
    if (string[i] == '\0') {
      return true;
    }
  }
  return false;
}

bool EncodeUriRfc3986(char* buffer, size_t size, const char* string) {
  size_t length = strlen(string);
  size_t position = 0;
  for (size_t i = 0; i < length; i++) {
    char c = string[i];
    size_t written;
    if (IsUnreserved(c)) {
      buffer[position] = c;
      written = 1;
    }
    else {
      size_t remaining = size - position;
      int count = util::SNPrintf(buffer + position, remaining, "%%%02x", c);
      if (count < 0 || static_cast<size_t>(count) >= remaining) {
        return false;
      }
      written = count;
    }
    position += written;
    if (position >= size) {
      return false;
    }
  }
  buffer[position] = '\0';
  return true;
}

bool IsValidCharacterTypeOfNonceString(const Nonce& nonce) {
  size_t length = strnlen(nonce.value, sizeof(nonce.value));
  for (size_t i = 0; i < length; i++) {
    char c = nonce.value[i];
    if (!IsAlphanumeric(c) && c != '-') {
      return false;
    }
  }
  return true;
}

}
