#pragma once

#include <bitset>
#include <cstdint>
#include <memory>
#include <vector>

#include "gfx/render/math.hpp"

namespace gfx::render {

class CameraAttachment {
public:
  virtual ~CameraAttachment();
};

struct CameraView {
  uint64_t key;
  uint64_t unknown08;
  std::unique_ptr<CameraAttachment> attachment;
};

class ICamera {
public:
  virtual ~ICamera() = default;

  virtual Matrix44 GetViewMatrix() const = 0;
  virtual Matrix44 GetProjectionMatrix() const = 0;
  virtual Float2 GetJitter() const = 0;
  virtual Vector4 GetPosition() const = 0;
  virtual bool IsUnknown06() const = 0;
  virtual float GetNear() const = 0;
  virtual float GetFar() const = 0;
  virtual float GetFovY() const = 0;
  virtual Float2 GetAspect() const = 0;
  virtual bool TestFlag(uint32_t index) const = 0;
  virtual std::bitset<32> GetFlags() const = 0;
  virtual bool HasViews() const = 0;
  virtual const std::vector<CameraView>& GetViews() const = 0;
  virtual float GetFocalLength() const = 0;
};

class Camera : public ICamera {
public:
  enum class Projection : int {
    kFovY,
    kPhysical,
  };

  ~Camera() override = default;

  Matrix44 GetViewMatrix() const override;
  Matrix44 GetProjectionMatrix() const override;
  Float2 GetJitter() const override;
  Vector4 GetPosition() const override;
  bool IsUnknown06() const override;
  float GetNear() const override;
  float GetFar() const override;
  float GetFovY() const override;
  Float2 GetAspect() const override;
  bool TestFlag(uint32_t index) const override;
  std::bitset<32> GetFlags() const override;
  bool HasViews() const override;
  const std::vector<CameraView>& GetViews() const override;
  float GetFocalLength() const override;

  Vector4 CalcPosition() const;

  float GetYawDeg() const {
    return yawDeg_;
  }

  float GetPitchDeg() const {
    return pitchDeg_;
  }

private:
  uint8_t unknown08_[0x4c];
  float yawDeg_;
  float pitchDeg_;
  Projection projection_;
  float fovY_;
  float focalLength_;
  float sensorWidth_;
  float sensorHeight_;
  Float2 aspect_;
  int sensorFit_;
  float near_;
  float far_;
  uint8_t unknown84_;
  bool unknown85_;
  uint8_t unknown86_[0x1a];
  Matrix44 viewMatrix_;
  Matrix44 projectionMatrix_;
  Matrix44 unknown120_;
  Float2 jitter_;
  std::bitset<32> flags_;
  std::vector<CameraView> views_;
};

static_assert(sizeof(Camera) == 0x190);

class ShadowCamera : public ICamera {
public:
  ~ShadowCamera() override;

  Matrix44 GetViewMatrix() const override;
  Matrix44 GetProjectionMatrix() const override;
  Float2 GetJitter() const override;
  Vector4 GetPosition() const override;
  bool IsUnknown06() const override;
  float GetNear() const override;
  float GetFar() const override;
  float GetFovY() const override;
  Float2 GetAspect() const override;
  bool TestFlag(uint32_t index) const override;
  std::bitset<32> GetFlags() const override;
  bool HasViews() const override;
  const std::vector<CameraView>& GetViews() const override;
  float GetFocalLength() const override;

private:
  Matrix44 viewMatrix_;
  Matrix44 projectionMatrix_;
  Float2 jitter_;
  uint8_t unknown98_[0x98];
  std::bitset<32> flags_;
  std::vector<CameraView> views_;
};

static_assert(sizeof(ShadowCamera) == 0x150);

}
