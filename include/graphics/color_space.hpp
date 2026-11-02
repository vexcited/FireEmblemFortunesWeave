#pragma once

#include <stdint.h>

extern "C" const char* NvColorSpaceToString(uint32_t space);
extern "C" uint32_t NvColorSpaceFromString(const char* name);
