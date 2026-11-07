#pragma once

#include <cstdint>
#include <memory>
#include <optional>
#include <vector>

#include "game/singleton.hpp"
#include "gfx/render/camera.hpp"
#include "math/vec3.hpp"

namespace game::zview {

#pragma GCC visibility push(hidden)

class CameraQuake {
public:
  void Once(float power, float sec);
  void Fade(float sec, float power, float noiseSpeed);
  void LoopStart(float power, float noiseSpeed);

  void LoopEnd(float fadeSec) {
    fade_sec_ = fadeSec;
    fade_left_ = fadeSec;
  }

  void StopAll() {
    onces_.clear();
    loops_.clear();
    fade_sec_ = 0.0f;
    fade_left_ = 0.0f;
    power_ = 0.0f;
    noise_speed_ = 1.0f;
    offset_ = math::Vec3::Zero();
  }

private:
  struct OnceEntry;
  struct LoopEntry;

  uint8_t unknown_00_[0x8];
  std::vector<OnceEntry*> onces_;
  std::vector<LoopEntry*> loops_;
  uint8_t unknown_38_[0x8];
  float fade_sec_;
  float fade_left_;
  float power_;
  float noise_speed_;
  math::Vec3 offset_;
};

// The hub path camera states refreshing their angles.
class CameraStateCircleHub {
public:
  void Refresh(std::optional<float> yaw, std::optional<float> pitch,
    std::optional<float> distance, float sec);
};

class Camera : public Singleton<Camera> {
public:
  struct SpotParam {
    math::Vec3 position;
    float rotation[3];
    bool unknown_1c = false;
    bool unknown_1d = false;
    std::optional<float> unknown_20;
    float unknown_28 = 1.0f;
    float unknown_2c = 1.2f;
    float unknown_30;
    float unknown_34 = 0.0f;
    std::optional<float> unknown_38;
    bool unknown_40;
  };

  struct SpotEndParam {
    float sec;
    std::optional<float> unknown_04;
    std::optional<float> unknown_0c;
    std::optional<float> unknown_14;
    float rate = 1.0f;
  };

  struct LimitParam {
    float unknown_00;
    std::optional<float> unknown_04;
  };

  void StartSpot(std::shared_ptr<SpotParam> param, bool immediate);
  void EndSpot(const SpotEndParam& param);
  void ResetState(bool immediate);
  void BeginFirstPerson(const std::optional<float>& blendSec);
  void EndFirstPerson(const std::optional<float>& blendSec);

  const gfx::render::Camera& GetView() const {
    return view_;
  }

  float GetYawDeg() const {
    return view_.GetYawDeg();
  }

  float GetPitchDeg() const {
    return view_.GetPitchDeg();
  }

  bool IsSpotRunning() const {
    return spot_running_;
  }

  CameraQuake* GetQuake() const {
    return quake_;
  }

  const std::shared_ptr<SpotParam>& GetSpotParam() const {
    return spot_param_;
  }

  void ClearSpotParam() {
    spot_param_ = nullptr;
  }

  void SetLimitParam(std::shared_ptr<LimitParam> param) {
    limit_param_ = param;
  }

  void ClearLimitParam() {
    limit_param_ = nullptr;
  }

  void SetListenerCamera(bool isActive) {
    listener_camera_ = isActive;
  }

  void StartFirstPerson(float blendSec) {
    if (!first_person_) {
      first_person_blend_ = blendSec;
      first_person_ = true;
      BeginFirstPerson(blendSec);
    }
  }

  void StopFirstPerson(float blendSec) {
    if (first_person_) {
      first_person_ = false;
      first_person_blend_ = blendSec;
      EndFirstPerson(blendSec);
    }
  }

  CameraStateCircleHub* GetCircleHub() const {
    return circle_hub_;
  }

private:
  uint8_t unknown_08_[0x8];
  gfx::render::Camera view_;
  uint8_t unknown_1a0_[0x190];
  bool spot_running_;
  uint8_t unknown_331_[0x5f];
  CameraQuake* quake_;
  uint8_t unknown_398_[0x38];
  std::shared_ptr<SpotParam> spot_param_;
  std::shared_ptr<LimitParam> limit_param_;
  uint8_t unknown_3f0_[0x3c];
  bool listener_camera_;
  uint8_t unknown_42d_[0x43];
  bool first_person_;
  float first_person_blend_;
  uint8_t unknown_478_[0x10];
  CameraStateCircleHub* circle_hub_;
};

#pragma GCC visibility pop

}
