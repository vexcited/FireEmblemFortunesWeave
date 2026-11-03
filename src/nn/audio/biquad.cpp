#include "nn/audio/biquad.hpp"

#include <arm_neon.h>

namespace nn::audio::dsp {
namespace {

static float Add(float first, float second) {
  float result;
  asm volatile("fadd %s0, %s1, %s2"
    : "=w"(result) : "w"(first), "w"(second));
  return result;
}

static float Multiply(float first, float second) {
  float result;
  asm volatile("fmul %s0, %s1, %s2"
    : "=w"(result) : "w"(first), "w"(second));
  return result;
}

static float MultiplyAdd(float first, float second, float addend) {
  float result;
  asm volatile("fmadd %s0, %s1, %s2, %s3"
    : "=w"(result) : "w"(first), "w"(second), "w"(addend));
  return result;
}

static float32x4_t Add(float32x4_t first, float32x4_t second) {
  float32x4_t result;
  asm volatile("fadd %0.4s, %1.4s, %2.4s"
    : "=w"(result) : "w"(first), "w"(second));
  return result;
}

static float Subtract(float first, float second) {
  float result;
  asm volatile("fsub %s0, %s1, %s2"
    : "=w"(result) : "w"(first), "w"(second));
  return result;
}

static float32x4_t Subtract(float32x4_t first, float32x4_t second) {
  float32x4_t result;
  asm volatile("fsub %0.4s, %1.4s, %2.4s"
    : "=w"(result) : "w"(first), "w"(second));
  return result;
}

static float32x4_t Multiply(float32x4_t first, float32x4_t second) {
  float32x4_t result;
  asm volatile("fmul %0.4s, %1.4s, %2.4s"
    : "=w"(result) : "w"(first), "w"(second));
  return result;
}

static float32x4_t MultiplyAdd(float32x4_t first, float32x4_t second,
  float32x4_t result) {
  asm volatile("fmla %0.4s, %1.4s, %2.4s"
    : "+w"(result) : "w"(first), "w"(second));
  return result;
}

static float32x4_t Response(float first, float next, float third,
  float fourth, float feedbackOne, float feedbackTwo, bool thirdBefore,
  bool fourthBefore) {
  float second = MultiplyAdd(feedbackOne, first, next);
  float value = MultiplyAdd(feedbackOne, second,
    Multiply(feedbackTwo, first));
  third = thirdBefore ? Add(third, value) : Add(value, third);
  value = MultiplyAdd(feedbackOne, third, Multiply(feedbackTwo, second));
  fourth = fourthBefore ? Add(fourth, value) : Add(value, fourth);
  return {first, second, third, fourth};
}

static float32x4_t FirstResponse(float first, float second, float third,
  float fourth, float feedback) {
  second = MultiplyAdd(feedback, first, second);
  third = MultiplyAdd(feedback, second, third);
  fourth = MultiplyAdd(feedback, third, fourth);
  return {first, second, third, fourth};
}

struct Coefficients {
  float32x4_t input[4];
  float32x4_t history[4];
  bool firstOrder;

  Coefficients() = default;

  Coefficients(const float* numerator, const float* feedback,
    bool firstOrder = false) : firstOrder(firstOrder) {
    float first = feedback[0];

    if (firstOrder) {
      input[0] = FirstResponse(numerator[0], 0.0f, 0.0f, 0.0f, first);
      input[1] = FirstResponse(0.0f, numerator[0], 0.0f, 0.0f, first);
      input[2] = FirstResponse(0.0f, 0.0f, numerator[0], 0.0f, first);
      input[3] = FirstResponse(0.0f, 0.0f, 0.0f, numerator[0], first);
      history[2] = FirstResponse(first, 0.0f, 0.0f, 0.0f, first);
      return;
    }

    float second = feedback[1];
    input[0] = Response(numerator[0], numerator[1], numerator[2], 0.0f,
      first, second, true, false);
    input[1] = Response(0.0f, numerator[0], numerator[1], numerator[2],
      first, second, true, true);
    input[2] = Response(0.0f, 0.0f, numerator[0], numerator[1],
      first, second, true, true);
    input[3] = Response(0.0f, 0.0f, 0.0f, numerator[0],
      first, second, false, true);
    history[0] = Response(numerator[1], numerator[2], 0.0f, 0.0f,
      first, second, false, false);
    history[1] = Response(numerator[2], 0.0f, 0.0f, 0.0f,
      first, second, false, false);
    history[2] = Response(first, second, 0.0f, 0.0f,
      first, second, false, false);
    history[3] = Response(second, 0.0f, 0.0f, 0.0f,
      first, second, false, false);
  }

  float32x4_t Apply(float32x4_t samples, float32x4_t previous,
    bool coefficientFirst) const {
    auto result = Multiply(input[3], vdupq_laneq_f32(samples, 3));
    result = MultiplyAdd(input[2], vdupq_laneq_f32(samples, 2), result);
    result = MultiplyAdd(input[1], vdupq_laneq_f32(samples, 1), result);
    result = MultiplyAdd(input[0], vdupq_laneq_f32(samples, 0), result);

    unsigned start = firstOrder ? 2 : 0;
    unsigned end = firstOrder ? 3 : 4;

    for (unsigned index = start; index < end; ++index) {
      auto value = vdupq_n_f32(previous[index]);
      result = coefficientFirst ? MultiplyAdd(history[index], value, result) :
        MultiplyAdd(value, history[index], result);
    }

    return result;
  }
};

static float32x4_t Advance(float32x4_t previous, float32x4_t input,
  float32x4_t output, unsigned count) {
  return {input[count - 1], count > 1 ? input[count - 2] : previous[0],
    output[count - 1], count > 1 ? output[count - 2] : previous[2]};
}

static bool EqualZero(float value) {
  unsigned result;
  asm volatile("fcmp %s1, #0.0\n cset %w0, eq"
    : "=r"(result) : "w"(value) : "cc");
  return result != 0;
}

static float Float(int value) {
  float result;
  asm volatile("scvtf %s0, %w1" : "=w"(result) : "r"(value));
  return result;
}

static float32x4_t Float(int32x4_t value) {
  float32x4_t result;
  asm volatile("scvtf %0.4s, %1.4s" : "=w"(result) : "w"(value));
  return result;
}

static int Integer(float value) {
  int result;
  asm volatile("fcvtzs %w0, %s1" : "=r"(result) : "w"(value));
  return result;
}

static int32x4_t Integer(float32x4_t value) {
  int32x4_t result;
  asm volatile("fcvtzs %0.4s, %1.4s" : "=w"(result) : "w"(value));
  return result;
}

static int Fixed(float value) {
  int result;
  asm volatile("fcvtzs %w0, %s1, #14" : "=r"(result) : "w"(value));
  return result;
}

template<bool Double, bool Ramp>
static int Mix(int* output, const int* input, const float* firstNumerator,
  const float* firstFeedback, BiquadFilterState* firstState,
  const float* secondNumerator, const float* secondFeedback,
  BiquadFilterState* secondState, int count, float gain, float step) {
  uint32_t previousLast = 0;

  if constexpr (Ramp) {
    previousLast = output[count - 1];
  }

  bool fast = ((uintptr_t(output) | uintptr_t(input)) & 31) == 0 &&
    count % 16 == 0;

  if (fast && count == 0) {
    return 0;
  }

  Coefficients first(firstNumerator, firstFeedback);
  Coefficients second;
  auto previousFirst = __builtin_bit_cast(float32x4_t, *firstState);
  float32x4_t previousSecond = {};

  if constexpr (Double) {
    second = Coefficients(secondNumerator, secondFeedback);
    previousSecond = __builtin_bit_cast(float32x4_t, *secondState);
  }

  float32x4_t gains = vdupq_n_f32(gain);
  float32x4_t increment = {};
  unsigned blocks = unsigned(count) / 4;
  unsigned group = fast ? 4 : Double ? 1 : 2;
  unsigned grouped = blocks / group * group;

  if constexpr (Ramp) {
    float secondGain = Add(gain, step);
    float thirdGain = Add(step, secondGain);
    float fourthGain = Add(step, thirdGain);
    gains = {gain, secondGain, thirdGain, fourthGain};

    if (blocks != 0) {
      increment = vdupq_n_f32(Multiply(step, 4.0f));
    }
  }

  for (unsigned block = 0; block < blocks; ++block) {
    unsigned offset = block * 4;
    auto samples = Float(vld1q_s32(input + offset));
    bool coefficientFirst = block < grouped && block % group != 0;
    auto result = first.Apply(samples, previousFirst, coefficientFirst);
    previousFirst = Advance(previousFirst, samples, result, 4);

    if constexpr (Double) {
      auto intermediate = result;
      result = second.Apply(intermediate, previousSecond, coefficientFirst);
      previousSecond = Advance(previousSecond, intermediate, result, 4);
    }

    auto destination = Float(vld1q_s32(output + offset));

    if constexpr (Ramp) {
      destination = MultiplyAdd(gains, result, destination);
      gains = Add(increment, gains);
    }
    else {
      destination = MultiplyAdd(result, gains, destination);
    }

    vst1q_s32(output + offset, Integer(destination));
  }

  unsigned remaining = unsigned(count) & 3;

  if (remaining != 0) {
    float32x4_t samples = {};

    for (unsigned index = 0; index < remaining; ++index) {
      samples[index] = Float(input[blocks * 4 + index]);
    }

    auto result = first.Apply(samples, previousFirst, false);
    previousFirst = Advance(previousFirst, samples, result, remaining);

    if constexpr (Double) {
      float32x4_t rounded = {};

      for (unsigned index = 0; index < remaining; ++index) {
        float value = Ramp ? MultiplyAdd(result[index], 1.0f, 0.0f) :
          Add(result[index], 0.0f);
        rounded[index] = Float(Integer(value));
      }

      result = second.Apply(rounded, previousSecond, false);
      previousSecond = Advance(previousSecond, rounded, result, remaining);
    }

    for (unsigned index = 0; index < remaining; ++index) {
      unsigned offset = blocks * 4 + index;
      output[offset] = Integer(MultiplyAdd(result[index], gains[index],
        Float(output[offset])));
    }
  }

  *firstState = __builtin_bit_cast(BiquadFilterState, previousFirst);

  if constexpr (Double) {
    *secondState = __builtin_bit_cast(BiquadFilterState, previousSecond);
  }

  if constexpr (Ramp) {
    return int32_t(uint32_t(output[count - 1]) - previousLast);
  }
  else {
    return 0;
  }
}

static float32x4_t ApproximateRoot(float32x4_t value) {
  auto adjusted = Add(value, vdupq_n_f32(
    __builtin_bit_cast(float, uint32_t(0x34000000))));
  float32x4_t estimate;
  asm volatile("frsqrte %0.4s, %1.4s"
    : "=w"(estimate) : "w"(adjusted));
  auto product = Multiply(adjusted, estimate);
  float32x4_t correction;
  asm volatile("frsqrts %0.4s, %1.4s, %2.4s"
    : "=w"(correction) : "w"(estimate), "w"(product));
  return Multiply(adjusted, Multiply(estimate, correction));
}

template<bool SquareRoot, bool PrepareEmpty = false>
static void CrossFade(int* output, const int* input,
  const float* oldNumerator, const float* oldFeedback,
  const float* newNumerator, const float* newFeedback,
  BiquadFilterState* state, int count, float step) {
  if (count < 4 && !PrepareEmpty) {
    *state = {};
    return;
  }

  float second = Add(step, 0.0f);
  float third = Add(step, second);
  float fourth = Add(step, third);
  float32x4_t phase = {0.0f, second, third, fourth};
  auto increment = vdupq_n_f32(Multiply(step, 4.0f));
  float32x4_t reverse = {};

  if constexpr (SquareRoot) {
    second = Subtract(1.0f, step);
    third = Subtract(second, step);
    fourth = Subtract(third, step);
    reverse = {1.0f, second, third, fourth};
  }

  if (count < 4) {
    *state = {};
    return;
  }

  Coefficients oldCoefficients(oldNumerator, oldFeedback);
  Coefficients newCoefficients(newNumerator, newFeedback);
  auto oldHistory = __builtin_bit_cast(float32x4_t, *state);
  float32x4_t newHistory = {};

  for (int block = 0; block < count / 4; ++block) {
    auto samples = Float(vld1q_s32(input + block * 4));
    auto newResult = newCoefficients.Apply(samples, newHistory, false);
    auto oldResult = oldCoefficients.Apply(samples, oldHistory, false);
    newHistory = Advance(newHistory, samples, newResult, 4);
    oldHistory = Advance(oldHistory, samples, oldResult, 4);
    float32x4_t result;

    if constexpr (SquareRoot) {
      auto newWeight = ApproximateRoot(phase);
      auto oldWeight = ApproximateRoot(reverse);
      result = MultiplyAdd(oldWeight, oldResult,
        Multiply(newWeight, newResult));
      reverse = Subtract(reverse, increment);
    }
    else {
      result = MultiplyAdd(phase, Subtract(newResult, oldResult), oldResult);
    }

    phase = Add(increment, phase);
    vst1q_s32(output + block * 4, Integer(result));
  }

  *state = __builtin_bit_cast(BiquadFilterState, newHistory);
}

}

void ApplyBiquadFilterFloat(float* output, const float* input,
  const float* numerator, const float* feedback, BiquadFilterState* state,
  int count) {
  Coefficients coefficients(numerator, feedback);
  auto previous = __builtin_bit_cast(float32x4_t, *state);
  unsigned blocks = unsigned(count) / 4;

  for (unsigned block = 0; block < blocks; ++block) {
    auto samples = vld1q_f32(input + block * 4);
    bool coefficientFirst = block < (blocks & ~3u) && block % 4 != 0;
    auto result = coefficients.Apply(samples, previous, coefficientFirst);
    previous = Advance(previous, samples, result, 4);
    vst1q_f32(output + block * 4, result);
  }

  unsigned remaining = unsigned(count) & 3;

  if (remaining != 0) {
    float32x4_t samples = {};

    for (unsigned index = 0; index < remaining; ++index) {
      samples[index] = input[blocks * 4 + index];
    }

    auto result = coefficients.Apply(samples, previous, false);
    previous = Advance(previous, samples, result, remaining);

    for (unsigned index = 0; index < remaining; ++index) {
      output[blocks * 4 + index] = result[index];
    }
  }

  *state = __builtin_bit_cast(BiquadFilterState, previous);
}

void ApplyBiquadFilterFloat(int* output, const int* input,
  const float* numerator, const float* feedback, BiquadFilterState* state,
  int count) {
  bool firstOrder = EqualZero(numerator[1]) && EqualZero(numerator[2]) &&
    EqualZero(feedback[1]);

  if (count == 0) {
    return;
  }

  Coefficients coefficients(numerator, feedback, firstOrder);
  auto previous = __builtin_bit_cast(float32x4_t, *state);
  unsigned blocks = unsigned(count) / 4;
  unsigned group = firstOrder || count % 16 == 0 ? 4 : 2;
  unsigned grouped = blocks / group * group;

  for (unsigned block = 0; block < blocks; ++block) {
    auto samples = Float(vld1q_s32(input + block * 4));
    bool coefficientFirst = block < grouped && block % group != 0;
    auto result = coefficients.Apply(samples, previous, coefficientFirst);
    previous = Advance(previous, samples, result, 4);
    vst1q_s32(output + block * 4, Integer(result));
  }

  unsigned remaining = unsigned(count) & 3;

  if (remaining != 0) {
    float32x4_t samples = {};

    for (unsigned index = 0; index < remaining; ++index) {
      samples[index] = Float(input[blocks * 4 + index]);
    }

    auto result = coefficients.Apply(samples, previous, false);
    previous = Advance(previous, samples, result, remaining);

    for (unsigned index = 0; index < remaining; ++index) {
      output[blocks * 4 + index] = Integer(result[index]);
    }
  }

  *state = __builtin_bit_cast(BiquadFilterState, previous);
}

void ApplyDoubleBiquadFilterFloat(int* output, const int* input,
  const float* firstNumerator, const float* firstFeedback,
  BiquadFilterState* firstState, const float* secondNumerator,
  const float* secondFeedback, BiquadFilterState* secondState, int count) {
  if (count == 0) {
    return;
  }

  Coefficients first(firstNumerator, firstFeedback);
  Coefficients second(secondNumerator, secondFeedback);
  auto previousFirst = __builtin_bit_cast(float32x4_t, *firstState);
  auto previousSecond = __builtin_bit_cast(float32x4_t, *secondState);
  unsigned blocks = unsigned(count) / 4;

  for (unsigned block = 0; block < blocks; ++block) {
    auto samples = Float(vld1q_s32(input + block * 4));
    bool coefficientFirst = count % 16 == 0 && block % 4 != 0;
    auto intermediate = first.Apply(samples, previousFirst, coefficientFirst);
    previousFirst = Advance(previousFirst, samples, intermediate, 4);
    auto rounded = Float(Integer(intermediate));
    auto result = second.Apply(rounded, previousSecond, coefficientFirst);
    previousSecond = Advance(previousSecond, rounded, result, 4);
    vst1q_s32(output + block * 4, Integer(result));
  }

  unsigned remaining = unsigned(count) & 3;

  if (remaining != 0) {
    float32x4_t samples = {};

    for (unsigned index = 0; index < remaining; ++index) {
      samples[index] = Float(input[blocks * 4 + index]);
    }

    auto intermediate = first.Apply(samples, previousFirst, false);
    previousFirst = Advance(previousFirst, samples, intermediate, remaining);
    float32x4_t rounded = {};

    for (unsigned index = 0; index < remaining; ++index) {
      rounded[index] = Float(Integer(intermediate[index]));
    }

    auto result = second.Apply(rounded, previousSecond, false);
    previousSecond = Advance(previousSecond, rounded, result, remaining);

    for (unsigned index = 0; index < remaining; ++index) {
      output[blocks * 4 + index] = Integer(result[index]);
    }
  }

  *firstState = __builtin_bit_cast(BiquadFilterState, previousFirst);
  *secondState = __builtin_bit_cast(BiquadFilterState, previousSecond);
}

void ApplyBiquadFilterInt(int* output, const int* input,
  const float* numerator, const float* feedback, BiquadFilterState* state,
  int count) {
  auto accumulators = __builtin_bit_cast(int64x2_t, *state);

  if (count != 0) {
    int32x2_t leading = {Fixed(numerator[0]), 0};
    int32x2_t trailing = {Fixed(numerator[1]), Fixed(numerator[2])};
    int32x2_t recurrent = {Fixed(feedback[0]), Fixed(feedback[1])};

    for (unsigned index = 0; index < unsigned(count); ++index) {
      auto sample = vdup_n_s32(input[index]);
      accumulators = vmlal_s32(accumulators, leading, sample);
      int32x2_t result;
      asm volatile("sqrshrn %0.2s, %1.2d, #14"
        : "=w"(result) : "w"(accumulators));
      output[index] = vget_lane_s32(result, 0);
      accumulators = {vgetq_lane_s64(accumulators, 1), 0};
      accumulators = vmlal_s32(accumulators, trailing, sample);
      accumulators = vmlal_s32(accumulators, recurrent,
        vdup_lane_s32(result, 0));
    }
  }

  *state = __builtin_bit_cast(BiquadFilterState, accumulators);
}

void ApplyBiquadFilterAndMix(int* output, const int* input,
  const float* numerator, const float* feedback, BiquadFilterState* state,
  int count, float gain) {
  Mix<false, false>(output, input, numerator, feedback, state, nullptr,
    nullptr, nullptr, count, gain, 0.0f);
}

int ApplyBiquadFilterAndMixRamp(int* output, const int* input,
  const float* numerator, const float* feedback, BiquadFilterState* state,
  int count, float gain, float step) {
  return Mix<false, true>(output, input, numerator, feedback, state,
    nullptr, nullptr, nullptr, count, gain, step);
}

void ApplyDoubleBiquadFilterAndMix(int* output, const int* input,
  const float* firstNumerator, const float* firstFeedback,
  BiquadFilterState* firstState, const float* secondNumerator,
  const float* secondFeedback, BiquadFilterState* secondState, int count,
  float gain) {
  Mix<true, false>(output, input, firstNumerator, firstFeedback, firstState,
    secondNumerator, secondFeedback, secondState, count, gain, 0.0f);
}

int ApplyDoubleBiquadFilterAndMixRamp(int* output, const int* input,
  const float* firstNumerator, const float* firstFeedback,
  BiquadFilterState* firstState, const float* secondNumerator,
  const float* secondFeedback, BiquadFilterState* secondState, int count,
  float gain, float step) {
  return Mix<true, true>(output, input, firstNumerator, firstFeedback,
    firstState, secondNumerator, secondFeedback, secondState, count, gain,
    step);
}

void ApplyBiquadFilterCrossFadeLinear(int* output, const int* input,
  const float* oldNumerator, const float* oldFeedback,
  const float* newNumerator, const float* newFeedback,
  BiquadFilterState* state, int count, float step) {
  CrossFade<false>(output, input, oldNumerator, oldFeedback, newNumerator,
    newFeedback, state, count, step);
}

void ApplyDoubleBiquadFilterCrossFadeLinear(int* output, const int* input,
  const float* oldFirstNumerator, const float* oldFirstFeedback,
  const float* newFirstNumerator, const float* newFirstFeedback,
  BiquadFilterState* firstState, const float* oldSecondNumerator,
  const float* oldSecondFeedback, const float* newSecondNumerator,
  const float* newSecondFeedback, BiquadFilterState* secondState,
  int count, float step) {
  CrossFade<false, true>(output, input, oldFirstNumerator, oldFirstFeedback,
    newFirstNumerator, newFirstFeedback, firstState, count, step);
  CrossFade<false, true>(output, output, oldSecondNumerator, oldSecondFeedback,
    newSecondNumerator, newSecondFeedback, secondState, count, step);
}

void ApplyBiquadFilterCrossFadeSqrt(int* output, const int* input,
  const float* oldNumerator, const float* oldFeedback,
  const float* newNumerator, const float* newFeedback,
  BiquadFilterState* state, int count, float step) {
  CrossFade<true>(output, input, oldNumerator, oldFeedback, newNumerator,
    newFeedback, state, count, step);
}

void ApplyDoubleBiquadFilterCrossFadeSqrt(int* output, const int* input,
  const float* oldFirstNumerator, const float* oldFirstFeedback,
  const float* newFirstNumerator, const float* newFirstFeedback,
  BiquadFilterState* firstState, const float* oldSecondNumerator,
  const float* oldSecondFeedback, const float* newSecondNumerator,
  const float* newSecondFeedback, BiquadFilterState* secondState,
  int count, float step) {
  CrossFade<true, true>(output, input, oldFirstNumerator, oldFirstFeedback,
    newFirstNumerator, newFirstFeedback, firstState, count, step);
  CrossFade<true, true>(output, output, oldSecondNumerator, oldSecondFeedback,
    newSecondNumerator, newSecondFeedback, secondState, count, step);
}

}
