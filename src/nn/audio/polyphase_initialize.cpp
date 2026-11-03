#include "nn/audio/polyphase_resampler.hpp"

extern "C" void* memset(void*, int, size_t);
extern "C" double sin(double);
extern "C" double sqrt(double);

#define DECLARE_FILTER(name) \
  extern "C" uint32_t name(nn::audio::PolyphaseResamplerState*, \
    const int16_t*, int16_t*, uint32_t)

DECLARE_FILTER(interpolating1Ch16TapFilter);
DECLARE_FILTER(interpolating2Ch16TapFilter);
DECLARE_FILTER(interpolating6Ch16TapFilter);
DECLARE_FILTER(interpolating1Ch32TapFilter);
DECLARE_FILTER(interpolating2Ch32TapFilter);
DECLARE_FILTER(interpolating6Ch32TapFilter);
DECLARE_FILTER(decimating1Ch16TapFilter);
DECLARE_FILTER(decimating2Ch16TapFilter);
DECLARE_FILTER(decimating6Ch16TapFilter);
DECLARE_FILTER(decimating1Ch32TapFilter);
DECLARE_FILTER(decimating2Ch32TapFilter);
DECLARE_FILTER(decimating6Ch32TapFilter);

#undef DECLARE_FILTER

namespace nn::audio {

namespace {

static uint64_t Divide(uint64_t first, uint64_t second) {
  uint64_t result;
  asm volatile("udiv %0, %1, %2" : "=r"(result)
    : "r"(first), "r"(second));
  return result;
}

static void Reduce(uint32_t& first, uint32_t& second) {
  uint64_t greater = first > second ? first : second;
  uint64_t smaller = first < second ? first : second;
  uint64_t divisor;

  do {
    divisor = smaller;
    smaller = greater - Divide(greater, smaller) * divisor;
    greater = divisor;
  } while (smaller);

  first = Divide(first, divisor);
  second = Divide(second, divisor);

  if (first > 255 || second > 255) {
    detail::ReducePolyphaseRatio(&first, &second);
  }
}

#define BINARY_OPERATION(name, instruction) \
  static double name(double first, double second) { \
    double result; \
    asm volatile(instruction " %d0, %d1, %d2" : "=w"(result) \
      : "w"(first), "w"(second)); \
    return result; \
  }

BINARY_OPERATION(Add, "fadd")
BINARY_OPERATION(Subtract, "fsub")
BINARY_OPERATION(Multiply, "fmul")
BINARY_OPERATION(Quotient, "fdiv")
BINARY_OPERATION(Distance, "fabd")

#undef BINARY_OPERATION

static double Root(double value) {
  double result;
  asm volatile("fsqrt %d0, %d1" : "=w"(result) : "w"(value));
  return result != result ? sqrt(value) : result;
}

static double Bessel(double half) {
  double sum = 0.0;
  double term = 1.0;
  double previous;
  uint32_t iteration = 2;

  do {
    previous = term;
    sum = Add(sum, term);
    double quotient = Quotient(half, double(iteration - 1));
    term = Multiply(previous, Multiply(quotient, quotient));
    ++iteration;
  } while (iteration <= 5 || Distance(term, previous) > 1e-7);

  return sum;
}

static double Coefficient(uint32_t point, uint32_t count, double center,
  double divisor, double beta, double normalization) {
  double window = 0.0;

  if (point < count) {
    double position = Add(Quotient(double(point * 2), double(count - 1)),
      -1.0);
    double root = Root(Subtract(1.0, Multiply(position, position)));
    double half = Multiply(Multiply(beta, root), 0.5);
    window = Multiply(normalization, Bessel(half));
  }

  double angle = Multiply(Quotient(Subtract(double(point), center), divisor),
    0x1.921fb54442d18p+1);
  double absolute;
  asm volatile("fabs %d0, %d1" : "=w"(absolute) : "w"(angle));
  double sinc = absolute >= 0.01 ? Quotient(sin(angle), angle) :
    Add(Quotient(Multiply(angle, angle), -6.0), 1.0);
  return Multiply(window, sinc);
}

static int16_t Quantize(double value) {
  double factor = 32768.0;
  double offset = 0.5;
  double rounded;
  int32_t integer;
  asm volatile("fmadd %d0, %d1, %d2, %d3"
    : "=w"(rounded) : "w"(value), "w"(factor), "w"(offset));
  asm volatile("fcvtzs %w0, %d1" : "=r"(integer) : "w"(rounded));

  if (integer < -32768) {
    return -32767;
  }

  return integer < 32768 ? integer : 32767;
}

static PolyphaseProcess Select(const PolyphaseResamplerState& state) {
  if (state.numerator == state.denominator) {
    return detail::IdentityPolyphase;
  }

  bool interpolate = state.numerator > state.denominator;
  unsigned index = state.channels == 1 ? 0 : state.channels == 2 ? 1 : 2;

  if ((state.channels == 1 || state.channels == 2 || state.channels == 6) &&
    (state.taps == 16 || state.taps == 32)) {
    static constexpr PolyphaseProcess filters[4][3] = {
      {interpolating1Ch16TapFilter, interpolating2Ch16TapFilter,
        interpolating6Ch16TapFilter},
      {interpolating1Ch32TapFilter, interpolating2Ch32TapFilter,
        interpolating6Ch32TapFilter},
      {decimating1Ch16TapFilter, decimating2Ch16TapFilter,
        decimating6Ch16TapFilter},
      {decimating1Ch32TapFilter, decimating2Ch32TapFilter,
        decimating6Ch32TapFilter}
    };
    return filters[(interpolate ? 0 : 2) + (state.taps == 32)][index];
  }

  return interpolate ? detail::InterpolatePolyphase :
    detail::DecimatePolyphase;
}

}

void initializePolyphaseResampler(void* opaque, uint32_t numerator,
  uint32_t denominator, uint32_t channels, bool quality, float gain) {
  Reduce(numerator, denominator);

  if (gain > 1.0f) {
    gain = 1.0f;
  }

  if (gain < 0.0f) {
    gain = 0.0f;
  }

  double factor = numerator < denominator ? (quality ? 1.075 : 1.1) :
    (quality ? 1.089 : 1.11);
  uint32_t largest = numerator > denominator ? numerator : denominator;
  uint8_t phases[512];
  memset(phases + 1, 0, 511);
  uint8_t previous = 0;

  for (uint32_t phase = 0; phase < numerator; ++phase) {
    uint32_t index = phase * denominator;
    uint32_t quotient = Divide(index, numerator);
    phases[2 * phase] = quotient - previous;
    phases[2 * phase + 1] = index - quotient * numerator;
    previous = quotient;
  }

  phases[0] = denominator - previous;
  double divisor = Multiply(factor, double(largest));
  double beta = quality ? 0x1.543260850347cp+3 : 0x1.aa40549f658c3p+2;
  double bessel = Bessel(Multiply(beta, 0.5));
  uint32_t total = numerator << (quality ? 5 : 4);
  uint32_t taps = Divide(total + numerator - 1, numerator);
  auto& state = *static_cast<PolyphaseResamplerState*>(opaque);
  state.numerator = numerator;
  state.denominator = denominator;
  state.consumed = 0;
  state.next_consumed = phases[0];
  state.reserved_4 = 0;
  state.phase = 0;
  state.remainder = 0;
  state.taps = taps;
  state.channels = channels;

  if (numerator > denominator) {
    state.lower = 0;
    state.upper = 1;
    state.increment = denominator;
  }
  else if (numerator < denominator) {
    uint32_t upper = Divide(numerator - 1 + denominator, numerator);
    state.upper = upper;
    state.lower = Divide(denominator, numerator);
    state.increment = denominator - upper * numerator;
  }

  state.process = Select(state);
  state.history = reinterpret_cast<int16_t**>(&state + 1);
  int16_t* cursor = reinterpret_cast<int16_t*>(state.history + channels);
  uint32_t aligned_taps = (taps + 3) & ~3u;

  for (uint32_t channel = 0; channel < channels; ++channel) {
    state.history[channel] = cursor;

    for (uint32_t sample = 0; sample < aligned_taps; ++sample) {
      *cursor++ = 0;
    }
  }

  state.coefficients = reinterpret_cast<const int16_t**>(cursor);
  cursor = reinterpret_cast<int16_t*>(state.coefficients + numerator);

  for (uint32_t phase = 0; phase < numerator; ++phase) {
    state.coefficients[phase] = cursor;

    for (uint32_t sample = 0; sample < aligned_taps; ++sample) {
      *cursor++ = 0;
    }
  }

  if (numerator && numerator <= total + numerator - 1) {
    double center = Multiply(Add(double(total), -1.0), 0.5);
    double normalization = Quotient(1.0, bessel);

    for (uint32_t phase = 0; phase < numerator; ++phase) {
      double values[256];
      memset(values, 0, sizeof(values));
      uint32_t point = phases[2 * phase + 1];

      for (uint32_t sample = 0; sample < taps; ++sample) {
        values[taps - sample - 1] = Coefficient(point, total, center,
          divisor, beta, normalization);
        point += numerator;
      }

      double sum = 0.0;

      for (uint32_t sample = 0; sample < taps; ++sample) {
        sum = Add(sum, values[sample]);
      }

      double scale = Quotient(double(gain), sum);

      for (uint32_t sample = 0; sample < taps; ++sample) {
        values[sample] = Multiply(scale, values[sample]);
      }

      auto* coefficients = const_cast<int16_t*>(state.coefficients[phase]);

      for (uint32_t sample = 0; sample < taps; ++sample) {
        coefficients[sample] = Quantize(values[sample]);
      }
    }
  }
}

uint32_t InitializePolyphaseResampler(PolyphaseResamplerType* type,
  void* buffer, size_t buffer_size, int source, int target, int channels,
  bool quality, float gain) {
  uint32_t numerator = target;
  uint32_t denominator = source;
  Reduce(numerator, denominator);
  type->state = static_cast<PolyphaseResamplerState*>(buffer);
  type->buffer_size = buffer_size;
  type->source_rate = source;
  type->target_rate = target;
  type->flags = uint32_t(channels) | 128;
  initializePolyphaseResampler(buffer, target, source, channels, quality,
    gain);
  return 0;
}

}
