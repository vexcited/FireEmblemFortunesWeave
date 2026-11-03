/*
  Adapted from Zstandard under the BSD license.
  Copyright Meta Platforms, Inc. and affiliates. All rights reserved.
  Original license: https://github.com/facebook/zstd/blob/v1.5.6/LICENSE
  Full license text: include/compression/zstd_bit_reader.hpp.
*/

#include "compression/zstd_huffman.hpp"

namespace fw::compression {
namespace {

constexpr size_t kCorrupt = static_cast<size_t>(-20);
constexpr size_t kSourceSizeWrong = static_cast<size_t>(-72);
constexpr size_t kGenericError = static_cast<size_t>(-1);
constexpr uint64_t kEmptyContainer = 0;

enum class ReloadStatus {
  Unfinished,
  EndOfBuffer,
  Complete,
  Overflow
};

template <typename T>
T Read(const void* source) {
  T value;
  __builtin_memcpy(&value, source, sizeof(value));
  return value;
}

unsigned EndMarkBits(uint8_t last) {
  return last ? __builtin_clz(static_cast<unsigned>(last)) - 23 : 0;
}

unsigned TrailingBits(uint64_t bits) {
  return bits ? __builtin_ctzll(bits) : 64;
}

uint8_t* OutputEnd(void* destination, size_t size) {
  const size_t amount = static_cast<int64_t>(size) < 0 ? 0 : size;
  return static_cast<uint8_t*>(destination) + amount;
}

ReloadStatus ReloadFast(ReverseBitStream& stream) {
  if (stream.cursor < stream.reload_limit) {
    return ReloadStatus::Overflow;
  }

  stream.cursor -= stream.consumed >> 3;
  stream.consumed &= 7;
  stream.container = Read<uint64_t>(stream.cursor);
  return ReloadStatus::Unfinished;
}

ReloadStatus Reload(ReverseBitStream& stream) {
  if (stream.consumed > 64) {
    stream.cursor = reinterpret_cast<const uint8_t*>(&kEmptyContainer);
    return ReloadStatus::Overflow;
  }

  if (stream.cursor >= stream.reload_limit) {
    return ReloadFast(stream);
  }

  if (stream.cursor == stream.start) {
    return stream.consumed < 64 ? ReloadStatus::EndOfBuffer :
                                 ReloadStatus::Complete;
  }

  unsigned bytes = stream.consumed >> 3;
  ReloadStatus result = ReloadStatus::Unfinished;

  if (stream.cursor - bytes < stream.start) {
    bytes = static_cast<unsigned>(stream.cursor - stream.start);
    result = ReloadStatus::EndOfBuffer;
  }

  stream.cursor -= bytes;
  stream.consumed -= bytes * 8;
  stream.container = Read<uint64_t>(stream.cursor);
  return result;
}

size_t Look(const ReverseBitStream& stream, unsigned log) {
  return (stream.container << (stream.consumed & 63)) >> ((64 - log) & 63);
}

template <typename Entry>
void Decode(uint8_t*& output, ReverseBitStream& stream,
            const Entry* table, unsigned log) {
  const Entry entry = table[Look(stream, log)];
  stream.consumed += entry.bits;

  if constexpr (sizeof(Entry) == 2) {
    *output++ = entry.symbol;
  }
  else {
    __builtin_memcpy(output, &entry.sequence, 2);
    output += entry.length;
  }
}

template <typename Entry>
uint8_t* DecodeRemainder(uint8_t* output, ReverseBitStream& stream,
                         uint8_t* end, const Entry* table, unsigned log) {
  if constexpr (sizeof(Entry) == 2) {
    if (end - output > 3) {
      while ((Reload(stream) == ReloadStatus::Unfinished) &
             (output < end - 3)) {
        for (unsigned i = 0; i < 4; ++i) {
          Decode(output, stream, table, log);
        }
      }
    }
    else {
      Reload(stream);
    }

    while (output < end) {
      Decode(output, stream, table, log);
    }
  }
  else {
    if (static_cast<size_t>(end - output) >= 8) {
      const unsigned lookups = log <= 11 ? 5 : 4;
      const unsigned margin = log <= 11 ? 9 : 7;

      while ((Reload(stream) == ReloadStatus::Unfinished) &
             (output < end - margin)) {
        for (unsigned i = 0; i < lookups; ++i) {
          Decode(output, stream, table, log);
        }
      }
    }
    else {
      Reload(stream);
    }

    if (static_cast<size_t>(end - output) >= 2) {
      while ((Reload(stream) == ReloadStatus::Unfinished) &
             (output <= end - 2)) {
        Decode(output, stream, table, log);
      }

      while (output <= end - 2) {
        Decode(output, stream, table, log);
      }
    }

    if (output < end) {
      const Entry entry = table[Look(stream, log)];
      *output++ = static_cast<uint8_t>(entry.sequence);

      if (entry.length == 1) {
        stream.consumed += entry.bits;
      }
      else if (stream.consumed < 64) {
        stream.consumed += entry.bits;

        if (stream.consumed > 64) {
          stream.consumed = 64;
        }
      }
    }
  }

  return output;
}

template <typename Entry>
size_t DecodeFallback(void* destination, size_t destination_size,
                      const void* source, size_t source_size,
                      const uint32_t* decoding_table) {
  if (source_size < 10 || destination_size < 6) {
    return kCorrupt;
  }

  const auto* input = static_cast<const uint8_t*>(source);
  auto* output = static_cast<uint8_t*>(destination);
  auto* end = output + destination_size;
  const size_t segment = (destination_size + 3) / 4;
  uint8_t* positions[4] = {
    output, output + segment, output + 2 * segment, output + 3 * segment
  };
  uint8_t* ends[4] = {positions[1], positions[2], positions[3], end};
  const size_t lengths[4] = {
    Read<uint16_t>(input), Read<uint16_t>(input + 2),
    Read<uint16_t>(input + 4),
    source_size - Read<uint16_t>(input) - Read<uint16_t>(input + 2) -
      Read<uint16_t>(input + 4) - 6
  };

  if (lengths[3] > source_size || positions[3] > end) {
    return kCorrupt;
  }

  ReverseBitStream streams[4];
  input += 6;

  for (unsigned i = 0; i < 4; ++i) {
    const size_t result = InitializeReverseBits(&streams[i], input, lengths[i]);

    if (result > static_cast<size_t>(-120)) {
      return result;
    }

    input += lengths[i];
  }

  const auto descriptor = Read<HuffmanTableDescriptor>(decoding_table);
  const auto* table = reinterpret_cast<const Entry*>(decoding_table + 1);
  const unsigned margin = sizeof(Entry) == 2 ? 3 : 7;
  bool unfinished = true;

  if (static_cast<size_t>(end - positions[3]) >= 8) {
    while (unfinished & (positions[3] < end - margin)) {
      for (unsigned symbol = 0; symbol < 4; ++symbol) {
        for (unsigned i = 0; i < 4; ++i) {
          Decode(positions[i], streams[i], table, descriptor.table_log);
        }
      }

      for (unsigned i = 0; i < 4; ++i) {
        unfinished &= ReloadFast(streams[i]) == ReloadStatus::Unfinished;
      }
    }
  }

  for (unsigned i = 0; i < 3; ++i) {
    if (positions[i] > ends[i]) {
      return kCorrupt;
    }
  }

  for (unsigned i = 0; i < 4; ++i) {
    DecodeRemainder(positions[i], streams[i], ends[i], table,
                    descriptor.table_log);
  }

  for (const auto& stream : streams) {
    if (stream.cursor != stream.start || stream.consumed != 64) {
      return kCorrupt;
    }
  }

  return destination_size;
}

template <typename Entry>
void DecodeFast(FastHuffmanStreams& streams) {
  const auto* table = static_cast<const Entry*>(streams.table);
  uint8_t* ends[4] = {
    streams.output[1], streams.output[2], streams.output[3], streams.output_end
  };

  for (;;) {
    size_t iterations = (streams.input[0] - streams.input_start) / 7;

    if constexpr (sizeof(Entry) == 2) {
      const size_t available = (streams.output_end - streams.output[3]) / 5;

      if (iterations > available) {
        iterations = available;
      }
    }
    else {
      for (unsigned i = 0; i < 4; ++i) {
        const size_t available = (ends[i] - streams.output[i]) / 10;

        if (iterations > available) {
          iterations = available;
        }
      }
    }

    if (iterations == 0) {
      return;
    }

    for (unsigned i = 1; i < 4; ++i) {
      if (streams.input[i] < streams.input[i - 1]) {
        return;
      }
    }

    auto* limit = streams.output[3] + iterations * 5;

    do {
      for (unsigned symbol = 0; symbol < 5; ++symbol) {
        for (unsigned i = 0; i < 4; ++i) {
          const Entry entry = table[streams.bits[i] >> 53];
          streams.bits[i] <<= entry.bits & 63;

          if constexpr (sizeof(Entry) == 2) {
            *streams.output[i]++ = entry.symbol;
          }
          else {
            __builtin_memcpy(streams.output[i], &entry.sequence, 2);
            streams.output[i] += entry.length;
          }
        }
      }

      for (unsigned i = 0; i < 4; ++i) {
        const unsigned consumed = TrailingBits(streams.bits[i]);
        streams.input[i] -= consumed >> 3;
        streams.bits[i] = (Read<uint64_t>(streams.input[i]) | 1) <<
                          (consumed & 7);
      }
    } while (streams.output[3] < limit);
  }
}

template <typename Entry>
size_t FinishFast(FastHuffmanStreams& streams, void* destination,
                  size_t destination_size) {
  DecodeFast<Entry>(streams);
  const size_t segment = (destination_size + 3) / 4;
  auto* end = static_cast<uint8_t*>(destination);
  const auto* table = static_cast<const Entry*>(streams.table);

  for (unsigned i = 0; i < 4; ++i) {
    end = segment <= static_cast<size_t>(streams.output_end - end) ?
      end + segment : streams.output_end;

    if (streams.output[i] > end ||
        streams.input[i] < streams.stream_start[i] - 8) {
      return kCorrupt;
    }

    ReverseBitStream bits;
    bits.container = Read<uint64_t>(streams.input[i]);
    bits.consumed = TrailingBits(streams.bits[i]);
    bits.start = streams.input_start;
    bits.reload_limit = bits.start + 8;
    bits.cursor = streams.input[i];
    streams.output[i] = DecodeRemainder(
      streams.output[i], bits, end, table, 11
    );

    if (streams.output[i] != end) {
      return kCorrupt;
    }
  }

  return destination_size;
}

}

size_t InitializeReverseBits(
  ReverseBitStream* stream, const void* source, size_t source_size
) {
  if (source_size == 0) {
    *stream = {};
    return kSourceSizeWrong;
  }

  const auto* input = static_cast<const uint8_t*>(source);
  stream->start = input;
  stream->reload_limit = input + 8;
  stream->cursor = input + (source_size >= 8 ? source_size - 8 : 0);
  stream->container = 0;
  const size_t loaded = source_size >= 8 ? 8 : source_size;

  for (size_t i = 0; i < loaded; ++i) {
    stream->container |= static_cast<uint64_t>(stream->cursor[i]) << (i * 8);
  }

  const uint8_t last = input[source_size - 1];
  stream->consumed = EndMarkBits(last);

  if (last == 0) {
    return source_size >= 8 ? kGenericError : kCorrupt;
  }

  stream->consumed += static_cast<unsigned>(8 - loaded) * 8;
  return source_size;
}

size_t InitializeFastHuffman(
  FastHuffmanStreams* streams, void* destination, size_t destination_size,
  const void* source, size_t source_size, const uint32_t* table
) {
  if (destination_size == 0) {
    return 0;
  }

  if (source_size < 10) {
    return kCorrupt;
  }

  if (Read<HuffmanTableDescriptor>(table).table_log != 11) {
    return 0;
  }

  const auto* input = static_cast<const uint8_t*>(source);
  const size_t lengths[3] = {
    Read<uint16_t>(input), Read<uint16_t>(input + 2), Read<uint16_t>(input + 4)
  };
  const size_t fourth = source_size - lengths[0] - lengths[1] - lengths[2] - 6;
  streams->stream_start[0] = input + 6;

  for (unsigned i = 0; i < 3; ++i) {
    streams->stream_start[i + 1] = streams->stream_start[i] + lengths[i];
  }

  if (lengths[0] < 8 || lengths[1] < 8 || lengths[2] < 8 || fourth < 8) {
    return 0;
  }

  if (fourth > source_size) {
    return kCorrupt;
  }

  for (unsigned i = 0; i < 3; ++i) {
    streams->input[i] = streams->stream_start[i + 1] - 8;
  }

  streams->input[3] = input + source_size - 8;
  const size_t segment = (destination_size + 3) / 4;
  streams->output[0] = static_cast<uint8_t*>(destination);

  for (unsigned i = 1; i < 4; ++i) {
    streams->output[i] = streams->output[i - 1] + segment;
  }

  auto* end = OutputEnd(destination, destination_size);

  if (streams->output[3] >= end) {
    return 0;
  }

  for (unsigned i = 0; i < 4; ++i) {
    streams->bits[i] = (Read<uint64_t>(streams->input[i]) | 1) <<
                       EndMarkBits(streams->input[i][7]);
  }

  streams->table = table + 1;
  streams->input_start = input;
  streams->output_end = end;
  return 1;
}

size_t DecompressHuffman4X(
  void* destination, size_t destination_size, const void* source,
  size_t source_size, const uint32_t* table, int flags
) {
  const bool double_symbols = Read<HuffmanTableDescriptor>(table).type != 0;

  if (!(flags & 0x20)) {
    FastHuffmanStreams streams;
    const size_t result = InitializeFastHuffman(
      &streams, destination, destination_size, source, source_size, table
    );

    if (result > static_cast<size_t>(-120)) {
      return result;
    }

    if (result != 0) {
      return double_symbols ?
        FinishFast<HuffmanDoubleEntry>(streams, destination, destination_size) :
        FinishFast<HuffmanSingleEntry>(streams, destination, destination_size);
    }
  }

  return double_symbols ? DecodeFallback<HuffmanDoubleEntry>(
    destination, destination_size, source, source_size, table
  ) : DecodeFallback<HuffmanSingleEntry>(
    destination, destination_size, source, source_size, table
  );
}

}
