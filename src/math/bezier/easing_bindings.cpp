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

MATH_BEZIER_EASE(Linear, kCurveLinear, kEaseCustom)
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

MATH_BEZIER_EASE_VECTOR(Linear, kCurveLinear, kEaseCustom)
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

// Script functions evaluating parameters built by the scripts. The length
// of a list sums the spans of its parameters. The vector versions are
// registered as returning vectors but return the float span.
[[gnu::used]] float Curve(float time, float time_s, const EasingParam& p) {
  return Evaluate(p, time, time_s);
}

[[gnu::used]] float Curve(float time, float time_s,
  const CScriptArray& p_list) {
  return EvaluateList(p_list, time, time_s);
}

[[gnu::used]] Vec2 Vec2Curve(float time, float time_s, const EasingParam& p) {
  return EvaluateVec2(p, time, time_s);
}

[[gnu::used]] Vec2 Vec2Curve(float time, float time_s,
  const CScriptArray& p_list) {
  return EvaluateVec2List(p_list, time, time_s);
}

[[gnu::used]] Vec3 Vec3Curve(float time, float time_s, const EasingParam& p) {
  return EvaluateVec3(p, time, time_s);
}

[[gnu::used]] Vec3 Vec3Curve(float time, float time_s,
  const CScriptArray& p_list) {
  return EvaluateVec3List(p_list, time, time_s);
}

[[gnu::always_inline]] inline float SumSpans(CScriptArray& p_list) {
  const asUINT count = p_list.GetSize();
  float length = 0.0f;
  for (asUINT i = 0; i != count; i++) {
    length += static_cast<const EasingParam*>(p_list.At(i))->GetSpan();
  }
  return length;
}

#define MATH_BEZIER_CURVE_LENGTH(name) \
  [[gnu::used]] float name(const EasingParam& p) { \
    return p.GetSpan(); \
  } \
  [[gnu::used]] float name(CScriptArray& p_list) { \
    return SumSpans(p_list); \
  }

MATH_BEZIER_CURVE_LENGTH(CurveLength)
MATH_BEZIER_CURVE_LENGTH(Vec2CurveLength)
MATH_BEZIER_CURVE_LENGTH(Vec3CurveLength)

#undef MATH_BEZIER_CURVE_LENGTH
#undef MATH_BEZIER_CURVE_VECTOR
#undef MATH_BEZIER_EASE_VECTOR
#undef MATH_BEZIER_CURVE
#undef MATH_BEZIER_EASE

}

void EasingParam::UpdateSpan() {
  float span = 1.0f;
  if (points_ != nullptr && points_->GetSize() >= 2) {
    if (dimension_ == 3) {
      const float32x4_t first =
        *static_cast<const float32x4_t*>(points_->At(0));
      const float32x4_t delta = vsubq_f32(
        *static_cast<const float32x4_t*>(points_->At(1)), first);
      const float32x4_t square = vmulq_f32(delta, delta);
      float32x2_t sum =
        vadd_f32(vget_high_f32(square), vget_low_f32(square));
      sum = vpadd_f32(sum, sum);
      span = vget_lane_f32(vsqrt_f32(sum), 0);
    }
    else if (dimension_ == 2) {
      const float32x2_t first =
        *static_cast<const float32x2_t*>(points_->At(0));
      const float32x2_t delta = vsub_f32(
        *static_cast<const float32x2_t*>(points_->At(1)), first);
      const float32x2_t square = vmul_f32(delta, delta);
      span = std::sqrt(vget_lane_f32(square, 0) +
        vget_lane_f32(square, 1));
    }
    else if (dimension_ == 1) {
      const float first = *static_cast<const float*>(points_->At(0));
      span = std::fabs(*static_cast<const float*>(points_->At(1)) - first);
    }
  }
  span_ = span;
}

}
