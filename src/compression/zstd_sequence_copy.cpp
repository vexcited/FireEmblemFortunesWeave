/*
  Adapted from Zstandard under the BSD license.
  Copyright Meta Platforms, Inc. and affiliates. All rights reserved.
  Original license: https://github.com/facebook/zstd/blob/v1.5.6/LICENSE
  Full license text: include/compression/zstd_bit_reader.hpp.
*/

#include "compression/zstd_sequences.hpp"

namespace fw::compression {
namespace detail {

void WildCopy(uint8_t* output, const uint8_t* input, ptrdiff_t length,
  CopyOverlap overlap) {
  auto* end = output + length;
  if (overlap == CopyOverlap::SourceBeforeDestination && output - input < 16) {
    do {
      __builtin_memcpy(output, input, 8);
      output += 8;
      input += 8;
    } while (output < end);
  }
  else {
    __builtin_memcpy(output, input, 16);
    if (length <= 16) {
      return;
    }
    output += 16;
    input += 16;
    do {
      __builtin_memcpy(output, input, 16);
      __builtin_memcpy(output + 16, input + 16, 16);
      output += 32;
      input += 32;
    } while (output < end);
  }
}

void CopyOverlappingEight(
  uint8_t*& output, const uint8_t*& input, size_t offset) {
  if (offset < 8) {
    constexpr unsigned advance[] = {0, 1, 2, 1, 4, 4, 4, 4};
    constexpr unsigned retreat[] = {8, 8, 8, 7, 8, 9, 10, 11};
    output[0] = input[0];
    output[1] = input[1];
    output[2] = input[2];
    output[3] = input[3];
    input += advance[offset];
    __builtin_memcpy(output + 4, input, 4);
    input -= retreat[offset];
  }
  else {
    __builtin_memcpy(output, input, 8);
  }
  input += 8;
  output += 8;
}

void CopyBeforeSource(uint8_t* output, const uint8_t* input, ptrdiff_t length) {
  const ptrdiff_t distance = output - input;
  auto* end = output + length;
  if (length >= 8 && distance <= -8 && output <= end - 32 && distance < -16) {
    WildCopy(output, input, end - 32 - output, CopyOverlap::None);
    input += end - 32 - output;
    output = end - 32;
  }
  while (output < end) {
    *output++ = *input++;
  }
}

size_t ExecuteSequence(uint8_t* output, uint8_t* output_end,
  const uint8_t* wide_copy_end, DecodedSequence sequence,
  const uint8_t** literals, const uint8_t* literal_end,
  const SequenceWindow& window, bool split) {
  auto* literal_output_end = output + sequence.literal_length;
  auto* match_output_end = literal_output_end + sequence.match_length;
  const auto* literal_input_end = *literals + sequence.literal_length;
  const auto* match = literal_output_end - sequence.offset;
  const size_t size = sequence.literal_length + sequence.match_length;
  if (literal_input_end > literal_end || match_output_end > wide_copy_end) {
    if (split) {
      return ExecuteSplitSequenceTail(output, output_end, wide_copy_end,
        sequence, literals, literal_end, window.prefix_start,
        window.virtual_start, window.dictionary_end);
    }
    return ExecuteSequenceTail(output, output_end, sequence, literals,
      literal_end, window.prefix_start, window.virtual_start,
      window.dictionary_end);
  }

  __builtin_memcpy(output, *literals, 16);
  if (sequence.literal_length > 16) {
    WildCopy(output + 16, *literals + 16, sequence.literal_length - 16,
      CopyOverlap::None);
  }
  output = literal_output_end;
  *literals = literal_input_end;
  if (sequence.offset > size_t(literal_output_end - window.prefix_start)) {
    if (sequence.offset > size_t(literal_output_end - window.virtual_start)) {
      return size_t(-20);
    }
    match = window.dictionary_end - (window.prefix_start - match);
    if (match + sequence.match_length <= window.dictionary_end) {
      __builtin_memmove(output, match, sequence.match_length);
      return size;
    }
    const size_t first = window.dictionary_end - match;
    __builtin_memmove(output, match, first);
    output += first;
    sequence.match_length -= first;
    match = window.prefix_start;
  }
  if (sequence.offset >= 16) {
    WildCopy(output, match, sequence.match_length, CopyOverlap::None);
  }
  else {
    CopyOverlappingEight(output, match, sequence.offset);
    if (sequence.match_length > 8) {
      WildCopy(output, match, sequence.match_length - 8,
        CopyOverlap::SourceBeforeDestination);
    }
  }
  return size;
}

}

void CopySequenceTail(uint8_t* destination, const uint8_t* wide_copy_end,
  const uint8_t* source, ptrdiff_t length, CopyOverlap overlap) {
  auto* end = destination + length;
  if (length < 8) {
    while (destination < end) {
      *destination++ = *source++;
    }
    return;
  }
  if (overlap == CopyOverlap::SourceBeforeDestination) {
    detail::CopyOverlappingEight(destination, source, destination - source);
    length -= 8;
  }
  if (end <= wide_copy_end) {
    detail::WildCopy(destination, source, length, overlap);
    return;
  }
  if (destination <= wide_copy_end) {
    detail::WildCopy(destination, source, wide_copy_end - destination, overlap);
    source += wide_copy_end - destination;
    destination += wide_copy_end - destination;
  }
  while (destination < end) {
    *destination++ = *source++;
  }
}

namespace {

size_t ExecuteTail(uint8_t* output, uint8_t* output_end,
  const uint8_t* wide_copy_end, DecodedSequence sequence,
  const uint8_t** literals, const uint8_t* literal_end, const uint8_t* prefix,
  const uint8_t* virtual_start, const uint8_t* dictionary_end, bool split) {
  auto* literal_output_end = output + sequence.literal_length;
  const auto* literal_input_end = *literals + sequence.literal_length;
  const auto* match = literal_output_end - sequence.offset;
  const size_t size = sequence.literal_length + sequence.match_length;
  if (size > size_t(output_end - output)) {
    return size_t(-70);
  }
  if (sequence.literal_length > size_t(literal_end - *literals)) {
    return size_t(-20);
  }
  if (split) {
    if (output > *literals && output < literal_input_end) {
      return size_t(-70);
    }
    detail::CopyBeforeSource(output, *literals, sequence.literal_length);
  }
  else {
    CopySequenceTail(output, wide_copy_end, *literals, sequence.literal_length,
      CopyOverlap::None);
  }
  output = literal_output_end;
  *literals = literal_input_end;
  if (sequence.offset > size_t(literal_output_end - prefix)) {
    if (sequence.offset > size_t(literal_output_end - virtual_start)) {
      return size_t(-20);
    }
    match = dictionary_end - (prefix - match);
    if (match + sequence.match_length <= dictionary_end) {
      __builtin_memmove(output, match, sequence.match_length);
      return size;
    }
    const size_t first = dictionary_end - match;
    __builtin_memmove(output, match, first);
    output += first;
    sequence.match_length -= first;
    match = prefix;
  }
  CopySequenceTail(output, wide_copy_end, match, sequence.match_length,
    CopyOverlap::SourceBeforeDestination);
  return size;
}

}

size_t ExecuteSequenceTail(uint8_t* output, uint8_t* output_end,
  DecodedSequence sequence, const uint8_t** literals,
  const uint8_t* literal_end, const uint8_t* prefix,
  const uint8_t* virtual_start, const uint8_t* dictionary_end) {
  return ExecuteTail(output, output_end, output_end - 32, sequence, literals,
    literal_end, prefix, virtual_start, dictionary_end, false);
}

size_t ExecuteSplitSequenceTail(uint8_t* output, uint8_t* output_end,
  const uint8_t* wide_copy_end, DecodedSequence sequence,
  const uint8_t** literals, const uint8_t* literal_end, const uint8_t* prefix,
  const uint8_t* virtual_start, const uint8_t* dictionary_end) {
  return ExecuteTail(output, output_end, wide_copy_end, sequence, literals,
    literal_end, prefix, virtual_start, dictionary_end, true);
}

}
