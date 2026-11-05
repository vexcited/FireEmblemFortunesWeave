#include "nn/friends/friends_types.hpp"

namespace nn::util {

bool IsValidUtf8String(const char* string, size_t length);

}

namespace nn::friends::detail {

namespace {

bool IsKeyCharacter(char c) {
  return (c >= '0' && c <= '9') || (c >= 'a' && c <= 'z') ||
    (c >= 'A' && c <= 'Z') || c == '_';
}

}

bool PresenceAccessor::VerifyKey(const char* key, size_t length) {
  if (length == 0) {
    return false;
  }
  for (size_t i = 0; i < length; i++) {
    if (!IsKeyCharacter(key[i])) {
      return false;
    }
  }
  return true;
}

bool PresenceAccessor::VerifyValue(const char* value, size_t length) {
  if (length == 0) {
    return true;
  }
  return util::IsValidUtf8String(value, length);
}

}
