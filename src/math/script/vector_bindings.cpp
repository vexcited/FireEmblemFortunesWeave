#include <new>

#include "nn/util/vector.hpp"

#pragma GCC visibility push(hidden)

#include "math/mtx43.hpp"
#include "math/mtx44.hpp"
#include "math/quat.hpp"
#include "math/vec2.hpp"
#include "math/vec3.hpp"
#include "math/vec4.hpp"

#pragma GCC visibility pop

// The natives of the script vector types, registered with their declarations
// by the static initializer at 0xc83ec0. The behaviors take the object last,
// the methods first. The out of line ones of the math vectors are registered
// directly.
namespace math::script {

namespace vec2_type {

[[gnu::used]] void Construct(Vec2* self) {
  new (self) Vec2();
}

[[gnu::used]] void Construct(const float& pv, Vec2* self) {
  new (self) Vec2(&pv);
}

[[gnu::used]] void Construct(float x, float y, Vec2* self) {
  new (self) Vec2(x, y);
}

[[gnu::used]] void Construct(const Vec3 vec3, Vec2* self) {
  new (self) Vec2(vec3);
}

[[gnu::used]] void Destruct(Vec2*) {}

[[gnu::used]] float get_x(const Vec2& self) {
  return self.x();
}

[[gnu::used]] float get_y(const Vec2& self) {
  return self.y();
}

[[gnu::used]] void set_x(Vec2& self, float v) {
  self.SetX(v);
}

[[gnu::used]] void set_y(Vec2& self, float v) {
  self.SetY(v);
}

[[gnu::used]] void Set(Vec2& self, float x, float y) {
  self.Set(x, y);
}

[[gnu::used]] Vec2& opAssign(Vec2& self, const Vec2& other) {
  return self = other;
}

[[gnu::used]] bool opEquals(const Vec2& self, const Vec2& other) {
  return self == other;
}

[[gnu::used]] Vec2 opNeg(const Vec2& self) {
  return -self;
}

[[gnu::used]] Vec2 opAdd(const Vec2& self, const Vec2& other) {
  return self + other;
}

[[gnu::used]] Vec2 opSub(const Vec2& self, const Vec2& other) {
  return self - other;
}

[[gnu::used]] Vec2 opMul(const Vec2& self, float f) {
  return self * f;
}

[[gnu::used]] Vec2 opDiv(const Vec2& self, float f) {
  return self / f;
}

[[gnu::used]] Vec2& opAddAssign(Vec2& self, const Vec2& other) {
  return self += other;
}

[[gnu::used]] Vec2& opSubAssign(Vec2& self, const Vec2& other) {
  return self -= other;
}

[[gnu::used]] Vec2& opMulAssign(Vec2& self, float f) {
  return self *= f;
}

[[gnu::used]] Vec2& opDivAssign(Vec2& self, float f) {
  return self /= f;
}

[[gnu::used]] bool Normalize(Vec2& self) {
  return self.Normalize();
}

[[gnu::used]] float Dot(const Vec2& self, const Vec2& v) {
  return self.Dot(v);
}

[[gnu::used]] float Cross(const Vec2& self, const Vec2& v) {
  return self.Cross(v);
}

[[gnu::used]] float Length(const Vec2& self) {
  return self.Length();
}

[[gnu::used]] float LengthSquared(const Vec2& self) {
  return self.LengthSquared();
}

}

namespace vec2 {

[[gnu::used]] float Dot(const Vec2& a, const Vec2& b) {
  return Vec2::Dot(a, b);
}

[[gnu::used]] float Cross(const Vec2& a, const Vec2& b) {
  return Vec2::Cross(a, b);
}

[[gnu::used]] float Distance(const Vec2& a, const Vec2& b) {
  return Vec2::Distance(a, b);
}

[[gnu::used]] float DistanceSquared(const Vec2& a, const Vec2& b) {
  return Vec2::DistanceSquared(a, b);
}

[[gnu::used]] Vec2 Normalize(const Vec2& value) {
  return Vec2::Normalize(value);
}

[[gnu::used]] Vec2 Maximize(const Vec2& a, const Vec2& b) {
  return Vec2::Maximize(a, b);
}

[[gnu::used]] Vec2 Minimize(const Vec2& a, const Vec2& b) {
  return Vec2::Minimize(a, b);
}

[[gnu::used]] Vec2 Lerp(const Vec2& a, const Vec2& b, float t) {
  return Vec2::Lerp(a, b, t);
}

[[gnu::used]] Vec2 Rotate(const Vec2& value, const float rotation) {
  return Vec2::Rotate(value, rotation);
}

[[gnu::used]] float Angle(const Vec2& a, const Vec2& b) {
  return Vec2::Angle(a, b);
}

[[gnu::used]] const Vec2& Zero() {
  return Vec2::Zero();
}

[[gnu::used]] const Vec2& One() {
  return Vec2::One();
}

[[gnu::used]] const Vec2& UnitX() {
  return Vec2::UnitX();
}

[[gnu::used]] const Vec2& UnitY() {
  return Vec2::UnitY();
}

}


namespace vec3_type {

[[gnu::used]] void Construct(Vec3* self) {
  new (self) Vec3();
}

[[gnu::used]] void Construct(const float& pv, Vec3* self) {
  new (self) Vec3(&pv);
}

[[gnu::used]] void Construct(float x, float y, float z, Vec3* self) {
  new (self) Vec3(x, y, z);
}

[[gnu::used]] void Construct(const Vec2 vec2, Vec3* self) {
  new (self) Vec3(vec2);
}

[[gnu::used]] void Destruct(Vec3*) {}

[[gnu::used]] float get_x(const Vec3& self) {
  return self.x();
}

[[gnu::used]] float get_y(const Vec3& self) {
  return self.y();
}

[[gnu::used]] float get_z(const Vec3& self) {
  return self.z();
}

[[gnu::used]] void set_x(Vec3& self, float v) {
  self.SetX(v);
}

[[gnu::used]] void set_y(Vec3& self, float v) {
  self.SetY(v);
}

[[gnu::used]] void set_z(Vec3& self, float v) {
  self.SetZ(v);
}

[[gnu::used]] void Set(Vec3& self, float x, float y, float z) {
  self.Set(x, y, z);
}

[[gnu::used]] Vec3& opAssign(Vec3& self, const Vec3& other) {
  return self = other;
}

[[gnu::used]] Vec3& opAssign(Vec3& self, const Vec2& other) {
  return self = other;
}

[[gnu::used]] bool opEquals(const Vec3& self, const Vec3& other) {
  return self == other;
}

[[gnu::used]] Vec3 opNeg(const Vec3& self) {
  return -self;
}

[[gnu::used]] Vec3 opAdd(const Vec3& self, const Vec3& other) {
  return self + other;
}

[[gnu::used]] Vec3 opSub(const Vec3& self, const Vec3& other) {
  return self - other;
}

[[gnu::used]] Vec3 opMul(const Vec3& self, float f) {
  return self * f;
}

[[gnu::used]] Vec3 opDiv(const Vec3& self, float f) {
  return self / f;
}

[[gnu::used]] Vec3& opAddAssign(Vec3& self, const Vec3& other) {
  return self += other;
}

[[gnu::used]] Vec3& opSubAssign(Vec3& self, const Vec3& other) {
  return self -= other;
}

[[gnu::used]] Vec3& opMulAssign(Vec3& self, float f) {
  return self *= f;
}

[[gnu::used]] Vec3& opDivAssign(Vec3& self, float f) {
  return self /= f;
}

[[gnu::used]] bool Normalize(Vec3& self) {
  return self.Normalize();
}

[[gnu::used]] float Dot(const Vec3& self, const Vec3& v) {
  return self.Dot(v);
}

[[gnu::used]] Vec3 Cross(const Vec3& self, const Vec3& v) {
  return self.Cross(v);
}

[[gnu::used]] float Length(const Vec3& self) {
  return self.Length();
}

[[gnu::used]] float LengthSquared(const Vec3& self) {
  return self.LengthSquared();
}

[[gnu::used]] Vec3 XZ(const Vec3& self) {
  return self.XZ();
}

[[gnu::used]] Vec3 XY(const Vec3& self) {
  return self.XY();
}

[[gnu::used]] Vec3 YZ(const Vec3& self) {
  return self.YZ();
}

}

namespace vec3 {

[[gnu::used]] float Dot(const Vec3& a, const Vec3& b) {
  return Vec3::Dot(a, b);
}

[[gnu::used]] float Distance(const Vec3& a, const Vec3& b) {
  return Vec3::Distance(a, b);
}

[[gnu::used]] float DistanceSquared(const Vec3& a, const Vec3& b) {
  return Vec3::DistanceSquared(a, b);
}

[[gnu::used]] Vec3 Normalize(const Vec3& value) {
  return Vec3::Normalize(value);
}

[[gnu::used]] Vec3 Cross(const Vec3& a, const Vec3& b) {
  return Vec3::Cross(a, b);
}

[[gnu::used]] Vec3 Maximize(const Vec3& a, const Vec3& b) {
  return Vec3::Maximize(a, b);
}

[[gnu::used]] Vec3 Minimize(const Vec3& a, const Vec3& b) {
  return Vec3::Minimize(a, b);
}

[[gnu::used]] Vec3 Lerp(const Vec3& a, const Vec3& b, float t) {
  return Vec3::Lerp(a, b, t);
}

[[gnu::used]] Vec3 Rotate(const Vec3& value, const Quat& rotation) {
  return rotation.RotateVector(value);
}

[[gnu::used]] Vec3 Rotate(const Vec3& value, const Vec3& rotation) {
  return Quat::FromEulerianAngle(rotation).RotateVector(value);
}

[[gnu::used]] Vec3 Transform(const Vec3& value, const Mtx43& transform) {
  return Vec3(transform.TransformLanes(value.v()));
}

[[gnu::used]] Vec3 TransformNormal(const Vec3& value, const Mtx43& transform) {
  return Vec3(transform.RotateLanes(value.v()));
}

[[gnu::used]] Vec3 TransformCoord(const Vec3& value, const Mtx44& transform) {
  return transform.TransformCoordLanes(value);
}

[[gnu::used]] float Angle(const Vec3& a, const Vec3& b) {
  return Vec3::Angle(a, b);
}

[[gnu::used]] Vec3 XZ(float x, float z) {
  return Vec3(x, 0.0f, z);
}

[[gnu::used]] float XZ_Dot(const Vec3& a, const Vec3& b) {
  return Vec3::Dot(a.XZ(), b.XZ());
}

[[gnu::used]] float XZ_Distance(const Vec3& a, const Vec3& b) {
  return Vec3::Distance(a.XZ(), b.XZ());
}

[[gnu::used]] float XZ_DistanceSquared(const Vec3& a, const Vec3& b) {
  return Vec3::DistanceSquared(a.XZ(), b.XZ());
}

[[gnu::used]] Vec3 XZ_Normalize(const Vec3& value) {
  return Vec3::Normalize(value.XZ());
}

[[gnu::used]] Vec3 XZ_Cross(const Vec3& a, const Vec3& b) {
  return Vec3::Cross(a.XZ(), b.XZ());
}

[[gnu::used]] Vec3 XZ_Maximize(const Vec3& a, const Vec3& b) {
  return Vec3::Maximize(a.XZ(), b.XZ());
}

[[gnu::used]] Vec3 XZ_Minimize(const Vec3& a, const Vec3& b) {
  return Vec3::Minimize(a.XZ(), b.XZ());
}

[[gnu::used]] Vec3 XZ_Lerp(const Vec3& a, const Vec3& b, float t) {
  return Vec3::Lerp(a.XZ(), b.XZ(), t);
}

[[gnu::used]] Vec3 XZ_Transform(const Vec3& value, const Mtx43& transform) {
  return Vec3(transform.TransformLanes(value.XZ().v()));
}

[[gnu::used]] Vec3 XZ_TransformNormal(const Vec3& value,
  const Mtx43& transform) {
  return Vec3(transform.RotateLanes(value.XZ().v()));
}

[[gnu::used]] Vec3 XZ_TransformCoord(const Vec3& value,
  const Mtx44& transform) {
  return transform.TransformCoordLanes(value.XZ());
}

[[gnu::used]] float XZ_Angle(const Vec3& a, const Vec3& b) {
  return Vec3::Angle(a.XZ(), b.XZ());
}

[[gnu::used]] Vec3 XY(float x, float y) {
  return Vec3(x, y, 0.0f);
}

[[gnu::used]] float XY_Dot(const Vec3& a, const Vec3& b) {
  return Vec3::Dot(a.XY(), b.XY());
}

[[gnu::used]] float XY_Distance(const Vec3& a, const Vec3& b) {
  return Vec3::Distance(a.XY(), b.XY());
}

[[gnu::used]] float XY_DistanceSquared(const Vec3& a, const Vec3& b) {
  return Vec3::DistanceSquared(a.XY(), b.XY());
}

[[gnu::used]] Vec3 XY_Normalize(const Vec3& value) {
  return Vec3::Normalize(value.XY());
}

[[gnu::used]] Vec3 XY_Cross(const Vec3& a, const Vec3& b) {
  return Vec3::Cross(a.XY(), b.XY());
}

[[gnu::used]] Vec3 XY_Maximize(const Vec3& a, const Vec3& b) {
  return Vec3::Maximize(a.XY(), b.XY());
}

[[gnu::used]] Vec3 XY_Minimize(const Vec3& a, const Vec3& b) {
  return Vec3::Minimize(a.XY(), b.XY());
}

[[gnu::used]] Vec3 XY_Lerp(const Vec3& a, const Vec3& b, float t) {
  return Vec3::Lerp(a.XY(), b.XY(), t);
}

[[gnu::used]] Vec3 XY_Transform(const Vec3& value, const Mtx43& transform) {
  return Vec3(transform.TransformLanes(value.XY().v()));
}

[[gnu::used]] Vec3 XY_TransformNormal(const Vec3& value,
  const Mtx43& transform) {
  return Vec3(transform.RotateLanes(value.XY().v()));
}

[[gnu::used]] Vec3 XY_TransformCoord(const Vec3& value,
  const Mtx44& transform) {
  return transform.TransformCoordLanes(value.XY());
}

[[gnu::used]] float XY_Angle(const Vec3& a, const Vec3& b) {
  return Vec3::Angle(a.XY(), b.XY());
}

[[gnu::used]] Vec3 YZ(float y, float z) {
  return Vec3(0.0f, y, z);
}

[[gnu::used]] float YZ_Dot(const Vec3& a, const Vec3& b) {
  return Vec3::Dot(a.YZ(), b.YZ());
}

[[gnu::used]] float YZ_Distance(const Vec3& a, const Vec3& b) {
  return Vec3::Distance(a.YZ(), b.YZ());
}

[[gnu::used]] float YZ_DistanceSquared(const Vec3& a, const Vec3& b) {
  return Vec3::DistanceSquared(a.YZ(), b.YZ());
}

[[gnu::used]] Vec3 YZ_Normalize(const Vec3& value) {
  return Vec3::Normalize(value.YZ());
}

[[gnu::used]] Vec3 YZ_Cross(const Vec3& a, const Vec3& b) {
  return Vec3::Cross(a.YZ(), b.YZ());
}

[[gnu::used]] Vec3 YZ_Maximize(const Vec3& a, const Vec3& b) {
  return Vec3::Maximize(a.YZ(), b.YZ());
}

[[gnu::used]] Vec3 YZ_Minimize(const Vec3& a, const Vec3& b) {
  return Vec3::Minimize(a.YZ(), b.YZ());
}

[[gnu::used]] Vec3 YZ_Lerp(const Vec3& a, const Vec3& b, float t) {
  return Vec3::Lerp(a.YZ(), b.YZ(), t);
}

[[gnu::used]] Vec3 YZ_Transform(const Vec3& value, const Mtx43& transform) {
  return Vec3(transform.TransformLanes(value.YZ().v()));
}

[[gnu::used]] Vec3 YZ_TransformNormal(const Vec3& value,
  const Mtx43& transform) {
  return Vec3(transform.RotateLanes(value.YZ().v()));
}

[[gnu::used]] Vec3 YZ_TransformCoord(const Vec3& value,
  const Mtx44& transform) {
  return transform.TransformCoordLanes(value.YZ());
}

[[gnu::used]] float YZ_Angle(const Vec3& a, const Vec3& b) {
  return Vec3::Angle(a.YZ(), b.YZ());
}

[[gnu::used]] const Vec3& Zero() {
  return Vec3::Zero();
}

[[gnu::used]] const Vec3& One() {
  return Vec3::One();
}

[[gnu::used]] const Vec3& UnitX() {
  return Vec3::UnitX();
}

[[gnu::used]] const Vec3& UnitY() {
  return Vec3::UnitY();
}

[[gnu::used]] const Vec3& UnitZ() {
  return Vec3::UnitZ();
}

}

namespace vec4_type {

[[gnu::used]] void Construct(Vec4* self) {
  new (self) Vec4();
}

[[gnu::used]] void Construct(const float& pv, Vec4* self) {
  new (self) Vec4(&pv);
}

[[gnu::used]] void Construct(float x, float y, float z, float w, Vec4* self) {
  new (self) Vec4(x, y, z, w);
}

[[gnu::used]] void Destruct(Vec4*) {}

[[gnu::used]] float get_x(const Vec4& self) {
  return self.x();
}

[[gnu::used]] float get_y(const Vec4& self) {
  return self.y();
}

[[gnu::used]] float get_z(const Vec4& self) {
  return self.z();
}

[[gnu::used]] float get_w(const Vec4& self) {
  return self.w();
}

[[gnu::used]] void set_x(Vec4& self, float v) {
  self.SetX(v);
}

[[gnu::used]] void set_y(Vec4& self, float v) {
  self.SetY(v);
}

[[gnu::used]] void set_z(Vec4& self, float v) {
  self.SetZ(v);
}

[[gnu::used]] void set_w(Vec4& self, float v) {
  self.SetW(v);
}

[[gnu::used]] void Set(Vec4& self, float x, float y, float z, float w) {
  self.Set(x, y, z, w);
}

[[gnu::used]] Vec4& opAssign(Vec4& self, const Vec4& other) {
  return self = other;
}

[[gnu::used]] bool opEquals(const Vec4& self, const Vec4& other) {
  return self == other;
}

[[gnu::used]] Vec4 opNeg(const Vec4& self) {
  return -self;
}

[[gnu::used]] Vec4 opAdd(const Vec4& self, const Vec4& other) {
  return self + other;
}

[[gnu::used]] Vec4 opSub(const Vec4& self, const Vec4& other) {
  return self - other;
}

[[gnu::used]] Vec4 opMul(const Vec4& self, float f) {
  return self * f;
}

[[gnu::used]] Vec4 opDiv(const Vec4& self, float f) {
  return self / f;
}

[[gnu::used]] Vec4& opAddAssign(Vec4& self, const Vec4& other) {
  return self += other;
}

[[gnu::used]] Vec4& opSubAssign(Vec4& self, const Vec4& other) {
  return self -= other;
}

[[gnu::used]] Vec4& opMulAssign(Vec4& self, float f) {
  return self *= f;
}

[[gnu::used]] Vec4& opDivAssign(Vec4& self, float f) {
  return self /= f;
}

[[gnu::used]] float Length(const Vec4& self) {
  return self.Length();
}

[[gnu::used]] float LengthSquared(const Vec4& self) {
  return self.LengthSquared();
}

}

namespace vec4 {

[[gnu::used]] float Dot(const Vec4& a, const Vec4& b) {
  return Vec4::Dot(a, b);
}

[[gnu::used]] float Distance(const Vec4& a, const Vec4& b) {
  return Vec4::Distance(a, b);
}

[[gnu::used]] float DistanceSquared(const Vec4& a, const Vec4& b) {
  return Vec4::DistanceSquared(a, b);
}

[[gnu::used]] Vec4 Normalize(const Vec4& value) {
  return Vec4::Normalize(value);
}

[[gnu::used]] Vec4 Maximize(const Vec4& a, const Vec4& b) {
  return Vec4::Maximize(a, b);
}

[[gnu::used]] Vec4 Minimize(const Vec4& a, const Vec4& b) {
  return Vec4::Minimize(a, b);
}

[[gnu::used]] Vec4 Lerp(const Vec4& a, const Vec4& b, float t) {
  return Vec4::Lerp(a, b, t);
}

[[gnu::used]] float Angle(const Vec4& a, const Vec4& b) {
  return Vec4::Angle(a, b);
}

[[gnu::used]] const Vec4& Zero() {
  return Vec4::Zero();
}

[[gnu::used]] const Vec4& One() {
  return Vec4::One();
}

[[gnu::used]] const Vec4& UnitX() {
  return Vec4::UnitX();
}

[[gnu::used]] const Vec4& UnitY() {
  return Vec4::UnitY();
}

[[gnu::used]] const Vec4& UnitZ() {
  return Vec4::UnitZ();
}

[[gnu::used]] const Vec4& UnitW() {
  return Vec4::UnitW();
}

}

}
