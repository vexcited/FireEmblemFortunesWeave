#include "nn/audio/polyphase_resampler.hpp"

namespace nn::audio {

namespace {

static uint64_t Divide(uint64_t first, uint64_t second) {
  uint64_t result;
  asm volatile("udiv %0, %1, %2" : "=r"(result)
    : "r"(first), "r"(second));
  return result;
}

static uint64_t Gcd(uint64_t first, uint64_t second) {
  uint64_t greater = first > second ? first : second;
  uint64_t smaller = first < second ? first : second;
  uint64_t divisor;

  do {
    divisor = smaller;
    smaller = greater - Divide(greater, smaller) * divisor;
    greater = divisor;
  } while (smaller);

  return divisor;
}

static double Quotient(double first, double second) {
  double result;
  asm volatile("fdiv %d0, %d1, %d2" : "=w"(result)
    : "w"(first), "w"(second));
  return result;
}

static double Product(double first, double second) {
  double result;
  asm volatile("fmul %d0, %d1, %d2" : "=w"(result)
    : "w"(first), "w"(second));
  return result;
}

static double Error(double first, double second) {
  double result;
  asm volatile("fsub %d0, %d1, %d2" : "=w"(result)
    : "w"(first), "w"(second));
  return result < 0.0 ? -result : result;
}

struct Ratio {
  uint64_t numerator;
  uint64_t denominator;
};

static Ratio Approximate(double value) {
  constexpr uint64_t scale = 260620460100000;
  double scaled = Product(value, double(scale));
  uint64_t integer;
  asm volatile("fcvtzu %0, %d1" : "=r"(integer) : "w"(scaled));
  uint64_t gcd = Gcd(integer, scale);
  uint64_t numerator = Divide(integer, gcd);
  uint64_t denominator = Divide(scale, gcd);

  while (numerator > 255 || denominator > 255) {
    numerator >>= 1;
    denominator >>= 1;
  }

  gcd = Gcd(numerator, denominator);
  return {Divide(numerator, gcd), Divide(denominator, gcd)};
}

static Ratio Reduce(uint32_t first, uint32_t second) {
  uint64_t gcd = Gcd(first, second);
  uint32_t numerator = Divide(first, gcd);
  uint32_t denominator = Divide(second, gcd);

  if (numerator > 255 || denominator > 255) {
    detail::ReducePolyphaseRatio(&numerator, &denominator);
  }

  return {numerator, denominator};
}

static double ActualRate(int source, int target) {
  uint64_t gcd = Gcd(uint32_t(source), uint32_t(target));
  uint32_t numerator = Divide(uint32_t(target), gcd);
  uint32_t denominator = Divide(uint32_t(source), gcd);

  if (numerator <= 255 && denominator <= 255) {
    return double(target);
  }

  detail::ReducePolyphaseRatio(&numerator, &denominator);
  return Quotient(Product(double(source), double(numerator)),
    double(denominator));
}

}

namespace detail {

void ReducePolyphaseRatio(uint32_t* numerator, uint32_t* denominator) {
  uint32_t first = *numerator;
  uint32_t second = *denominator;
  uint32_t largest = first > second ? first : second;
  uint32_t radius = largest < 100 ? 1 :
    (((largest >> 2) & 16383) * 5243) >> 17;

  if ((largest >> 2) > 1224) {
    radius = 48;
  }

  double ratio = Quotient(double(first), double(second));
  uint32_t best_numerator = 0;
  uint32_t best_denominator = 0;

  if (ratio >= 0.0625 && ratio <= 16.0) {
    Ratio direct = Approximate(ratio);
    Ratio inverse = Approximate(Quotient(1.0, ratio));
    double direct_error;
    double inverse_error;
    double candidate = Quotient(double(direct.numerator),
      double(direct.denominator));
    asm volatile("fabd %d0, %d1, %d2" : "=w"(direct_error)
      : "w"(ratio), "w"(candidate));
    candidate = Quotient(double(inverse.denominator),
      double(inverse.numerator));
    asm volatile("fabd %d0, %d1, %d2" : "=w"(inverse_error)
      : "w"(ratio), "w"(candidate));
    bool direct_best = direct_error < inverse_error;
    best_numerator = direct_best ? direct.numerator : inverse.denominator;
    best_denominator = direct_best ? direct.denominator : inverse.numerator;
  }

  double best_error = Error(Quotient(double(best_numerator),
    double(best_denominator)), ratio);

  for (int32_t delta = -int32_t(radius); delta <= int32_t(radius); ++delta) {
    uint64_t changed = first + uint32_t(delta);
    uint64_t gcd = Gcd(changed, second);
    uint64_t candidate_numerator = Divide(changed, gcd);

    if (candidate_numerator > 255) {
      continue;
    }

    uint64_t candidate_denominator = Divide(second, gcd);

    if (candidate_denominator > 255) {
      continue;
    }

    double error = Error(Quotient(double(uint32_t(candidate_numerator)),
      double(uint32_t(candidate_denominator))), ratio);

    if (error < best_error) {
      best_error = error;
      best_numerator = candidate_numerator;
      best_denominator = candidate_denominator;
    }
  }

  for (int32_t delta = -int32_t(radius); delta <= int32_t(radius); ++delta) {
    uint64_t changed = second + uint32_t(delta);
    uint64_t gcd = Gcd(first, changed);
    uint64_t candidate_numerator = Divide(first, gcd);

    if (candidate_numerator > 255) {
      continue;
    }

    uint64_t candidate_denominator = Divide(changed, gcd);

    if (candidate_denominator > 255) {
      continue;
    }

    double error = Error(Quotient(double(uint32_t(candidate_numerator)),
      double(uint32_t(candidate_denominator))), ratio);

    if (error < best_error) {
      best_error = error;
      best_numerator = candidate_numerator;
      best_denominator = candidate_denominator;
    }
  }

  *numerator = best_numerator;
  *denominator = best_denominator;
}

}

double computeAcutalOutputSampleRate(int source, int target) {
  return ActualRate(source, target);
}

double CalculatePolyphaseResamplerActualOutputSampleRate(int source,
  int target) {
  return ActualRate(source, target);
}

uint32_t requiredPolyphaseResamplerMemory(uint32_t channels,
  uint32_t numerator, uint32_t denominator, bool quality) {
  Ratio ratio = Reduce(numerator, denominator);
  uint32_t phases = ratio.numerator;
  uint32_t pointer_bytes = ((channels << 3) + 8) & 0xfffffff0;
  uint32_t history_bytes = channels << (quality ? 6 : 5);
  uint32_t filter_bytes = phases << (quality ? 5 : 4);
  return pointer_bytes + history_bytes + (phases << 3) +
    (filter_bytes << 1) + 48;
}

size_t GetRequiredBufferSizeForPolyphaseResampler(int source, int target,
  int channels, bool quality) {
  uint64_t size = requiredPolyphaseResamplerMemory(channels, target,
    source, quality);
  return (size + 63) & 0x1ffffffc0;
}

uint32_t estimatePolyphaseResamplerOutputBufferSize(void* opaque,
  size_t input_bytes, bool padding) {
  auto& state = *static_cast<PolyphaseResamplerState*>(opaque);
  uint32_t frame_bytes = state.channels << 1;
  uint32_t count = Divide(uint32_t(input_bytes) + frame_bytes - 1,
    frame_bytes);
  uint32_t scaled = count * state.numerator + state.denominator - 1;
  count = Divide(scaled, state.denominator);
  return count * frame_bytes + (padding ? state.channels << 2 : 0);
}

int estimatePolyphaseResamplerOutputSampleCount(void* opaque, int count,
  bool padding) {
  auto& state = *static_cast<PolyphaseResamplerState*>(opaque);
  int64_t scaled = int64_t(count) * state.numerator + state.denominator - 1;
  int64_t result;
  int64_t denominator = state.denominator;
  asm volatile("sdiv %0, %1, %2" : "=r"(result)
    : "r"(scaled), "r"(denominator));
  return uint32_t(result) + (padding ? 2 : 0);
}

int GetPolyphaseResamplerOutputSampleCount(const PolyphaseResamplerType* type,
  int count) {
  if (count < 1) {
    return 0;
  }

  return estimatePolyphaseResamplerOutputSampleCount(type->state, count,
    true);
}

}
