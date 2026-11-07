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

  // The extra parameter of the curve is kept with its flag.
  EasingParam(CurveType curve, EaseType ease, CScriptArray* points,
    int dimension, float custom)
    : curve_(curve), ease_(ease), dimension_(dimension), points_(points),
      custom_(custom), has_custom_(true) {
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

  EasingParam& operator=(const EasingParam& other) {
    Set(other.curve_, other.ease_, other.points_, other.dimension_,
      other.custom_, other.has_custom_);
    return *this;
  }

  // Takes a reference to the new values after releasing the old ones.
  void Set(CurveType curve, EaseType ease, CScriptArray* points,
    int dimension, float custom, bool hasCustom) {
    curve_ = curve;
    ease_ = ease;
    if (points_ != nullptr) {
      points_->Release();
    }
    points_ = points;
    if (points != nullptr) {
      dimension_ = dimension;
      points->AddRef();
    }
    else {
      dimension_ = 0;
    }
    custom_ = custom;
    has_custom_ = hasCustom;
    UpdateSpan();
  }

  void SetCustom(float custom) {
    custom_ = custom;
    has_custom_ = true;
  }

  void ClearCustom() {
    has_custom_ = false;
  }

  float GetSpan() const {
    return span_;
  }

  // The distance between the first two control values, 1 with fewer values.
  void UpdateSpan();

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
float EvaluateList(const CScriptArray& params, float time, float time_s);
Vec2 EvaluateVec2List(const CScriptArray& params, float time, float time_s);
Vec3 EvaluateVec3List(const CScriptArray& params, float time, float time_s);

}
