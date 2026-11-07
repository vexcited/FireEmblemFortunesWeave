#include <math.h>

#include <algorithm>
#include <cmath>

#include "angelscript/fork/add_on/as_string.h"
#include "nn/util/math_types.hpp"

// The natives of the math script namespace registered by the static
// initializer at 0xb24e30, the estimates of nn::util and the C library.
namespace math::script::scalar {

namespace {

constexpr float kDegreeToRadian = 0.0174532924f;
constexpr float kRadianToDegree = 180.0f / nn::util::FloatPi;

[[gnu::always_inline]] inline bool EqualAbs(float x, float y,
  float absError) {
  return fabsf(x - y) <= absError;
}

// Relative to the larger magnitude.
[[gnu::always_inline]] inline bool EqualRelative(float x, float y,
  float relativeError) {
  return fabsf(x - y) <= relativeError * std::max(fabsf(x), fabsf(y));
}

}

[[gnu::used]] float SinDeg(float degree) {
  return nn::util::SinEst(degree * kDegreeToRadian);
}

[[gnu::used]] float CosDeg(float degree) {
  return nn::util::CosEst(degree * kDegreeToRadian);
}

[[gnu::used]] float TanDeg(float degree) {
  return nn::util::TanEst(degree * kDegreeToRadian);
}

[[gnu::used]] void TanDeg(float& pOutSin, float& pOutCos, float degree) {
  nn::util::SinCosEst(&pOutSin, &pOutCos, degree * kDegreeToRadian);
}

[[gnu::used]] float AtanDeg(float x) {
  return nn::util::AtanEst(x) * kRadianToDegree;
}

[[gnu::used]] float Atan2Deg(float y, float x) {
  return nn::util::Atan2Est(y, x) * kRadianToDegree;
}

[[gnu::used]] float AsinDeg(float x) {
  return nn::util::AsinEst(x) * kRadianToDegree;
}

[[gnu::used]] float AcosDeg(float x) {
  return nn::util::AcosEst(x) * kRadianToDegree;
}

[[gnu::used]] float SinRad(float radian) {
  return nn::util::SinEst(radian);
}

[[gnu::used]] float CosRad(float radian) {
  return nn::util::CosEst(radian);
}

[[gnu::used]] float TanRad(float radian) {
  return nn::util::TanEst(radian);
}

[[gnu::used]] void TanRad(float& pOutSin, float& pOutCos, float radian) {
  nn::util::SinCosEst(&pOutSin, &pOutCos, radian);
}

[[gnu::used]] float AtanRad(float x) {
  return nn::util::AtanEst(x);
}

[[gnu::used]] float Atan2Rad(float y, float x) {
  return nn::util::Atan2Est(y, x);
}

[[gnu::used]] float AsinRad(float x) {
  return nn::util::AsinEst(x);
}

[[gnu::used]] float AcosRad(float x) {
  return nn::util::AcosEst(x);
}

[[gnu::used]] float Sinh(float x) {
  return sinhf(x);
}

[[gnu::used]] float Cosh(float x) {
  return coshf(x);
}

[[gnu::used]] float Tanh(float x) {
  return tanhf(x);
}

[[gnu::used]] float Asinh(float x) {
  return asinhf(x);
}

[[gnu::used]] float Acosh(float x) {
  return acoshf(x);
}

[[gnu::used]] float Atanh(float x) {
  return atanhf(x);
}

[[gnu::used]] float Exp(float x) {
  return expf(x);
}

[[gnu::used]] float Exp2(float x) {
  return exp2f(x);
}

[[gnu::used]] float Expm1(float x) {
  return expm1f(x);
}

[[gnu::used]] float Log(float x) {
  return logf(x);
}

[[gnu::used]] float Log10(float x) {
  return log10f(x);
}

[[gnu::used]] float Log1p(float x) {
  return log1pf(x);
}

[[gnu::used]] float Log2(float x) {
  return log2f(x);
}

[[gnu::used]] float Ldexp(float x, int y) {
  return ldexpf(x, y);
}

[[gnu::used]] float Frexp(float x, int& y) {
  return frexpf(x, &y);
}

[[gnu::used]] int Ilogb(float x) {
  return ilogbf(x);
}

[[gnu::used]] float Logb(float x) {
  return logbf(x);
}

[[gnu::used]] float Modf(float x, float& y) {
  return modff(x, &y);
}

[[gnu::used]] float Scalbn(float x, int y) {
  return scalbnf(x, y);
}

[[gnu::used]] float Pow(float x, float y) {
  return powf(x, y);
}

[[gnu::used]] float Sqrt(float x) {
  return std::sqrt(x);
}

[[gnu::used]] float Cbrt(float x) {
  return cbrtf(x);
}

[[gnu::used]] float Hypot(float x, float y) {
  return hypotf(x, y);
}

[[gnu::used]] float FAbs(float x) {
  return fabsf(x);
}

[[gnu::used]] float Erf(float x) {
  return erff(x);
}

[[gnu::used]] float Erfc(float x) {
  return erfcf(x);
}

[[gnu::used]] float Tgamma(float x) {
  return tgammaf(x);
}

[[gnu::used]] float Lgamma(float x) {
  return lgammaf(x);
}

[[gnu::used]] float Ceil(float x) {
  return ceilf(x);
}

[[gnu::used]] float Floor(float x) {
  return floorf(x);
}

[[gnu::used]] float Trunc(float x) {
  return truncf(x);
}

[[gnu::used]] float Round(float x) {
  return roundf(x);
}

[[gnu::used]] float Nearbyint(float x) {
  return nearbyintf(x);
}

[[gnu::used]] float Rint(float x) {
  return rintf(x);
}

[[gnu::used]] float Fmod(float x, float y) {
  return fmodf(x, y);
}

[[gnu::used]] float Remainder(float x, float y) {
  return remainderf(x, y);
}

[[gnu::used]] float Remquo(float x, float y, int& i) {
  return remquof(x, y, &i);
}

[[gnu::used]] float Copysign(float x, float y) {
  return copysignf(x, y);
}

[[gnu::used]] float Nan(const as::string& x) {
  return nanf(x.c_str());
}

[[gnu::used]] float Nextafter(float x, float y) {
  return nextafterf(x, y);
}

[[gnu::used]] float Min(float v1, float v2) {
  return fminf(v1, v2);
}

[[gnu::used]] float Max(float v1, float v2) {
  return fmaxf(v1, v2);
}

[[gnu::used]] float Dim(float v1, float v2) {
  return fdimf(v1, v2);
}

[[gnu::used]] float Fma(float x, float y, float z) {
  return fmaf(x, y, z);
}

[[gnu::used]] float J0(float x) {
  return j0f(x);
}

[[gnu::used]] float J1(float x) {
  return j1f(x);
}

[[gnu::used]] float Jn(int i, float x) {
  return jnf(i, x);
}

[[gnu::used]] float Y0(float x) {
  return y0f(x);
}

[[gnu::used]] float Y1(float x) {
  return y1f(x);
}

[[gnu::used]] float Yn(int i, float x) {
  return ynf(i, x);
}

[[gnu::used]] int Fpclassify(float x) {
  return std::fpclassify(x);
}

[[gnu::used]] bool IsFinite(float x) {
  return std::isfinite(x);
}

[[gnu::used]] bool IsInf(float x) {
  return std::isinf(x);
}

[[gnu::used]] bool IsNan(float x) {
  return std::isnan(x);
}

[[gnu::used]] bool IsNormal(float x) {
  return std::isnormal(x);
}

[[gnu::used]] bool Signbit(float x) {
  return std::signbit(x);
}

[[gnu::used]] bool IsGreater(float x, float y) {
  return std::isgreater(x, y);
}

[[gnu::used]] bool IsGreaterequal(float x, float y) {
  return std::isgreaterequal(x, y);
}

[[gnu::used]] bool IsLess(float x, float y) {
  return std::isless(x, y);
}

[[gnu::used]] bool IsLessequal(float x, float y) {
  return std::islessequal(x, y);
}

[[gnu::used]] bool IsLessgreater(float x, float y) {
  return std::islessgreater(x, y);
}

[[gnu::used]] bool IsUnordered(float x, float y) {
  return std::isunordered(x, y);
}

[[gnu::used]] float Rcp(float x) {
  return 1.0f / x;
}

[[gnu::used]] float Rsqrt(float x) {
  return 1.0f / std::sqrt(x);
}

[[gnu::used]] bool AreEqualAbs(float x, float y, float absError) {
  return EqualAbs(x, y, absError);
}

[[gnu::used]] bool AreEqualRelative(float x, float y, float relativeError) {
  return EqualRelative(x, y, relativeError);
}

[[gnu::used]] bool AreEqual(float x, float y, float error) {
  return EqualAbs(x, y, error) || EqualRelative(x, y, error);
}

[[gnu::used]] float Clamp(float v, float min, float max) {
  return fminf(fmaxf(v, min), max);
}

}
