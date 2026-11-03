/*
  Adapted from Zstandard under the BSD license.
  Copyright Meta Platforms, Inc. and affiliates. All rights reserved.
  Original license: https://github.com/facebook/zstd/blob/v1.5.6/LICENSE
  Full license text: include/compression/zstd_bit_reader.hpp.
*/

#include "compression/zstd_workspace_internal.hpp"
#include "compression/zstd_frame_encoder_internal.hpp"

extern "C" void* malloc(size_t size);
extern "C" void free(void* pointer);

namespace fw::compression {

using namespace reset_detail;

namespace {

struct CustomAllocation {
  void* (*allocate)(void*, size_t);
  void (*release)(void*, void*);
  void* opaque;
};

size_t RecreateWorkspace(
  BlockCompressionContext* context, CompressionWorkspace* workspace,
  size_t size
) {
  auto& allocator = Field<CustomAllocation>(context, 0x368);
  auto* previous = workspace->start;
  *workspace = {};
  if (previous) {
    if (allocator.release) {
      allocator.release(allocator.opaque, previous);
    }
    else {
      free(previous);
    }
  }
  auto* start = static_cast<uint8_t*>(allocator.allocate
    ? allocator.allocate(allocator.opaque, size) : malloc(size));
  if (!start) {
    return size_t(-64);
  }
  workspace->start = start;
  workspace->end = start + size;
  workspace->objects_end = start;
  workspace->tables_end = start;
  workspace->tables_valid_end = start;
  workspace->allocation_start = reinterpret_cast<uint8_t*>(
    uintptr_t(start + size) & ~uintptr_t(63)
  );
  workspace->initialized_start = workspace->allocation_start;
  context->previous = static_cast<BlockCompressionState*>(
    ReserveObject(workspace, sizeof(BlockCompressionState))
  );
  if (!context->previous) {
    return size_t(-64);
  }
  context->next = static_cast<BlockCompressionState*>(
    ReserveObject(workspace, sizeof(BlockCompressionState))
  );
  if (!context->next) {
    return size_t(-64);
  }
  context->entropy_workspace = ReserveObject(workspace, 8920);
  return context->entropy_workspace ? 0 : size_t(-64);
}

}

size_t ResetCompressionContext(
  BlockCompressionContext* context,
  const BlockCompressionParameters* parameters, uint64_t pledged_size,
  size_t loaded_dictionary_size, unsigned leave_dirty, unsigned buffered
) {
  context->first_block = 1;
  __builtin_memcpy(&context->parameters, parameters, sizeof(*parameters));
  parameters = &context->parameters;
  if (parameters->long_distance.enabled == 1) {
    AdjustLongDistanceParameters(
      &context->parameters.long_distance, &parameters->match
    );
  }
  size_t window = size_t(1) << parameters->match.window_log;
  if (window > pledged_size) {
    window = pledged_size;
  }
  if (!window) {
    window = 1;
  }
  size_t block = parameters->maximum_block_size < window
    ? parameters->maximum_block_size : window;
  size_t count = block /
    (parameters->match.minimum_match == 3 || parameters->producer ? 3 : 4);
  size_t input_size = 0;
  size_t output_size = 0;
  if (buffered == 1) {
    if (!Field<unsigned>(context, 0x164)) {
      input_size = window + block;
    }
    if (!Field<unsigned>(context, 0x168)) {
      size_t margin = block < 0x20000 ? (0x20000 - block) >> 11 : 0;
      output_size = block + (block >> 8) + margin;
      output_size = output_size ? output_size + 1 : size_t(-71);
    }
  }
  size_t ldm_count = LongDistanceSequenceCapacity(
    parameters->long_distance, block
  );
  auto* workspace = &Field<CompressionWorkspace>(context, 0x2a8);
  size_t static_size = Field<size_t>(context, 0x388);
  auto& match = context->match;
  bool reset_indices =
    uintptr_t(match.window.next_source) - uintptr_t(match.window.base) >
      0xdf000000 || loaded_dictionary_size > 0x1fffffff ||
    !context->initialized;
  size_t needed = EstimateCompressionWorkspace(
    &parameters->match, &parameters->long_distance, static_size != 0,
    parameters->row_match_finder, input_size, output_size, pledged_size,
    parameters->producer != nullptr, parameters->maximum_block_size
  );
  if (frame_detail::IsError(needed)) {
    return needed;
  }
  if (!static_size) {
    workspace->oversized_duration = int32_t(
      uint32_t(workspace->oversized_duration) + 1
    );
  }
  bool wasteful = size_t(workspace->allocation_start - workspace->tables_end)
    >= needed * 3 && workspace->oversized_duration > 128;
  if (size_t(workspace->end - workspace->start) < needed || wasteful) {
    if (static_size) {
      return size_t(-64);
    }
    size_t result = RecreateWorkspace(context, workspace, needed);
    if (frame_detail::IsError(result)) {
      return result;
    }
    reset_indices = true;
  }
  workspace->tables_end = workspace->objects_end;
  workspace->allocation_start = reinterpret_cast<uint8_t*>(
    uintptr_t(workspace->end) & ~uintptr_t(63)
  );
  workspace->failed = 0;
  if (workspace->phase > 1) {
    workspace->phase = 1;
  }
  match.parameters = parameters->match;
  match.prefetch_dictionary = Field<unsigned>(context, 0x198) == 1;
  auto& prefix = frame_detail::Prefix(context);
  prefix.pledged_size_plus_one = pledged_size + 1;
  prefix.consumed_size = 0;
  prefix.produced_size = 0;
  if (pledged_size == UINT64_MAX) {
    Field<unsigned>(context, 0x108) = 0;
  }
  prefix.block_size = block;
  ResetChecksum(&prefix.checksum, 0);
  prefix.stage = 1;
  prefix.dictionary_id = 0;
  prefix.dictionary_size = 0;
  context->previous->repeated_offsets[0] = 1;
  context->previous->repeated_offsets[1] = 4;
  context->previous->repeated_offsets[2] = 8;
  context->previous->literals.repeat_mode = 0;
  context->previous->sequences.offset_repeat = 0;
  context->previous->sequences.match_repeat = 0;
  context->previous->sequences.literal_repeat = 0;
  size_t result = ResetCompressionMatchState(
    &match, workspace, &parameters->match, parameters->row_match_finder,
    leave_dirty, reset_indices, 1
  );
  if (frame_detail::IsError(result)) {
    return result;
  }
  context->sequences.sequences_start = static_cast<MatchSequence*>(
    ReserveAligned(workspace, count * sizeof(MatchSequence))
  );
  if (parameters->long_distance.enabled == 1) {
    size_t hash_size = size_t(1) << parameters->long_distance.hash_log;
    context->long_distance.hash_table = static_cast<LongDistanceEntry*>(
      ReserveAligned(workspace, hash_size * sizeof(LongDistanceEntry))
    );
    __builtin_memset(context->long_distance.hash_table, 0, hash_size * 8);
    context->long_distance_sequences = static_cast<RawSequence*>(
      ReserveAligned(workspace, ldm_count * sizeof(RawSequence))
    );
    context->long_distance_capacity = ldm_count;
    InitializeWindow(&context->long_distance.window);
    context->long_distance.loaded_dictionary_end = 0;
  }
  if (parameters->producer) {
    size_t capacity = block / 3 + (block >> 10) + 2;
    context->producer_capacity = capacity;
    context->producer_sequences = static_cast<ExternalSequence*>(
      ReserveAligned(workspace, capacity * sizeof(ExternalSequence))
    );
  }
  context->sequences.literals_start = Reserve(workspace, block + 32, 3);
  context->sequences.literal_capacity = block;
  auto& buffers = Field<CompressionBufferState>(context, 0xdc8);
  buffers.policy = buffered;
  buffers.input_size = input_size;
  buffers.input = Reserve(workspace, input_size, 3);
  buffers.output_size = output_size;
  buffers.output = Reserve(workspace, output_size, 3);
  if (parameters->long_distance.enabled == 1) {
    size_t buckets = size_t(1) << (parameters->long_distance.hash_log -
      parameters->long_distance.bucket_log);
    context->long_distance.bucket_offsets = Reserve(workspace, buckets, 3);
    __builtin_memset(context->long_distance.bucket_offsets, 0, buckets);
  }
  context->external_sequences.sequences = nullptr;
  context->external_sequences.size = 0;
  context->external_sequences.position = 0;
  context->external_sequences.position_in_sequence = 0;
  context->external_sequences.capacity = 0;
  context->sequences.sequence_capacity = count;
  context->sequences.literal_codes = Reserve(workspace, count, 3);
  context->sequences.match_codes = Reserve(workspace, count, 3);
  context->sequences.offset_codes = Reserve(workspace, count, 3);
  context->initialized = 1;
  return 0;
}

}
