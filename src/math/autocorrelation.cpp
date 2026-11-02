#include "math/autocorrelation.hpp"

namespace fw::math {

Correlation64 AutoCorrelation64(double* samples, size_t first_lag,
                               size_t end_lag) {
  double mean = 0.0;

  for (size_t i = 0; i < 64; ++i) {
    mean += samples[i];
  }

  mean *= 0.015625;

  for (size_t i = 0; i < 64; ++i) {
    samples[i] -= mean;
  }

  Correlation64 result = {};
  result.size = end_lag - first_lag;

  if (result.size == 0) {
    return result;
  }

  double variance = 0.0;

  for (size_t i = 0; i < 64; ++i) {
    variance = __builtin_fma(samples[i], samples[i], variance);
  }

  variance /= 63.0;

  for (size_t lag = 0; lag < result.size; ++lag) {
    double product = 0.0;

    for (size_t i = 0; i < 64; ++i) {
      product = __builtin_fma(samples[i],
                              samples[(first_lag + lag + i) & 63], product);
    }

    result.elements[lag] = product * 0.015625 / variance;
  }

  return result;
}

}
