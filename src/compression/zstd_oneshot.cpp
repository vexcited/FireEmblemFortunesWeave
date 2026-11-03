/*
  Adapted from Zstandard under the BSD license.
  Copyright Meta Platforms, Inc. and affiliates. All rights reserved.
  Original license: https://github.com/facebook/zstd/blob/v1.5.6/LICENSE
  Full license text: include/compression/zstd_bit_reader.hpp.
*/

#include "compression/zstd_oneshot.hpp"
#include "compression/zstd_frame_encoder.hpp"
#include "compression/zstd_block_internal.hpp"

extern "C" void free(void*);

namespace fw::compression {
namespace {

template <typename T> T& Field(void* object, size_t offset) {
  return *reinterpret_cast<T*>(static_cast<uint8_t*>(object) + offset);
}
using block_detail::IsError;
using block_detail::Read;

constexpr MatchParameters CompressionLevels[4][23] = {
  {
    {19, 12, 13, 1, 6, 1, 1},
    {19, 13, 14, 1, 7, 0, 1},
    {20, 15, 16, 1, 6, 0, 1},
    {21, 16, 17, 1, 5, 0, 2},
    {21, 18, 18, 1, 5, 0, 2},
    {21, 18, 19, 3, 5, 2, 3},
    {21, 18, 19, 3, 5, 4, 4},
    {21, 19, 20, 4, 5, 8, 4},
    {21, 19, 20, 4, 5, 16, 5},
    {22, 20, 21, 4, 5, 16, 5},
    {22, 21, 22, 5, 5, 16, 5},
    {22, 21, 22, 6, 5, 16, 5},
    {22, 22, 23, 6, 5, 32, 5},
    {22, 22, 22, 4, 5, 32, 6},
    {22, 22, 23, 5, 5, 32, 6},
    {22, 23, 23, 6, 5, 32, 6},
    {22, 22, 22, 5, 5, 48, 7},
    {23, 23, 22, 5, 4, 64, 7},
    {23, 23, 22, 6, 3, 64, 8},
    {23, 24, 22, 7, 3, 256, 9},
    {25, 25, 23, 7, 3, 256, 9},
    {26, 26, 24, 7, 3, 512, 9},
    {27, 27, 25, 9, 3, 999, 9},
  },
  {
    {18, 12, 13, 1, 5, 1, 1},
    {18, 13, 14, 1, 6, 0, 1},
    {18, 14, 14, 1, 5, 0, 2},
    {18, 16, 16, 1, 4, 0, 2},
    {18, 16, 17, 3, 5, 2, 3},
    {18, 17, 18, 5, 5, 2, 3},
    {18, 18, 19, 3, 5, 4, 4},
    {18, 18, 19, 4, 4, 4, 4},
    {18, 18, 19, 4, 4, 8, 5},
    {18, 18, 19, 5, 4, 8, 5},
    {18, 18, 19, 6, 4, 8, 5},
    {18, 18, 19, 5, 4, 12, 6},
    {18, 19, 19, 7, 4, 12, 6},
    {18, 18, 19, 4, 4, 16, 7},
    {18, 18, 19, 4, 3, 32, 7},
    {18, 18, 19, 6, 3, 128, 7},
    {18, 19, 19, 6, 3, 128, 8},
    {18, 19, 19, 8, 3, 256, 8},
    {18, 19, 19, 6, 3, 128, 9},
    {18, 19, 19, 8, 3, 256, 9},
    {18, 19, 19, 10, 3, 512, 9},
    {18, 19, 19, 12, 3, 512, 9},
    {18, 19, 19, 13, 3, 999, 9},
  },
  {
    {17, 12, 12, 1, 5, 1, 1},
    {17, 12, 13, 1, 6, 0, 1},
    {17, 13, 15, 1, 5, 0, 1},
    {17, 15, 16, 2, 5, 0, 2},
    {17, 17, 17, 2, 4, 0, 2},
    {17, 16, 17, 3, 4, 2, 3},
    {17, 16, 17, 3, 4, 4, 4},
    {17, 16, 17, 3, 4, 8, 5},
    {17, 16, 17, 4, 4, 8, 5},
    {17, 16, 17, 5, 4, 8, 5},
    {17, 16, 17, 6, 4, 8, 5},
    {17, 17, 17, 5, 4, 8, 6},
    {17, 18, 17, 7, 4, 12, 6},
    {17, 18, 17, 3, 4, 12, 7},
    {17, 18, 17, 4, 3, 32, 7},
    {17, 18, 17, 6, 3, 256, 7},
    {17, 18, 17, 6, 3, 128, 8},
    {17, 18, 17, 8, 3, 256, 8},
    {17, 18, 17, 10, 3, 512, 8},
    {17, 18, 17, 5, 3, 256, 9},
    {17, 18, 17, 7, 3, 512, 9},
    {17, 18, 17, 9, 3, 512, 9},
    {17, 18, 17, 11, 3, 999, 9},
  },
  {
    {14, 12, 13, 1, 5, 1, 1},
    {14, 14, 15, 1, 5, 0, 1},
    {14, 14, 15, 1, 4, 0, 1},
    {14, 14, 15, 2, 4, 0, 2},
    {14, 14, 14, 4, 4, 2, 3},
    {14, 14, 14, 3, 4, 4, 4},
    {14, 14, 14, 4, 4, 8, 5},
    {14, 14, 14, 6, 4, 8, 5},
    {14, 14, 14, 8, 4, 8, 5},
    {14, 15, 14, 5, 4, 8, 6},
    {14, 15, 14, 9, 4, 8, 6},
    {14, 15, 14, 3, 4, 12, 7},
    {14, 15, 14, 4, 3, 24, 7},
    {14, 15, 14, 5, 3, 32, 8},
    {14, 15, 15, 6, 3, 64, 8},
    {14, 15, 15, 7, 3, 256, 8},
    {14, 15, 15, 5, 3, 48, 9},
    {14, 15, 15, 6, 3, 128, 9},
    {14, 15, 15, 7, 3, 256, 9},
    {14, 15, 15, 8, 3, 256, 9},
    {14, 15, 15, 8, 3, 512, 9},
    {14, 15, 15, 9, 3, 512, 9},
    {14, 15, 15, 10, 3, 999, 9},
  },
};

unsigned CeilingLog(uint32_t value) {
  return value > 1 ? 32 - __builtin_clz(value - 1) : 0;
}

using Release = void (*)(void*, void*);

void ReleaseAllocation(void* pointer, Release release, void* opaque) {
  if (pointer) {
    if (release) {
      release(opaque, pointer);
    }
    else {
      free(pointer);
    }
  }
}

void ClearLocalContext(BlockCompressionContext* context) {
  auto release = Field<Release>(context, 0x370);
  void* opaque = Field<void*>(context, 0x378);
  ReleaseAllocation(Field<void*>(context, 0xe48), release, opaque);
  void* dictionary = Field<void*>(context, 0xe68);
  if (dictionary) {
    auto& workspace = Field<CompressionWorkspace>(dictionary, 0x20);
    auto dictionary_release = Field<Release>(dictionary, 0x17a0);
    void* dictionary_opaque = Field<void*>(dictionary, 0x17a8);
    void* allocation = workspace.start;
    bool separate = uintptr_t(dictionary) < uintptr_t(workspace.start) ||
      uintptr_t(dictionary) >= uintptr_t(workspace.end);
    workspace = {};
    ReleaseAllocation(allocation, dictionary_release, dictionary_opaque);
    if (separate) {
      ReleaseAllocation(dictionary, dictionary_release, dictionary_opaque);
    }
  }
  __builtin_memset(reinterpret_cast<uint8_t*>(context) + 0xe48, 0, 72);
  auto& workspace = Field<CompressionWorkspace>(context, 0x2a8);
  void* allocation = workspace.start;
  workspace = {};
  ReleaseAllocation(allocation, release, opaque);
}

}

size_t CompressWithParameters(
  BlockCompressionContext* context, void* destination, size_t capacity,
  const void* source, size_t source_size, const void* dictionary,
  size_t dictionary_size, const BlockCompressionParameters* parameters
) {
  Field<uint64_t>(context, 0xe90) = oneshot_detail::CompressionTraceBegin
    ? oneshot_detail::CompressionTraceBegin(context) : 0;
  size_t result = ResetCompressionContext(
    context, parameters, source_size, dictionary_size, 0, 0
  );
  if (IsError(result)) {
    return result;
  }
  unsigned dictionary_id = 0;
  if (dictionary && dictionary_size >= 8) {
    auto* previous = context->previous;
    previous->literals.repeat_mode = 0;
    previous->sequences.offset_repeat = 0;
    previous->sequences.match_repeat = 0;
    previous->sequences.literal_repeat = 0;
    previous->repeated_offsets[0] = 1;
    previous->repeated_offsets[1] = 4;
    previous->repeated_offsets[2] = 8;
    auto* workspace = &Field<CompressionWorkspace>(context, 0x2a8);
    if (Read<uint32_t>(dictionary) == 0xec30a437) {
      if (!Read<uint32_t>(context->parameters.frame_parameters + 8)) {
        dictionary_id = Read<uint32_t>(
          static_cast<const uint8_t*>(dictionary) + 4
        );
      }
      result = LoadCompressionDictionaryEntropy(
        previous, context->entropy_workspace, dictionary, dictionary_size
      );
      if (IsError(result)) {
        return result;
      }
      LoadCompressionDictionaryContent(
        &context->match, nullptr, workspace, &context->parameters,
        static_cast<const uint8_t*>(dictionary) + result,
        dictionary_size - result, HashTableLoad::Fast,
        HashTablePurpose::Context
      );
    }
    else {
      LoadCompressionDictionaryContent(
        &context->match, &context->long_distance, workspace,
        &context->parameters, dictionary, dictionary_size,
        HashTableLoad::Fast, HashTablePurpose::Context
      );
    }
  }
  Field<unsigned>(context, 0x298) = dictionary_id;
  Field<size_t>(context, 0x2a0) = dictionary_size;
  return FinishFrameCompression(
    context, destination, capacity, source, source_size
  );
}

size_t CompressUsingDictionary(
  BlockCompressionContext* context, void* destination, size_t capacity,
  const void* source, size_t source_size, const void* dictionary,
  size_t dictionary_size, int level
) {
  size_t size = dictionary ? dictionary_size : 0;
  uint64_t estimate = source_size + size;
  if (source_size == UINT64_MAX && size) {
    estimate += 500;
  }
  unsigned table = unsigned(estimate <= 256 * 1024) +
    unsigned(estimate <= 128 * 1024) + unsigned(estimate <= 16 * 1024);
  int selected = level ? level : 3;
  unsigned index = selected < 0 ? 0 : selected > 22 ? 22 : selected;
  MatchParameters match = CompressionLevels[table][index];
  if (selected < 0) {
    match.target_length = selected <= -131072 ? 131072 : -selected;
  }
  if (source_size <= (1u << 30) && size <= (1u << 30)) {
    uint32_t total = uint32_t(source_size + size);
    unsigned log = total < 64 ? 6 : CeilingLog(total);
    if (match.window_log > log) {
      match.window_log = log;
    }
  }
  if (source_size != UINT64_MAX) {
    unsigned log = match.window_log;
    uint64_t window = uint64_t(1) << log;
    if (size && window < size + source_size) {
      log = size + window >= (uint64_t(1) << 31)
        ? 31 : CeilingLog(uint32_t(size + window));
    }
    if (match.hash_log > log + 1) {
      match.hash_log = log + 1;
    }
    unsigned tree = match.strategy > 5;
    if (match.chain_log - tree > log) {
      match.chain_log = log + tree;
    }
  }
  unsigned window_log = match.window_log;
  if (match.window_log < 10) {
    match.window_log = 10;
  }
  bool row = match.strategy >= 3 && match.strategy <= 5;
  if (row) {
    unsigned row_log = match.search_log < 4 ? 4 : match.search_log;
    row_log = row_log > 6 ? 6 : row_log;
    if (match.hash_log > 24 + row_log) {
      match.hash_log = 24 + row_log;
    }
  }
  auto& parameters = Field<BlockCompressionParameters>(context, 0x1c0);
  parameters = {};
  parameters.match = match;
  parameters.frame_parameters[0] = 1;
  parameters.compression_level = selected;
  parameters.row_match_finder = row && window_log > 14 ? 1 : 2;
  parameters.block_splitter = match.strategy >= 7 && window_log > 16
    ? 1 : 2;
  parameters.long_distance.enabled = match.strategy >= 7 && window_log > 26
    ? 1 : 2;
  parameters.maximum_block_size = 131072;
  parameters.external_repeat_search = selected >= 10 ? 1 : 2;
  return CompressWithParameters(
    context, destination, capacity, source, source_size, dictionary,
    dictionary_size, &parameters
  );
}

size_t Compress(
  void* destination, size_t capacity, const void* source,
  size_t source_size, int level
) {
  BlockCompressionContext context = {};
  Field<unsigned>(&context, 0x30) = 1;
  Field<int>(&context, 0x3c) = 3;
  size_t result = CompressUsingDictionary(
    &context, destination, capacity, source, source_size, nullptr, 0, level
  );
  ClearLocalContext(&context);
  return result;
}

}
