#include "compression/zstd_decoder.hpp"

namespace fw::compression {
namespace {

bool IsError(size_t value) {
  return value > size_t(-120);
}

uint32_t Load32(const void* source) {
  uint32_t value;
  __builtin_memcpy(&value, source, 4);
  return value;
}

size_t HeaderSize(const void* source, size_t size, FrameFormat format) {
  const size_t prefix = format == FrameFormat::Standard ? 5 : 1;
  if (size < prefix) {
    return size_t(-72);
  }
  const unsigned descriptor = static_cast<const uint8_t*>(source)[prefix - 1];
  constexpr unsigned dictionary_sizes[] = {0, 1, 2, 4};
  constexpr unsigned content_sizes[] = {0, 2, 4, 8};
  const bool single = descriptor & 32;
  return prefix + !single + dictionary_sizes[descriptor & 3] +
         content_sizes[descriptor >> 6] + (single && descriptor < 64);
}

size_t CopyRaw(
  void* destination, size_t capacity, const void* source, size_t size) {
  if (size > capacity) {
    return size_t(-70);
  }
  if (destination) {
    __builtin_memmove(destination, source, size);
  }
  else if (size) {
    return size_t(-74);
  }
  return size;
}

size_t FillRun(void* destination, size_t capacity, uint8_t value, size_t size) {
  if (size > capacity) {
    return size_t(-70);
  }
  if (destination) {
    __builtin_memset(destination, value, size);
  }
  else if (size) {
    return size_t(-74);
  }
  return size;
}

size_t DecompressFrame(DecoderContext* context, uint8_t* destination,
  size_t destination_size, const uint8_t*& source, size_t& source_size) {
  const auto* source_begin = source;
  auto* output = destination;
  auto* output_end = destination + destination_size;
  if (source_size < (context->format == FrameFormat::Standard ? 9U : 5U)) {
    return size_t(-72);
  }
  const size_t header_size = HeaderSize(source, source_size, context->format);
  if (IsError(header_size)) {
    return header_size;
  }
  if (source_size < header_size + 3) {
    return size_t(-72);
  }
  const size_t header_result = DecodeFrameHeader(context, source, header_size);
  if (IsError(header_result)) {
    return header_result;
  }
  if (context->maximum_block_size &&
      context->maximum_block_size < context->frame.maximum_block_size) {
    context->frame.maximum_block_size = context->maximum_block_size;
  }
  const uint8_t* cursor = source + header_size;
  size_t remaining = source_size - header_size;
  for (;;) {
    BlockProperties block;
    const size_t compressed_size = ReadBlockSize(cursor, remaining, &block);
    if (IsError(compressed_size)) {
      return compressed_size;
    }
    cursor += 3;
    remaining -= 3;
    if (compressed_size > remaining) {
      return size_t(-72);
    }
    const auto* block_end = output_end;
    if (cursor >= output && cursor < block_end) {
      block_end = cursor;
    }
    size_t decoded;
    switch (block.type) {
      case BlockType::Compressed:
        decoded = DecompressBlock(detail::LiteralsFor(context), output,
          block_end - output, cursor, compressed_size, 0);
        break;
      case BlockType::Raw:
        decoded = CopyRaw(output, output_end - output, cursor, compressed_size);
        break;
      case BlockType::RunLength:
        decoded =
          FillRun(output, block_end - output, *cursor, block.original_size);
        break;
      default:
        return size_t(-20);
    }
    if (IsError(decoded)) {
      return decoded;
    }
    if (context->validate_checksum) {
      UpdateChecksum(&context->checksum, output, decoded);
    }
    output += decoded;
    cursor += compressed_size;
    remaining -= compressed_size;
    if (block.last) {
      break;
    }
  }
  const size_t decoded = output - destination;
  if (context->frame.content_size != uint64_t(-1) &&
      decoded != context->frame.content_size) {
    return size_t(-20);
  }
  if (context->frame.checksum) {
    if (remaining < 4 ||
        (!context->ignore_checksum &&
          Load32(cursor) != uint32_t(DigestChecksum(&context->checksum)))) {
      return size_t(-22);
    }
    cursor += 4;
    remaining -= 4;
  }
  TraceDecompressionEnd(context, decoded, cursor - source_begin, 0);
  source = cursor;
  source_size = remaining;
  return decoded;
}

}

size_t DecodeFrameHeader(
  DecoderContext* context, const void* source, size_t size) {
  const size_t result =
    ReadFrameHeader(&context->frame, source, size, context->format);
  if (IsError(result)) {
    return result;
  }
  if (result) {
    return size_t(-72);
  }
  if (context->multiple_dictionaries == 1 && context->dictionaries &&
      context->dictionary) {
    const uint32_t id = context->frame.dictionary_id;
    const auto& set = *context->dictionaries;
    const size_t mask = set.capacity - 1;
    size_t index = Hash64(&id, sizeof(id), 0) & mask;
    const PreparedDictionary* found;
    for (;;) {
      found = set.entries[index];
      const uint32_t current_id = found ? found->id : 0;
      if (current_id == id || !current_id) {
        break;
      }
      // The target masks before incrementing the probe index.
      index = (index & mask) + 1;
    }
    if (found) {
      ReleasePreparedDictionary(context->owned_dictionary);
      context->owned_dictionary = nullptr;
      context->dictionary = found;
      context->dictionary_id = context->frame.dictionary_id;
      context->dictionary_uses = -1;
    }
  }
  if (context->frame.dictionary_id &&
      context->frame.dictionary_id != context->dictionary_id) {
    return size_t(-32);
  }
  context->validate_checksum =
    context->frame.checksum && !context->ignore_checksum;
  if (context->validate_checksum) {
    ResetChecksum(&context->checksum, 0);
  }
  context->processed_size += size;
  return 0;
}

void TraceDecompressionEnd(const DecoderContext* context,
  uint64_t uncompressed_size, uint64_t compressed_size, unsigned streaming) {
  if (!detail::g_trace_end || !context->trace_context) {
    return;
  }
  detail::TraceRecord record{};
  record.version = 10506;
  record.streaming = streaming;
  if (context->dictionary) {
    record.dictionary_id = context->dictionary->id;
    record.dictionary_size = context->dictionary->content_size;
    record.dictionary_cold = context->dictionary_cold;
  }
  record.uncompressed_size = uncompressed_size;
  record.compressed_size = compressed_size;
  record.decompression_context = context;
  detail::g_trace_end(context->trace_context, &record);
}

size_t DecompressFrames(DecoderContext* context, void* destination,
  size_t destination_size, const void* source, size_t source_size,
  const void* dictionary, size_t dictionary_size,
  const PreparedDictionary* prepared_dictionary) {
  auto* output = static_cast<uint8_t*>(destination);
  const auto* cursor = static_cast<const uint8_t*>(source);
  bool decoded_frame = false;
  if (prepared_dictionary) {
    dictionary = prepared_dictionary->content;
    dictionary_size = prepared_dictionary->content_size;
  }
  while (source_size >= (context->format == FrameFormat::Standard ? 5U : 1U)) {
    if (context->format == FrameFormat::Standard &&
        (Load32(cursor) >> 4) == 0x184D2A5) {
      if (source_size < 8) {
        return size_t(-72);
      }
      const uint32_t payload = Load32(cursor + 4);
      if (payload > 0xFFFFFFF7) {
        return size_t(-14);
      }
      const size_t size = size_t(payload) + 8;
      if (size > source_size) {
        return size_t(-72);
      }
      cursor += size;
      source_size -= size;
      continue;
    }
    if (prepared_dictionary) {
      context->dictionary_cold =
        context->window.dictionary_end !=
        prepared_dictionary->content + prepared_dictionary->content_size;
      BeginDecompression(context, nullptr, 0);
      UsePreparedDictionary(context, prepared_dictionary);
    }
    else {
      const size_t result =
        BeginDecompression(context, dictionary, dictionary_size);
      if (IsError(result)) {
        return result;
      }
    }
    CheckOutputContinuity(
      detail::LiteralsFor(context), output, destination_size);
    const size_t result =
      DecompressFrame(context, output, destination_size, cursor, source_size);
    if (decoded_frame && result == size_t(-10)) {
      return size_t(-72);
    }
    if (IsError(result)) {
      return result;
    }
    output += result;
    destination_size -= result;
    decoded_frame = true;
  }
  return source_size ? size_t(-72)
                     : size_t(output - static_cast<uint8_t*>(destination));
}

uint32_t GetNextInputType(const DecoderContext* context) {
  switch (context->stage) {
    case FrameStage::BlockHeader:
      return 1;
    case FrameStage::Block:
      return 2;
    case FrameStage::LastBlock:
      return 3;
    case FrameStage::Checksum:
      return 4;
    case FrameStage::SkippablePayload:
    case FrameStage::SkippableHeader:
      return 5;
    default:
      return 0;
  }
}

size_t ContinueDecompression(DecoderContext* context, void* destination,
  size_t destination_size, const void* source, size_t source_size) {
  size_t expected = context->window.expected;
  if ((context->stage == FrameStage::Block ||
        context->stage == FrameStage::LastBlock) &&
      context->block_type == BlockType::Raw) {
    expected = source_size < expected ? source_size : expected;
    if (expected < 1) {
      expected = 1;
    }
  }
  if (source_size != expected) {
    return size_t(-72);
  }
  CheckOutputContinuity(
    detail::LiteralsFor(context), destination, destination_size);
  context->processed_size += source_size;
  switch (context->stage) {
    case FrameStage::HeaderSize:
      if (context->format == FrameFormat::Standard &&
          (Load32(source) >> 4) == 0x184D2A5) {
        __builtin_memcpy(context->header_buffer, source, source_size);
        context->window.expected = 8 - source_size;
        context->stage = FrameStage::SkippableHeader;
        return 0;
      }
      context->header_size = HeaderSize(source, source_size, context->format);
      if (IsError(context->header_size)) {
        return context->header_size;
      }
      __builtin_memcpy(context->header_buffer, source, source_size);
      context->window.expected = context->header_size - source_size;
      context->stage = FrameStage::Header;
      return 0;
    case FrameStage::Header: {
      __builtin_memcpy(
        context->header_buffer + context->header_size - source_size, source,
        source_size);
      const size_t result = DecodeFrameHeader(
        context, context->header_buffer, context->header_size);
      if (IsError(result)) {
        return result;
      }
      context->window.expected = 3;
      context->stage = FrameStage::BlockHeader;
      return 0;
    }
    case FrameStage::BlockHeader: {
      BlockProperties block;
      const size_t size = ReadBlockSize(source, 3, &block);
      if (IsError(size)) {
        return size;
      }
      if (size > context->frame.maximum_block_size) {
        return size_t(-20);
      }
      context->window.expected = size;
      context->block_type = block.type;
      context->run_length_size = block.original_size;
      if (size) {
        context->stage = block.last ? FrameStage::LastBlock : FrameStage::Block;
      }
      else if (block.last) {
        context->window.expected = context->frame.checksum ? 4 : 0;
        context->stage = context->frame.checksum ? FrameStage::Checksum
                                                 : FrameStage::HeaderSize;
      }
      else {
        context->window.expected = 3;
        context->stage = FrameStage::BlockHeader;
      }
      return 0;
    }
    case FrameStage::Block:
    case FrameStage::LastBlock: {
      size_t size;
      switch (context->block_type) {
        case BlockType::Raw:
          size = CopyRaw(destination, destination_size, source, source_size);
          if (IsError(size)) {
            return size;
          }
          context->window.expected -= size;
          break;
        case BlockType::RunLength:
          size = FillRun(destination, destination_size,
            *static_cast<const uint8_t*>(source), context->run_length_size);
          context->window.expected = 0;
          break;
        case BlockType::Compressed:
          size = DecompressBlock(detail::LiteralsFor(context), destination,
            destination_size, source, source_size, 1);
          context->window.expected = 0;
          break;
        default:
          return size_t(-20);
      }
      if (IsError(size)) {
        return size;
      }
      if (size > context->frame.maximum_block_size) {
        return size_t(-20);
      }
      context->decoded_size += size;
      if (context->validate_checksum) {
        UpdateChecksum(&context->checksum, destination, size);
      }
      context->window.previous_end = static_cast<uint8_t*>(destination) + size;
      if (context->window.expected) {
        return size;
      }
      if (context->stage == FrameStage::LastBlock) {
        if (context->frame.content_size != uint64_t(-1) &&
            context->decoded_size != context->frame.content_size) {
          return size_t(-20);
        }
        if (context->frame.checksum) {
          context->window.expected = 4;
          context->stage = FrameStage::Checksum;
        }
        else {
          TraceDecompressionEnd(
            context, context->decoded_size, context->processed_size, 1);
          context->window.expected = 0;
          context->stage = FrameStage::HeaderSize;
        }
      }
      else {
        context->window.expected = 3;
        context->stage = FrameStage::BlockHeader;
      }
      return size;
    }
    case FrameStage::Checksum:
      if (context->validate_checksum &&
          Load32(source) != uint32_t(DigestChecksum(&context->checksum))) {
        return size_t(-22);
      }
      TraceDecompressionEnd(
        context, context->decoded_size, context->processed_size, 1);
      context->window.expected = 0;
      context->stage = FrameStage::HeaderSize;
      return 0;
    case FrameStage::SkippableHeader:
      __builtin_memcpy(
        context->header_buffer + 8 - source_size, source, source_size);
      context->window.expected = Load32(context->header_buffer + 4);
      context->stage = FrameStage::SkippablePayload;
      return 0;
    case FrameStage::SkippablePayload:
      context->window.expected = 0;
      context->stage = FrameStage::HeaderSize;
      return 0;
    default:
      return size_t(-1);
  }
}

}
