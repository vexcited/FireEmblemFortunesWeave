/*
  Adapted from Zstandard under the BSD license.
  Copyright Meta Platforms, Inc. and affiliates. All rights reserved.
  Original license: https://github.com/facebook/zstd/blob/v1.5.6/LICENSE
  Full license text: include/compression/zstd_bit_reader.hpp.
*/

#include "compression/zstd_oneshot.hpp"
#include "compression/zstd_huffman_tables.hpp"
#include "compression/zstd_entropy.hpp"
#include "compression/zstd_block_internal.hpp"

namespace fw::compression {

using namespace block_detail;

size_t ReadHuffmanWeightsWithLocalWorkspace(
  uint8_t* weights, size_t capacity, uint32_t* ranks,
  unsigned* symbol_count, unsigned* table_log, const void* source,
  size_t source_size
) {
  uint32_t workspace[219];
  return ReadHuffmanWeights(weights, capacity, ranks, symbol_count,
    table_log, source, source_size, workspace, sizeof(workspace), 0);
}

size_t ReadHuffmanCompressionTable(
  uint64_t* table, unsigned* maximum_symbol, const void* source,
  size_t source_size, unsigned* has_zero_weights
) {
  uint8_t weights[256];
  uint32_t ranks[17];
  unsigned count = 0;
  unsigned log = 0;
  size_t result = ReadHuffmanWeightsWithLocalWorkspace(
    weights, 256, ranks, &count, &log, source, source_size
  );
  if (IsError(result)) {
    return result;
  }
  *has_zero_weights = ranks[0] != 0;
  if (log > 12) {
    return size_t(-44);
  }
  if (count > *maximum_symbol + 1) {
    return size_t(-48);
  }
  *maximum_symbol = count - 1;
  table[0] = log | uint64_t(uint8_t(count - 1)) << 8;
  uint32_t start = 0;
  for (unsigned i = 1; i <= log; ++i) {
    uint32_t previous = start;
    start += ranks[i] << (i - 1);
    ranks[i] = previous;
  }
  for (unsigned i = 0; i < count; ++i) {
    table[i + 1] = weights[i] ? log + 1 - weights[i] : 0;
  }
  uint16_t counts[14] = {};
  uint16_t values[14] = {};
  for (unsigned i = 0; i < count; ++i) {
    ++counts[table[i + 1] & 255];
  }
  uint16_t minimum = 0;
  for (unsigned bits = log; bits > 0; --bits) {
    values[bits] = minimum;
    minimum = uint16_t(minimum + counts[bits]) >> 1;
  }
  for (unsigned i = 0; i < count; ++i) {
    unsigned bits = table[i + 1] & 255;
    uint16_t value = values[bits]++;
    if (bits) {
      table[i + 1] |= uint64_t(value) << (64 - bits);
    }
  }
  return result;
}

namespace {

unsigned RepeatMode(
  const int16_t* counts, unsigned maximum, unsigned required
) {
  if (maximum < required) {
    return 1;
  }
  for (unsigned i = 0; i <= required; ++i) {
    if (!counts[i]) {
      return 1;
    }
  }
  return 2;
}

}

size_t LoadCompressionDictionaryEntropy(
  BlockCompressionState* state, void* workspace, const void* dictionary,
  size_t dictionary_size
) {
  auto* start = static_cast<const uint8_t*>(dictionary);
  const uint8_t* cursor = start + 8;
  const uint8_t* end = start + dictionary_size;
  state->literals.repeat_mode = 1;
  unsigned maximum = 255;
  unsigned zero_weights = 1;
  size_t size = ReadHuffmanCompressionTable(
    state->literals.table, &maximum, cursor, end - cursor, &zero_weights
  );
  if (!zero_weights && maximum == 255) {
    state->literals.repeat_mode = 2;
  }
  if (IsError(size)) {
    return size_t(-30);
  }
  cursor += size;
  int16_t offsets[32];
  unsigned maximum_offset = 31;
  unsigned log;
  size = ReadNormalizedCounts(
    offsets, &maximum_offset, &log, cursor, end - cursor
  );
  if (IsError(size) || log > 8 || IsError(BuildFseCompressionTable(
      state->sequences.offsets, offsets, 31, log, workspace, 8704))) {
    return size_t(-30);
  }
  cursor += size;
  int16_t matches[53];
  maximum = 52;
  size = ReadNormalizedCounts(matches, &maximum, &log, cursor, end - cursor);
  if (IsError(size) || log > 9 || IsError(BuildFseCompressionTable(
      state->sequences.match_lengths, matches, maximum, log,
      workspace, 8704))) {
    return size_t(-30);
  }
  state->sequences.match_repeat = RepeatMode(matches, maximum, 52);
  cursor += size;
  int16_t literals[36];
  maximum = 35;
  size = ReadNormalizedCounts(literals, &maximum, &log, cursor, end - cursor);
  if (IsError(size) || log > 9 || IsError(BuildFseCompressionTable(
      state->sequences.literal_lengths, literals, maximum, log,
      workspace, 8704))) {
    return size_t(-30);
  }
  state->sequences.literal_repeat = RepeatMode(literals, maximum, 35);
  cursor += size;
  if (cursor + 12 > end) {
    return size_t(-30);
  }
  for (unsigned i = 0; i < 3; ++i) {
    state->repeated_offsets[i] = Read<uint32_t>(cursor + i * 4);
  }
  cursor += 12;
  size_t content_size = end - cursor;
  unsigned required = 31;
  if (content_size <= UINT32_MAX - 0x20000) {
    required = 31 - __builtin_clz(uint32_t(content_size + 0x20000));
  }
  state->sequences.offset_repeat = RepeatMode(
    offsets, maximum_offset, required < 31 ? required : 31
  );
  for (unsigned i = 0; i < 3; ++i) {
    if (!state->repeated_offsets[i] ||
        state->repeated_offsets[i] > content_size) {
      return size_t(-30);
    }
  }
  return cursor - start;
}

}
