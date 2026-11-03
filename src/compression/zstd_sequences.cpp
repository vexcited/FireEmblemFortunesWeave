/*
  Adapted from Zstandard under the BSD license.
  Copyright Meta Platforms, Inc. and affiliates. All rights reserved.
  Original license: https://github.com/facebook/zstd/blob/v1.5.6/LICENSE
  Full license text: include/compression/zstd_bit_reader.hpp.
*/

#include "compression/zstd_sequences.hpp"
#include "compression/zstd_bit_reader.hpp"

namespace fw::compression {
namespace {

bool IsError(size_t value) {
  return value > size_t(-120);
}

struct SequenceState {
  size_t index;
  const SequenceEntry* table;
};

struct SequenceDecoder {
  ReverseBitStream bits;
  SequenceState literal;
  SequenceState offset;
  SequenceState match;
  size_t repeated[3];
};

void InitializeState(SequenceState& state, ReverseBitStream& bits,
  const SequenceTableHeader* table) {
  state.index = detail::TakeBits(bits, table->table_log);
  detail::ReloadBits(bits);
  state.table = reinterpret_cast<const SequenceEntry*>(table + 1);
}

bool InitializeDecoder(SequenceDecoder& decoder, LiteralContext* context,
  const void* source, size_t source_size) {
  detail::SequenceEntropy(context) = 1;
  for (unsigned i = 0; i < 3; ++i) {
    decoder.repeated[i] = detail::RepeatedOffsets(context)[i];
  }
  if (IsError(InitializeReverseBits(&decoder.bits, source, source_size))) {
    return false;
  }
  const auto& tables = detail::TablesFor(context);
  InitializeState(decoder.literal, decoder.bits, tables.literal_lengths);
  InitializeState(decoder.offset, decoder.bits, tables.offsets);
  InitializeState(decoder.match, decoder.bits, tables.match_lengths);
  return true;
}

size_t TakeAdditionalBits(ReverseBitStream& bits, unsigned count) {
  const size_t value = detail::PeekBits(bits, count);
  bits.consumed += count;
  return value;
}

DecodedSequence DecodeSequence(SequenceDecoder& decoder, bool last) {
  const SequenceEntry literal = decoder.literal.table[decoder.literal.index];
  const SequenceEntry match = decoder.match.table[decoder.match.index];
  const SequenceEntry offset = decoder.offset.table[decoder.offset.index];
  auto& bits = decoder.bits;
  auto* repeated = decoder.repeated;
  DecodedSequence result{literal.base, match.base, 0};
  if (offset.additional_bits > 1) {
    result.offset =
      offset.base + TakeAdditionalBits(bits, offset.additional_bits);
    repeated[2] = repeated[1];
    repeated[1] = repeated[0];
    repeated[0] = result.offset;
  }
  else {
    const unsigned no_literals = literal.base == 0;
    if (!offset.additional_bits) {
      result.offset = repeated[no_literals];
      repeated[1] = repeated[!no_literals];
      repeated[0] = result.offset;
    }
    else {
      const unsigned index =
        offset.base + no_literals + TakeAdditionalBits(bits, 1);
      size_t value = index == 3 ? repeated[0] - 1 : repeated[index];
      value -= !value;
      if (index != 1) {
        repeated[2] = repeated[1];
      }
      repeated[1] = repeated[0];
      repeated[0] = result.offset = value;
    }
  }
  if (match.additional_bits) {
    result.match_length += TakeAdditionalBits(bits, match.additional_bits);
  }
  if (literal.additional_bits + match.additional_bits +
        offset.additional_bits >=
      31) {
    detail::ReloadBits(bits);
  }
  if (literal.additional_bits) {
    result.literal_length += TakeAdditionalBits(bits, literal.additional_bits);
  }
  if (!last) {
    decoder.literal.index =
      literal.next_state + detail::TakeBits(bits, literal.state_bits);
    decoder.match.index =
      match.next_state + detail::TakeBits(bits, match.state_bits);
    decoder.offset.index =
      offset.next_state + detail::TakeBits(bits, offset.state_bits);
    detail::ReloadBits(bits);
  }
  return result;
}

bool AtEnd(const SequenceDecoder& decoder) {
  return decoder.bits.cursor == decoder.bits.start &&
         decoder.bits.consumed == 64;
}

void SaveOffsets(LiteralContext* context, const SequenceDecoder& decoder) {
  for (unsigned i = 0; i < 3; ++i) {
    detail::RepeatedOffsets(context)[i] = decoder.repeated[i];
  }
}

struct OutputCursor {
  uint8_t* output;
  uint8_t* end;
  const uint8_t* literals;
  const uint8_t* literal_end;
};

size_t ExecuteNext(LiteralContext* context, OutputCursor& cursor,
  DecodedSequence sequence, bool split) {
  if (split &&
      cursor.literals + sequence.literal_length > context->literal_buffer_end) {
    const size_t leftover = context->literal_buffer_end - cursor.literals;
    if (leftover) {
      if (leftover > size_t(cursor.end - cursor.output)) {
        return size_t(-70);
      }
      detail::CopyBeforeSource(cursor.output, cursor.literals, leftover);
      sequence.literal_length -= leftover;
      cursor.output += leftover;
    }
    cursor.literals = context->extra_literals;
    cursor.literal_end = context->extra_literals + 65536;
    context->literal_location = LiteralLocation::OutsideDestination;
    split = false;
  }
  const auto* wide_end =
    split ? cursor.literals + sequence.literal_length - 32 : cursor.end - 32;
  const size_t size =
    detail::ExecuteSequence(cursor.output, cursor.end, wide_end, sequence,
      &cursor.literals, cursor.literal_end, detail::WindowFor(context), split);
  if (!IsError(size)) {
    cursor.output += size;
  }
  return size;
}

size_t FinishLiterals(LiteralContext* context, OutputCursor& cursor,
  uint8_t* start, bool allow_split, bool prefetched) {
  if (allow_split && context->literal_location == LiteralLocation::Split) {
    const size_t size = cursor.literal_end - cursor.literals;
    if (size > size_t(cursor.end - cursor.output)) {
      return size_t(-70);
    }
    if (cursor.output) {
      __builtin_memmove(cursor.output, cursor.literals, size);
      cursor.output += size;
    }
    cursor.literals = context->extra_literals;
    cursor.literal_end = context->extra_literals + 65536;
    if (!prefetched) {
      context->literal_location = LiteralLocation::OutsideDestination;
    }
  }
  const size_t size = cursor.literal_end - cursor.literals;
  if (size > size_t(cursor.end - cursor.output)) {
    return size_t(-70);
  }
  if (cursor.output) {
    if (prefetched) {
      __builtin_memmove(cursor.output, cursor.literals, size);
    }
    else {
      __builtin_memcpy(cursor.output, cursor.literals, size);
    }
    cursor.output += size;
  }
  return cursor.output - start;
}

size_t PrefetchMatch(
  size_t position, DecodedSequence sequence, const SequenceWindow& window) {
  position += sequence.literal_length;
  const auto* base =
    sequence.offset > position ? window.dictionary_end : window.prefix_start;
  const uintptr_t match = uintptr_t(base) + position - sequence.offset;
  __builtin_prefetch(reinterpret_cast<const void*>(match), 0, 3);
  __builtin_prefetch(reinterpret_cast<const void*>(match + 64), 0, 3);
  return position + sequence.match_length;
}

}

size_t DecompressSequences(LiteralContext* context, void* destination,
  size_t destination_size, const void* source, size_t source_size,
  int sequence_count) {
  auto* start = static_cast<uint8_t*>(destination);
  OutputCursor cursor{
    start,
    context->literal_location == LiteralLocation::OutsideDestination
      ? start + destination_size
      : context->literal_buffer,
    context->literals,
    context->literals + context->literal_size,
  };
  if (sequence_count) {
    SequenceDecoder decoder;
    if (!InitializeDecoder(decoder, context, source, source_size)) {
      return size_t(-20);
    }
    for (; sequence_count; --sequence_count) {
      const auto sequence = DecodeSequence(decoder, sequence_count == 1);
      const size_t size = ExecuteNext(context, cursor, sequence, false);
      if (IsError(size)) {
        return size;
      }
    }
    if (!AtEnd(decoder)) {
      return size_t(-20);
    }
    SaveOffsets(context, decoder);
  }
  return FinishLiterals(context, cursor, start, false, false);
}

size_t DecompressSplitSequences(LiteralContext* context, void* destination,
  size_t destination_size, const void* source, size_t source_size,
  int sequence_count) {
  auto* start = static_cast<uint8_t*>(destination);
  OutputCursor cursor{
    start,
    start + destination_size,
    context->literals,
    context->literal_buffer_end,
  };
  if (sequence_count) {
    SequenceDecoder decoder;
    if (!InitializeDecoder(decoder, context, source, source_size)) {
      return size_t(-20);
    }
    bool split = true;
    for (; sequence_count; --sequence_count) {
      const auto sequence = DecodeSequence(decoder, sequence_count == 1);
      const size_t size = ExecuteNext(context, cursor, sequence, split);
      if (IsError(size)) {
        return size;
      }
      split = context->literal_location == LiteralLocation::Split;
    }
    if (!AtEnd(decoder)) {
      return size_t(-20);
    }
    SaveOffsets(context, decoder);
  }
  return FinishLiterals(context, cursor, start, true, false);
}

size_t DecompressPrefetchedSequences(LiteralContext* context, void* destination,
  size_t destination_size, const void* source, size_t source_size,
  int sequence_count) {
  auto* start = static_cast<uint8_t*>(destination);
  OutputCursor cursor{
    start,
    context->literal_location == LiteralLocation::InDestination
      ? context->literal_buffer
      : start + destination_size,
    context->literals,
    context->literal_buffer_end,
  };
  if (sequence_count) {
    SequenceDecoder decoder;
    if (!InitializeDecoder(decoder, context, source, source_size)) {
      return size_t(-20);
    }
    DecodedSequence queue[8];
    const int ahead = sequence_count < 8 ? sequence_count : 8;
    size_t position = start - detail::WindowFor(context).prefix_start;
    int index = 0;
    for (; index < ahead; ++index) {
      queue[index] = DecodeSequence(decoder, index == sequence_count - 1);
      position =
        PrefetchMatch(position, queue[index], detail::WindowFor(context));
    }
    for (; index < sequence_count; ++index) {
      const auto sequence =
        DecodeSequence(decoder, index == sequence_count - 1);
      const size_t size = ExecuteNext(context, cursor, queue[(index - 8) & 7],
        context->literal_location == LiteralLocation::Split);
      if (IsError(size)) {
        return size;
      }
      position = PrefetchMatch(position, sequence, detail::WindowFor(context));
      queue[index & 7] = sequence;
    }
    if (!AtEnd(decoder)) {
      return size_t(-20);
    }
    for (index -= ahead; index < sequence_count; ++index) {
      const size_t size = ExecuteNext(context, cursor, queue[index & 7],
        context->literal_location == LiteralLocation::Split);
      if (IsError(size)) {
        return size;
      }
    }
    SaveOffsets(context, decoder);
  }
  return FinishLiterals(context, cursor, start, true, true);
}

size_t DecompressBlock(LiteralContext* context, void* destination,
  size_t destination_size, const void* source, size_t source_size,
  int streaming) {
  const size_t maximum =
    context->frame_decompression ? context->frame.maximum_block_size : 131072;
  if (source_size > maximum) {
    return size_t(-72);
  }
  const size_t literal_size = DecodeLiterals(
    context, source, source_size, destination, destination_size, streaming);
  if (IsError(literal_size)) {
    return literal_size;
  }
  const auto* cursor = static_cast<const uint8_t*>(source) + literal_size;
  source_size -= literal_size;
  const uintptr_t virtual_start =
    uintptr_t(detail::WindowFor(context).virtual_start);
  unsigned cold = context->dictionary_cold;
  const size_t expected =
    destination_size < maximum ? destination_size : maximum;
  int count;
  const size_t header_size =
    ReadSequenceHeaders(context, &count, cursor, source_size);
  if (IsError(header_size)) {
    return header_size;
  }
  if (uintptr_t(destination) >= 0xFFFFFFFFFFF00000 ||
      ((!destination || !destination_size) && count > 0)) {
    return size_t(-70);
  }
  if (!cold && uintptr_t(destination) + expected - virtual_start >= 0x1000001 &&
      count >= 9) {
    const auto info = GetOffsetInfo(detail::TablesFor(context).offsets, count);
    cold = info.long_offset_share > 6;
  }
  context->dictionary_cold = 0;
  cursor += header_size;
  source_size -= header_size;
  if (cold) {
    return DecompressPrefetchedSequences(
      context, destination, destination_size, cursor, source_size, count);
  }
  if (context->literal_location == LiteralLocation::Split) {
    return DecompressSplitSequences(
      context, destination, destination_size, cursor, source_size, count);
  }
  return DecompressSequences(
    context, destination, destination_size, cursor, source_size, count);
}

}
