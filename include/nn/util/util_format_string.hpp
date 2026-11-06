#pragma once

#include <stdarg.h>
#include <stddef.h>

namespace nn::util {

int TSNPrintf(char* buffer, size_t size, const char* format, ...);
int VSNPrintf(char* buffer, size_t size, const char* format, va_list args);

}
