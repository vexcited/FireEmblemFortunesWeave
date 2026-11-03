/*
  Adapted from Zstandard under the BSD license.
  Copyright Meta Platforms, Inc. and affiliates. All rights reserved.
  Original license: https://github.com/facebook/zstd/blob/v1.5.6/LICENSE
  Full license text: include/compression/zstd_bit_reader.hpp.
*/

#include "compression/zstd_frame_encoder.hpp"

namespace fw::compression {
namespace {

template <class T>
T& StateField(MatchState* state, size_t offset) {
  return *reinterpret_cast<T*>(reinterpret_cast<uint8_t*>(state) + offset);
}

void ReduceMarkedTable(
  uint32_t* table, unsigned size, unsigned correction
) {
  unsigned threshold = correction + 2;
  for (int row = 0; row < static_cast<int>(size) / 16; ++row) {
    for (unsigned column = 0; column < 16; ++column) {
      unsigned value = table[row * 16 + column];
      table[row * 16 + column] = value == 1 ? 1 :
        value < threshold ? 0 : value - correction;
    }
  }
}

}

void ReduceMatchIndexTable(
  uint32_t* table, unsigned size, unsigned correction
) {
  unsigned threshold = correction + 2;
  for (int row = 0; row < static_cast<int>(size) / 16; ++row) {
    for (unsigned column = 0; column < 16; ++column) {
      unsigned value = table[row * 16 + column];
      table[row * 16 + column] = value < threshold ? 0 : value - correction;
    }
  }
}

void CorrectMatchIndexOverflow(
  MatchState* state, CompressionWorkspacePrefix* workspace,
  const BlockCompressionParameters* parameters, const void* source,
  const void* source_end
) {
  auto& window = state->window;
  uintptr_t base = reinterpret_cast<uintptr_t>(window.base);
  unsigned end = static_cast<unsigned>(
    reinterpret_cast<uintptr_t>(source_end) - base
  );
  if (end <= 0xe0000000) {
    return;
  }

  const auto& match = parameters->match;
  unsigned cycle_log = match.chain_log - (match.strategy > 5);
  unsigned cycle_size = 1u << cycle_log;
  unsigned distance = 1u << match.window_log;
  unsigned current = static_cast<unsigned>(
    reinterpret_cast<uintptr_t>(source) - base
  );
  unsigned remainder = current & (cycle_size - 1);
  unsigned additional_cycle = remainder < 2 ?
    (cycle_size < 2 ? 2 : cycle_size) : 0;
  unsigned maximum = distance > cycle_size ? distance : cycle_size;
  unsigned correction = current - maximum - remainder - additional_cycle;
  unsigned threshold = correction + 2;
  window.base = reinterpret_cast<const uint8_t*>(base + correction);
  window.dictionary_base = reinterpret_cast<const uint8_t*>(
    reinterpret_cast<uintptr_t>(window.dictionary_base) + correction
  );
  window.low_limit = window.low_limit < threshold ? 2 :
    window.low_limit - correction;
  window.dictionary_limit = window.dictionary_limit < threshold ? 2 :
    window.dictionary_limit - correction;
  ++window.overflow_corrections;

  workspace->tables_valid_end = workspace->objects_end;
  ReduceMatchIndexTable(state->hash_table, 1u << match.hash_log, correction);
  unsigned dedicated = StateField<unsigned>(state, 140);
  if (dedicated || (match.strategy != 1 &&
      (match.strategy < 3 || match.strategy > 5 ||
      parameters->row_match_finder != 1))) {
    if (match.strategy == 6) {
      ReduceMarkedTable(state->chain_table, 1u << match.chain_log, correction);
    }
    else {
      ReduceMatchIndexTable(
        state->chain_table, 1u << match.chain_log, correction
      );
    }
  }
  unsigned hash_log3 = StateField<unsigned>(state, 48);
  if (hash_log3) {
    ReduceMatchIndexTable(state->hash_table3, 1u << hash_log3, correction);
  }
  if (reinterpret_cast<uintptr_t>(workspace->tables_valid_end) <
      reinterpret_cast<uintptr_t>(workspace->tables_end)) {
    workspace->tables_valid_end = workspace->tables_end;
  }
  unsigned& next = StateField<unsigned>(state, 44);
  next = next < correction ? 0 : next - correction;
  state->loaded_dictionary_end = 0;
  state->dictionary = nullptr;
}

}
