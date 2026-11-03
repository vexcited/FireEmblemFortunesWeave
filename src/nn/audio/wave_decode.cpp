#include "nn/audio/wave_decode.hpp"

#include "nn/audio/resample.hpp"

extern "C" void* memset(void*, int, size_t);

namespace nn::audio::dsp {

int16_t WaveDecodeScratch[16128];

namespace {

static int32_t Add(int32_t first, int32_t second) {
  return uint32_t(first) + uint32_t(second);
}

static int32_t Subtract(int32_t first, int32_t second) {
  return uint32_t(first) - uint32_t(second);
}

static int32_t Needed(int32_t phase, int32_t count, int32_t step) {
  return int32_t(uint32_t(phase) + uint32_t(count) * uint32_t(step)) >> 15;
}

}

void DecodeFromWaveBuffers(const DecodeFromWaveBuffersArgs& argument) {
  auto& state = *argument.state;
  int32_t phase = state.phase;
  int32_t offset = state.offset;
  int32_t index = state.buffer_index;
  int32_t consumed = state.consumed_buffers;
  uint64_t played = state.played;
  unsigned history = argument.mode == 1 ? 8 : 4;
  float source_rate = float(argument.source_rate);
  float target_rate = float(argument.target_rate);
  float pitch = float(argument.pitch);
  float ratio;
  int32_t step;
  asm volatile("fdiv %s0, %s2, %s3\n"
    "fmul %s0, %s0, %s4\n"
    "fcvtzs %w1, %s0" : "=&w"(ratio), "=r"(step)
    : "w"(source_rate), "w"(target_rate), "w"(pitch));
  int32_t needed = Needed(phase, argument.count, step);

  if (needed < 0 || Add(needed, history) > 16128) {
    return;
  }

  int32_t limit = Subtract(528482304, phase);
  asm volatile("sdiv %w0, %w1, %w2" : "=r"(limit)
    : "r"(limit), "r"(step));
  limit = limit < argument.count ? limit : argument.count;
  int32_t remaining = argument.count;
  int32_t* output = argument.output;

  while (remaining > 0) {
    int32_t count = remaining < limit ? remaining : limit;
    int16_t* destination = WaveDecodeScratch;

    if (!(argument.skip_resample & 1)) {
      for (unsigned sample = 0; sample < history; ++sample) {
        *destination++ = argument.state->history[sample];
      }
    }

    needed = Needed(phase, count, step);
    int32_t decoded = 0;
    bool stopped = false;

    while (decoded < needed) {
      auto& current_state = *argument.state;

      if (index >= 4) {
        for (auto& valid : current_state.valid) {
          valid = 0;
        }

        index = 0;
        played = 0;
        consumed = 4;
      }

      if (!current_state.valid[index]) {
        stopped = true;
        break;
      }

      const auto& buffer = argument.buffers[index];

      if (argument.format == 6 && !offset && buffer.context) {
        current_state.context = *buffer.context;
      }

      DecodeArg decode{};
      decode.buffer = buffer.buffer;
      decode.buffer_size = buffer.size;
      decode.channels = argument.channels;
      bool loop_region = buffer.looping == 1 &&
        current_state.loop_count >= 1 && buffer.loop_end >= buffer.loop_start;
      decode.start = loop_region ? buffer.loop_start : buffer.start;
      decode.end = loop_region ? buffer.loop_end : buffer.end;
      decode.channel = argument.channel;
      decode.offset = offset;
      decode.count = Subtract(needed, decoded);
      int32_t produced;

      switch (argument.format) {
        case 2:
          produced = DecodePcm16(destination, decode);
          break;
        case 5:
          produced = DecodePcmFloat(destination, decode);
          break;
        case 6:
          decode.coefficients = argument.coefficients;
          decode.context = &current_state.context;
          produced = DecodeAdpcm(destination, decode);
          break;
        default:
          produced = -1;
          break;
      }

      destination += produced;
      played += int64_t(produced);
      decoded = Add(decoded, produced);

      if (produced) {
        offset = Add(offset, produced);

        if (offset < Subtract(decode.end, decode.start)) {
          continue;
        }
      }

      auto& next_state = *argument.state;

      if (buffer.looping != 1) {
        offset = 0;
        next_state.valid[index] = 0;
        next_state.loop_count = 0;
        index = index <= 2 ? Add(index, 1) : 0;
        consumed = Add(consumed, 1);

        if (buffer.end_of_stream) {
          played = 0;
        }

        continue;
      }

      next_state.loop_count = Add(next_state.loop_count, 1);

      if (buffer.loop_limit >= 0 &&
        (!produced || next_state.loop_count > buffer.loop_limit)) {
        next_state.valid[index] = 0;
        next_state.loop_count = 0;
        index = index <= 2 ? Add(index, 1) : 0;
        consumed = Add(consumed, 1);

        if (buffer.end_of_stream) {
          played = 0;
        }
      }

      offset = 0;

      if (!produced) {
        stopped = true;
        break;
      }

      if (argument.reset_played_on_loop) {
        played = 0;
      }
    }

    if (argument.skip_resample & 1) {
      for (int32_t sample = 0; sample < decoded; ++sample) {
        output[sample] = WaveDecodeScratch[sample];
      }
    }
    else {
      memset(destination, 0, uint64_t(int64_t(Subtract(needed, decoded)) * 2));
      Resample(output, WaveDecodeScratch, step, &phase, count,
        argument.mode, needed != count || argument.pitch != 32768);

      for (unsigned sample = 0; sample < history; ++sample) {
        argument.state->history[sample] = WaveDecodeScratch[needed + sample];
      }
    }

    remaining = Subtract(remaining, count);
    output += count;

    if (stopped) {
      break;
    }
  }

  argument.state->consumed_buffers = consumed;
  argument.state->offset = offset;
  argument.state->played = played;
  argument.state->buffer_index = index;
  argument.state->phase = phase;
}

}
