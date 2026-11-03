#pragma once

#include <stddef.h>

extern "C" void* memset(void* destination, int value, size_t count);
extern "C" size_t strlen(const char* string);
extern "C" int strcmp(const char* left, const char* right);
