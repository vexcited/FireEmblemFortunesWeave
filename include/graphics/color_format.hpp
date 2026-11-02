#pragma once

#include <stdint.h>

extern "C" const char* NvColorFormatToString(uint64_t format);
extern "C" uint64_t NvColorFormatFromString(const char* name);
