#pragma once

#include <arm_neon.h>

#include <cmath>

#include "angelscript/angelscript/include/angelscript.h"
#include "angelscript/add_on/scriptarray/scriptarray.h"

namespace math {

class Vec2;
class Vec3;

}

namespace math::bezier {

enum CurveType : int {
  kCurveLinear = 0,
  kCurveQuadratic = 1,
  kCurveCubic = 2,
  kCurveQuartic = 3,
  kCurveQuintic = 4,
  kCurveSine = 5,
  kCurveExponential = 6,
  kCurveCircular = 7,
  kCurveBack = 8,
  kCurveElastic = 9,
  kCurveBounce = 10,
};

enum EaseType : int {
  kEaseCustom = 0,
  kEaseIn = 1,
  kEaseOut = 2,
  kEaseInOut = 3,
};

// Script facing easing over the control values of a script array, which it
// keeps a reference to. The dimension is the number of components of a
// control value, 0 without values.
class EasingParam {
public:
  EasingParam(CurveType curve, EaseType ease, CScriptArray* points,
    int dimension)
    : curve_(curve), ease_(ease), dimension_(dimension), points_(points) {
    if (points_ != nullptr) {
      points_->AddRef();
    }
    else {
      dimension_ = 0;
    }
    UpdateSpan();
  }

  virtual ~EasingParam() {
    if (points_ != nullptr) {
      points_->Release();
      points_ = nullptr;
    }
  }

  float GetSpan() const {
    return span_;
  }

  // The distance between the first two control values, 1 with fewer values.
  void UpdateSpan() {
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

private:
  CurveType curve_;
  EaseType ease_;
  int dimension_;
  float span_;
  CScriptArray* points_;
  float custom_ = 0.0f;
  bool has_custom_ = false;
};

float Evaluate(const EasingParam& param, float time, float time_s);
Vec2 EvaluateVec2(const EasingParam& param, float time, float time_s);
Vec3 EvaluateVec3(const EasingParam& param, float time, float time_s);

}
