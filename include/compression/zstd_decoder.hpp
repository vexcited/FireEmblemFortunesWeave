#pragma once

#include "compression/zstd_checksum.hpp"
#include "compression/zstd_sequences.hpp"

namespace fw::compression {

struct EntropyTables {
  SequenceTableStorage<512> literal_lengths;
  SequenceTableStorage<256> offsets;
  SequenceTableStorage<512> match_lengths;
  uint32_t huffman[4097];
  uint32_t repeated_offsets[3];
  uint32_t workspace[157];
};

struct CustomMemory {
  void* (*allocate)(void* opaque, size_t size);
  void (*release)(void* opaque, void* pointer);
  void* opaque;
};

struct PreparedDictionary {
  void* buffer;
  const uint8_t* content;
  size_t content_size;
  EntropyTables entropy;
  uint32_t id;
  uint32_t entropy_present;
  CustomMemory memory;
};

struct DictionarySet {
  const PreparedDictionary** entries;
  size_t capacity;
  size_t count;
};

enum class FrameStage : uint32_t {
  HeaderSize = 0,
  Header = 1,
  BlockHeader = 2,
  Block = 3,
  LastBlock = 4,
  Checksum = 5,
  SkippableHeader = 6,
  SkippablePayload = 7,
};

enum class StreamStage : uint32_t {
  Initialize = 0,
  LoadHeader = 1,
  Read = 2,
  Load = 3,
  Flush = 4,
};

struct InputBuffer {
  const void* data;
  size_t size;
  size_t position;
};

struct OutputBuffer {
  void* data;
  size_t size;
  size_t position;
};

struct DecoderContext {
  const SequenceTableHeader* literal_lengths;
  const SequenceTableHeader* match_lengths;
  const SequenceTableHeader* offsets;
  const uint32_t* huffman;
  EntropyTables entropy;
  uint32_t huffman_workspace[640];
  SequenceWindow window;
  FrameHeader frame;
  uint64_t processed_size;
  uint64_t decoded_size;
  BlockType block_type;
  FrameStage stage;
  uint32_t literal_entropy;
  uint32_t sequence_entropy;
  ChecksumState checksum;
  size_t header_size;
  FrameFormat format;
  uint32_t ignore_checksum;
  uint32_t validate_checksum;
  const uint8_t* literals;
  CustomMemory memory;
  size_t literal_size;
  size_t run_length_size;
  size_t static_size;
  uint32_t frame_decompression;
  PreparedDictionary* owned_dictionary;
  const PreparedDictionary* dictionary;
  uint32_t dictionary_id;
  uint32_t dictionary_cold;
  int32_t dictionary_uses;
  DictionarySet* dictionaries;
  uint32_t multiple_dictionaries;
  uint32_t disable_huffman_assembly;
  uint32_t maximum_block_size;
  StreamStage stream_stage;
  uint8_t* input_buffer;
  size_t input_buffer_size;
  size_t input_position;
  size_t maximum_window_size;
  uint8_t* output_buffer;
  size_t output_buffer_size;
  size_t output_start;
  size_t output_end;
  size_t loaded_header_size;
  uint32_t hostage_byte;
  int32_t no_forward_progress;
  uint32_t output_buffer_mode;
  OutputBuffer expected_output;
  uint8_t* literal_buffer;
  const uint8_t* literal_buffer_end;
  LiteralLocation literal_location;
  uint8_t extra_literals[65568];
  uint8_t header_buffer[18];
  size_t oversized_duration;
  uintptr_t trace_context;
};

static_assert(sizeof(EntropyTables) == 27292);
static_assert(offsetof(EntropyTables, offsets) == 4104);
static_assert(offsetof(EntropyTables, match_lengths) == 6160);
static_assert(offsetof(EntropyTables, huffman) == 10264);
static_assert(offsetof(EntropyTables, repeated_offsets) == 26652);
static_assert(offsetof(EntropyTables, workspace) == 26664);
static_assert(sizeof(PreparedDictionary) == 27352);
static_assert(offsetof(PreparedDictionary, id) == 27316);
static_assert(offsetof(PreparedDictionary, memory) == 27328);
static_assert(sizeof(DecoderContext) == 95976);
static_assert(offsetof(DecoderContext, window) == 29888);
static_assert(offsetof(DecoderContext, frame) == 29928);
static_assert(offsetof(DecoderContext, checksum) == 30008);
static_assert(offsetof(DecoderContext, header_size) == 30096);
static_assert(offsetof(DecoderContext, format) == 30104);
static_assert(offsetof(DecoderContext, literals) == 30120);
static_assert(offsetof(DecoderContext, dictionary) == 30192);
static_assert(offsetof(DecoderContext, dictionaries) == 30216);
static_assert(offsetof(DecoderContext, stream_stage) == 30236);
static_assert(offsetof(DecoderContext, expected_output) == 30328);
static_assert(offsetof(DecoderContext, literal_buffer) == 30352);
static_assert(offsetof(DecoderContext, extra_literals) == 30372);
static_assert(offsetof(DecoderContext, header_buffer) == 95940);
static_assert(offsetof(DecoderContext, oversized_duration) == 95960);
static_assert(offsetof(DecoderContext, trace_context) == 95968);

size_t LoadDictionaryEntropy(
  EntropyTables* tables, const void* dictionary, size_t size);

size_t BeginDecompression(
  DecoderContext* context, const void* dictionary, size_t dictionary_size);

void UsePreparedDictionary(
  DecoderContext* context, const PreparedDictionary* dictionary);

size_t ReleasePreparedDictionary(PreparedDictionary* dictionary);
const uint8_t* GetDictionaryContent(const PreparedDictionary* dictionary);
size_t GetDictionarySize(const PreparedDictionary* dictionary);
uint32_t GetDictionaryId(const PreparedDictionary* dictionary);
uint32_t GetDecoderErrorCode(size_t result);
const PreparedDictionary* GetActiveDictionary(DecoderContext* context);
DecoderContext* CreateDecoder();
size_t ResetStream(DecoderContext* context);
size_t DecodeFrameHeader(
  DecoderContext* context, const void* source, size_t size);

size_t DecompressFrames(DecoderContext* context, void* destination,
  size_t destination_size, const void* source, size_t source_size,
  const void* dictionary, size_t dictionary_size,
  const PreparedDictionary* prepared_dictionary);

size_t ContinueDecompression(DecoderContext* context, void* destination,
  size_t destination_size, const void* source, size_t source_size);

uint32_t GetNextInputType(const DecoderContext* context);
void TraceDecompressionEnd(const DecoderContext* context,
  uint64_t uncompressed_size, uint64_t compressed_size, unsigned streaming);

namespace detail {

struct TraceRecord {
  uint32_t version;
  uint32_t streaming;
  uint32_t dictionary_id;
  uint32_t dictionary_cold;
  size_t dictionary_size;
  size_t uncompressed_size;
  size_t compressed_size;
  const void* compression_parameters;
  const void* compression_context;
  const DecoderContext* decompression_context;
};

using TraceBegin = uintptr_t (*)(const DecoderContext*);
using TraceEnd = void (*)(uintptr_t, const TraceRecord*);

extern TraceBegin g_trace_begin;
extern TraceEnd g_trace_end;

static_assert(sizeof(TraceRecord) == 64);

inline LiteralContext* LiteralsFor(DecoderContext* context) {
  return reinterpret_cast<LiteralContext*>(context);
}

}
}
