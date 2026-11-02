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

struct InflateStream;

struct GzipHeader {
  int32_t text;
  uint64_t time;
  int32_t extra_flags;
  int32_t operating_system;
  uint8_t* extra;
  uint32_t extra_length;
  uint32_t extra_capacity;
  uint8_t* name;
  uint32_t name_capacity;
  uint8_t* comment;
  uint32_t comment_capacity;
  int32_t header_crc;
  int32_t done;
};

struct InflateState {
  InflateStream* stream;
  uint32_t mode;
  int32_t last;
  int32_t wrap;
  int32_t has_dictionary;
  int32_t flags;
  uint32_t maximum_distance;
  uint64_t check;
  uint64_t total;
  GzipHeader* header;
  uint32_t window_bits;
  uint32_t window_size;
  uint32_t window_available;
  uint32_t window_next;
  uint8_t* window;
  uint64_t hold;
  uint32_t bits;
  uint32_t length;
  uint32_t offset;
  uint32_t extra;
  const InflateCode* length_codes;
  const InflateCode* distance_codes;
  uint32_t length_bits;
  uint32_t distance_bits;
  uint32_t code_count;
  uint32_t length_count;
  uint32_t distance_count;
  uint32_t have;
  InflateCode* next;
  uint16_t lengths[320];
  uint16_t work[288];
  InflateCode codes[1444];
  int32_t sane;
  int32_t back;
  uint32_t was;
};

struct InflateStream {
  const uint8_t* next_input;
  uint32_t input_available;
  uint64_t total_input;
  uint8_t* next_output;
  uint32_t output_available;
  uint64_t total_output;
  const char* message;
  InflateState* state;
  void* (*allocate)(void* opaque, uint32_t count, uint32_t size);
  void (*release)(void* opaque, void* address);
  void* opaque;
  int32_t data_type;
  uint64_t checksum;
  uint64_t reserved;
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
static_assert(offsetof(InflateState, next) == 0x90);
static_assert(offsetof(InflateState, lengths) == 0x98);
static_assert(offsetof(InflateState, work) == 0x318);
static_assert(offsetof(InflateState, codes) == 0x558);
static_assert(sizeof(InflateState) == 0x1bf8);
static_assert(offsetof(InflateStream, next_input) == 0x0);
static_assert(offsetof(InflateStream, input_available) == 0x8);
static_assert(offsetof(InflateStream, next_output) == 0x18);
static_assert(offsetof(InflateStream, output_available) == 0x20);
static_assert(offsetof(InflateStream, message) == 0x30);
static_assert(offsetof(InflateStream, state) == 0x38);
static_assert(offsetof(InflateStream, allocate) == 0x40);
static_assert(offsetof(InflateStream, release) == 0x48);
static_assert(offsetof(InflateStream, opaque) == 0x50);
static_assert(offsetof(InflateStream, data_type) == 0x58);
static_assert(offsetof(InflateStream, checksum) == 0x60);
static_assert(sizeof(InflateStream) == 0x70);
static_assert(sizeof(GzipHeader) == 0x50);

}

extern "C" int nnutilZlib_inflate_table(
  fw::compression::CodeType type, const uint16_t* lengths, uint32_t symbols,
  fw::compression::InflateCode** table, uint32_t* root_bits, uint16_t* work
);

extern "C" void nnutilZlib_inflate_fast(
  fw::compression::InflateStream* stream, uint32_t start
);

extern "C" {

int nnutilZlib_inflateInit2_(
  fw::compression::InflateStream* stream, int window_bits,
  const char* version, int stream_size
);
int nnutilZlib_inflateInit_(
  fw::compression::InflateStream* stream, const char* version, int stream_size
);
int nnutilZlib_inflateResetKeep(fw::compression::InflateStream* stream);
int nnutilZlib_inflateReset(fw::compression::InflateStream* stream);
int nnutilZlib_inflateReset2(
  fw::compression::InflateStream* stream, int window_bits
);
int nnutilZlib_inflatePrime(
  fw::compression::InflateStream* stream, int bits, int value
);
int nnutilZlib_inflate(fw::compression::InflateStream* stream, int flush);
int nnutilZlib_inflateEnd(fw::compression::InflateStream* stream);
int nnutilZlib_inflateGetDictionary(
  fw::compression::InflateStream* stream, uint8_t* dictionary,
  uint32_t* dictionary_size
);
int nnutilZlib_inflateSetDictionary(
  fw::compression::InflateStream* stream, const uint8_t* dictionary,
  uint32_t dictionary_size
);
int nnutilZlib_inflateGetHeader(
  fw::compression::InflateStream* stream, fw::compression::GzipHeader* header
);

void* nnutilZlib_zcalloc(void* opaque, uint32_t count, uint32_t size);
void nnutilZlib_zcfree(void* opaque, void* address);

}
