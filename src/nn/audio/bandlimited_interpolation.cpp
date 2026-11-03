#include "nn/audio/bandlimited_interpolation.hpp"

#include "nn/audio/interleave.hpp"
#include "nn/audio/interleave_conversion.hpp"
#include "nn/audio/sample_conversion.hpp"

extern "C" void* memcpy(void*, const void*, size_t);
extern "C" void* memmove(void*, const void*, size_t);
extern "C" void* memset(void*, int, size_t);

using nn::audio::util::detail::BandlimitedFrameState;

using Kernel = void(float*, int, double*, BandlimitedFrameState*,
  const float*, int, float* const*, int, double, int);
extern "C" Kernel BandlimitedMono;
extern "C" Kernel BandlimitedStereo;
extern "C" Kernel BandlimitedSurround;
extern "C" Kernel BandlimitedGeneric;

namespace nn::audio::util {
namespace {

static const float Window[10242] = {
#include "bandlimited_weights.inc"
};

static int Divide(int value, int divisor) {
  int result;
  asm("sdiv %w0, %w1, %w2" : "=r"(result)
    : "r"(value), "r"(divisor));
  return result;
}

static int Remainder(int value, int divisor) {
  return uint32_t(value) - uint32_t(Divide(value, divisor)) * divisor;
}

static int Truncate(double value) {
  int result;
  asm("fcvtzs %w0, %d1" : "=r"(result) : "w"(value));
  return result;
}

static double Minimum(double value) {
  double result;
  asm("fminnm %d0, %d1, %d2" : "=w"(result)
    : "w"(value), "w"(1.0));
  return result;
}

static float Minimum(float value) {
  float result;
  asm("fminnm %s0, %s1, %s2" : "=w"(result)
    : "w"(value), "w"(1.0f));
  return result;
}

static double Fma(double left, double right, double value) {
  double result;
  asm("fmadd %d0, %d1, %d2, %d3" : "=w"(result)
    : "w"(left), "w"(right), "w"(value));
  return result;
}

static float Fma(float left, float right, float value) {
  float result;
  asm("fmadd %s0, %s1, %s2, %s3" : "=w"(result)
    : "w"(left), "w"(right), "w"(value));
  return result;
}

static int GreatestCommonDivisor(int left, int right) {
  while (right != 0) {
    int remainder = Remainder(left, right);
    left = right;
    right = remainder;
  }

  return left;
}

static int Ceiling(double value) {
  int whole = Truncate(value);
  return uint32_t(whole) + (value != double(whole) && value > 0.0);
}

static int FrameCount(int count, int input_period, int output_period,
  int input_count, int output_count) {
  int remainder = Remainder(count, input_period);
  int scaled = uint32_t(output_period) * Divide(count, input_period) +
    uint32_t(Divide(uint32_t(output_period) * remainder, input_period));
  int correction = Divide((uint32_t(input_count) + remainder) *
    output_period, input_period);
  return uint32_t(scaled) + correction - output_count -
    Remainder(scaled, output_period);
}

static size_t ByteCount(int count) {
  return uint64_t(int64_t(count)) << 2;
}

static int Begin(detail::BandlimitedInterpolationImpl& state, int count) {
  auto& frame = state.frame;
  int produced = FrameCount(count, frame.input_period, frame.output_period,
    frame.input_count, frame.output_count);
  frame.input_count = uint32_t(frame.input_count) + count;
  frame.output_count = uint32_t(frame.output_count) + produced;

  if (frame.input_count >= frame.input_period &&
      frame.output_count >= frame.output_period) {
    frame.input_count = Remainder(frame.input_count, frame.input_period);
    frame.output_count = Remainder(frame.output_count, frame.output_period);
  }

  int skipped = uint32_t(count) * state.channels;
  int retained = (uint32_t(state.history_count) - count) * state.channels;
  memmove(state.history, state.history + skipped, ByteCount(retained));
  return produced;
}

}

static_assert(sizeof(detail::BandlimitedInterpolationImpl) == 104);
static_assert(offsetof(detail::BandlimitedInterpolationImpl, frame) == 0x14);
static_assert(offsetof(detail::BandlimitedInterpolationImpl, position) == 0x28);
static_assert(offsetof(detail::BandlimitedInterpolationImpl, weights) == 0x58);

namespace detail {

double BandlimitedInterpolationImpl::CalculateTimeIncrement(int input_rate,
  int output_rate) {
  return 1.0 / (double(output_rate) / double(input_rate));
}

void BandlimitedInterpolationImpl::Initialize(int input_rate,
  int output_rate, int channels, int maximum_input_count, void* work, size_t) {
  initialized = 0;
  this->input_rate = input_rate;
  this->output_rate = output_rate;
  this->channels = channels;
  this->maximum_input_count = maximum_input_count;
  int divisor = GreatestCommonDivisor(input_rate, output_rate);
  frame.input_period = Divide(input_rate, divisor);
  frame.output_period = Divide(output_rate, divisor);
  frame.input_count = 0;
  frame.output_count = 0;
  frame.phase = 0;
  double ratio = double(output_rate) / double(input_rate);
  double radius = 10241.0 / (Minimum(ratio) * 1024.0);
  int padding = uint32_t(Ceiling(radius)) + 1;
  history_count = uint32_t(maximum_input_count) + uint32_t(padding) * 2;
  output_capacity = Ceiling(ratio * double(maximum_input_count));
  history = reinterpret_cast<float*>((uintptr_t(work) + 3) & ~uintptr_t(3));
  output = history + int32_t(uint32_t(history_count) * channels);
  auto next = uintptr_t(output +
    int32_t(uint32_t(output_capacity) * channels));
  weights = reinterpret_cast<float**>((next + 7) & ~uintptr_t(7));
  phase_count = Divide(output_rate, divisor);
  next = uintptr_t(weights + phase_count);
  taps = uint32_t(Truncate(radius)) * 2;

  for (int phase = 0; phase < phase_count; ++phase) {
    next = (next + 3) & ~uintptr_t(3);
    weights[phase] = reinterpret_cast<float*>(next);
    next += int64_t(taps) * 4;
  }

  position = int32_t(uint32_t(history_count) - padding);
  increment = 1.0 / ratio;
  memset(history, 0, ByteCount(uint32_t(history_count) * channels));
  PreCalculateInterpolationWeights();
  initialized = 1;
}

void BandlimitedInterpolationImpl::PreCalculateInterpolationWeights() {
  if (phase_count < 1) {
    return;
  }

  double time = 0.0;

  if (taps > 1) {
    double ratio = double(output_rate) / double(input_rate);
    double scale = Minimum(ratio);
    float amplitude = Minimum(float(ratio));
    double step = scale * 1024.0;
    int half = taps / 2;

    for (int phase = 0; phase < phase_count; ++phase) {
      double fraction = time - double(Truncate(time));
      double first = scale * fraction * 1024.0;

      for (int tap = 0; tap < half; ++tap) {
        double coordinate = Fma(double(uint32_t(tap)), step, first);
        int index = Truncate(coordinate);
        float blend = float(coordinate - double(index));
        float value = Fma(blend, Window[index + 1] - Window[index],
          Window[index]);
        weights[phase][half - tap - 1] = amplitude * value;
      }

      double complement = 1.0 - fraction;
      double second = scale * complement * 1024.0;

      for (int tap = 0; tap < half; ++tap) {
        double coordinate = Fma(double(uint32_t(tap)), step, second);
        int index = Truncate(coordinate);
        float blend = float(coordinate - double(index));
        float value = Fma(blend, Window[index + 1] - Window[index],
          Window[index]);
        weights[phase][half + tap] = amplitude * value;
      }

      if (complement >= 1.0) {
        weights[phase][taps - 1] = 0;
      }

      time += increment;
    }
  }
  else {
    for (int phase = 0; phase < phase_count; ++phase) {
      if (double(Truncate(time)) - time + 1.0 >= 1.0) {
        weights[phase][taps - 1] = 0;
      }

      time += increment;
    }
  }
}

void BandlimitedInterpolationImpl::ResampleCore(float* target, int count) {
  Kernel* kernel = BandlimitedGeneric;

  if (channels == 1) {
    kernel = BandlimitedMono;
  }
  else if (channels == 2) {
    kernel = BandlimitedStereo;
  }
  else if (channels == 6) {
    kernel = BandlimitedSurround;
  }

  kernel(target, count, &position, &frame, history, history_count, weights,
    taps, increment, channels);
}

template<class Input, class Output, int... Fractions>
int BandlimitedInterpolationImpl::Resample(Output* target, int,
  const Input* input, int count) {
  constexpr int fractions[] = {Fractions..., 0};
  constexpr int input_fraction = fractions[0];
  constexpr int output_fraction = sizeof...(Fractions) == 2 ?
    fractions[1] : fractions[0];
  int produced = Begin(*this, count);
  int retained = (uint32_t(history_count) - count) * channels;
  int samples = uint32_t(channels) * count;

  if constexpr (__is_same(Input, float)) {
    memcpy(history + retained, input, ByteCount(samples));
  }
  else {
    VecConvertToFloat<Input, input_fraction>(history + retained, input,
      samples);
  }

  position -= double(count);

  if (produced >= 1) {
    ResampleCore(output, produced);
    samples = uint32_t(channels) * produced;

    if constexpr (__is_same(Output, float)) {
      memcpy(target, output, ByteCount(samples));
    }
    else {
      VecConvertFromFloat<Output, output_fraction>(target, output, samples);
    }
  }

  return produced;
}

template<class Input, class Output, int... Fractions>
int BandlimitedInterpolationImpl::Resample(Output* const* target, int,
  const Input* const* input, int count) {
  constexpr int fractions[] = {Fractions..., 0};
  constexpr int input_fraction = fractions[0];
  constexpr int output_fraction = sizeof...(Fractions) == 2 ?
    fractions[1] : fractions[0];
  int produced = Begin(*this, count);
  int retained = (uint32_t(history_count) - count) * channels;

  if constexpr (__is_same(Input, float)) {
    VecInterleave<float>(history + retained, input, channels, count);
  }
  else {
    VecInterleaveToFloat<Input, input_fraction>(history + retained, input,
      channels, count);
  }

  position -= double(count);

  if (produced >= 1) {
    ResampleCore(output, produced);

    if constexpr (__is_same(Output, float)) {
      VecDeinterleave<float>(target, output, channels, produced);
    }
    else {
      VecDeinterleaveFromFloat<Output, output_fraction>(target, output,
        channels, produced);
    }
  }

  return produced;
}

}

void BandlimitedInterpolation::Initialize(int input_rate, int output_rate,
  int channels, int maximum_input_count, void* work, size_t work_size) {
  detail::BandlimitedInterpolationImpl::Initialize(input_rate, output_rate,
    channels, maximum_input_count, work, work_size);
}

void BandlimitedInterpolation::Finalize() {
  initialized = 0;
}

uint8_t BandlimitedInterpolation::IsInitialized() const {
  return initialized;
}

int BandlimitedInterpolation::GetOutputFrameCount(int count) const {
  return FrameCount(count, frame.input_period, frame.output_period,
    frame.input_count, frame.output_count);
}

void BandlimitedInterpolation::GetInputFrameCount(int* input_count,
  int* output_count, int requested_output_count) const {
  int required = FrameCount(requested_output_count, frame.output_period,
    frame.input_period, frame.output_count, frame.input_count);
  int produced = GetOutputFrameCount(required);

  while (produced < requested_output_count) {
    required = uint32_t(required) + 1;
    produced = GetOutputFrameCount(required);
  }

  *input_count = required;
  *output_count = produced;
}

template<class Input, class Output, int... Fractions>
int BandlimitedInterpolation::Resample(Output* output, int capacity,
  const Input* input, int count) {
  return detail::BandlimitedInterpolationImpl::Resample<Input, Output,
    Fractions...>(output, capacity, input, count);
}

template<class Input, class Output, int... Fractions>
int BandlimitedInterpolation::Resample(Output* const* output, int capacity,
  const Input* const* input, int count) {
  return detail::BandlimitedInterpolationImpl::Resample<Input, Output,
    Fractions...>(output, capacity, input, count);
}

#define INSTANTIATE_CLASS(Class, Input, Output, ...) \
  template int Class::Resample<Input, Output, ##__VA_ARGS__>( \
    Output*, int, const Input*, int); \
  template int Class::Resample<Input, Output, ##__VA_ARGS__>( \
    Output* const*, int, const Input* const*, int)

#define INSTANTIATE(Input, Output, ...) \
  INSTANTIATE_CLASS(detail::BandlimitedInterpolationImpl, Input, Output, \
    ##__VA_ARGS__); \
  INSTANTIATE_CLASS(BandlimitedInterpolation, Input, Output, ##__VA_ARGS__)

INSTANTIATE(short, short, 15, 15);
INSTANTIATE(short, int, 15, 23);
INSTANTIATE(short, int, 15, 31);
INSTANTIATE(short, float, 15);
INSTANTIATE(int, short, 23, 15);
INSTANTIATE(int, int, 23, 23);
INSTANTIATE(int, int, 23, 31);
INSTANTIATE(int, float, 23);
INSTANTIATE(int, short, 31, 15);
INSTANTIATE(int, int, 31, 23);
INSTANTIATE(int, int, 31, 31);
INSTANTIATE(int, float, 31);
INSTANTIATE(float, short, 15);
INSTANTIATE(float, int, 23);
INSTANTIATE(float, int, 31);
INSTANTIATE(float, float);

#undef INSTANTIATE
#undef INSTANTIATE_CLASS

}
