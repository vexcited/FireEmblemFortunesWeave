#include "nn/util/util_matrix.hpp"

#pragma GCC visibility push(hidden)

#include "math/mtx43.hpp"
#include "math/mtx44.hpp"
#include "math/vec3.hpp"
#include "math/vec4.hpp"

#pragma GCC visibility pop

namespace math {

Vec3 Mtx43::GetAxisX() const {
  return Vec3(m_[0]);
}

Vec3 Mtx43::GetAxisY() const {
  return Vec3(m_[1]);
}

Vec3 Mtx43::GetAxisZ() const {
  return Vec3(m_[2]);
}

Vec3 Mtx43::GetAxisW() const {
  return Vec3(m_[3]);
}

void Mtx43::SetAxisX(const Vec3& v) {
  m_[0] = v.v();
}

void Mtx43::SetAxisY(const Vec3& v) {
  m_[1] = v.v();
}

void Mtx43::SetAxisZ(const Vec3& v) {
  m_[2] = v.v();
}

void Mtx43::SetAxisW(const Vec3& v) {
  m_[3] = v.v();
}

void Mtx43::Set(const Vec3& x, const Vec3& y, const Vec3& z, const Vec3& w) {
  m_[0] = x.v();
  m_[1] = y.v();
  m_[2] = z.v();
  m_[3] = w.v();
}

// The translation is kept.
void Mtx43::SetScale(const Vec3& v) {
  m_[0] = float32x4_t{v.x(), 0.0f, 0.0f, 0.0f};
  m_[1] = float32x4_t{0.0f, v.y(), 0.0f, 0.0f};
  m_[2] = float32x4_t{0.0f, 0.0f, v.z(), 0.0f};
}

void Mtx43::SetTranslate(const Vec3& v) {
  m_[3] = v.v();
}

Vec3 Mtx43::Transform(const Vec3& v) const {
  return Vec3(TransformLanes(v.v()));
}

Vec3 Mtx43::TransformNormal(const Vec3& v) const {
  return Vec3(RotateLanes(v.v()));
}

Mtx43& Mtx43::operator=(const Mtx43& other) {
  for (int i = 0; i < 4; i++) {
    m_[i] = other.m_[i];
  }
  return *this;
}

bool Mtx43::operator==(const Mtx43& other) const {
  return Vec3(m_[0]) == Vec3(other.m_[0]) &&
    Vec3(m_[1]) == Vec3(other.m_[1]) && Vec3(m_[2]) == Vec3(other.m_[2]) &&
    Vec3(m_[3]) == Vec3(other.m_[3]);
}

// The translation row takes the fourth row of the other matrix.
Mtx44 Mtx43::operator*(const Mtx44& other) const {
  return Mtx44(other.RotateLanes(m_[0]), other.RotateLanes(m_[1]),
    other.RotateLanes(m_[2]),
    vaddq_f32(other.RotateLanes(m_[3]), other.Row(3)));
}

Vec4 Mtx44::GetAxisX() const {
  return Vec4(m_[0]);
}

Vec4 Mtx44::GetAxisY() const {
  return Vec4(m_[1]);
}

Vec4 Mtx44::GetAxisZ() const {
  return Vec4(m_[2]);
}

Vec4 Mtx44::GetAxisW() const {
  return Vec4(m_[3]);
}

void Mtx44::SetAxisX(const Vec4& v) {
  m_[0] = v.v();
}

void Mtx44::SetAxisY(const Vec4& v) {
  m_[1] = v.v();
}

void Mtx44::SetAxisZ(const Vec4& v) {
  m_[2] = v.v();
}

void Mtx44::SetAxisW(const Vec4& v) {
  m_[3] = v.v();
}

void Mtx44::Set(const Vec4& x, const Vec4& y, const Vec4& z, const Vec4& w) {
  m_[0] = x.v();
  m_[1] = y.v();
  m_[2] = z.v();
  m_[3] = w.v();
}

Vec4 Mtx44::Transform(const Vec4& v) const {
  return Vec4(TransformLanes(v.v()));
}

Vec3 Mtx44::TransformCoord(const Vec3& v) const {
  return TransformCoordLanes(v);
}

Mtx44& Mtx44::operator=(const Mtx44& other) {
  for (int i = 0; i < 4; i++) {
    m_[i] = other.m_[i];
  }
  return *this;
}

bool Mtx44::operator==(const Mtx44& other) const {
  return Vec4(m_[0]) == Vec4(other.m_[0]) &&
    Vec4(m_[1]) == Vec4(other.m_[1]) && Vec4(m_[2]) == Vec4(other.m_[2]) &&
    Vec4(m_[3]) == Vec4(other.m_[3]);
}

// The other matrix gets a fourth column of 0, 0, 0 and 1.
Mtx44 Mtx44::operator*(const Mtx43& other) const {
  float32x4_t w = other.Row(3);
  w[3] = 0.0f;
  w = vreinterpretq_f32_u32(vorrq_u32(vreinterpretq_u32_f32(w),
    vreinterpretq_u32_f32(float32x4_t{0.0f, 0.0f, 0.0f, 1.0f})));
  const Mtx44 m(other.Row(0), other.Row(1), other.Row(2), w);
  return Mtx44(m.TransformLanes(m_[0]), m.TransformLanes(m_[1]),
    m.TransformLanes(m_[2]), m.TransformLanes(m_[3]));
}

}
