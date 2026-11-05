#include <cmath>

#include "nn/util/math_types.hpp"

#pragma GCC visibility push(hidden)
#include "gfx/render/camera.hpp"
#pragma GCC visibility pop

namespace gfx::render {

namespace {

constexpr float kDegreesToRadians = nn::util::FloatPi / 180.0f;

}

Matrix44 Camera::GetViewMatrix() const {
  return viewMatrix_;
}

Matrix44 Camera::GetProjectionMatrix() const {
  return projectionMatrix_;
}

Float2 Camera::GetJitter() const {
  return jitter_;
}

Vector4 Camera::GetPosition() const {
  return CalcPosition();
}

bool Camera::IsUnknown06() const {
  return unknown85_;
}

float Camera::GetNear() const {
  return near_;
}

float Camera::GetFar() const {
  return far_;
}

float Camera::GetFovY() const {
  switch (projection_) {
    case Projection::kFovY:
      return fovY_ * kDegreesToRadians;
    case Projection::kPhysical: {
      float height = sensorFit_ != 0 ? sensorHeight_ :
        sensorWidth_ * aspect_.y / aspect_.x;
      return 2.0f * std::atan(height / (2.0f * focalLength_));
    }
    default:
      return 0.0f;
  }
}

Float2 Camera::GetAspect() const {
  return aspect_;
}

bool Camera::TestFlag(uint32_t index) const {
  return flags_.test(index);
}

std::bitset<32> Camera::GetFlags() const {
  return flags_;
}

bool Camera::HasViews() const {
  return !views_.empty();
}

const std::vector<CameraView>& Camera::GetViews() const {
  return views_;
}

float Camera::GetFocalLength() const {
  return focalLength_;
}

ShadowCamera::~ShadowCamera() {}

Matrix44 ShadowCamera::GetViewMatrix() const {
  return viewMatrix_;
}

Matrix44 ShadowCamera::GetProjectionMatrix() const {
  return projectionMatrix_;
}

Float2 ShadowCamera::GetJitter() const {
  return jitter_;
}

Vector4 ShadowCamera::GetPosition() const {
  return {};
}

bool ShadowCamera::IsUnknown06() const {
  return false;
}

float ShadowCamera::GetNear() const {
  return 0.0f;
}

float ShadowCamera::GetFar() const {
  return 0.0f;
}

float ShadowCamera::GetFovY() const {
  return 0.0f;
}

Float2 ShadowCamera::GetAspect() const {
  return {1.0f, 1.0f};
}

bool ShadowCamera::TestFlag(uint32_t index) const {
  return flags_.test(index);
}

std::bitset<32> ShadowCamera::GetFlags() const {
  return flags_;
}

bool ShadowCamera::HasViews() const {
  return !views_.empty();
}

const std::vector<CameraView>& ShadowCamera::GetViews() const {
  return views_;
}

float ShadowCamera::GetFocalLength() const {
  return 0.0f;
}

}
