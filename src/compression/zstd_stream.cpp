/*
  Adapted from Zstandard under the BSD license.
  Copyright Meta Platforms, Inc. and affiliates. All rights reserved.
  Original license: https://github.com/facebook/zstd/blob/v1.5.6/LICENSE
  Full license text: include/compression/zstd_bit_reader.hpp.
*/

#include "compression/zstd_stream.hpp"

extern "C" void* malloc(size_t size);
extern "C" void free(void* pointer);

namespace fw::compression {
namespace {

bool IsError(size_t value) {
  return value > size_t(-120);
}

template <typename T> T Minimum(T left, T right) {
  return left < right ? left : right;
}

template <typename T> T Maximum(T left, T right) {
  return left > right ? left : right;
}

uint32_t Load32(const void* pointer) {
  uint32_t value;
  __builtin_memcpy(&value, pointer, 4);
  return value;
}

void SelectDictionary(DecoderContext* context) {
  if (!context->multiple_dictionaries || !context->dictionaries ||
      !context->dictionary) {
    return;
  }
  const uint32_t id = context->frame.dictionary_id;
  const auto* set = context->dictionaries;
  const size_t mask = set->capacity - 1;
  size_t slot = Hash64(&id, sizeof(id), 0) & mask;
  for (;;) {
    const auto* dictionary = set->entries[slot];
    const uint32_t found = GetDictionaryId(dictionary);
    if (found == id || !found) {
      if (dictionary) {
        ReleasePreparedDictionary(context->owned_dictionary);
        context->owned_dictionary = nullptr;
        context->dictionary = dictionary;
        context->dictionary_id = context->frame.dictionary_id;
        context->dictionary_uses = -1;
      }
      return;
    }
    // The original masks before incrementing, including at the final slot.
    slot = (slot & mask) + 1;
  }
}

size_t ContinueStream(DecoderContext* context, uint8_t*& output,
  uint8_t* output_end, const void* source, size_t size) {
  const bool skip = context->stage == FrameStage::SkippablePayload;
  if (context->output_buffer_mode) {
    const size_t capacity = skip ? 0 : output_end - output;
    const size_t decoded =
      ContinueDecompression(context, output, capacity, source, size);
    if (IsError(decoded)) {
      return decoded;
    }
    output += decoded;
    context->stream_stage = StreamStage::Read;
  }
  else {
    const size_t capacity =
      skip ? 0 : context->output_buffer_size - context->output_start;
    const size_t decoded = ContinueDecompression(context,
      context->output_buffer + context->output_start, capacity, source, size);
    if (IsError(decoded)) {
      return decoded;
    }
    if (!decoded && !skip) {
      context->stream_stage = StreamStage::Read;
    }
    else {
      context->output_end = context->output_start + decoded;
      context->stream_stage = StreamStage::Flush;
    }
  }
  return 0;
}

size_t PrepareBuffers(DecoderContext* context) {
  context->frame.window_size =
    Maximum(context->frame.window_size, uint64_t(1024));
  if (context->frame.window_size > context->maximum_window_size) {
    return size_t(-16);
  }
  if (context->maximum_block_size) {
    context->frame.maximum_block_size =
      Minimum(context->frame.maximum_block_size, context->maximum_block_size);
  }
  const size_t block = context->frame.maximum_block_size;
  const size_t input_size = Maximum(block, size_t(4));
  const size_t window = context->frame.window_size;
  const size_t output_size =
    context->output_buffer_mode
      ? 0
      : Minimum(
          window + 2 * Minimum(Minimum(window, block), size_t(131072)) + 64,
          size_t(context->frame.content_size));
  if (context->input_buffer_size + context->output_buffer_size >=
      3 * (input_size + output_size)) {
    ++context->oversized_duration;
  }
  else {
    context->oversized_duration = 0;
  }
  if (context->input_buffer_size >= input_size &&
      context->output_buffer_size >= output_size &&
      context->oversized_duration < 128) {
    return 0;
  }
  const size_t size = input_size + output_size;
  if (context->static_size) {
    if (size > context->static_size - sizeof(DecoderContext)) {
      return size_t(-64);
    }
  }
  else {
    if (context->input_buffer) {
      if (context->memory.release) {
        context->memory.release(context->memory.opaque, context->input_buffer);
      }
      else {
        free(context->input_buffer);
      }
    }
    context->input_buffer_size = 0;
    context->output_buffer_size = 0;
    context->input_buffer = static_cast<uint8_t*>(
      context->memory.allocate
        ? context->memory.allocate(context->memory.opaque, size)
        : malloc(size));
    if (!context->input_buffer) {
      return size_t(-64);
    }
  }
  context->input_buffer_size = input_size;
  context->output_buffer_size = output_size;
  context->output_buffer = context->input_buffer + input_size;
  return 0;
}

}

size_t DecompressStream(
  DecoderContext* context, OutputBuffer* output, InputBuffer* input) {
  if (input->position > input->size) {
    return size_t(-72);
  }
  if (output->position > output->size) {
    return size_t(-70);
  }
  if (context->output_buffer_mode == 1 &&
      context->stream_stage != StreamStage::Initialize &&
      (context->expected_output.data != output->data ||
        context->expected_output.size != output->size ||
        context->expected_output.position != output->position)) {
    return size_t(-104);
  }
  const auto* source = static_cast<const uint8_t*>(input->data);
  const auto* input_begin = source + input->position;
  const auto* input_end = source + input->size;
  const auto* cursor = input_begin;
  auto* destination = static_cast<uint8_t*>(output->data);
  auto* output_begin = destination + output->position;
  auto* output_end = destination + output->size;
  auto* produced = output_begin;
  bool working = true;
  while (working) {
    switch (context->stream_stage) {
      case StreamStage::Initialize:
        context->stream_stage = StreamStage::LoadHeader;
        context->loaded_header_size = 0;
        context->input_position = 0;
        context->output_start = 0;
        context->output_end = 0;
        context->hostage_byte = 0;
        context->expected_output = *output;
        [[fallthrough]];
      case StreamStage::LoadHeader: {
        const size_t needed = ReadFrameHeader(&context->frame,
          context->header_buffer, context->loaded_header_size, context->format);
        SelectDictionary(context);
        if (IsError(needed)) {
          return needed;
        }
        if (needed) {
          const size_t amount = needed - context->loaded_header_size;
          const size_t available = input_end - cursor;
          if (amount > available) {
            if (available) {
              __builtin_memcpy(
                context->header_buffer + context->loaded_header_size, cursor,
                available);
              context->loaded_header_size += available;
            }
            input->position = input->size;
            const size_t check =
              ReadFrameHeader(&context->frame, context->header_buffer,
                context->loaded_header_size, context->format);
            if (IsError(check)) {
              return check;
            }
            const size_t minimum =
              context->format == FrameFormat::Standard ? 6 : 2;
            return Maximum(minimum, needed) - context->loaded_header_size + 3;
          }
          __builtin_memcpy(context->header_buffer + context->loaded_header_size,
            cursor, amount);
          context->loaded_header_size = needed;
          cursor += amount;
          break;
        }
        if (context->frame.content_size != uint64_t(-1) &&
            context->frame.type != FrameType::Skippable &&
            size_t(output_end - produced) >= context->frame.content_size) {
          FrameSizeInfo info;
          FindFrameSizeInfo(
            &info, input_begin, input_end - input_begin, context->format);
          if (info.compressed_size <= size_t(input_end - input_begin)) {
            const auto* dictionary = GetActiveDictionary(context);
            const size_t decoded =
              DecompressFrames(context, produced, output_end - produced,
                input_begin, info.compressed_size, nullptr, 0, dictionary);
            if (IsError(decoded)) {
              return decoded;
            }
            cursor = input_begin + info.compressed_size;
            if (produced) {
              produced += decoded;
            }
            context->window.expected = 0;
            context->stream_stage = StreamStage::Initialize;
            working = false;
            break;
          }
        }
        if (context->output_buffer_mode == 1 &&
            context->frame.type != FrameType::Skippable &&
            context->frame.content_size != uint64_t(-1) &&
            size_t(output_end - produced) < context->frame.content_size) {
          return size_t(-70);
        }
        const auto* dictionary = GetActiveDictionary(context);
        if (dictionary) {
          context->dictionary_cold =
            context->window.dictionary_end !=
            GetDictionaryContent(dictionary) + GetDictionarySize(dictionary);
        }
        BeginDecompression(context, nullptr, 0);
        if (dictionary) {
          UsePreparedDictionary(context, dictionary);
        }
        if (context->format == FrameFormat::Standard &&
            Load32(context->header_buffer) >> 4 == 0x0184d2a5) {
          context->window.expected = Load32(context->header_buffer + 4);
          context->stage = FrameStage::SkippablePayload;
        }
        else {
          const size_t result = DecodeFrameHeader(
            context, context->header_buffer, context->loaded_header_size);
          if (IsError(result)) {
            return result;
          }
          context->window.expected = 3;
          context->stage = FrameStage::BlockHeader;
        }
        const size_t result = PrepareBuffers(context);
        if (IsError(result)) {
          return result;
        }
        context->stream_stage = StreamStage::Read;
        [[fallthrough]];
      }
      case StreamStage::Read: {
        size_t needed = context->window.expected;
        if ((context->stage == FrameStage::Block ||
              context->stage == FrameStage::LastBlock) &&
            context->block_type == BlockType::Raw) {
          needed =
            Maximum(Minimum(needed, size_t(input_end - cursor)), size_t(1));
        }
        if (!needed) {
          context->stream_stage = StreamStage::Initialize;
          working = false;
          break;
        }
        if (size_t(input_end - cursor) >= needed) {
          const size_t result =
            ContinueStream(context, produced, output_end, cursor, needed);
          if (IsError(result)) {
            return result;
          }
          cursor += needed;
          break;
        }
        if (cursor == input_end) {
          working = false;
          break;
        }
        context->stream_stage = StreamStage::Load;
        [[fallthrough]];
      }
      case StreamStage::Load: {
        const size_t needed = context->window.expected;
        const size_t amount = needed - context->input_position;
        const size_t loaded = Minimum(amount, size_t(input_end - cursor));
        if (context->stage != FrameStage::SkippablePayload) {
          if (amount > context->input_buffer_size - context->input_position) {
            return size_t(-20);
          }
          if (loaded) {
            __builtin_memcpy(
              context->input_buffer + context->input_position, cursor, loaded);
          }
        }
        if (loaded) {
          cursor += loaded;
          context->input_position += loaded;
        }
        if (loaded < amount) {
          working = false;
          break;
        }
        context->input_position = 0;
        const size_t result = ContinueStream(
          context, produced, output_end, context->input_buffer, needed);
        if (IsError(result)) {
          return result;
        }
        break;
      }
      case StreamStage::Flush: {
        const size_t remaining = context->output_end - context->output_start;
        const size_t flushed =
          Minimum(size_t(output_end - produced), remaining);
        if (flushed) {
          __builtin_memcpy(
            produced, context->output_buffer + context->output_start, flushed);
        }
        if (produced) {
          produced += flushed;
        }
        context->output_start += flushed;
        if (flushed == remaining) {
          context->stream_stage = StreamStage::Read;
          if (context->output_buffer_size < context->frame.content_size &&
              context->output_start + context->frame.maximum_block_size >
                context->output_buffer_size) {
            context->output_start = 0;
            context->output_end = 0;
          }
        }
        else {
          working = false;
        }
        break;
      }
      default:
        return size_t(-1);
    }
  }
  input->position = cursor - source;
  output->position = produced - destination;
  context->expected_output = *output;
  if (cursor == input_begin && produced == output_begin) {
    const int32_t previous = context->no_forward_progress;
    context->no_forward_progress = uint32_t(previous) + 1;
    if (previous >= 15) {
      if (produced == output_end) {
        return size_t(-80);
      }
      if (cursor == input_end) {
        return size_t(-82);
      }
    }
  }
  else {
    context->no_forward_progress = 0;
  }
  if (context->window.expected) {
    return context->window.expected - context->input_position +
           (GetNextInputType(context) == 2 ? 3 : 0);
  }
  if (context->output_end == context->output_start) {
    if (context->hostage_byte) {
      if (input->position >= input->size) {
        context->stream_stage = StreamStage::Read;
        return 1;
      }
      ++input->position;
    }
    return 0;
  }
  if (!context->hostage_byte) {
    --input->position;
    context->hostage_byte = 1;
  }
  return 1;
}

}
