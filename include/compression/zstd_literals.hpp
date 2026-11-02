#pragma once

#include "compression/zstd_frame.hpp"

namespace fw::compression {

enum class LiteralLocation : uint32_t {
  OutsideDestination = 0,
  InDestination = 1,
  Split = 2,
};

struct LiteralContext {
  uint8_t unknown_0[24];
  const uint32_t* huffman_table;
  uint8_t unknown_32[10264];
  uint32_t owned_huffman_table[4097];
  uint8_t unknown_26684[640];
  uint32_t huffman_workspace[640];
  uint8_t unknown_29884[44];
  FrameHeader frame;
  uint8_t unknown_29976[24];
  uint32_t literal_entropy;
  uint8_t unknown_30004[116];
  const uint8_t* literals;
  uint8_t unknown_30128[24];
  size_t literal_size;
  uint8_t unknown_30160[16];
  uint32_t frame_decompression;
  uint8_t unknown_30180[24];
  uint32_t dictionary_cold;
  uint8_t unknown_30208[20];
  uint32_t disable_huffman_assembly;
  uint8_t unknown_30232[120];
  uint8_t* literal_buffer;
  const uint8_t* literal_buffer_end;
  LiteralLocation literal_location;
  uint8_t extra_literals[65568];
};

static_assert(offsetof(LiteralContext, owned_huffman_table) == 10296);
static_assert(offsetof(LiteralContext, huffman_workspace) == 27324);
static_assert(offsetof(LiteralContext, frame) == 29928);
static_assert(offsetof(LiteralContext, literal_entropy) == 30000);
static_assert(offsetof(LiteralContext, literals) == 30120);
static_assert(offsetof(LiteralContext, literal_size) == 30152);
static_assert(offsetof(LiteralContext, frame_decompression) == 30176);
static_assert(offsetof(LiteralContext, dictionary_cold) == 30204);
static_assert(offsetof(LiteralContext, disable_huffman_assembly) == 30228);
static_assert(offsetof(LiteralContext, literal_buffer) == 30352);
static_assert(offsetof(LiteralContext, extra_literals) == 30372);

size_t DecodeLiterals(
  LiteralContext* context, const void* source, size_t source_size,
  void* destination, size_t destination_size, int streaming
);

}
