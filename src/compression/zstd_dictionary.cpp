#include "compression/zstd_decoder.hpp"
#include "compression/zstd_entropy.hpp"
#include "compression/zstd_huffman_tables.hpp"

extern "C" void* malloc(size_t size) noexcept;
extern "C" void free(void* pointer) noexcept;

namespace fw::compression {
namespace {

constexpr uint32_t kLiteralBases[] = {
  0,
  1,
  2,
  3,
  4,
  5,
  6,
  7,
  8,
  9,
  10,
  11,
  12,
  13,
  14,
  15,
  16,
  18,
  20,
  22,
  24,
  28,
  32,
  40,
  48,
  64,
  128,
  256,
  512,
  1024,
  2048,
  4096,
  8192,
  16384,
  32768,
  65536,
};

constexpr uint8_t kLiteralBits[] = {
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  1,
  1,
  1,
  1,
  2,
  2,
  3,
  3,
  4,
  6,
  7,
  8,
  9,
  10,
  11,
  12,
  13,
  14,
  15,
  16,
};

constexpr uint32_t kOffsetBases[] = {
  0,
  1,
  1,
  5,
  13,
  29,
  61,
  125,
  253,
  509,
  1021,
  2045,
  4093,
  8189,
  16381,
  32765,
  65533,
  131069,
  262141,
  524285,
  1048573,
  2097149,
  4194301,
  8388605,
  16777213,
  33554429,
  67108861,
  134217725,
  268435453,
  536870909,
  1073741821,
  2147483645,
};

constexpr uint8_t kOffsetBits[] = {
  0,
  1,
  2,
  3,
  4,
  5,
  6,
  7,
  8,
  9,
  10,
  11,
  12,
  13,
  14,
  15,
  16,
  17,
  18,
  19,
  20,
  21,
  22,
  23,
  24,
  25,
  26,
  27,
  28,
  29,
  30,
  31,
};

constexpr uint32_t kMatchBases[] = {
  3,
  4,
  5,
  6,
  7,
  8,
  9,
  10,
  11,
  12,
  13,
  14,
  15,
  16,
  17,
  18,
  19,
  20,
  21,
  22,
  23,
  24,
  25,
  26,
  27,
  28,
  29,
  30,
  31,
  32,
  33,
  34,
  35,
  37,
  39,
  41,
  43,
  47,
  51,
  59,
  67,
  83,
  99,
  131,
  259,
  515,
  1027,
  2051,
  4099,
  8195,
  16387,
  32771,
  65539,
};

constexpr uint8_t kMatchBits[] = {
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  1,
  1,
  1,
  1,
  2,
  2,
  3,
  3,
  4,
  4,
  5,
  7,
  8,
  9,
  10,
  11,
  12,
  13,
  14,
  15,
  16,
};

bool IsError(size_t value) {
  return value > size_t(-120);
}

}

size_t LoadDictionaryEntropy(
  EntropyTables* tables, const void* dictionary, size_t size) {
  if (size <= 8) {
    return size_t(-30);
  }
  const auto* begin = static_cast<const uint8_t*>(dictionary);
  const auto* cursor = begin + 8;
  const auto* end = begin + size;
  const size_t huffman_size = BuildHuffmanDoubleTable(
    tables->huffman, cursor, end - cursor, tables, 10264, 0);
  if (IsError(huffman_size)) {
    return size_t(-30);
  }
  cursor += huffman_size;
  SequenceTableHeader* destinations[] = {
    &tables->offsets.header,
    &tables->match_lengths.header,
    &tables->literal_lengths.header,
  };
  const uint32_t* bases[] = {kOffsetBases, kMatchBases, kLiteralBases};
  const uint8_t* bits[] = {kOffsetBits, kMatchBits, kLiteralBits};
  const unsigned maxima[] = {31, 52, 35};
  const unsigned logs[] = {8, 9, 9};
  for (unsigned i = 0; i < 3; ++i) {
    int16_t counts[53];
    unsigned maximum = maxima[i];
    unsigned log;
    const size_t bytes =
      ReadNormalizedCounts(counts, &maximum, &log, cursor, end - cursor);
    if (IsError(bytes) || maximum > maxima[i] || log > logs[i]) {
      return size_t(-30);
    }
    BuildSequenceTable(destinations[i], counts, maximum, bases[i], bits[i], log,
      tables->workspace);
    cursor += bytes;
  }
  if (cursor + 12 > end) {
    return size_t(-30);
  }
  const size_t content_size = end - cursor - 12;
  for (unsigned i = 0; i < 3; ++i) {
    uint32_t offset;
    __builtin_memcpy(&offset, cursor, 4);
    cursor += 4;
    if (!offset || offset > content_size) {
      return size_t(-30);
    }
    tables->repeated_offsets[i] = offset;
  }
  return cursor - begin;
}

size_t BeginDecompression(
  DecoderContext* context, const void* dictionary, size_t dictionary_size) {
  context->trace_context =
    detail::g_trace_begin ? detail::g_trace_begin(context) : 0;
  context->window = {nullptr, nullptr, nullptr, nullptr,
    context->format == FrameFormat::Standard ? size_t(5) : size_t(1)};
  context->processed_size = 0;
  context->decoded_size = 0;
  context->block_type = BlockType::Reserved;
  context->stage = FrameStage::HeaderSize;
  context->entropy.huffman[0] = 0x0C00000C;
  context->literal_entropy = 0;
  context->sequence_entropy = 0;
  context->dictionary_id = 0;
  context->frame_decompression = 1;
  context->entropy.repeated_offsets[0] = 1;
  context->entropy.repeated_offsets[1] = 4;
  context->entropy.repeated_offsets[2] = 8;
  context->literal_lengths = &context->entropy.literal_lengths.header;
  context->match_lengths = &context->entropy.match_lengths.header;
  context->offsets = &context->entropy.offsets.header;
  context->huffman = context->entropy.huffman;
  if (!dictionary || !dictionary_size) {
    return 0;
  }
  const auto* cursor = static_cast<const uint8_t*>(dictionary);
  uint32_t magic = 0;
  if (dictionary_size >= 8) {
    __builtin_memcpy(&magic, cursor, 4);
  }
  if (magic == 0xEC30A437) {
    __builtin_memcpy(&context->dictionary_id, cursor + 4, 4);
    const size_t size =
      LoadDictionaryEntropy(&context->entropy, dictionary, dictionary_size);
    if (IsError(size)) {
      return size_t(-30);
    }
    cursor += size;
    context->literal_entropy = 1;
    context->sequence_entropy = 1;
  }
  context->window.dictionary_end = context->window.previous_end;
  context->window.virtual_start = reinterpret_cast<const uint8_t*>(
    uintptr_t(cursor) + uintptr_t(context->window.prefix_start) -
    uintptr_t(context->window.previous_end));
  context->window.prefix_start = cursor;
  context->window.previous_end =
    static_cast<const uint8_t*>(dictionary) + dictionary_size;
  return 0;
}

void UsePreparedDictionary(
  DecoderContext* context, const PreparedDictionary* dictionary) {
  context->dictionary_id = dictionary->id;
  context->window.prefix_start = dictionary->content;
  context->window.virtual_start = dictionary->content;
  context->window.dictionary_end =
    dictionary->content + dictionary->content_size;
  context->window.previous_end = context->window.dictionary_end;
  if (dictionary->entropy_present) {
    context->literal_entropy = 1;
    context->sequence_entropy = 1;
    context->literal_lengths = &dictionary->entropy.literal_lengths.header;
    context->match_lengths = &dictionary->entropy.match_lengths.header;
    context->offsets = &dictionary->entropy.offsets.header;
    context->huffman = dictionary->entropy.huffman;
    for (unsigned i = 0; i < 3; ++i) {
      context->entropy.repeated_offsets[i] =
        dictionary->entropy.repeated_offsets[i];
    }
  }
  else {
    context->literal_entropy = 0;
    context->sequence_entropy = 0;
  }
}

size_t ReleasePreparedDictionary(PreparedDictionary* dictionary) {
  if (!dictionary) {
    return 0;
  }
  const auto release = dictionary->memory.release;
  void* opaque = dictionary->memory.opaque;
  if (dictionary->buffer) {
    if (release) {
      release(opaque, dictionary->buffer);
    }
    else {
      free(dictionary->buffer);
    }
  }
  if (release) {
    release(opaque, dictionary);
  }
  else {
    free(dictionary);
  }
  return 0;
}

const PreparedDictionary* GetActiveDictionary(DecoderContext* context) {
  if (context->dictionary_uses == -1) {
    return context->dictionary;
  }
  if (context->dictionary_uses == 1) {
    context->dictionary_uses = 0;
    return context->dictionary;
  }
  ReleasePreparedDictionary(context->owned_dictionary);
  context->dictionary_uses = 0;
  context->owned_dictionary = nullptr;
  context->dictionary = nullptr;
  return nullptr;
}

DecoderContext* CreateDecoder() {
  auto* context = static_cast<DecoderContext*>(malloc(sizeof(DecoderContext)));
  if (!context) {
    return nullptr;
  }
  context->static_size = 0;
  context->window.dictionary_end = nullptr;
  context->output_buffer_size = 0;
  context->owned_dictionary = nullptr;
  context->dictionary = nullptr;
  context->memory = {};
  context->dictionaries = nullptr;
  context->oversized_duration = 0;
  context->dictionary_cold = 0;
  context->dictionary_uses = 0;
  context->stream_stage = StreamStage::Initialize;
  context->input_buffer = nullptr;
  context->input_buffer_size = 0;
  context->no_forward_progress = 0;
  context->output_buffer_mode = 0;
  context->format = FrameFormat::Standard;
  context->ignore_checksum = 0;
  context->multiple_dictionaries = 0;
  context->disable_huffman_assembly = 0;
  context->maximum_block_size = 0;
  context->frame_decompression = 1;
  context->maximum_window_size = 134217729;
  return context;
}

size_t ResetStream(DecoderContext* context) {
  context->stream_stage = StreamStage::Initialize;
  context->no_forward_progress = 0;
  context->frame_decompression = 1;
  ReleasePreparedDictionary(context->owned_dictionary);
  context->dictionary_uses = 0;
  context->owned_dictionary = nullptr;
  context->dictionary = nullptr;
  return context->format == FrameFormat::Standard ? 5 : 1;
}

const uint8_t* GetDictionaryContent(const PreparedDictionary* dictionary) {
  return dictionary->content;
}

size_t GetDictionarySize(const PreparedDictionary* dictionary) {
  return dictionary->content_size;
}

uint32_t GetDictionaryId(const PreparedDictionary* dictionary) {
  return dictionary ? dictionary->id : 0;
}

uint32_t GetDecoderErrorCode(size_t result) {
  return IsError(result) ? -uint32_t(result) : 0;
}

}
