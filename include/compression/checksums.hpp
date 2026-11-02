#pragma once

#include <stddef.h>
#include <stdint.h>

extern "C" {

uint64_t nnutilZlib_adler32_z(
  uint64_t checksum, const uint8_t* data, size_t size
);
uint64_t nnutilZlib_adler32(
  uint64_t checksum, const uint8_t* data, uint32_t size
);
uint64_t nnutilZlib_adler32_combine(
  uint64_t first, uint64_t second, int64_t second_size
);
uint64_t nnutilZlib_adler32_combine64(
  uint64_t first, uint64_t second, int64_t second_size
);

uint64_t nnutilZlib_crc32_z(
  uint64_t checksum, const uint8_t* data, size_t size
);
uint64_t nnutilZlib_crc32(
  uint64_t checksum, const uint8_t* data, uint32_t size
);
uint64_t nnutilZlib_crc32_combine(
  uint64_t first, uint64_t second, int64_t second_size
);
uint64_t nnutilZlib_crc32_combine64(
  uint64_t first, uint64_t second, int64_t second_size
);
uint64_t nnutilZlib_crc32_combine_gen(int64_t size);
uint64_t nnutilZlib_crc32_combine_gen64(int64_t size);
uint64_t nnutilZlib_crc32_combine_op(
  uint64_t first, uint64_t second, uint64_t operation
);
const uint32_t* nnutilZlib_get_crc_table();

}
