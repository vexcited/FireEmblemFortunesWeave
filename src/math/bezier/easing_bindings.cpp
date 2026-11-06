#include <arm_neon.h>

#include "math/bezier/easing_param.hpp"

namespace math {

// The vector types of the script math module, NEON vectors returned through
// memory as they define their copy.
class Vec2 {
public:
  Vec2(const Vec2& other) : v_(other.v_) {}

private:
  float32x2_t v_;
};

class Vec3 {
public:
  Vec3(const Vec3& other) : v_(other.v_) {}

private:
  float32x4_t v_;
};

}

namespace math::bezier {

namespace {

[[gnu::always_inline]] inline float Ease(CurveType curve, EaseType ease,
  float time, float time_s, CScriptArray& arg) {
  const EasingParam param(curve, ease, &arg, 1);
  return Evaluate(param, time, time_s);
}

template<typename T, T (*Evaluate)(const EasingParam&, float, float), int N>
[[gnu::always_inline]] inline T EaseVector(CurveType curve, EaseType ease,
  float time, float time_s, CScriptArray& arg) {
  const EasingParam param(curve, ease, &arg, N);
  return Evaluate(param, time, time_s);
}

// The script functions of math::bezier over array<as_f32>, registered with
// the time, the time span and the control values.
#define MATH_BEZIER_EASE(name, curve, ease) \
  [[gnu::used]] float name(float time, float time_s, CScriptArray& arg) { \
    return Ease(curve, ease, time, time_s, arg); \
  }

#define MATH_BEZIER_CURVE(name, curve) \
  MATH_BEZIER_EASE(name, curve, kEaseCustom) \
  MATH_BEZIER_EASE(EaseIn##name, curve, kEaseIn) \
  MATH_BEZIER_EASE(EaseOut##name, curve, kEaseOut) \
  MATH_BEZIER_EASE(EaseInOut##name, curve, kEaseInOut)

MATH_BEZIER_CURVE(Quadratic, kCurveQuadratic)
MATH_BEZIER_CURVE(Cubic, kCurveCubic)
MATH_BEZIER_CURVE(Quartic, kCurveQuartic)
MATH_BEZIER_CURVE(Quintic, kCurveQuintic)
MATH_BEZIER_CURVE(Sine, kCurveSine)
MATH_BEZIER_CURVE(Exponential, kCurveExponential)
MATH_BEZIER_CURVE(Circular, kCurveCircular)
MATH_BEZIER_CURVE(Back, kCurveBack)
MATH_BEZIER_CURVE(Elastic, kCurveElastic)
MATH_BEZIER_CURVE(Bounce, kCurveBounce)

// The array<math::Vec2> and array<math::Vec3> versions.
#define MATH_BEZIER_EASE_VECTOR(name, curve, ease) \
  [[gnu::used]] Vec2 Vec2##name(float time, float time_s, \
    CScriptArray& arg) { \
    return EaseVector<Vec2, EvaluateVec2, 2>(curve, ease, time, time_s, \
      arg); \
  } \
  [[gnu::used]] Vec3 Vec3##name(float time, float time_s, \
    CScriptArray& arg) { \
    return EaseVector<Vec3, EvaluateVec3, 3>(curve, ease, time, time_s, \
      arg); \
  }

#define MATH_BEZIER_CURVE_VECTOR(name, curve) \
  MATH_BEZIER_EASE_VECTOR(name, curve, kEaseCustom) \
  MATH_BEZIER_EASE_VECTOR(EaseIn##name, curve, kEaseIn) \
  MATH_BEZIER_EASE_VECTOR(EaseOut##name, curve, kEaseOut) \
  MATH_BEZIER_EASE_VECTOR(EaseInOut##name, curve, kEaseInOut)

MATH_BEZIER_CURVE_VECTOR(Quadratic, kCurveQuadratic)
MATH_BEZIER_CURVE_VECTOR(Cubic, kCurveCubic)
MATH_BEZIER_CURVE_VECTOR(Quartic, kCurveQuartic)
MATH_BEZIER_CURVE_VECTOR(Quintic, kCurveQuintic)
MATH_BEZIER_CURVE_VECTOR(Sine, kCurveSine)
MATH_BEZIER_CURVE_VECTOR(Exponential, kCurveExponential)
MATH_BEZIER_CURVE_VECTOR(Circular, kCurveCircular)
MATH_BEZIER_CURVE_VECTOR(Back, kCurveBack)
MATH_BEZIER_CURVE_VECTOR(Elastic, kCurveElastic)
MATH_BEZIER_CURVE_VECTOR(Bounce, kCurveBounce)

// The script methods of the easing parameters.
[[gnu::used]] constexpr auto kUpdateSpan = &EasingParam::UpdateSpan;
[[gnu::used]] constexpr auto kGetSpan = &EasingParam::GetSpan;

#undef MATH_BEZIER_CURVE_VECTOR
#undef MATH_BEZIER_EASE_VECTOR
#undef MATH_BEZIER_CURVE
#undef MATH_BEZIER_EASE

}

}
