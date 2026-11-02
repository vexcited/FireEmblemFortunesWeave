#pragma once

#include <stddef.h>
#include <stdint.h>

namespace fw::compression {

enum class CodeType : uint32_t {
  Codes,
  Lengths,
  Distances,
};

struct InflateCode {
  uint8_t operation;
  uint8_t bits;
  uint16_t value;
};

static_assert(sizeof(InflateCode) == 4);

struct InflateState {
  uint8_t unknown_00[8];
  uint32_t mode;
  uint8_t unknown_0c[0x30];
  uint32_t window_size;
  uint32_t window_available;
  uint32_t window_next;
  uint8_t* window;
  uint64_t hold;
  uint32_t bits;
  uint8_t unknown_5c[0xc];
  const InflateCode* length_codes;
  const InflateCode* distance_codes;
  uint32_t length_bits;
  uint32_t distance_bits;
  uint8_t unknown_80[0x1b68];
  int32_t sane;
};

struct InflateStream {
  const uint8_t* next_input;
  uint32_t input_available;
  uint8_t unknown_0c[0xc];
  uint8_t* next_output;
  uint32_t output_available;
  uint8_t unknown_24[0xc];
  const char* message;
  InflateState* state;
};

static_assert(offsetof(InflateState, mode) == 0x8);
static_assert(offsetof(InflateState, window_size) == 0x3c);
static_assert(offsetof(InflateState, window_available) == 0x40);
static_assert(offsetof(InflateState, window_next) == 0x44);
static_assert(offsetof(InflateState, window) == 0x48);
static_assert(offsetof(InflateState, hold) == 0x50);
static_assert(offsetof(InflateState, bits) == 0x58);
static_assert(offsetof(InflateState, length_codes) == 0x68);
static_assert(offsetof(InflateState, distance_codes) == 0x70);
static_assert(offsetof(InflateState, length_bits) == 0x78);
static_assert(offsetof(InflateState, distance_bits) == 0x7c);
static_assert(offsetof(InflateState, sane) == 0x1be8);
static_assert(offsetof(InflateStream, next_input) == 0x0);
static_assert(offsetof(InflateStream, input_available) == 0x8);
static_assert(offsetof(InflateStream, next_output) == 0x18);
static_assert(offsetof(InflateStream, output_available) == 0x20);
static_assert(offsetof(InflateStream, message) == 0x30);
static_assert(offsetof(InflateStream, state) == 0x38);

}

extern "C" int nnutilZlib_inflate_table(
  fw::compression::CodeType type, const uint16_t* lengths, uint32_t symbols,
  fw::compression::InflateCode** table, uint32_t* root_bits, uint16_t* work
);

extern "C" void nnutilZlib_inflate_fast(
  fw::compression::InflateStream* stream, uint32_t start
);
