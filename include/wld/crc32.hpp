#pragma once

#include <stddef.h>
#include <stdint.h>

namespace wld {

uint32_t Crc32(uint32_t seed, const char* data, size_t size);

}
