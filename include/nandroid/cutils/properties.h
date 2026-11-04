#pragma once

#define PROPERTY_VALUE_MAX 92

namespace nandroid {

int property_get(const char* key, char* value, const char* default_value);
int property_set(const char* key, const char* value);
int property_get_bool(const char* key, int default_value);

}
