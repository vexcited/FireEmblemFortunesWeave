#pragma once

#include <string.h>

#define PROPERTY_VALUE_MAX 92

// The SDK has no property service, the helpers always fall back to the default.
inline int property_get(const char* key, char* value,
  const char* default_value) {
  (void)key;
  if (default_value == nullptr) {
    value[0] = '\0';
    return 0;
  }
  const size_t length = strlen(default_value);
  memcpy(value, default_value, length + 1);
  return int(length);
}

inline int property_set(const char* key, const char* value) {
  (void)key;
  (void)value;
  return 0;
}

inline int property_get_bool(const char* key, int default_value) {
  (void)key;
  return default_value;
}
