#include <new>

#include "math/bezier/easing_param.hpp"

// The behaviors and methods of the script types EasingParam,
// Vec2EasingParam and Vec3EasingParam, one class whose dimension the
// constructors and SetParam pick. The behaviors take the object last, and
// the arrays come as pointers that may be null.
namespace math::bezier::script {

namespace {

template<int Dimension>
[[gnu::always_inline]] inline void ConstructWithParam(int curve_type,
  int easing_type, CScriptArray* easing_param, EasingParam* self) {
  new (self) EasingParam(static_cast<CurveType>(curve_type),
    static_cast<EaseType>(easing_type), easing_param, Dimension);
}

template<int Dimension>
[[gnu::always_inline]] inline void ConstructWithExtParam(int curve_type,
  int easing_type, CScriptArray* easing_param, float ext_param,
  EasingParam* self) {
  new (self) EasingParam(static_cast<CurveType>(curve_type),
    static_cast<EaseType>(easing_type), easing_param, Dimension, ext_param);
}

template<int Dimension>
[[gnu::always_inline]] inline void SetWithParam(EasingParam& self,
  int curve_type, int easing_type, CScriptArray* easing_param) {
  self.Set(static_cast<CurveType>(curve_type),
    static_cast<EaseType>(easing_type), easing_param, Dimension, 0.0f,
    false);
}

template<int Dimension>
[[gnu::always_inline]] inline void SetWithExtParam(EasingParam& self,
  int curve_type, int easing_type, CScriptArray* easing_param,
  float ext_param) {
  self.Set(static_cast<CurveType>(curve_type),
    static_cast<EaseType>(easing_type), easing_param, Dimension, ext_param,
    true);
}

}

[[gnu::used]] void Construct(EasingParam* self) {
  new (self) EasingParam(kCurveLinear, kEaseCustom, nullptr, 1);
}

[[gnu::used]] void Construct(int curve_type, int easing_type,
  EasingParam* self) {
  new (self) EasingParam(static_cast<CurveType>(curve_type),
    static_cast<EaseType>(easing_type), nullptr, 1);
}

[[gnu::used]] void Construct(int curve_type, int easing_type,
  CScriptArray* easing_param, EasingParam* self) {
  ConstructWithParam<1>(curve_type, easing_type, easing_param, self);
}

[[gnu::used]] void Construct(int curve_type, int easing_type,
  CScriptArray* easing_param, float ext_param, EasingParam* self) {
  ConstructWithExtParam<1>(curve_type, easing_type, easing_param, ext_param,
    self);
}

// The destructor is virtual.
[[gnu::used]] void Destruct(EasingParam* self) {
  self->~EasingParam();
}

[[gnu::used]] EasingParam& opAssign(EasingParam& self,
  const EasingParam& other) {
  return self = other;
}

[[gnu::used]] void SetParam(EasingParam& self, int curve_type,
  int easing_type) {
  self.Set(static_cast<CurveType>(curve_type),
    static_cast<EaseType>(easing_type), nullptr, 1, 0.0f, false);
}

[[gnu::used]] void SetParam(EasingParam& self, int curve_type,
  int easing_type, CScriptArray* easing_param) {
  SetWithParam<1>(self, curve_type, easing_type, easing_param);
}

[[gnu::used]] void SetParam(EasingParam& self, int curve_type,
  int easing_type, CScriptArray* easing_param, float ext_param) {
  SetWithExtParam<1>(self, curve_type, easing_type, easing_param, ext_param);
}

[[gnu::used]] void SetExtParam(EasingParam& self, float ext_param) {
  self.SetCustom(ext_param);
}

[[gnu::used]] void ClearExtParam(EasingParam& self) {
  self.ClearCustom();
}

[[gnu::used]] float GetLength(const EasingParam& self) {
  return self.GetSpan();
}

#define MATH_BEZIER_VECTOR_EASING_PARAM(type, dimension) \
  namespace type { \
  [[gnu::used]] void Construct(EasingParam* self) { \
    new (self) EasingParam(kCurveLinear, kEaseCustom, nullptr, dimension); \
  } \
  [[gnu::used]] void Construct(int curve_type, int easing_type, \
    EasingParam* self) { \
    new (self) EasingParam(static_cast<CurveType>(curve_type), \
      static_cast<EaseType>(easing_type), nullptr, dimension); \
  } \
  [[gnu::used]] void Construct(int curve_type, int easing_type, \
    CScriptArray* easing_param, EasingParam* self) { \
    ConstructWithParam<dimension>(curve_type, easing_type, easing_param, \
      self); \
  } \
  [[gnu::used]] void Construct(int curve_type, int easing_type, \
    CScriptArray* easing_param, float ext_param, EasingParam* self) { \
    ConstructWithExtParam<dimension>(curve_type, easing_type, easing_param, \
      ext_param, self); \
  } \
  [[gnu::used]] void Destruct(EasingParam* self) { \
    self->~EasingParam(); \
  } \
  [[gnu::used]] void SetParam(EasingParam& self, int curve_type, \
    int easing_type, CScriptArray* easing_param) { \
    SetWithParam<dimension>(self, curve_type, easing_type, easing_param); \
  } \
  [[gnu::used]] void SetParam(EasingParam& self, int curve_type, \
    int easing_type, CScriptArray* easing_param, float ext_param) { \
    SetWithExtParam<dimension>(self, curve_type, easing_type, easing_param, \
      ext_param); \
  } \
  }

MATH_BEZIER_VECTOR_EASING_PARAM(vec2, 2)
MATH_BEZIER_VECTOR_EASING_PARAM(vec3, 3)

}
