#pragma once

#include <stdint.h>

namespace nn::audio {

struct BiquadFilterState {
  uint32_t storage[4];
};

static_assert(sizeof(BiquadFilterState) == 16);

namespace dsp {

void ApplyBiquadFilterFloat(float* output, const float* input,
  const float* numerator, const float* feedback, BiquadFilterState* state,
  int count);
void ApplyBiquadFilterFloat(int* output, const int* input,
  const float* numerator, const float* feedback, BiquadFilterState* state,
  int count);
void ApplyDoubleBiquadFilterFloat(int* output, const int* input,
  const float* firstNumerator, const float* firstFeedback,
  BiquadFilterState* firstState, const float* secondNumerator,
  const float* secondFeedback, BiquadFilterState* secondState, int count);
void ApplyBiquadFilterAndMix(int* output, const int* input,
  const float* numerator, const float* feedback, BiquadFilterState* state,
  int count, float gain);
int ApplyBiquadFilterAndMixRamp(int* output, const int* input,
  const float* numerator, const float* feedback, BiquadFilterState* state,
  int count, float gain, float step);
void ApplyDoubleBiquadFilterAndMix(int* output, const int* input,
  const float* firstNumerator, const float* firstFeedback,
  BiquadFilterState* firstState, const float* secondNumerator,
  const float* secondFeedback, BiquadFilterState* secondState, int count,
  float gain);
int ApplyDoubleBiquadFilterAndMixRamp(int* output, const int* input,
  const float* firstNumerator, const float* firstFeedback,
  BiquadFilterState* firstState, const float* secondNumerator,
  const float* secondFeedback, BiquadFilterState* secondState, int count,
  float gain, float step);
void ApplyBiquadFilterCrossFadeLinear(int* output, const int* input,
  const float* oldNumerator, const float* oldFeedback,
  const float* newNumerator, const float* newFeedback,
  BiquadFilterState* state, int count, float step);
void ApplyDoubleBiquadFilterCrossFadeLinear(int* output, const int* input,
  const float* oldFirstNumerator, const float* oldFirstFeedback,
  const float* newFirstNumerator, const float* newFirstFeedback,
  BiquadFilterState* firstState, const float* oldSecondNumerator,
  const float* oldSecondFeedback, const float* newSecondNumerator,
  const float* newSecondFeedback, BiquadFilterState* secondState,
  int count, float step);
void ApplyBiquadFilterCrossFadeSqrt(int* output, const int* input,
  const float* oldNumerator, const float* oldFeedback,
  const float* newNumerator, const float* newFeedback,
  BiquadFilterState* state, int count, float step);
void ApplyDoubleBiquadFilterCrossFadeSqrt(int* output, const int* input,
  const float* oldFirstNumerator, const float* oldFirstFeedback,
  const float* newFirstNumerator, const float* newFirstFeedback,
  BiquadFilterState* firstState, const float* oldSecondNumerator,
  const float* oldSecondFeedback, const float* newSecondNumerator,
  const float* newSecondFeedback, BiquadFilterState* secondState,
  int count, float step);
void ApplyBiquadFilterInt(int* output, const int* input,
  const float* numerator, const float* feedback, BiquadFilterState* state,
  int count);

}
}
