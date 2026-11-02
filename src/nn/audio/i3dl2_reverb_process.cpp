#include "nn/audio/i3dl2_reverb.hpp"

#include <arm_neon.h>

#pragma clang fp contract(off)

namespace nn::audio::i3dl2_detail {

void* Copy(void*, const void*, size_t) asm("memcpy");

static uintptr_t Address(const void* pointer) {
  return reinterpret_cast<uintptr_t>(pointer);
}

static const uint32_t ReflectionWeights[] = {
  0x3f2bc3e7, 0x3f1c3ada, 0x3f800000, 0x3eb6ae9f,
  0x3f2f00de, 0x3f28e768, 0x3f04f6cf, 0x3e7d0d06,
  0x3eeb3d4b, 0x3ee68273, 0x3f2457b0, 0x3f0c7d80,
  0x3f6de376, 0x3ec3f1c7, 0x3f3a8a40, 0x3f32ac54,
  0x3f0be09c, 0x3e7b85e8, 0x3ee77e5f, 0x3ee17f41,
};

static float32x4_t Weight(unsigned index) {
  return vreinterpretq_f32_u32(vdupq_n_u32(ReflectionWeights[index]));
}

static float32x4_t ReadFour(const I3dl2DelayLine& line, const float* cursor) {
  if (Address(cursor) <= Address(line.end) - 12) {
    return vld1q_f32(cursor);
  }

  float values[4];

  if (Address(cursor) == Address(line.end) - 8) {
    values[0] = cursor[0];
    values[1] = cursor[1];
    values[2] = cursor[2];
    values[3] = line.begin[0];
  }
  else if (Address(cursor) == Address(line.end) - 4) {
    values[0] = cursor[0];
    values[1] = cursor[1];
    values[2] = line.begin[0];
    values[3] = line.begin[1];
  }
  else {
    values[0] = cursor[0];
    values[1] = line.begin[0];
    values[2] = line.begin[1];
    values[3] = line.begin[2];
  }

  return vld1q_f32(values);
}

static void WriteFour(const I3dl2DelayLine& line, float* cursor,
                       float32x4_t values) {
  if (Address(cursor) <= Address(line.end) - 12) {
    vst1q_f32(cursor, values);
  }
  else if (Address(cursor) == Address(line.end) - 8) {
    cursor[0] = vgetq_lane_f32(values, 0);
    cursor[1] = vgetq_lane_f32(values, 1);
    cursor[2] = vgetq_lane_f32(values, 2);
    line.begin[0] = vgetq_lane_f32(values, 3);
  }
  else if (Address(cursor) == Address(line.end) - 4) {
    cursor[0] = vgetq_lane_f32(values, 0);
    cursor[1] = vgetq_lane_f32(values, 1);
    line.begin[0] = vgetq_lane_f32(values, 2);
    line.begin[1] = vgetq_lane_f32(values, 3);
  }
  else {
    cursor[0] = vgetq_lane_f32(values, 0);
    line.begin[0] = vgetq_lane_f32(values, 1);
    line.begin[1] = vgetq_lane_f32(values, 2);
    line.begin[2] = vgetq_lane_f32(values, 3);
  }
}

static float32x4_t ReadDelayed(const I3dl2DelayLine& line, int32_t delay) {
  uintptr_t cursor = Address(line.write) + 4 * int64_t(~delay);

  if (cursor < Address(line.begin)) {
    cursor += 4 * int64_t(line.length) + 4;
  }

  return ReadFour(line, reinterpret_cast<const float*>(cursor));
}

static void PushFour(I3dl2DelayLine& line, float32x4_t values) {
  float* cursor = line.write;
  line.write = reinterpret_cast<float*>(Address(cursor) + 16);
  line.read = reinterpret_cast<float*>(Address(line.read) + 16);
  WriteFour(line, cursor, values);

  if (Address(line.write) > Address(line.end)) {
    line.write = reinterpret_cast<float*>(Address(line.write)
      + 4 * int64_t(~line.length));
  }

  if (Address(line.read) > Address(line.end)) {
    line.read = reinterpret_cast<float*>(Address(line.read)
      + 4 * int64_t(~line.length));
  }
}

static void Transpose(float32x4_t* values) {
  float32x4_t first = vzip1q_f32(values[0], values[2]);
  float32x4_t second = vzip1q_f32(values[1], values[3]);
  float32x4_t third = vzip2q_f32(values[0], values[2]);
  float32x4_t fourth = vzip2q_f32(values[1], values[3]);
  values[0] = vzip1q_f32(first, second);
  values[1] = vzip2q_f32(first, second);
  values[2] = vzip1q_f32(third, fourth);
  values[3] = vzip2q_f32(third, fourth);
}

static float32x4_t Allpass(I3dl2DelayLine& line, float32x4_t input) {
  float32x4_t delayed = ReadFour(line, line.read);
  float32x4_t written = vfmsq_n_f32(input, delayed, line.coefficient);
  PushFour(line, written);
  return vfmaq_n_f32(delayed, written, line.coefficient);
}

static int32x4_t Quantize(float32x4_t input) {
  return vshrq_n_s32(vqshlq_n_s32(vcvtq_n_s32_f32(input, 16), 8), 8);
}

template<unsigned Channels>
static unsigned ReflectionChannel(unsigned tap) {
  if constexpr (Channels == 1) {
    return 0;
  }

  if (tap == 0) {
    return Channels == 6 ? 2 : 0;
  }

  if (tap == 1 || tap == 2 || (tap >= 13 && tap <= 16)) {
    return 0;
  }

  if (tap >= 7 && tap <= 9) {
    return Channels == 2 ? 0 : Channels == 4 ? 2 : 4;
  }

  if (tap >= 17) {
    return Channels == 2 ? 1 : Channels == 4 ? 3 : 5;
  }

  return 1;
}

template<unsigned Channels>
static void Process(I3dl2ReverbState* state, const int32_t** input,
                     int32_t** output, int sample_count) {
  float input_history = state->input_history;
  float32x4_t history = vld1q_f32(state->filter_history);

  if (sample_count >= 4) {
    float32x4_t feedback[4];
    float32x4_t coefficients[3];
    const float dry = state->dry_gain;
    const float input_gain = state->input_gain;
    const float reflection_gain = state->reflection_gain;
    const float late_gain = state->late_gain;
    const int32_t late_delay = state->late_delay;
    const int32_t tenth_delay = state->reflection_taps[10];

    for (unsigned index = 0; index < 4; ++index) {
      float lane[4] = {};
      lane[index] = state->input_feedback;
      feedback[index] = vld1q_f32(lane);
    }

    for (unsigned coefficient = 0; coefficient < 3; ++coefficient) {
      float lanes[4];

      for (unsigned index = 0; index < 4; ++index) {
        lanes[index] = state->filter_coefficients[index][coefficient];
      }

      coefficients[coefficient] = vld1q_f32(lanes);
    }

    for (int frame = 0; frame < sample_count / 4; ++frame) {
      int32x4_t samples[Channels];

      for (unsigned channel = 0; channel < Channels; ++channel) {
        samples[channel] = vld1q_s32(input[channel] + frame * 4);
      }

      float32x4_t excitation = vdupq_n_f32(0.0f);

      if (late_delay >= 4) {
        excitation = vmulq_n_f32(ReadDelayed(state->early, late_delay),
                                  late_gain);
      }

      float32x4_t reflections[20];

      for (unsigned tap = 0; tap < 20; ++tap) {
        if (tap != 10 || tenth_delay >= 4) {
          reflections[tap] = ReadDelayed(state->early,
            state->reflection_taps[tap]);
        }
      }

      int32x4_t sum = samples[0];

      if constexpr (Channels >= 2) {
        sum = vaddq_s32(samples[1], samples[0]);
      }

      if constexpr (Channels >= 4) {
        sum = vaddq_s32(sum, vaddq_s32(samples[2], samples[3]));
      }

      if constexpr (Channels == 6) {
        sum = vaddq_s32(sum, vaddq_s32(samples[4], samples[5]));
      }

      float32x4_t filtered = vfmaq_n_f32(
        vmulq_n_f32(vcvtq_n_f32_s32(sum, 16), input_gain),
        feedback[0], input_history);
      filtered = vfmaq_n_f32(filtered, feedback[1],
                             vgetq_lane_f32(filtered, 0));
      filtered = vfmaq_n_f32(filtered, feedback[2],
                             vgetq_lane_f32(filtered, 1));
      filtered = vfmaq_n_f32(filtered, feedback[3],
                             vgetq_lane_f32(filtered, 2));
      input_history = vgetq_lane_f32(filtered, 3);
      PushFour(state->early, filtered);

      if (late_delay <= 3) {
        excitation = vmulq_n_f32(ReadDelayed(state->early, late_delay + 4),
                                  late_gain);
      }

      float32x4_t early[Channels];
      bool started[Channels] = {};

      for (unsigned tap = 0; tap < 20; ++tap) {
        if (tap == 10 && tenth_delay <= 3) {
          continue;
        }

        unsigned channel = ReflectionChannel<Channels>(tap);

        if (!started[channel]) {
          early[channel] = vmulq_f32(reflections[tap], Weight(tap));
          started[channel] = true;
        }
        else if (tap == 2) {
          early[channel] = vaddq_f32(early[channel], reflections[tap]);
        }
        else {
          early[channel] = vfmaq_f32(early[channel], Weight(tap),
                                     reflections[tap]);
        }
      }

      if (tenth_delay <= 3) {
        unsigned channel = ReflectionChannel<Channels>(10);
        early[channel] = vfmaq_f32(early[channel], Weight(10),
          ReadDelayed(state->early, state->reflection_taps[10] + 4));
      }

      if constexpr (Channels == 6) {
        early[3] = vaddq_f32(early[5], vaddq_f32(early[4],
          vaddq_f32(early[2], vaddq_f32(early[0], early[1]))));
      }

      float32x4_t delayed[4];

      for (unsigned index = 0; index < 4; ++index) {
        delayed[index] = ReadFour(state->late[index], state->late[index].read);
      }

      Transpose(delayed);
      float32x4_t lowpass[4];
      lowpass[0] = vfmaq_f32(history, coefficients[0], delayed[0]);

      for (unsigned index = 1; index < 4; ++index) {
        lowpass[index] = vfmaq_f32(vfmaq_f32(
          vmulq_f32(coefficients[1], delayed[index - 1]),
          coefficients[2], lowpass[index - 1]),
          coefficients[0], delayed[index]);
      }

      history = vfmaq_f32(vmulq_f32(coefficients[1], delayed[3]),
                          coefficients[2], lowpass[3]);
      Transpose(lowpass);
      float32x4_t mixed[4] = {
        vaddq_f32(excitation, vaddq_f32(lowpass[1], lowpass[2])),
        vaddq_f32(excitation, vsubq_f32(vnegq_f32(lowpass[0]), lowpass[3])),
        vaddq_f32(excitation, vsubq_f32(lowpass[0], lowpass[3])),
        vaddq_f32(excitation, vsubq_f32(lowpass[1], lowpass[2])),
      };
      float32x4_t late[4];
      float32x4_t direct[Channels];

      for (unsigned channel = 0; channel < Channels; ++channel) {
        direct[channel] = vfmaq_n_f32(
          vmulq_n_f32(vcvtq_n_f32_s32(samples[channel], 16), dry),
          early[channel], reflection_gain);
      }

      for (unsigned index = 0; index < 4; ++index) {
        float32x4_t first = Allpass(state->allpass_a[index], mixed[index]);
        late[index] = Allpass(state->allpass_b[index], first);
        PushFour(state->late[index], late[index]);
      }

      if constexpr (Channels == 1) {
        vst1q_s32(output[0] + frame * 4, Quantize(vaddq_f32(direct[0],
          vaddq_f32(late[0], late[1]))));
      }
      else if constexpr (Channels <= 4) {
        for (unsigned channel = 0; channel < Channels; ++channel) {
          vst1q_s32(output[channel] + frame * 4,
            Quantize(vaddq_f32(direct[channel], late[channel])));
        }
      }
      else {
        vst1q_s32(output[0] + frame * 4,
          Quantize(vaddq_f32(direct[0], late[0])));
        vst1q_s32(output[1] + frame * 4,
          Quantize(vaddq_f32(direct[1], late[1])));
        float32x4_t center = ReadFour(state->center, state->center.read);
        PushFour(state->center,
          vmulq_n_f32(vsubq_f32(late[2], late[3]), 0.5f));
        vst1q_s32(output[2] + frame * 4,
          Quantize(vaddq_f32(direct[2], center)));
        vst1q_s32(output[3] + frame * 4,
          Quantize(vaddq_f32(direct[3], late[3])));
        vst1q_s32(output[4] + frame * 4,
          Quantize(vaddq_f32(direct[4], late[2])));
        vst1q_s32(output[5] + frame * 4,
          Quantize(vaddq_f32(direct[5], late[3])));
      }
    }
  }

  state->input_history = input_history;
  vst1q_f32(state->filter_history, history);
}

void ProcessMono(I3dl2ReverbState* state, const int32_t** input,
                  int32_t** output, int count) {
  Process<1>(state, input, output, count);
}

void ProcessStereo(I3dl2ReverbState* state, const int32_t** input,
                    int32_t** output, int count) {
  Process<2>(state, input, output, count);
}

void ProcessQuad(I3dl2ReverbState* state, const int32_t** input,
                  int32_t** output, int count) {
  Process<4>(state, input, output, count);
}

void ProcessSurround(I3dl2ReverbState* state, const int32_t** input,
                      int32_t** output, int count) {
  Process<6>(state, input, output, count);
}

}

namespace nn::audio {

void ApplyI3dl2ReverbEffect(const I3dl2ReverbParameter& parameter,
                           I3dl2ReverbState* state, bool enabled,
                           const int32_t** input, int32_t** output,
                           int sample_count) {
  if (enabled) {
    switch (parameter.channel_count) {
      case 1:
        i3dl2_detail::ProcessMono(state, input, output, sample_count);
        return;
      case 2:
        i3dl2_detail::ProcessStereo(state, input, output, sample_count);
        return;
      case 4:
        i3dl2_detail::ProcessQuad(state, input, output, sample_count);
        return;
      case 6:
        i3dl2_detail::ProcessSurround(state, input, output, sample_count);
        return;
    }
  }

  for (unsigned channel = 0; channel < parameter.channel_count; ++channel) {
    if (output[channel] != input[channel]) {
      i3dl2_detail::Copy(output[channel], input[channel],
                         int64_t(sample_count) * 4);
    }
  }
}

}
