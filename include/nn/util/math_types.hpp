#pragma once

#include <cmath>

namespace nn::util {

constexpr float FloatPi = 3.14159265358979323846f;
constexpr float Float2Pi = 6.28318530717958647692f;
constexpr float FloatPiDivided2 = 1.57079632679489661923f;
constexpr float Float1Divided2Pi = 0.15915494309189533577f;

namespace detail {

extern const float SinCoefficients[5];
extern const float CosCoefficients[5];

inline float ReduceRadian(float radian) {
  return radian - Float2Pi * std::round(radian * Float1Divided2Pi);
}

}

// The argument is wrapped into [-pi, pi], then folded into
// [-pi / 2, pi / 2] before the polynomial evaluation.
inline float SinEst(float radian) {
  float x = detail::ReduceRadian(radian);

  if (x > FloatPiDivided2) {
    x = FloatPi - x;
  }
  else if (x < -FloatPiDivided2) {
    x = -FloatPi - x;
  }

  const float* c = detail::SinCoefficients;
  float x2 = x * x;
  float s = c[1] - c[0] * x2;
  s = s * x2 - c[2];
  s = c[3] + s * x2;
  s = s * x2 - c[4];
  return x * (1.0f + s * x2);
}

inline float CosEst(float radian) {
  float x = detail::ReduceRadian(radian);
  float sign = 1.0f;

  if (x > FloatPiDivided2) {
    x = FloatPi - x;
    sign = -1.0f;
  }
  else if (x < -FloatPiDivided2) {
    x = -FloatPi - x;
    sign = -1.0f;
  }

  const float* c = detail::CosCoefficients;
  float x2 = x * x;
  float s = c[1] - c[0] * x2;
  s = s * x2 - c[2];
  s = c[3] + s * x2;
  s = s * x2 - c[4];
  return sign * (1.0f + s * x2);
}

}
