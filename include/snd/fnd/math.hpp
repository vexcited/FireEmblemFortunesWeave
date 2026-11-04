#pragma once

#include <cstdint>

namespace snd::fnd {

class Vec3 {
public:
  virtual ~Vec3() = default;

  float x = 0.0f;
  float y = 0.0f;
  float z = 0.0f;
};

enum CurveType : uint32_t {
  kCurveLinear,
  kCurveQuadIn,
  kCurveCubicIn,
  kCurveQuartIn,
  kCurveQuadOut,
  kCurveCubicOut,
  kCurveQuartOut,
  kCurveBounce,
  kCurveBounceFast,
  kCurveBounceFast2,
  kCurveBounceSlow,
  kCurveSine,
  kCurveSine2,
  kCurveSine3,
  kCurveSineIn,
  kCurveSineOut,
  kCurveCosine,
};

constexpr float kPi = 3.14159f;
constexpr float kFrameMs = 16.667f;

uint32_t calcCrc32(const char* str, uint32_t length);
uint32_t calcCrc32Reverse(const char* str, uint32_t length);

float calcDistance(const Vec3& from, const Vec3& to);
float calcDistance(float x0, float y0, float x1, float y1);
float calcDistance(float x0, float y0, float z0, float x1, float y1, float z1);
float calcDistanceTo(const Vec3& from, const Vec3& to);

float calcCurve(CurveType type, float from, float to, float frame,
  float frames);

float normalizeAngle(float degree);
float calcAngle(float x0, float y0, float x1, float y1);
float calcAngle(const Vec3& from, const Vec3& to);
float calcAngleDiff(float from, float to);
void moveByAngle(float* x, float* y, float distance, float degree);
void rotate(float* x, float* y, float degree);

}
