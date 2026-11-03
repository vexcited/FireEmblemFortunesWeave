/*
  Adapted from Zstandard under the BSD license.
  Copyright Meta Platforms, Inc. and affiliates. All rights reserved.
  Original license: https://github.com/facebook/zstd/blob/v1.5.6/LICENSE
  Full license text: include/compression/zstd_bit_reader.hpp.
*/

#include "compression/zstd_workspace_internal.hpp"

namespace fw::compression {

namespace reset_detail {

const uint8_t EmptyWindow[2] = {' ', 0};

static uint64_t MixSalt(uint64_t value, uint64_t size) {
  value ^= (value >> 49 | value << 15) ^ (value >> 24 | value << 40);
  value *= 0x9fb21c651e98df25ULL;
  value ^= (value >> 35) + size;
  value *= 0x9fb21c651e98df25ULL;
  return value ^ (value >> 28);
}

}

using namespace reset_detail;

size_t ResetCompressionMatchState(
  MatchState* state, CompressionWorkspace* workspace,
  const MatchParameters* parameters, unsigned row_match_finder,
  unsigned leave_dirty, unsigned reset_indices, unsigned for_context
) {
  auto& view = *reinterpret_cast<MatchResetView*>(state);
  bool dedicated = !for_context && view.dedicated_dictionary;
  bool chain = dedicated || (parameters->strategy != 1 &&
    !RowFinder(parameters->strategy, row_match_finder));
  unsigned hash3_log = for_context && parameters->minimum_match == 3
    ? (parameters->window_log < 17 ? parameters->window_log : 17) : 0;
  if (reset_indices) {
    InitializeWindow(&state->window);
    workspace->tables_valid_end = workspace->objects_end;
  }
  view.hash_log3 = hash3_log;
  view.lazy_skipping = 0;
  uint32_t index = uintptr_t(state->window.next_source) -
    uintptr_t(state->window.base);
  state->window.dictionary_limit = index;
  state->window.low_limit = index;
  view.next_to_update = index;
  state->loaded_dictionary_end = 0;
  view.optimal.literal_length_sum = 0;
  state->dictionary = nullptr;
  workspace->tables_end = workspace->objects_end;
  size_t hash_size = size_t(1) << parameters->hash_log;
  state->hash_table = static_cast<uint32_t*>(
    ReserveTable(workspace, hash_size * 4)
  );
  state->chain_table = static_cast<uint32_t*>(ReserveTable(
    workspace, chain ? size_t(4) << parameters->chain_log : 0
  ));
  state->hash_table3 = static_cast<uint32_t*>(ReserveTable(
    workspace, hash3_log ? size_t(4) << hash3_log : 0
  ));
  if (workspace->failed) {
    return size_t(-64);
  }
  if (!leave_dirty && workspace->tables_valid_end < workspace->tables_end) {
    __builtin_memset(workspace->tables_valid_end, 0,
      workspace->tables_end - workspace->tables_valid_end);
    workspace->tables_valid_end = workspace->tables_end;
  }
  if (RowFinder(parameters->strategy, row_match_finder)) {
    uint8_t* tags;
    if (for_context) {
      size_t size = Align(hash_size);
      tags = Reserve(workspace, size, 1);
      if (tags && tags < workspace->initialized_start) {
        size_t clear = workspace->initialized_start - tags;
        __builtin_memset(tags, 0, clear < size ? clear : size);
        workspace->initialized_start = tags;
      }
      view.hash_salt = MixSalt(view.hash_salt, 8) ^
        MixSalt(view.salt_entropy, 4);
    }
    else {
      tags = static_cast<uint8_t*>(ReserveAligned(workspace, hash_size));
      __builtin_memset(tags, 0, hash_size);
      view.hash_salt = 0;
    }
    view.tags = tags;
    unsigned row_log = parameters->search_log;
    row_log = row_log < 4 ? 4 : row_log;
    row_log = row_log > 6 ? 6 : row_log;
    view.row_hash_log = parameters->hash_log - row_log;
  }
  if (for_context && parameters->strategy >= 7) {
    auto& optimal = view.optimal;
    optimal.literal_frequencies = ReserveAligned(workspace, 1024);
    optimal.literal_length_frequencies = ReserveAligned(workspace, 192);
    optimal.match_length_frequencies = ReserveAligned(workspace, 256);
    optimal.offset_frequencies = ReserveAligned(workspace, 128);
    optimal.matches = ReserveAligned(workspace, 32832);
    optimal.prices = ReserveAligned(workspace, 114816);
  }
  state->parameters = *parameters;
  return workspace->failed ? size_t(-64) : 0;
}

}
