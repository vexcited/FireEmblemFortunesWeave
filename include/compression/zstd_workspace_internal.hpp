/*
  Adapted from Zstandard under the BSD license.
  Copyright Meta Platforms, Inc. and affiliates. All rights reserved.
  Original license: https://github.com/facebook/zstd/blob/v1.5.6/LICENSE
  Full license text: include/compression/zstd_bit_reader.hpp.
*/

#pragma once

#include "compression/zstd_context_reset.hpp"

namespace fw::compression::reset_detail {

struct OptimalWorkspace {
  void* literal_frequencies;
  void* literal_length_frequencies;
  void* match_length_frequencies;
  void* offset_frequencies;
  void* matches;
  void* prices;
  uint32_t literal_sum;
  uint32_t literal_length_sum;
  uint8_t other_statistics[48];
};

struct MatchResetView {
  MatchWindow window;
  uint32_t loaded_dictionary_end;
  uint32_t next_to_update;
  uint32_t hash_log3;
  uint32_t row_hash_log;
  uint8_t* tags;
  uint32_t row_hash_cache[8];
  uint64_t hash_salt;
  uint32_t salt_entropy;
  uint32_t padding;
  uint32_t* hash_table;
  uint32_t* hash_table3;
  uint32_t* chain_table;
  unsigned force_noncontiguous;
  unsigned dedicated_dictionary;
  OptimalWorkspace optimal;
  const MatchState* dictionary;
  MatchParameters parameters;
  uint32_t parameter_padding;
  const void* long_distance_sequences;
  int prefetch_dictionary;
  unsigned lazy_skipping;
};

struct CompressionBufferState {
  unsigned policy;
  uint32_t padding;
  void* input;
  size_t input_size;
  size_t input_to_compress;
  size_t input_position;
  size_t input_target;
  void* output;
  size_t output_size;
};

static_assert(sizeof(MatchResetView) == sizeof(MatchState));
static_assert(offsetof(MatchResetView, hash_salt) == 96);
static_assert(offsetof(MatchResetView, dedicated_dictionary) == 140);
static_assert(offsetof(MatchResetView, dictionary) == 248);
static_assert(offsetof(OptimalWorkspace, literal_length_sum) == 52);
static_assert(offsetof(CompressionBufferState, output_size) == 56);

extern const uint8_t EmptyWindow[2];

inline size_t Align(size_t size) {
  return (size + 63) & ~size_t(63);
}

inline bool RowFinder(unsigned strategy, unsigned row) {
  return row == 1 && strategy - 3 < 3;
}

inline void InitializeWindow(MatchWindow* window) {
  *window = {};
  window->base = EmptyWindow;
  window->dictionary_base = EmptyWindow;
  window->next_source = EmptyWindow + 2;
  window->dictionary_limit = 2;
  window->low_limit = 2;
}

inline bool AdvancePhase(CompressionWorkspace* workspace, unsigned phase) {
  if (phase <= workspace->phase) {
    return true;
  }
  if (workspace->phase == 0) {
    workspace->tables_valid_end = workspace->objects_end;
    workspace->initialized_start = reinterpret_cast<uint8_t*>(
      uintptr_t(workspace->end) & ~uintptr_t(63)
    );
    auto* end = reinterpret_cast<uint8_t*>(
      Align(uintptr_t(workspace->objects_end))
    );
    if (end > workspace->end) {
      return false;
    }
    workspace->objects_end = end;
    workspace->tables_end = end;
    if (workspace->tables_valid_end < end) {
      workspace->tables_valid_end = end;
    }
  }
  workspace->phase = phase;
  return true;
}

inline void* ReserveTable(CompressionWorkspace* workspace, size_t size) {
  if (!AdvancePhase(workspace, 1)) {
    return nullptr;
  }
  auto* start = workspace->tables_end;
  auto* end = start + size;
  if (end > workspace->allocation_start) {
    workspace->failed = 1;
    return nullptr;
  }
  workspace->tables_end = end;
  return start;
}

inline uint8_t* Reserve(
  CompressionWorkspace* workspace, size_t size, unsigned phase
) {
  if (!AdvancePhase(workspace, phase) || !size) {
    return nullptr;
  }
  auto* start = workspace->allocation_start - size;
  if (start < workspace->tables_end) {
    workspace->failed = 1;
    return nullptr;
  }
  if (start < workspace->tables_valid_end) {
    workspace->tables_valid_end = start;
  }
  workspace->allocation_start = start;
  return start;
}

inline void* ReserveAligned(CompressionWorkspace* workspace, size_t size) {
  return Reserve(workspace, Align(size), 2);
}

inline void* ReserveObject(CompressionWorkspace* workspace, size_t size) {
  auto* start = workspace->objects_end;
  auto* end = start + ((size + 7) & ~size_t(7));
  if (workspace->phase || end > workspace->end) {
    workspace->failed = 1;
    return nullptr;
  }
  workspace->objects_end = end;
  workspace->tables_end = end;
  workspace->tables_valid_end = end;
  return start;
}

template <class T>
T& Field(void* object, size_t offset) {
  return *reinterpret_cast<T*>(static_cast<uint8_t*>(object) + offset);
}

}
