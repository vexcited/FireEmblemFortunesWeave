#pragma once

#include <cstdint>
#include <memory>
#include <optional>
#include <string_view>

#include "game/singleton.hpp"

namespace game::hub {

class Character;

#pragma GCC visibility push(hidden)

// A camera path played by an event, with its look target.
class CameraPathEvent {
public:
  struct Path {
    uint8_t unknown_00_[0x8];
    float length;
    bool loop;
  };

  struct Play {
    const Path* path;
    uint8_t unknown_08_[0xc];
    float speed;
    float target_speed;
    float speed_rate;
    float time;

    bool IsPlaying() const {
      return path->loop || time < path->length;
    }
  };

  void Start(std::string_view pathFileName);
  void End(float sec);

  void SetLookTarget(std::weak_ptr<Character> target) {
    look_target_ = target;
  }

  const std::weak_ptr<Play>& GetPlay() const {
    return play_;
  }

private:
  std::weak_ptr<Character> look_target_;
  std::weak_ptr<Play> play_;
};

class CameraManager : public Singleton<CameraManager> {
public:
  struct Transform {
    float px;
    float py;
    float pz;
    float rx;
    float ry;
    float rz;
    float distance;
    float fov;
  };

  struct EventEndParam {
    float sec;
    bool restore_position;
    bool restore_rotation;
    float rate = 1.0f;
  };

  struct ResetParam {
    float blend_sec;
    float blend_pow_rate;
  };

  class Transition;

  std::weak_ptr<Transition> SetTransform(const Transform& transform,
    bool immediate);
  std::weak_ptr<Transition> StartTransition(const Transform& transform,
    float sec, float easeInOutRate, float powRate);
  void EndEventCamera(const EventEndParam& param);

  CameraPathEvent* GetPathEvent() const {
    return path_event_;
  }

  bool IsActiveEventCamera() const {
    return event_camera_ != nullptr;
  }

  // The path is checked first, as it is locked.
  bool IsTransitioning() const {
    bool playing = false;
    if (std::shared_ptr<CameraPathEvent::Play> play =
      path_event_->GetPlay().lock()) {
      playing = play->IsPlaying();
    }
    return transition_left_ > 0.0f || playing;
  }

  void ReserveResetAtPlayable(float blendSec, float blendPowRate) {
    reset_ = ResetParam{blendSec, blendPowRate};
  }

private:
  float transition_left_;
  CameraPathEvent* path_event_;
  uint8_t unknown_18_[0x8];
  void* event_camera_;
  uint8_t unknown_28_[0x20];
  std::optional<ResetParam> reset_;
};

#pragma GCC visibility pop

}
