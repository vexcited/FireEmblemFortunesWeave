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
extern const float AtanCoefficients[8];

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

// The arctangent of a ratio between -1 and 1.
[[gnu::always_inline]] inline float AtanEstCore(float t) {
  const float* c = detail::AtanCoefficients;
  const float t2 = t * t;
  float s = c[0] * t2 - c[1];
  s = s * t2 + c[2];
  s = s * t2 - c[3];
  s = s * t2 + c[4];
  s = s * t2 - c[5];
  s = s * t2 + c[6];
  s = s * t2 - c[7];
  return t * (s * t2 + 1.0f);
}

// The arc cosine through the arctangent of the sine over the cosine or its
// inverse, whichever stays between -1 and 1.
[[gnu::always_inline]] inline float AcosEst(float x) {
  const float y = std::sqrt(1.0f - x * x);
  if (x >= 0.0f) {
    if (x > 0.707106769f) {
      return AtanEstCore(y / x);
    }
    return FloatPiDivided2 - AtanEstCore(x / y);
  }
  if (x < -0.707106769f) {
    return FloatPi - AtanEstCore(-y / x);
  }
  return AtanEstCore(-x / y) + FloatPiDivided2;
}

// The sine and cosine of one reduction.
[[gnu::always_inline]] inline void SinCosEst(float* pSin, float* pCos,
  float radian) {
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

  const float x2 = x * x;
  const float* c = detail::SinCoefficients;
  float s = c[1] - c[0] * x2;
  s = s * x2 - c[2];
  s = c[3] + s * x2;
  s = s * x2 - c[4];
  *pSin = x * (1.0f + s * x2);

  c = detail::CosCoefficients;
  s = c[1] - c[0] * x2;
  s = s * x2 - c[2];
  s = c[3] + s * x2;
  s = s * x2 - c[4];
  *pCos = sign * (1.0f + s * x2);
}

[[gnu::always_inline]] inline float TanEst(float radian) {
  float s;
  float c;
  SinCosEst(&s, &c, radian);
  return s / c;
}

[[gnu::always_inline]] inline float AtanEst(float x) {
  if (x >= 0.0f) {
    if (x > 1.0f) {
      return FloatPiDivided2 - AtanEstCore(1.0f / x);
    }
    return AtanEstCore(x);
  }
  if (x < -1.0f) {
    return AtanEstCore(-1.0f / x) - FloatPiDivided2;
  }
  return AtanEstCore(x);
}

// The arctangent of the smaller over the larger side, by quadrant.
[[gnu::always_inline]] inline float Atan2Est(float y, float x) {
  if (y == 0.0f && x == 0.0f) {
    return 0.0f;
  }
  if (x >= 0.0f) {
    if (y >= 0.0f) {
      if (x >= y) {
        return AtanEstCore(y / x);
      }
      return FloatPiDivided2 - AtanEstCore(x / y);
    }
    if (x >= -y) {
      return -AtanEstCore(-y / x);
    }
    return AtanEstCore(x / -y) - FloatPiDivided2;
  }
  if (y >= 0.0f) {
    if (y <= -x) {
      return FloatPi - AtanEstCore(y / -x);
    }
    return AtanEstCore(-x / y) + FloatPiDivided2;
  }
  if (x <= y) {
    return AtanEstCore(y / x) - FloatPi;
  }
  return -FloatPiDivided2 - AtanEstCore(x / y);
}

[[gnu::always_inline]] inline float AsinEst(float x) {
  const float y = std::sqrt(1.0f - x * x);
  if (x >= 0.0f) {
    if (x > 0.707106769f) {
      return FloatPiDivided2 - AtanEstCore(y / x);
    }
    return AtanEstCore(x / y);
  }
  if (x < -0.707106769f) {
    return AtanEstCore(-y / x) - FloatPiDivided2;
  }
  return -AtanEstCore(-x / y);
}

}
